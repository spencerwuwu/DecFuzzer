
uint sym.func_1(void)

{
    ushort extraout_var;
    uint32_t var_dh;
    uint var_14h;
    uint8_t var_5h;
    uint var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h = 1;
    var_4h = 0xff;
    for (stack0xfffffff0 = 8; stack0xfffffff0 < 0x32; unique0x00007a80 = stack0xfffffff0 + 6) {
        var_5h = var_5h - 1;
        var_4h = 2000;
    }
    sym.set_var(0, 0xff, var_4h, var_5h);
    return CONCAT22(extraout_var, 0xfff6);
}
