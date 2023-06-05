
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_15h;
    uint32_t var_10h;
    uint var_ch;
    uint32_t var_8h;
    uint var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x6d21cd43;
    var_10h = 0;
    *NULL = 1;
    for (var_2h._0_2_ = 0; -3 < var_2h; var_2h._0_2_ = var_2h + -1) {
        var_8h = var_8h | 0xffffea96;
        stack0xffffffe8 = 0;
        var_10h = var_8h >> 6 & 3;
    }
    sym.set_var(var_2h, 1, var_8h, 0, var_10h);
    return stack0xffffffe8;
}
