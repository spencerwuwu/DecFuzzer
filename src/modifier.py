from src.replacer import *


class SourceFileModifier:
    """modify C file generated by Csmith"""
    debug_mode = 0
    txt = ''

    global_vars = ''  # code snippet of global variables declaration
    global_var_name_list = []
    new_local_vars = ''  #

    func_1_body = ''
    new_func_1_body = ''

    modified_txt = ''

    def get_global_var_name_list(self):
        tmp = self.global_vars
        while tmp.find('static ') != -1:
            tmp = tmp.replace('static ', '')
        while tmp.find('volatile ') != -1:
            tmp = tmp.replace('volatile ', '')

        reg_exp = r"g_[0-9]+"  # match global var name
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(tmp)

        for m in matches:
            pos1 = m.start()
            pos2 = m.end()
            name = tmp[pos1:pos2]

            pos2 = pos1
            pos1 = tmp[:pos2].rfind('\n')
            var_type = tmp[pos1+1:pos2]
            var_type = var_type.strip(' ')

            if self.debug_mode != 0:
                print('global var name: ', m.group(), ' type: ', var_type)
            if var_type.find('const') == -1:  # some const var do not need to add into list
                self.global_var_name_list.append([var_type, name])

    def get_new_local_vars(self):
        tmp = self.global_vars
        while tmp.find('static ') != -1:
            tmp = tmp.replace('static ', '    ')
        while tmp.find('volatile ') != -1:
            tmp = tmp.replace('volatile ', '')
        # new variable name, e.g., g_2 => g_2_l
        reg_exp = r"g_[0-9]+"
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(tmp)
        pos1 = 0
        pos2 = 0
        for m in matches:
            if self.debug_mode != 0:
                print('modifying var: ', m.group())
            pos1 = pos2
            pos2 = m.end()
            self.new_local_vars += tmp[pos1:pos2] + '_l'
        self.new_local_vars += tmp[pos2:]

    def generate_SET_funcs(self):
        if len(self.global_var_name_list) == 0:
            return ''
        print_func = 'static void packed_printf(int d)\n'
        print_func+= '{\n'
        print_func+= '    printf("%d\\n", d);\n'
        print_func+= '}\n'
        # temporarily set all variables in one function
        func_dec = 'static int set_var('
        func_body = '{\n    '
        for var in self.global_var_name_list:
            var_type = var[0]
            var_name = var[1]
            func_dec += var_type + ' ' + var_name+'_l'
            func_body += var_name + ' = ' + var_name + '_l' + ';'
            # if we want more info
            # func_body += '    ' + var_name + ' = ' + var_name + '_l' + ';'  # g_13 = g_13_l;
            # func_body += 'printf("' + var_name + r' %d\n", ' + var_name + ');\n'
            if var != self.global_var_name_list[-1]:
                func_dec += ', '
            else:
                func_dec += ')'
                func_body += '\n    return 0;\n}'
        return print_func + func_dec + func_body

    def generate_SET_call(self):
        if len(self.global_var_name_list) == 0:
            return ''
        func_call = 'set_var('
        for var in self.global_var_name_list:
            var_type = var[0]
            var_name = var[1]
            func_call += var_name + '_l'
            if var != self.global_var_name_list[-1]:
                func_call += ', '
            else:
                func_call += ');'
        return func_call

    def modify_func_1_body(self):

        sta_pos = self.func_1_body.index('static ')
        tmp = self.func_1_body[sta_pos:]

        """First: modify all global variables reference to local variables ref"""
        reg_exp = r"g_[0-9]+"  # find global var reference
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(tmp)
        pos1 = 0
        pos2 = 0
        new_func = ''
        for m in matches:
            if self.debug_mode != 0:
                print('modifying var ref : ', m.group())
            pos1 = pos2
            pos2 = m.end()
            new_func += tmp[pos1:pos2] + '_l'
        new_func += tmp[pos2:]

        """Second: add new local variables declarations"""
        pos = new_func.find('{')
        new_func = (new_func[:pos + 1] +
                   '\n' + self.new_local_vars + '\n' +
                   new_func[pos + 1:])

        """Third: set global variables before every return stmt"""
        reg_exp = r"return"  # find return statement
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(new_func)
        tmp = ''
        pos1 = 0
        pos2 = 0
        for m in matches:
            pos1 = pos2
            pos2 = m.start()
            tmp += new_func[pos1:pos2] + self.generate_SET_call()
        tmp += new_func[pos2:]
        new_func = tmp

        """Finally: add set_var function declaration"""
        self.new_func_1_body = ('\n' + self.generate_SET_funcs() + '\n' +
                                self.func_1_body[:sta_pos] + new_func)

    def __init__(self, source_code='', debug_mode=0):
        self.global_var_name_list.clear()

        self.debug_mode = debug_mode
        # get source code
        self.txt = source_code

        # get global declarations
        pos1 = self.txt.index('/* --- GLOBAL VARIABLES --- */')
        if pos1 != -1:
            self.global_vars = self.txt[pos1:]
        pos2 = self.global_vars.index('\n\n')
        if pos2 != -1:
            self.global_vars = self.global_vars[:pos2+1]
        # remove comments
        reg_exp = r"/\*[^\n]*\*/"  # match global var name
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(self.global_vars)
        tmp = ''
        pos1 = 0
        pos2 = 0
        for m in matches:
            pos1 = pos2
            pos2 = m.start()
            tmp += self.global_vars[pos1:pos2]
            pos2 = m.end()
        tmp += self.global_vars[pos2:]
        self.global_vars = tmp

        # get func_1 definition # file should generated with csmith option --max-funcs 1
        pos1 = self.txt.index('/* --- FUNCTIONS --- */')
        if pos1 != -1:
            self.func_1_body = self.txt[pos1:]
        pos2 = self.func_1_body.index('\n\n')
        if pos2 != -1:
            self.func_1_body = self.func_1_body[:pos2 + 1]

    def get_modified_code(self):
        self.get_global_var_name_list()
        self.get_new_local_vars()
        self.modify_func_1_body()

        # set func_1 definition
        pos1 = self.txt.index('/* --- FUNCTIONS --- */')
        pos2 = self.txt.index('\n\n', pos1)
        if pos2 != -1 and pos1 != -1:
            self.modified_txt = (self.txt[:pos1] +
                                 self.new_func_1_body +
                                 self.txt[pos2:])


