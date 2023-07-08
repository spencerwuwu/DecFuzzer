
// WARNING: Removing unreachable block (ram,0x0000144a)
// WARNING: Removing unreachable block (ram,0x0000147a)
// WARNING: Removing unreachable block (ram,0x000014a6)

uint32_t sym.func_1(void)

{
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint32_t var_18h;
    int16_t var_12h;
    int32_t var_10h;
    uint var_ch;
    
    var_ch = 0x4e064826;
    var_12h = 0x2524;
    var_18h = 0x5eafb5d1;
    for (var_10h = 0; var_10h < -0xb; var_10h = var_10h + -1) {
        var_12h = 1;
        var_18h = var_18h ^ 0x623b4709;
        var_ch = 0xfffffffa;
    }
    sym.set_var(var_ch, var_10h, var_12h, var_18h);
    return var_18h;
}
