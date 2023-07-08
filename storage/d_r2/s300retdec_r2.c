
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Removing unreachable block (ram,0x000014a6)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_24h;
    uint var_1ch;
    int32_t var_18h;
    uint var_14h;
    uint32_t var_10h;
    uint var_ah;
    
    var_10h = 0x6d21cd43;
    var_18h = 0;
    var_1ch = 1;
    for (var_ah._0_2_ = 0; -3 < var_ah; var_ah._0_2_ = var_ah + -1) {
        var_10h = var_10h | 0xffffea96;
        var_1ch = 0;
        var_18h = (var_10h & 0xff) >> 6;
    }
    sym.set_var(var_ah, 1, var_10h, 0, var_18h);
    return var_1ch;
}