def line_begin(txt, pos):
    while txt[pos] != '\n' and pos > 0:
        pos -= 1
    return pos


def line_end(txt, pos):
    while txt[pos] != '\n':
        pos += 1
    return pos


class JEB3Modifier:
    @staticmethod
    def delete_tmp(txt=''):
        """delete lines with $tmp var (this variable seems useless, and is used incorrectly )"""
        pos = txt.find('$tmp')
        while pos != -1:
            beg_pos = line_begin(txt, pos)
            end_pos = line_end(txt, pos)
            txt = txt[0:beg_pos] + txt[end_pos:]
            pos = txt.find('$tmp')
        return txt

    @staticmethod
    def modify_reg_var_name(txt):
        """some variables stored in registers are named with '$' prefix
           this function modify $ to _
        """
        reg_exp = r"\$[a-z]+"
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        new_txt = txt
        for m in matches:
            print(m.group())
            pos = m.start()
            if txt[pos]=='$':
                new_txt = new_txt[:pos]+'_'+new_txt[pos+1:]
        return new_txt

    @staticmethod
    def delete_lines(txt='', mark=''):
        pos = txt.find(mark)
        while pos != -1:
            beg_pos = line_begin(txt, pos)
            end_pos = line_end(txt, pos)
            txt = txt[0:beg_pos] + txt[end_pos:]
            pos = txt.find(mark)
        return txt

    @staticmethod
    # this function maybe useless, JEB3 never recognizes function parameters correctly
    def modify_std_fun_call(txt):
        """ strip the '_ptr_' prefix from std function names
        """
        var_reg_exp = r"[*&]{0,1}([A-Za-z_]+[A-Za-z_0-9]*)"
        id_reg_exp = r"([A-Za-z_]+[A-Za-z_0-9]*)"
        reg_exp = (r"_ptr_"
                   +id_reg_exp+
                   r"\(.*\);"  # To Be Improved
                   )
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        new_txt = txt
        for m in matches:
            if __name__ == '__main__':
                print(m.group())
            pos = m.start()
            if txt[pos:pos+5]=='_ptr_':
                new_txt = new_txt[:pos]+new_txt[pos+5:]
        return new_txt

    @staticmethod
    def modify_loc_label(txt):
        """add a semicolon at the end of a local label
           e.g., loc_8048509:;
        """
        reg_exp = r"loc_[A-Fa-f0-9]{7,8}:"
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        new_txt = ''
        pos1 = 0
        pos2 = 0
        for m in matches:
            if __name__ == '__main__':
                print(m.group())
            pos1 = pos2
            pos2 = m.end()
            start_pos = m.start()

            new_txt += txt[pos1:start_pos]
            this_stmt = m.group()
            this_stmt = this_stmt+';'
            new_txt += this_stmt
        new_txt += txt[pos2:]
        return new_txt

    @staticmethod
    def modify_shift_symbol(txt=''):
        while txt.find('>>>>') != -1:
            txt = txt.replace('>>>>', ">>")
        while txt.find('>>>') != -1:
            txt = txt.replace('>>>', ">>")
        while txt.find('<<<<') != -1:
            txt = txt.replace('<<<<', "<<")
        while txt.find('<<<<') != -1:
            txt = txt.replace('<<<<', "<<")
        return txt

    @staticmethod
    def modify_lvalue_cast(txt=''):
        """ used to handle error like this:

        error: lvalue required as left operand of assignment
             (unsigned char)v45 = (unsigned char)result;

            just remove (unsigned char) at left
        """
        reg_exp = r"\(.*\)[a-z][_a-z0-9]+ = .*;"
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        new_txt = ''
        pos1 = 0
        pos2 = 0
        for m in matches:
            if __name__ == '__main__':
                print(m.group())
            pos1 = pos2
            pos2 = m.end()
            start_pos = m.start()

            new_txt += txt[pos1:start_pos]
            this_stmt = m.group()
            p1 = this_stmt.find('(')
            p2 = this_stmt.find(')')
            this_stmt = this_stmt[:p1] + this_stmt[p2+1:]
            new_txt += this_stmt
        new_txt += txt[pos2:]
        return new_txt

    @staticmethod
    def modify_unsigned_ijk(txt=''):
        reg_exp = r"unsigned .* [ijk][^a-z]*;"  # find unsigned i,j and k
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        new_txt = ''
        pos1 = 0
        pos2 = 0
        for m in matches:
            if __name__ == '__main__':
                print(m.group())
            pos1 = pos2
            pos2 = m.end()
            start_pos = m.start()

            new_txt += txt[pos1:start_pos]
            this_stmt = m.group()
            this_stmt = this_stmt.replace('unsigned ', '')
            new_txt += this_stmt
        new_txt += txt[pos2:]
        return new_txt


