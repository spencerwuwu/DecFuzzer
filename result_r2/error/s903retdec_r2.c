
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804ab0d)
// WARNING: Removing unreachable block (ram,0x0804a865)
// WARNING: Removing unreachable block (ram,0x0804a951)
// WARNING: Removing unreachable block (ram,0x0804aa63)
// WARNING: Removing unreachable block (ram,0x0804ad52)
// WARNING: Removing unreachable block (ram,0x0804a89b)
// WARNING: Removing unreachable block (ram,0x0804ab20)
// WARNING: Removing unreachable block (ram,0x0804a8cb)
// WARNING: Removing unreachable block (ram,0x0804a98c)
// WARNING: Removing unreachable block (ram,0x0804a9b0)
// WARNING: Removing unreachable block (ram,0x0804a9a9)
// WARNING: Removing unreachable block (ram,0x0804a9b5)
// WARNING: Removing unreachable block (ram,0x0804a96e)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_140h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_114h;
    uint var_10ch;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f4h;
    uint var_f0h;
    uint var_e9h;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_d4h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    uint var_ach;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    uint var_4eh;
    uint var_48h;
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_3bh;
    uint16_t var_34h;
    uint32_t var_32h;
    uint var_2ch;
    uint32_t var_28h;
    char var_21h;
    uint32_t var_20h;
    uint16_t var_1ah;
    uint var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    stack0xffffffcc = 0x2dd2e1bd;
    var_21h = '\t';
    var_1ah = 0xde24;
    var_10h = 0x7de7e859;
    var_20h = 0;
    var_28h = 0x94eee57;
    var_2ch._3_1_ = -0x1f;
    var_2ch._0_2_ = 8;
    var_32h._1_1_ = 0xff;
    var_32h._0_1_ = 0xfe;
    var_34h = 0xfff8;
    stack0xffffffc4 = 1;
    var_3bh._1_2_ = 0xfffc;
    var_44h = -0x3c713cda;
    for (var_3bh._0_1_ = 0xfc; var_3bh < 0x27; var_3bh._0_1_ = var_3bh + 8) {
    }
    for (var_3bh._0_1_ = 0xe3; var_3bh < 0xe; var_3bh._0_1_ = var_3bh + 1) {
        uVar1 = 0x3c;
        for (var_14h = 0; 0 < var_14h; var_14h = var_14h + 1) {
            var_40h = 0;
            while (var_40h == 0x1d) {
                var_44h = var_44h;
                if (var_3bh == 6) {
                    if (var_44h == 0) {
                        var_3bh._1_2_ = 0xffff;
                        var_32h._0_1_ = 0xff;
                    }
                    var_34h = var_34h | 1;
                    uVar1 = 0x55;
                    var_10h = var_10h ^ 0xfffffffd;
                    var_32h._1_1_ = var_32h._1_1_ | 0xc9;
                }
                else {
                    stack0xffffffc4 = 0;
                }
                var_2ch._0_2_ = 0;
                var_20h = var_20h - 1;
                var_40h = 0x1e;
            }
        }
        var_2ch._3_1_ = -1;
        var_32h._0_1_ = var_32h | uVar1 ^ 1;
        var_28h = var_14h != (var_32h - uVar1 & 0xffff);
    }
    if (var_10h == 0) {
        sym.set_var(0xfffffff7, var_3bh, stack0xffffffc4, var_3bh._1_2_, var_32h, var_34h, var_32h._1_1_, var_2ch, 
                    (var_32h._1_1_ < (var_20h | 0xfffffff7) != 0xffffffba) % 0xfffa, 0x2dd2e1bd, 0x355b561d, 
                    var_2ch._3_1_, 0xfffffffa, var_28h, var_20h, 0x4a, 7, 9, 0xfffffff9, 0xbfb42292, 0xfffffff6, 0xde24
                    , 0xfffffff6, 1, 1, 0xffffffd5, 0xff);
    }
    else {
        if ((var_3bh | 4) < 4) {
            for (var_34h = 0x1c; 0x28 < var_34h; var_34h = var_34h + 6) {
                for (var_3bh._0_1_ = 0; var_3bh < 0x3c; var_3bh._0_1_ = var_3bh + 1) {
                    var_21h = -1;
                    var_3bh._1_2_ = var_3bh._1_2_ & stack0xffffffc4 - 0x8d2U;
                    if ((0xffffff81 < var_20h) && (var_3bh != 0)) break;
                    *NULL = var_3bh._1_2_;
                    var_1ah = var_1ah + 1;
                }
            }
        }
        else if (var_2ch._3_1_ == '\0') {
            var_2ch._0_2_ = 0;
        }
        sym.set_var(0xfffffff7, var_3bh, stack0xffffffc4, var_3bh._1_2_, var_32h, stack0xffffffcc & 0xffff, 
                    var_32h._1_1_, var_2ch, var_10h, stack0xffffffcc, 0x355b561d, var_2ch._3_1_, var_32h._1_1_ | 0xfffa
                    , 1, var_20h, 0x4a, 4, var_21h, 0xfffffff9, 0xbfb42292, 0xfffffff7, var_1ah, 0x2b244983, 1, 1, 
                    0xffffffd5, 0xfe);
        *NULL = var_3bh;
    }
    return *NULL;
}
