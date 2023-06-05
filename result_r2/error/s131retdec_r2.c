
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x0804a6f7)
// WARNING: Removing unreachable block (ram,0x0804a524)
// WARNING: Removing unreachable block (ram,0x0804a71e)
// WARNING: Removing unreachable block (ram,0x0804a722)
// WARNING: Removing unreachable block (ram,0x0804a711)
// WARNING: Removing unreachable block (ram,0x0804a728)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_64h;
    uint var_60h;
    uint var_54h;
    uint var_4eh;
    uint var_44h;
    uint var_40h;
    int32_t var_3ah;
    int32_t var_34h;
    char var_2dh;
    uint var_2ch;
    uint8_t var_23h;
    uint8_t var_22h;
    char var_21h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint8_t var_eh;
    uint var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = 0x90;
    var_eh = 0x84;
    var_14h = 0x6c4779d4;
    var_18h = 0xaf953423;
    var_20h = 0xfffffffe;
    var_21h = 'Z';
    var_22h = 0xff;
    var_23h = 1;
    *NULL = 0;
    var_2dh = -0xf;
    while (var_2dh == '\r') {
        stack0xffffffc4 = 0;
        for (var_34h = 0; var_34h < -0xe; var_34h = var_34h + -9) {
            stack0xffffffc4 = 0x12;
            while (stack0xffffffc4 == -0x15) {
                for (var_dh._0_1_ = 9; var_dh < 10; var_dh._0_1_ = var_dh + 4) {
                    var_14h = var_14h + 1;
                    var_18h = var_18h - 1;
                }
                var_eh = var_18h & 0xe8;
                unique0x00007a80 = -0x16;
            }
        }
        var_2dh = '\x0e';
    }
    for (var_1ch = 0xd; 0x21 < var_1ch; var_1ch = var_1ch + 1) {
        var_20h = var_20h - 1;
        var_21h = '}';
        var_22h = var_22h + 1;
        var_23h = var_23h ^ var_2dh != '\0';
    }
    sym.set_var(var_dh, var_eh, var_14h, var_18h, 0x6ed7, var_1ch, var_20h, var_21h, var_22h, var_23h, 
                var_20h == ~(var_1ch == (((var_18h != 0 ^ 0x71) & var_18h) != 0)), 0, 0xe3c69bb0);
    return stack0xffffffc4;
}