class RetDecModifier:

    @staticmethod
    def delete_lines(txt='', mark=''):
        pos = txt.find(mark)
        while pos != -1:
            beg_pos = line_begin(txt, pos)
            end_pos = line_end(txt, pos)
            txt = txt[0:beg_pos] + txt[end_pos:]
            pos = txt.find(mark)
        return txt

    @staticmethod
    def modify_true_value(txt=''):
        txt = txt.replace('true', '1')
        return txt

    @staticmethod
    def add_global_var_decl(txt=''):
        """ add global vars into main function
            these global vars(e.g., g1, g2, ...) may be useless
            they are kept just for compilability
        """
        # Step A: find global variables declarations
        pos = txt.find('// --------------------- Global Variables ---------------------')
        if pos == -1:
            return txt

        g_var_txt = txt[pos:]
        pos = g_var_txt.find('// ------------------------ Functions -------------------------')
        if pos == -1:
            return txt

        g_var_txt = g_var_txt[:pos]

        # Step B: find out function func_1
        func_1_pos = txt.find('func_1(void) {', pos)
        if func_1_pos == -1:
            return txt

        func_begin_pos = txt.find('\n', func_1_pos)
        if func_begin_pos == -1:
            return

        new_txt = txt[:func_begin_pos + 1] + g_var_txt + txt[func_begin_pos + 1:]

        return new_txt


