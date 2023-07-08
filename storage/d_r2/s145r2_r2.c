
// WARNING: Variable defined which should be unmapped: var_5h

uint sym.func_1(void)

{
    uint var_20h;
    uint var_1ch;
    uint32_t var_14h;
    uint8_t var_dh;
    uint var_ch;
    uint var_5h;
    
    var_dh = 1;
    var_ch = 0xff;
    for (var_14h = 8; var_14h < 0x32; var_14h = var_14h + 6) {
        var_dh = var_dh - 1;
        var_ch = 2000;
    }
    sym.set_var(0, 0xff, var_ch, var_dh);
    return 0xfffffff6;
}
