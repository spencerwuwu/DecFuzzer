
int32_t sym.func_1(void)

{
    int32_t arg_8h;
    uint var_30h;
    bool var_2bh;
    bool var_2ah;
    uint var_28h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint16_t var_12h;
    uint16_t var_eh;
    uint32_t var_ch;
    uint32_t var_8h;
    
    var_ch = 0xffffffff;
    var_eh = 0x31e1;
    var_12h = 0xd11d;
    var_8h = 0;
    while (var_8h == 0xffffffe2) {
        var_12h = var_12h & 0x49;
        var_ch = var_8h;
        var_eh = 0xbacd;
        var_8h = 0xffffffd9;
    }
    var_8h = var_ch & var_8h;
    var_2ah = var_8h != '\0' || var_8h != 0;
    var_2bh = var_ch != 0;
    arg_8h = (var_2ah - ((-1 << var_2bh & 0xb6f8U) == var_12h)) % -0x69;
    sym.set_var(arg_8h, var_ch, var_eh, var_8h & 0xff);
    return arg_8h;
}