class IDAModifier:
    @staticmethod
    def modify_type_macros(txt=''):
        txt = txt.replace('__int64', 'long long')
        txt = txt.replace('__int32', 'int')
        txt = txt.replace('__int16', 'short')
        txt = txt.replace('__int8', 'char')
        txt = txt.replace('_BYTE', 'unsigned char')
        txt = txt.replace('_WORD', 'unsigned short')
        txt = txt.replace('_DWORD', 'unsigned int')
        txt = txt.replace('_QWORD', 'unsigned long long')
        txt = txt.replace('BYTE', 'char')
        txt = txt.replace('WORD', 'short')
        txt = txt.replace('DWORD', 'int')
        txt = txt.replace('LONG', 'int')
        txt = txt.replace('QWORD', 'long long')
        txt = txt.replace('_BOOL1', 'char')
        txt = txt.replace('_BOOL2', 'short')
        txt = txt.replace('_BOOL4', 'int')
        txt = txt.replace('bool', 'int')
        txt = txt.replace('BOOL', 'int')
        return txt

    @staticmethod
    def modify_one_pa_macros(txt='', reg_exp='', replace_str=''):
        """used to modify some partial accesses macros"""
        reg_exp = reg_exp.replace('x', r'([a-zA-Z0-9_\[\]\*]*)')
        pattern = re.compile(reg_exp)
        matches = pattern.finditer(txt)
        pos1 = 0
        pos2 = 0
        new_txt = ''
        for m in matches:
            pos1 = pos2
            pos2 = m.end()
            tmp_replace_str = replace_str
            tmp_replace_str = tmp_replace_str.replace('x', m.group(1))
            new_txt += txt[pos1:m.start()] + tmp_replace_str
        new_txt += txt[pos2:]
        return new_txt

    @staticmethod
    def modify_all_pa_macros(txt=''):
        txt = IDAModifier.modify_one_pa_macros(txt, r'LOBYTE\(x\)',  '(*((_BYTE*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'LOWORD\(x\)',  '(*((_WORD*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'LODWORD\(x\)', '(*((_DWORD*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'HIBYTE\(x\)',  '(*((_BYTE*)&(x)+1))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'HIWORD\(x\)',  '(*((_WORD*)&(x)+1))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'HIDWORD\(x\)', '(*((_DWORD*)&(x)+1))')

        txt = IDAModifier.modify_one_pa_macros(txt, r'SLOBYTE\(x\)',  '(*((char*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'SLOWORD\(x\)',  '(*((short*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'SLODWORD\(x\)', '(*((int*)&(x)))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'SHIBYTE\(x\)',  '(*((char*)&(x)+1))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'SHIWORD\(x\)',  '(*((short*)&(x)+1))')
        txt = IDAModifier.modify_one_pa_macros(txt, r'SHIDWORD\(x\)', '(*((int*)&(x)+1))')

        return txt

class WasmDecompileModifier:
    @staticmethod
    def replace_func1(txt=''):
        new_lines = ""
        for line in txt.splitlines():
            if "function func_1" in line:
                new_line = "int32_t func_1() {\n"
            else:
                new_line = line + "\n"
            new_lines += new_line
        return new_lines



    @staticmethod
    def modify_variable_and_colons(txt=''):

        def _handle_statement(line, assign_pointer=False, is_lhs=False):
            tokens = line.split()
            new_tokens = []
            var_flag = False
            for token in tokens:
                if token == "var":
                    var_flag = True
                    continue
                if var_flag:
                    var_flag = False
                    if ":" in token:
                        name, ctype = token.split(":")
                        if ctype == "int":
                            ctype = "int64_t"
                        if assign_pointer:
                            ctype += "*"
                        new_tokens.append(f"{ctype} {name}")
                    else:
                        new_tokens.append(f"double {token}")
                else:
                    if ":" in token:
                        name, ctype = token.split(":")
                        if ctype == "int":
                            ctype = "int64_t"
                        if is_lhs:
                            new_tokens.append(f"{name}")
                        else:
                            new_tokens.append(f"({ctype}){name}")
                    else:
                        new_tokens.append(token)
            return " ".join(new_tokens)

        def _handle_declare(txt, pointer_names):
            def _is_pointer(pointer_names, rhs):
                for token in rhs.split():
                    if token in pointer_names:
                        return True
                return False
            if " = " in txt:
                lhs, rhs = txt.split(" = ")
                assign_pointer = _is_pointer(pointer_names, rhs)
                new_lhs = _handle_statement(lhs, assign_pointer=assign_pointer)
                if assign_pointer:
                    new_ptr = new_lhs.split()[-1].strip()
                    pointer_names.append(new_ptr)
                new_rhs = _handle_statement(rhs)
                return f"{new_lhs} = {new_rhs}"
            else:
                return _handle_statement(txt)

        new_lines = []
        pointers_names = ["stack_pointer"]
        for line in txt.splitlines():
            line = line.strip()
            if line.endswith(":"):
                new_lines.append(line)
            else:
                has_end = False
                if line.endswith(";"):
                    has_end = True
                    line = line[:-1]

                new_line = ""
                if "var " in line:
                    new_line = _handle_declare(line, pointers_names)
                else:
                    if " = " in line:
                        lhs, rhs = line.split(" = ")
                        new_lhs = _handle_statement(lhs, is_lhs=True)
                        new_rhs = _handle_statement(rhs)
                        new_line = f"{new_lhs} = {new_rhs}"
                    else:
                        new_line = _handle_statement(line)
                if has_end:
                    new_line += ";"
                new_lines.append(new_line)

        return "\n".join(new_lines)
            
    @staticmethod
    def setup_stack(txt=""):
        starting, content = txt.split("{", 1)
        declaration = """
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        """
        return starting + "{" + declaration + content




class R2Modifier:
    @staticmethod
    def modify_undefined(txt='', mark=''):
        txt = txt.replace(mark, 'int')  # undefined4 is the unrecognized type
        return txt

    @staticmethod
    def modify_sym(txt=''):
        txt = txt.replace('sym.', '')  # all functions start with sym. ?
        return txt

    @staticmethod
    def delete_lines(txt='', mark=''):
        pos = txt.find(mark)
        while pos != -1:
            beg_pos = line_begin(txt, pos)
            end_pos = line_end(txt, pos)
            txt = txt[0:beg_pos] + txt[end_pos:]
            pos = txt.find(mark)
        return txt


def JEB3_modifier_before(txt):
    txt = JEB3Modifier.delete_tmp(txt)
    txt = JEB3Modifier.modify_reg_var_name(txt)
    return txt


def JEB3_modifier_after(main_fun):
    main_fun = JEB3Modifier.modify_std_fun_call(main_fun)
    main_fun = JEB3Modifier.modify_loc_label(main_fun)
    main_fun = JEB3Modifier.delete_lines(main_fun, '__x86.get_pc_thunk')
    main_fun = JEB3Modifier.delete_lines(main_fun, 'jump')
    main_fun = JEB3Modifier.delete_lines(main_fun, 'param')  # func_1 has no parameter
    main_fun = JEB3Modifier.modify_shift_symbol(main_fun)
    main_fun = JEB3Modifier.modify_lvalue_cast(main_fun)
    return main_fun


def RetDec_modifier_before(txt):
    new_txt = RetDecModifier.add_global_var_decl(txt)
    return new_txt


def RetDec_modifier_after(main_func):
    main_func = RetDecModifier.delete_lines(main_func, '__x86_get_pc_thunk')
    main_func = RetDecModifier.modify_true_value(main_func)
    return main_func


def IDA_modifier_before(txt):
    txt = IDAModifier.modify_all_pa_macros(txt)
    txt = IDAModifier.modify_type_macros(txt)
    txt = txt.replace('__stdcall', '')
    return txt


def IDA_modifier_after(main_func):
    return main_func


def R2_modifier_before(txt):
    txt = txt.replace('unkint3', 'int')
    txt = R2Modifier.delete_lines(txt, '__x86.')
    txt = txt.replace('CONCAT31', '')
    txt = R2Modifier.delete_lines(txt, 'CONCAT')
    txt = txt.replace('ZEXT14', '')
    txt = txt.replace('SEXT14', '')
    txt = txt.replace('SEXT24', '')
    txt = txt.replace('SUB41', '')
    txt = txt.replace('SBORROW4', '')
    txt = txt.replace('__regparm3', '')
    txt = R2Modifier.delete_lines(txt, 'ZEXT')
    txt = R2Modifier.delete_lines(txt, 'SEXT')
    txt = R2Modifier.delete_lines(txt, 'SUB')
    txt = R2Modifier.delete_lines(txt, 'SBORROW')
    txt = R2Modifier.delete_lines(txt, '// WARNING')
    txt = R2Modifier.delete_lines(txt, '// signed')

    txt = R2Modifier.modify_sym(txt)
    txt = R2Modifier.modify_undefined(txt, 'undefined4')
    txt = R2Modifier.modify_undefined(txt, 'undefined2')
    txt = R2Modifier.modify_undefined(txt, 'undefined')

    txt = txt.replace('bool', 'int')
    txt = txt.replace('true', '1')
    txt = txt.replace('false', '0')
    txt = re.sub(r"\.\s*_[0-9]_[0-9]_", '', txt)
    return txt


def WasmDecompile_modifier_before(txt):
    txt = WasmDecompileModifier.replace_func1(txt)
    return txt


def WasmDecompile_modifier_after(main_fun):
    # temporarily nothing
    main_fun = WasmDecompileModifier.modify_variable_and_colons(main_fun)

    new_file_name = 'mid.c'
    f = open(new_file_name, 'w')
    f.write(main_fun)
    f.close()
    main_fun = WasmDecompileModifier.setup_stack(main_fun)
    main_fun = re.sub(r"loop\s\w+\s\{$", "while (1) {", main_fun, flags=re.MULTILINE)
    main_fun = main_fun.replace("continue ", "//continue ");
    return main_fun


def R2_modifier_after(main_fun):
    # temporarily nothing
    return main_fun

# used in EMI_generator: gen_a_new_variant
def check_for_printf(txt):
    """ My mistake
        after implementing Live Code Mutation, new generated CSmith files will be modified to add a packed_printf() func
        but old csmith files do not have such a function
        This function are used to add packed_printf() function in old csmith files.
    """
    if txt.find('static void packed_printf(int d)') != -1:
        return txt

    print_func = 'static void packed_printf(int d)\n'
    print_func += '{\n'
    print_func += '    printf("%d\\n", d);\n'
    print_func += '}\n'

    pos = txt.find('static int set_var(')
    new_txt = txt[:pos] + print_func + txt[pos:]
    return new_txt


if __name__ == '__main__':
    '''
    source_code = read_file('./tmp/test.mut24.source.c')
    decompiled_code = read_file('./tmp/test.mut24.JEB3.c')
    decompiled_code = JEB3_modifier(decompiled_code)

    m1 = find_fun_with_name(source_code, 'main')
    print(source_code[m1.end()-1])
    if source_code[m1.end()-1]=='{':
        end_pos1 = find_function_body(source_code, m1.end())
    m2 = find_fun_with_name(decompiled_code, 'main')
    if decompiled_code[m2.end()-1] == '{':
        end_pos2 = find_function_body(decompiled_code, m2.end())

    main_fun = decompiled_code[m2.start():end_pos2]
    # main_fun = JEB3_modifier(main_fun)
    main_fun = modify_std_fun_call(main_fun)

    new_file = source_code[0:m1.start()] + main_fun + source_code[end_pos1:]
    f = open('./tmp/new.c', 'w')
    f.write(new_file)
    f.close()
    '''

    '''
    test_str = 'testloc_loc_80484C1loc_80484C1:'
    test_str = modify_loc_label(test_str)
    print(test_str)
    '''

    '''
    f = open('./tmp/src_code/result/csmith_test_1058.c')
    if f:
        txt = f.read()
    f.close()
    src_modifier = SourceFileModifier(txt, debug_mode=1)
    src_modifier.get_modified_code()
    print(src_modifier.modified_txt)
    # f = open('./tmp/src_code/csmith_test_m.c', 'w')
    # if f:
    #     f.write(src_modifier.modified_txt)
    # f.close()
    '''

    '''
    f = open('./tmp/src_code/csmith_test_5_m_new.c')
    txt = f.read()
    f.close()
    txt = modify_unsigned_ijk(txt)
    print(txt)
    '''
    test_str = open('/home/fuzz/Documents/Fuzzer_3_17/tmp_ida_test/csmith_files_for_ida/238_ida.c').read()
    test_str = IDA_modifier_before(test_str)
    m1 = find_fun_with_name(test_str, 'func_1')
    print(m1.group())
