
// WARNING: Removing unreachable block (ram,0x0000157d)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint16_t var_26h;
    int32_t var_24h;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint var_14h;
    uint32_t var_10h;
    
    var_14h = 0;
    var_16h = 0x100;
    var_1ch = 0x77e815f8;
    var_24h = -0x420874eb;
    var_26h = 0xc167;
    for (var_10h = 0; -0x13 < var_10h; var_10h = var_10h - 9) {
        var_14h = 0xffffffff;
        var_16h = CONCAT11(0xff, var_16h ^ 0xff);
        var_1ch = 9 - (var_10h & 0xff) | var_1ch;
        var_24h = var_24h + -1;
        var_26h = var_26h - 1;
    }
    sym.set_var(1, var_14h, var_16h >> 8, var_16h, var_1ch, 1, var_24h, var_26h);
    return var_1ch;
}
