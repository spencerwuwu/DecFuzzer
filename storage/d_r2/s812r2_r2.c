
uchar sym.func_1(void)

{
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint var_18h;
    uint8_t var_11h;
    uint var_10h;
    int32_t var_ch;
    
    var_11h = 0xfe;
    var_ch = 0x17;
    while (var_ch == 10) {
        var_11h = var_11h & 8;
        var_ch = 9;
    }
    sym.set_var(var_ch, 1, var_11h, 0xb752bf39, 0xffff9139);
    return 8;
}
