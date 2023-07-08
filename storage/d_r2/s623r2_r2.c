
// WARNING: Removing unreachable block (ram,0x0000144d)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 0x9864ba8b;
    var_18h = 0xfffffff8;
    var_1ch = 0xfffffff7;
    for (var_eh._0_2_ = 0xfff1; var_eh != 0x15; var_eh._0_2_ = var_eh + 9) {
        var_18h = var_18h - 1;
        var_1ch = (var_18h & 0xff) + 0xff & var_1ch;
        var_14h = var_eh;
    }
    sym.set_var(0x15, var_14h, var_18h, var_1ch, 0x3988f15d);
    return 0xffffffff;
}
