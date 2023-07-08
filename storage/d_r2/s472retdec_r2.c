
// WARNING: Removing unreachable block (ram,0x00001d1a)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001c1f)
// WARNING: Removing unreachable block (ram,0x00001acd)
// WARNING: Removing unreachable block (ram,0x00001ae3)
// WARNING: Removing unreachable block (ram,0x00001af0)
// WARNING: Removing unreachable block (ram,0x000017f1)
// WARNING: Removing unreachable block (ram,0x00001a75)
// WARNING: Removing unreachable block (ram,0x00001bf1)
// WARNING: Removing unreachable block (ram,0x00001c4c)
// WARNING: Removing unreachable block (ram,0x00001e57)
// WARNING: Removing unreachable block (ram,0x0000160b)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_118h;
    uint var_112h;
    uint var_109h;
    uint var_104h;
    uint var_100h;
    uint var_f3h;
    uint var_ech;
    uint var_e5h;
    uint var_deh;
    uint var_d5h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_beh;
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
    uint var_7ah;
    uint var_74h;
    uint var_70h;
    uint32_t var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    uint var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint8_t var_31h;
    uint var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint var_dh;
    
    var_14h = 4;
    var_16h = 0xfffe;
    var_24h = 0xffffffff;
    var_28h = 0x9f111191;
    var_2ch = 0x16cf0574;
    var_40h = 0x4f539b47;
    var_48h = -1;
    var_4ch = 0x19c29aed;
    var_50h = 1;
    var_5ch = 0x30f13e0c;
    for (var_58h = -0x18; -10 < var_58h; var_58h = var_58h + 1) {
        if (var_48h <= (((var_14h < 0) < -4) < var_58h)) {
            sym.set_var(var_14h, 0xfffe, 1, 0xfffffffc, var_24h, var_28h, var_2ch, 0xfffffffe, 0xf9, 1, 0x48d7427e, 
                        0x4f539b47, 1);
            var_dh._0_1_ = var_24h;
            goto code_r0x0000201e;
        }
        var_6ch = 0xea4087b3;
        for (var_48h = 3; var_48h < -0xd; var_48h = var_48h + -1) {
            if (var_14h != 0) {
                var_6ch = var_48h == (var_48h % ('\x01' % var_58h) & 0xffU) + (var_6ch & 0xff);
            }
            var_4ch = ((var_14h != 0) == true) - 1 ^ var_4ch;
            var_24h = var_4ch < 0x644688d2;
            var_28h = var_4ch < 0x644688d2 & var_28h;
            var_2ch = var_6ch;
        }
        var_5ch = ((var_24h == 0) == 0xdf1c) % -1 & var_5ch;
        var_14h = 1 << ((var_2ch < (var_5ch != 0xffffffff) != var_2ch) * -3 + 10U & 0x1f);
    }
    for (var_31h = 0xfc; 0x21 < var_31h; var_31h = var_31h + 1) {
        for (var_50h = 0; 0x28 < var_50h; var_50h = var_50h + 1) {
        }
    }
    var_14h = 1;
    for (var_24h = -4; var_24h != 0x30; var_24h = var_24h + 1) {
        if (((((var_14h | 0xe2) != 0xfffffffc) < var_24h / (var_50h | 0xed21fdf5)) - 8 & var_31h) == 0xc3ab) {
            var_16h = 1;
            var_14h = 0xfffd;
        }
        else {
            var_40h = 0;
        }
        if (var_28h != 0) break;
    }
    sym.set_var(var_14h, var_16h, 1, 0xfffffffc, var_24h, var_28h, var_2ch, 0xffffffff, var_31h, 1, 0xef88cba7, var_40h
                , 1);
    var_dh._0_1_ = -0x59;
code_r0x0000201e:
    return var_dh;
}
