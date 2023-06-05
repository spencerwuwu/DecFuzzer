
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804ac97)
// WARNING: Removing unreachable block (ram,0x0804ab20)
// WARNING: Removing unreachable block (ram,0x0804ab3b)
// WARNING: Removing unreachable block (ram,0x0804ab44)
// WARNING: Removing unreachable block (ram,0x0804ab4b)
// WARNING: Removing unreachable block (ram,0x0804ab50)
// WARNING: Removing unreachable block (ram,0x0804a94a)
// WARNING: Removing unreachable block (ram,0x0804a96b)
// WARNING: Removing unreachable block (ram,0x0804abe7)
// WARNING: Removing unreachable block (ram,0x0804ab12)
// WARNING: Removing unreachable block (ram,0x0804aa46)
// WARNING: Removing unreachable block (ram,0x0804ad41)
// WARNING: Removing unreachable block (ram,0x0804add0)
// WARNING: Removing unreachable block (ram,0x0804ad4c)
// WARNING: Removing unreachable block (ram,0x0804ada4)
// WARNING: Removing unreachable block (ram,0x0804ada9)
// WARNING: Removing unreachable block (ram,0x0804addb)
// WARNING: Removing unreachable block (ram,0x0804aad7)
// WARNING: Removing unreachable block (ram,0x0804af02)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    char cVar1;
    uint var_10ch;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_ddh;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_bch;
    uint var_b4h;
    uint var_ach;
    uint var_a8h;
    uint var_9fh;
    uint var_98h;
    uint var_94h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint32_t var_50h;
    uint16_t var_4ah;
    uint var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint16_t var_3ch;
    uint16_t var_3ah;
    uint32_t var_38h;
    uint32_t var_32h;
    uint var_2ch;
    int32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_12h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_48h = 1;
    var_4ah = 0x58e9;
    var_50h = 0xfffffff6;
    var_32h._0_1_ = 0;
    var_38h = 1;
    var_3ah = 8;
    var_3ch = 1;
    var_40h = 0x363f8159;
    var_32h._1_1_ = 0x80;
    var_2ch._0_1_ = false;
    stack0xffffffcc = 1;
    var_2ch._1_1_ = 0xf1;
    var_12h._0_2_ = 0xa244;
    var_18h = 1;
    var_1ch = 0xe226996d;
    var_20h = 0xfffffffd;
    for (var_44h = 0; 0x13 < var_44h; var_44h = var_44h + 8) {
        stack0xffffffec = 0;
        if (((var_44h != 0) % var_44h < 0x33) || (var_44h == 0)) {
            var_48h = 0;
        }
        else {
            var_48h = 1;
        }
        if (var_44h == 0) {
            stack0xffffffcc = 0;
        }
        else {
            var_4ah = var_4ah & var_44h * 3 != 0xf7;
            var_50h = var_50h - 1;
            for (var_28h = 0; var_28h != -0x12; var_28h = var_28h + -6) {
                var_38h = var_38h ^ var_4ah ^ var_50h & 0xff;
                var_32h._0_1_ = 0xff;
                var_3ch = -1 < var_1ch;
                var_40h = var_3ch;
                var_32h._1_1_ = var_32h._1_1_ ^ (((-1 < var_1ch) / -8 & 0xffU) - 0xa4) + stack0xffffffec == -4 ^ var_50h
                ;
                var_2ch._0_1_ = true;
                if (1U % 0 == 0) {
                    var_2ch._1_1_ = var_2ch._1_1_ - 1;
                    var_1ch = var_1ch ^ stack0xffffffec;
                    if (var_1ch + 0x35e4b527 < (var_44h < 0)) {
                        cVar1 = '\x04';
                    }
                    else {
                        cVar1 = '\0';
                    }
                    var_2ch._0_1_ = 0 < (cVar1 + '|') - var_4ah;
                    *NULL = 1;
                    *NULL = var_20h == 1;
                }
            }
            for (var_3ah = 0xfff9; var_3ah != 0x25; var_3ah = var_3ah + 4) {
                for (var_32h._1_1_ = 0; var_32h._1_1_ != 0x3a; var_32h._1_1_ = var_32h._1_1_ + 2) {
                    var_12h._0_2_ = 0xd2 < 1 >> var_2ch._0_1_;
                    *NULL = (var_38h == 0) != var_32h;
                }
                var_18h = var_18h + 1;
            }
            var_20h = var_20h == 3;
        }
    }
    sym.set_var(0xfffffffd, var_48h, var_4ah, 0xf9, var_50h, 0xca8a51d4, 0xfffffffc, var_32h, var_38h, var_3ah, var_3ch
                , var_40h, var_32h._1_1_, var_2ch._0_1_, stack0xffffffcc, 0x6f56a42c, 0x7162, var_2ch._1_1_, var_12h, 4
                , 0xffffcff2, var_18h, 0xfffffffb, var_1ch, 0x29, 1);
    return var_20h;
}
