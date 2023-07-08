
ushort sym.func_1(void)

{
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_24h;
    uint8_t var_1dh;
    uint var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    
    var_18h = 1;
    var_1ch = 1;
    var_1dh = 0x73;
    var_24h = 0x24891023;
    for (var_10h = 0x10; var_10h < 0x19; var_10h = var_10h + 3) {
        var_18h = var_18h + -1;
        if (var_18h == 0) {
            var_1ch = 0xfffffff7;
        }
        var_1dh = var_1dh + 1;
        var_24h = 0;
    }
    sym.set_var(var_10h, 0x58, var_18h, var_1ch, var_1dh, var_24h);
    return 0x58;
}
