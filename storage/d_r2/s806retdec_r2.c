
// WARNING: Removing unreachable block (ram,0x00001716)
// WARNING: Removing unreachable block (ram,0x0000177b)
// WARNING: Removing unreachable block (ram,0x0000187f)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001d9f)
// WARNING: Removing unreachable block (ram,0x00001da3)
// WARNING: Removing unreachable block (ram,0x00001db0)
// WARNING: Removing unreachable block (ram,0x00001de1)
// WARNING: Removing unreachable block (ram,0x00001f38)
// WARNING: Removing unreachable block (ram,0x000015f8)
// WARNING: Removing unreachable block (ram,0x00001f66)
// WARNING: Removing unreachable block (ram,0x00001f79)
// WARNING: Removing unreachable block (ram,0x00002048)
// WARNING: Removing unreachable block (ram,0x00001fac)
// WARNING: Removing unreachable block (ram,0x0000219a)
// WARNING: Removing unreachable block (ram,0x000021aa)
// WARNING: Removing unreachable block (ram,0x00001c45)
// WARNING: Removing unreachable block (ram,0x00001594)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_184h;
    uint var_180h;
    uint var_17ch;
    uint var_176h;
    uint var_168h;
    uint var_160h;
    uint var_15ch;
    uint var_158h;
    uint var_152h;
    uint var_145h;
    uint var_140h;
    uint var_13ch;
    uint var_136h;
    uint var_129h;
    uint var_124h;
    uint var_120h;
    uint var_11ah;
    uint var_10eh;
    uint var_104h;
    uint var_fch;
    uint var_f5h;
    uint var_f0h;
    uint var_ech;
    uint var_e6h;
    uint var_d8h;
    uint var_d4h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_aeh;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_86h;
    uint var_7ch;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    char var_55h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint16_t var_32h;
    int32_t var_30h;
    uint var_2ch;
    uint16_t var_26h;
    uint16_t var_22h;
    uint8_t var_1fh;
    uint16_t var_1eh;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint var_dh;
    
    var_14h = 0x2c03342e;
    var_1ch = 0xf62c4df8;
    var_1eh = 0xfffa;
    var_1fh = 0x5e;
    var_22h = 0x6b31;
    var_26h = 0x6da2;
    var_30h = -3;
    var_32h = 7;
    var_18h = -0x17;
    do {
        if (var_18h < -0x15) {
code_r0x00002240:
            sym.set_var(var_14h, var_18h, var_1ch, var_1eh, var_1fh, var_22h, 0xfffffffd, var_26h, 0, var_30h, var_32h, 
                        1);
            var_dh._0_1_ = -1;
code_r0x0000233a:
            return var_dh;
        }
        var_1ch = ((0x1c77dcc < var_18h) < -1) * 0x1000 + 0x84f64c83;
        var_1eh = var_1eh & var_1ch;
        if (var_1eh == 0) {
            sym.set_var(var_14h, var_18h, var_1ch ^ 0xfffffff9, 0, var_1fh, 0x6b31, 0xfffffffd, 0x6da2, 0, var_30h, 7, 1
                       );
            var_dh._0_1_ = -0x5e;
            goto code_r0x0000233a;
        }
        var_55h = -5;
        while( true ) {
            if ((var_55h == -5) || (var_14h != 0)) break;
            var_55h = var_55h + '\t';
        }
        var_1fh = var_1fh | var_1eh;
        if (var_18h != 0) {
            var_1eh = 0xfe;
            if ((var_1fh == -var_1fh - 3) * '\t' == '\0') {
                var_30h = var_30h + 1;
                var_22h = var_1fh;
                var_32h = 0xff97;
                var_1ch = -0x69 % var_55h;
            }
            else {
                var_26h = 1;
                if (1 - (var_18h & 1) >> 1 == 0) {
                    var_1ch = 0xfffffffd;
                }
                else {
                    var_14h = 0x18;
                }
                var_86h._0_1_ = '\0';
                while (var_86h == '%') {
                    var_86h._0_1_ = ',';
                }
            }
            goto code_r0x00002240;
        }
        var_30h = var_30h + 1;
        var_18h = 1;
        var_14h = var_1ch;
    } while( true );
}
