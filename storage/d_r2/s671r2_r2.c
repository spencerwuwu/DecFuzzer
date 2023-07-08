
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001eaa)
// WARNING: Removing unreachable block (ram,0x00001745)
// WARNING: Removing unreachable block (ram,0x00001f5d)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    char cVar1;
    uint32_t uVar2;
    uint var_16ch;
    uint var_168h;
    uint var_164h;
    uint var_160h;
    uint var_15ch;
    uint var_154h;
    uint var_14ch;
    uint var_148h;
    uint var_142h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_124h;
    uint var_11ch;
    uint var_118h;
    uint var_112h;
    uint var_10ch;
    uint var_108h;
    uint var_104h;
    uint var_fch;
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_e8h;
    uint var_e0h;
    uint var_dch;
    uint var_d6h;
    uint var_cdh;
    uint var_c8h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    uint var_aah;
    uint var_9eh;
    uint var_98h;
    uint var_90h;
    uint var_89h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    int32_t var_74h;
    uint var_70h;
    uint var_68h;
    uint32_t var_60h;
    uint8_t var_59h;
    uint32_t var_58h;
    uint var_54h;
    uint32_t var_50h;
    uint8_t var_4ah;
    uint8_t var_49h;
    uint var_48h;
    uint var_44h;
    uint32_t var_40h;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int16_t var_2ch;
    uint16_t var_2ah;
    uint32_t var_28h;
    uint8_t var_23h;
    uint16_t var_22h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint var_14h;
    uint var_eh;
    
    var_18h = 0x1e559696;
    var_20h = 0xffffffff;
    var_22h = 0xffff;
    var_23h = 0xd0;
    var_28h = 0xffffffff;
    var_2ah = 4;
    var_2ch = -2;
    var_30h = 4;
    var_34h = -1;
    var_38h = 0xfffffff7;
    var_40h = 0;
    var_49h = 0x6b;
    var_4ah = 0x80;
    var_50h = 0x307c177f;
    var_59h = 0xb6;
    var_60h = 0xfffffffd;
    var_1ch = -6;
    do {
        if (var_1ch < -0xf) {
            sym.set_var(0x60477862, var_18h, var_1ch, var_20h, var_22h, var_23h, var_28h, var_2ah, var_2ch, var_30h, 
                        var_34h, var_38h, 0x1ab8, var_20h, 0xfffffffd, 0x2c61b7ce, var_49h, var_4ah, var_50h);
            var_eh._0_2_ = var_1ch;
code_r0x0000236d:
            return var_eh;
        }
        var_74h = -1;
        for (var_20h = 0; -4 < var_20h; var_20h = var_20h + -1) {
            var_22h = 8;
            var_74h = 0;
            var_18h = 8;
        }
        for (var_20h = 0; var_20h != 0xffffffee; var_20h = var_20h - 3) {
            var_23h = var_23h ^ var_20h;
            uVar2 = var_22h <= var_23h << (var_74h & 0x1f);
            var_74h = uVar2 * 2;
            var_28h = var_74h + 0xffU & var_28h;
            cVar1 = (var_28h * -0x6a57 & 0xffU) << 3;
            var_2ah = 0xffff;
            var_2ch = cVar1;
            if ((((cVar1 >> (var_2ch <= var_23h) == -0x5c5df848) / (var_28h & 0xff)) * var_59h) % var_20h == var_20h) {
                for (var_2ah = 0xffe4; var_2ah != 0x2a; var_2ah = var_2ah + 2) {
                    if (uVar2 == 0) {
                        sym.set_var(0x60477862, var_18h, var_1ch, var_20h, var_22h & 0x95a9, var_23h, var_28h, var_2ah, 
                                    var_2ch, var_2ah + var_23h, var_34h, var_38h, 0x1ab8, var_40h, 0xfffffffd, 
                                    0x2c61b7ce, var_49h, var_4ah, var_50h);
                        var_eh._0_2_ = -1;
                        goto code_r0x0000236d;
                    }
                    var_49h = var_49h - 1;
                    var_18h = (var_22h | 0xfffe) != 0x5c;
                    if (var_18h != 0) break;
                    var_30h = var_30h ^ 0x92dbf0b2;
                }
                var_2ch = 0x6065;
                var_104h._3_1_ = -var_2ah % 0x2ca7 != 0 && var_30h != 0;
                var_104h._2_1_ = var_104h._3_1_ != 0xb67e && var_23h != 0;
                var_40h = ((var_104h._2_1_ ^ 0xffU) & 1) + 0x10d2121a | var_40h;
            }
            else {
                var_74h = 0;
                for (var_58h = 0; 0x15 < var_58h; var_58h = var_58h + 8) {
                    var_74h = var_28h / (var_60h & 0xffff);
                    var_34h = -(var_22h | 1);
                    var_38h = var_34h + var_18h == -10 ^ var_38h;
                    var_60h = 6;
                }
            }
            var_18h = (var_59h << 6) >> 4;
        }
        var_74h = 0;
        while (var_74h == 0xe) {
            var_40h = var_28h | var_40h;
            for (var_49h = 5; 0x25 < var_49h; var_49h = var_49h + 1) {
                var_50h = var_4ah;
                var_40h = 0x40;
                var_18h = 0;
                var_4ah = var_4ah - 1;
            }
            var_2ah = var_2ah - 1;
            if (var_2ah + (var_18h & 0xffff) == 0) {
                sym.set_var(0x60477862, var_18h, var_1ch, var_20h, var_22h, var_23h, var_28h, var_2ah, var_2ch, var_30h
                            , var_34h, var_38h, 0x1ab8, var_40h, 0, 0x2c61b7ce, var_49h, var_4ah, var_50h);
                var_eh._0_2_ = var_50h;
                goto code_r0x0000236d;
            }
            for (var_59h = 0; 0x27 < var_59h; var_59h = var_59h + 1) {
            }
            var_20h = 0x5e7e < var_50h;
            var_74h = 0x17;
        }
        var_1ch = var_1ch + -3;
    } while( true );
}
