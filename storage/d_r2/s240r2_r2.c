
uint sym.func_1(void)

{
    uint var_18h;
    uint8_t var_11h;
    uint var_10h;
    int32_t var_ch;
    uint var_8h;
    
    var_11h = 0x1d;
    for (var_ch = 0x1d; 0x10 < var_ch; var_ch = var_ch + -1) {
        var_11h = var_11h - 1;
    }
    sym.set_var(1, var_ch, 0xfffffff6, var_11h);
    return 0xffffb5a5;
}
