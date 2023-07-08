
// WARNING: Removing unreachable block (ram,0x000014bb)

uint sym.func_1(void)

{
    uint var_48h;
    uint var_44h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    char var_28h;
    uint8_t var_27h;
    uint16_t var_26h;
    int32_t var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_10h;
    
    var_26h = 0xe022;
    var_27h = 0xfa;
    var_28h = '\a';
    for (var_24h = 0; 7 < var_24h; var_24h = var_24h + 1) {
        var_26h = var_24h != 0;
        var_27h = var_27h & (var_26h == 0x143e ^ 0x12U);
        var_28h = (var_27h + 1 + var_24h & 0x3e) / -6;
    }
    sym.set_var(0xfffffffa, 6, 1, 0xffffffff, 0xfffffffc, var_24h, var_26h, var_27h, var_28h);
    return 0x143e;
}
