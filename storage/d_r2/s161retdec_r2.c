
// WARNING: Removing unreachable block (ram,0x00001464)
// WARNING: Removing unreachable block (ram,0x000014c0)

uint sym.func_1(void)

{
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint8_t var_15h;
    uint var_14h;
    int32_t var_10h;
    uint var_ch;
    
    var_14h = 0x3af7806a;
    var_15h = 0xd9;
    for (var_10h = -0x15; -0x1e < var_10h; var_10h = var_10h + -1) {
        var_15h = var_15h & (var_10h ^ 0xff) & 7 < var_10h;
        var_14h = 0;
    }
    sym.set_var(0xa0734f09, 0xfffffff9, var_14h, var_15h, 0xfff9);
    return 0xa0734f09;
}
