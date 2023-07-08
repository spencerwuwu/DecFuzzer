
// WARNING: Removing unreachable block (ram,0x00001ace)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001b02)
// WARNING: Removing unreachable block (ram,0x00001ffb)
// WARNING: Removing unreachable block (ram,0x00001817)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    bool bVar1;
    uint var_1a8h;
    uint var_1a4h;
    uint var_1a0h;
    uint var_19ch;
    uint var_198h;
    uint var_191h;
    uint var_189h;
    uint var_17dh;
    uint var_178h;
    uint var_174h;
    uint var_170h;
    uint var_16ch;
    uint var_165h;
    uint var_15dh;
    uint var_154h;
    uint var_150h;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_140h;
    uint var_139h;
    uint var_131h;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_11ch;
    uint var_118h;
    uint var_111h;
    uint var_109h;
    uint var_100h;
    uint var_f9h;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e1h;
    uint var_d9h;
    uint var_d0h;
    uint var_cch;
    uint var_c4h;
    uint var_c0h;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a2h;
    uint var_99h;
    uint var_94h;
    uint var_8ch;
    int32_t var_88h;
    uint var_84h;
    uint var_7ch;
    int32_t var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint16_t var_34h;
    uint16_t var_32h;
    uint16_t var_30h;
    uint8_t var_2dh;
    uint32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint var_18h;
    int32_t var_14h;
    uint var_eh;
    
    var_18h = 0xb96ca2cb;
    var_1ch = 1;
    var_20h = 0;
    var_24h = 0x74bf90ed;
    var_2ch = 0xf2fea276;
    var_2dh = 0xff;
    var_30h = 0x3645;
    var_32h = 0x553b;
    var_34h = 0xfff9;
    for (var_14h = 0; 4 < var_14h; var_14h = var_14h + 1) {
        var_78h = 0x63abefa0;
        for (var_20h = 0xfffffff6; var_20h < 0xd; var_20h = var_20h + 8) {
            var_24h = 0xc;
            while (var_24h == 7) {
                var_18h = 0xffffffbf;
                var_24h = 6;
            }
            var_24h = 0;
            while (var_24h == 1) {
                var_24h = 4;
            }
            var_88h = 0;
            while (var_88h < -0x10) {
                if (var_78h != 0) {
                    bVar1 = (var_78h != -1) <= var_20h;
                    var_2ch = !bVar1 || bVar1;
                }
                var_2dh = 0;
                if (var_88h != 0) break;
                var_30h = 0x9219;
                var_32h = var_32h & (var_20h & 0xffff) << (0 << ((var_2ch ^ 0x11) & 0x1f) & 0x1f);
                var_1ch = var_1ch | 0xf8d36fbc;
                var_88h = -1;
            }
            var_78h = 1;
        }
        if ((var_18h & var_2dh) == 0x5b) {
            sym.set_var(var_14h, var_18h, var_1ch, var_20h, var_24h, 0xffffffbf, var_2ch, var_2dh, 0, var_32h, var_34h, 
                        0x2249, 0x633724dd, 1, 0, 0x5e8e9f82, 0xffff);
            var_eh._0_2_ = -1;
            goto code_r0x000021b0;
        }
        var_34h = var_34h - 1;
        var_2ch = var_2dh;
        if (var_1ch != 0) break;
    }
    sym.set_var(var_14h, var_18h, var_1ch, var_20h, var_24h, 0xffffffbf, var_2ch, var_2dh, var_30h, var_32h, var_34h, 
                0x2249, 0x633724dd, 1, 0xff, 0x5e8e9f82, 0);
    var_eh._0_2_ = 0x205d;
code_r0x000021b0:
    return var_eh;
}
