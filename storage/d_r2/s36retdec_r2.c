
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_48h;
    uint var_44h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    int32_t var_24h;
    uint var_20h;
    uint32_t var_18h;
    uint var_14h;
    uint var_10h;
    uint var_ah;
    
    var_ah._0_2_ = 1;
    var_18h = 0xffffffff;
    for (var_24h = 0; -8 < var_24h; var_24h = var_24h + -1) {
        var_ah._0_2_ = var_ah | 0xb9da;
        var_18h = var_ah ^ 0xffffffffU ^ var_18h;
    }
    sym.set_var(var_ah, 1, 9, var_18h, 0x5d);
    return 0xfffffffc;
}
