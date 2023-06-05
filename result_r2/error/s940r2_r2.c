
// WARNING: Removing unreachable block (ram,0x0804a4a0)

uint sym.func_1(void)

{
    ushort extraout_var;
    uint var_15h;
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint8_t var_dh;
    uint var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 1;
    var_ch = 1;
    var_dh = 0x73;
    stack0xffffffe8 = 0x24891023;
    for (var_4h = 0x10; var_4h < 0x19; var_4h = var_4h + 3) {
        var_8h = var_8h + -1;
        if (var_8h == 0) {
            var_ch = 0xfffffff7;
        }
        var_dh = var_dh + 1;
        *NULL = 0;
    }
    sym.set_var(var_4h, 0x58, var_8h, var_ch, var_dh, stack0xffffffe8);
    return CONCAT22(extraout_var, 0x58);
}
