
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x000015b9)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_53h;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_20h;
    uint var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    int16_t var_10h;
    uint var_dh;
    
    var_10h = -9;
    var_14h = 0x2ef703c5;
    var_16h = 0x3b0a;
    var_1ch = 0x5db5a26c;
    for (var_dh._0_1_ = '\n'; -6 < var_dh; var_dh._0_1_ = var_dh + -3) {
        var_10h = ((var_dh ^ 0x59e5U) == 0xdfba || (var_dh ^ 0x59e5U) == 0xdfb9) + -1;
        var_14h = 0xf922e000;
        var_16h = var_16h + 1;
        var_1ch = 0;
    }
    sym.set_var(var_dh, var_10h, var_14h, var_16h, var_1ch, var_14h & 0xbab1f356, var_14h & 0x56, 0x8ad385e2);
    return 0xfffffff7;
}
