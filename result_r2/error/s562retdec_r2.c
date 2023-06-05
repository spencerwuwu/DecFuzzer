
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a728)
// WARNING: Removing unreachable block (ram,0x0804a5a6)
// WARNING: Removing unreachable block (ram,0x0804a60c)
// WARNING: Removing unreachable block (ram,0x0804a5d7)
// WARNING: Removing unreachable block (ram,0x0804a60a)
// WARNING: Removing unreachable block (ram,0x0804a667)
// WARNING: Removing unreachable block (ram,0x0804a66e)
// WARNING: Removing unreachable block (ram,0x0804a673)
// WARNING: Removing unreachable block (ram,0x0804a67a)
// WARNING: Removing unreachable block (ram,0x0804a680)
// WARNING: Removing unreachable block (ram,0x0804a687)
// WARNING: Removing unreachable block (ram,0x0804a68c)
// WARNING: Removing unreachable block (ram,0x0804a6f7)
// WARNING: Removing unreachable block (ram,0x0804a72f)
// WARNING: Removing unreachable block (ram,0x0804a734)
// WARNING: Removing unreachable block (ram,0x0804a740)
// WARNING: Removing unreachable block (ram,0x0804a739)
// WARNING: Removing unreachable block (ram,0x0804a745)
// WARNING: Removing unreachable block (ram,0x0804a6ac)
// WARNING: Removing unreachable block (ram,0x0804a4be)
// WARNING: Removing unreachable block (ram,0x0804a4dd)
// WARNING: Removing unreachable block (ram,0x0804a4f7)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint32_t var_30h;
    uint var_2ch;
    uint var_28h;
    uint32_t var_20h;
    uint8_t var_17h;
    uint var_11h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_17h = 0xa7;
    var_20h = 0x2945289e;
    var_2ch = 0x47eb93d7;
    var_30h = 9;
    stack0xffffffec = 0xeb00d6;
    for (var_11h._0_1_ = '\x16'; -0x1c < var_11h; var_11h._0_1_ = var_11h + -1) {
        var_17h = var_11h != '\t';
        for (var_20h = 0; var_20h < 6; var_20h = var_20h + 1) {
            var_2ch = 1;
            *NULL = 0x960;
            var_30h = var_20h != 0;
        }
    }
    sym.set_var(0xea75c96, var_11h, 1, 0xffffc7d2, 0x374f, var_17h, 0xa247, var_20h, 0, 0x32c37782, var_2ch, var_30h, 
                stack0xffffffec);
    return var_20h;
}
