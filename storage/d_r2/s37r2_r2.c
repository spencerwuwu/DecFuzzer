
// WARNING: Variable defined which should be unmapped: var_dh

uint sym.func_1(void)

{
    uint var_73h;
    uint var_6ch;
    uint var_65h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    int32_t var_18h;
    uint32_t var_14h;
    uint8_t var_fh;
    uint var_dh;
    
    var_14h = 0x319b885b;
    var_18h = 0x6158f876;
    var_fh = 0;
    while (var_fh < 0x39) {
        var_14h = var_14h ^ 1;
        var_18h = var_18h + 1;
        if (var_fh != 0) break;
        var_14h = 1;
        var_fh = 1;
    }
    sym.set_var(0xaa, 1, var_fh, var_14h, var_18h, 5, 0x632cac24, 3, 0xa84d2377);
    return 0xac24;
}
