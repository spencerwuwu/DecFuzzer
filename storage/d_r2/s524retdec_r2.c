
// WARNING: Removing unreachable block (ram,0x00001985)
// WARNING: Removing unreachable block (ram,0x00002586)
// WARNING: Removing unreachable block (ram,0x00001dba)
// WARNING: Removing unreachable block (ram,0x000018c6)
// WARNING: Removing unreachable block (ram,0x0000285e)
// WARNING: Removing unreachable block (ram,0x000020c1)
// WARNING: Removing unreachable block (ram,0x00001ad2)
// WARNING: Removing unreachable block (ram,0x00001d49)
// WARNING: Removing unreachable block (ram,0x00001e16)
// WARNING: Removing unreachable block (ram,0x00001e23)
// WARNING: Removing unreachable block (ram,0x00001fc2)
// WARNING: Removing unreachable block (ram,0x00001e4e)
// WARNING: Removing unreachable block (ram,0x00001f49)
// WARNING: Removing unreachable block (ram,0x00001f56)
// WARNING: Removing unreachable block (ram,0x00002102)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    bool bVar1;
    uint32_t uVar2;
    int16_t iVar3;
    uint var_1f8h;
    uint var_1f4h;
    uint var_1f0h;
    uint var_1e9h;
    uint var_1e1h;
    uint var_1dch;
    uint var_1d8h;
    uint var_1d4h;
    uint var_1cdh;
    uint var_1c8h;
    uint var_1c4h;
    uint var_1bfh;
    uint var_1b8h;
    uint var_1b4h;
    uint var_1adh;
    uint var_1a5h;
    uint var_1a0h;
    uint var_19ch;
    uint var_198h;
    uint var_191h;
    uint var_18ch;
    uint var_188h;
    uint var_184h;
    uint var_17dh;
    uint var_178h;
    uint var_170h;
    uint var_168h;
    uint var_164h;
    uint var_160h;
    uint var_159h;
    uint var_151h;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_13dh;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_129h;
    uint var_124h;
    uint var_11ch;
    uint var_115h;
    uint var_10eh;
    uint var_104h;
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_e9h;
    uint var_e5h;
    uint var_e0h;
    uint var_dch;
    uint var_d4h;
    uint var_ceh;
    uint var_c8h;
    uint var_c4h;
    uint var_beh;
    uint var_b8h;
    uint var_b4h;
    uint var_ach;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_94h;
    uint32_t var_90h;
    uint8_t var_8bh;
    uint32_t var_88h;
    int16_t var_82h;
    uint var_80h;
    uint var_78h;
    uint32_t var_74h;
    uint var_70h;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    uint32_t var_54h;
    uint32_t var_50h;
    uint8_t var_49h;
    uint var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint8_t var_39h;
    uint32_t var_38h;
    uint var_34h;
    int32_t var_30h;
    uint var_2ch;
    uint8_t var_25h;
    uint32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_18h = 0x43d837bc;
    var_1ch = 0xffffffff;
    var_1dh = 0;
    var_24h = 0xffffffff;
    var_25h = 7;
    var_2ch = 0x300ca3c4;
    var_30h = -1;
    var_34h = 0x7826243a;
    var_38h = 2;
    var_39h = 0xf1;
    var_40h = 7;
    var_44h = 1;
    var_49h = 0xfd;
    var_50h = 0x97f64376;
    var_54h = 1;
    var_5ch = 0x5484efa1;
    var_60h = 0x1636ca5e;
    var_68h = 0x5d9c727;
    var_74h = 0x589615d4;
    var_14h = 0xffffffe8;
    do {
        if (-0x1b < var_14h) {
            sym.set_var(var_14h | 0xf9, var_18h, var_1ch, var_1dh, var_24h, var_25h, var_2ch, var_30h, var_34h, var_38h
                        , var_39h, var_40h, 1, 0x3cd125f2, var_49h, var_50h, var_54h, 0x38, var_5ch, var_60h, 0xfffa);
            return var_30h;
        }
        var_88h = 0xb73d5c;
        var_88h._0_1_ = 0x5c;
        for (var_18h = 0xb; -0x14 < var_18h; var_18h = var_18h - 1) {
            var_8bh = 100;
            var_90h = 0xb667f5ae;
            for (var_1ch = 0x14; -0x19 < var_1ch; var_1ch = var_1ch - 1) {
                var_1dh = var_1ch;
                var_8bh = var_8bh + 1;
                var_90h = (var_1dh ^ 0xffffffffU) - var_14h & var_90h;
                var_24h = var_8bh * var_1dh - 0x4300U | var_90h;
                var_25h = var_24h;
                var_2ch = 0;
                var_30h = var_25h;
            }
            var_34h = 0xfffffff0;
            var_68h = var_25h < 0xf1;
        }
        if (var_68h == 0) {
            if (var_1dh == 0) {
                sym.set_var(var_14h, var_18h, var_1ch, 0, var_24h, var_25h, var_2ch, var_30h, var_34h, var_38h, var_39h
                            , var_40h, var_44h, 0x3cd125f2, var_49h, var_50h, var_54h, 0x38, var_5ch, var_60h, 0xfff9);
                return var_39h;
            }
            var_18h = var_14h != 0 & var_18h;
            var_38h = var_38h + 1;
            if (var_1dh == 0) {
                var_68h = 0;
                var_18h = var_54h < var_50h - 1;
                var_60h = var_60h + 1;
            }
            else {
                bVar1 = var_25h != 0;
                for (var_82h = -0x12; uVar2 = var_18h,  -0xb < var_82h; var_82h = var_82h + 1) {
                    iVar3 = ((bVar1 != 0) << (var_38h & 0x1f)) * -7;
                    var_25h = 0x70;
                    var_1dh = var_82h + 'p' + iVar3;
                    var_18h = iVar3 >> ((var_39h | (var_1dh << 5) >> 8 | var_18h >> 8 | 0xa2) & 0x1f);
                    var_39h = 0xff;
                    var_40h = var_38h;
                }
                if (var_24h != 0) goto code_r0x000028ab;
                var_68h = var_18h;
                var_1ch = (bVar1 != 0xffffffff) != var_44h ^ var_1ch;
                for (var_50h = 0; var_50h < 2; var_50h = var_50h + 8) {
                    var_54h = var_54h | 0xd3;
                    var_49h = var_49h | var_54h ^ var_1ch;
                    if ((((var_49h == 0) < 0xe3) - (var_40h & 0xffff) & 0xffff) == 0) {
                        var_1ch = 0xfffffffe;
                        var_44h = 3 / var_39h;
                        var_5ch = var_5ch + 1;
                        var_18h = var_38h;
                    }
                    else if (var_38h != 0) break;
                    var_18h = (var_14h <= ((var_40h + 1U | 1) & var_40h)) + 0x9c41ee5 < 9 & var_18h;
                    var_74h = var_74h - 1;
                    var_49h = var_40h & 4;
                    var_54h = (((4 < (var_14h & 0xe5a11642)) + var_40h) % uVar2 & 0xffU) << (var_1ch & 0x1f);
                    var_88h = var_74h % var_54h;
                }
            }
            var_44h = (0xf8 >> (var_88h & 0x1f) < -0x5e54 == 0xa2d5 | var_1dh) ^ var_44h;
        }
code_r0x000028ab:
        var_14h = var_14h - 6;
    } while( true );
}
