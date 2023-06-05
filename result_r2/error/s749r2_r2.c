
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804a4b1)
// WARNING: Removing unreachable block (ram,0x0804a4e3)
// WARNING: Removing unreachable block (ram,0x0804a4ea)
// WARNING: Removing unreachable block (ram,0x0804a4f1)
// WARNING: Removing unreachable block (ram,0x0804a4f6)
// WARNING: Removing unreachable block (ram,0x0804a545)
// WARNING: Could not reconcile some variable overlaps

uint8_t sym.func_1(void)

{
    uint var_50h;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_2dh;
    uint var_28h;
    uint var_21h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_2dh._0_1_ = 0xbe;
    stack0xffffffdc = 0;
    for (var_21h._0_1_ = 0; var_21h < 0x23; var_21h._0_1_ = var_21h + 1) {
        if (var_21h == 0) {
            var_2dh._0_1_ = var_2dh + 1;
        }
        *NULL = 1;
    }
    sym.set_var(0x83c8fc55, var_21h, stack0xffffffdc, var_2dh, 0x275d, 0xffffffa8, 0xfffffffa, 0xab, 0x1940);
    return var_21h;
}
