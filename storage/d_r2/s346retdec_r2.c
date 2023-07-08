
// WARNING: Removing unreachable block (ram,0x00001bf4)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x000016e4)
// WARNING: Removing unreachable block (ram,0x000015f6)
// WARNING: Removing unreachable block (ram,0x00001a1c)
// WARNING: Could not reconcile some variable overlaps

uchar sym.func_1(void)

{
    uint8_t uVar1;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f5h;
    uint var_ech;
    uint var_e5h;
    uint var_dch;
    uint var_d4h;
    uint var_d0h;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b1h;
    uint var_a8h;
    uint var_a0h;
    uint var_99h;
    uint var_92h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint var_38h;
    uint16_t var_32h;
    uint32_t var_30h;
    char var_29h;
    int32_t var_28h;
    uint16_t var_22h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint var_14h;
    uint var_dh;
    
    var_18h = 0x55bb2c21;
    var_20h = -0x402f6f29;
    var_22h = 0xb2a1;
    var_28h = -2;
    var_29h = -0x3a;
    var_30h = 1;
    var_32h = 2;
    var_38h = 0;
    var_3ch = -10;
    var_40h = 0xffffffff;
    var_1ch = 0x10;
    do {
        if (var_1ch < 8) {
            sym.set_var(0, var_18h, var_1ch, var_20h, var_22h, 0xfffffff9, 1, var_28h, var_29h, var_30h, var_32h, 
                        var_38h);
            return 0xeb;
        }
        uVar1 = 0x90;
        if (var_3ch == 0) {
            for (var_99h._0_1_ = '\x1a'; var_99h != -0x1c; var_99h._0_1_ = var_99h + -1) {
                var_28h = 1;
                var_40h = var_1ch != 0 | var_40h;
            }
        }
        else {
            var_3ch = -0x14;
            while (var_3ch == -9) {
                var_20h = var_1ch * -9;
                if (((var_20h & 0xff) * 0x8f) / var_1ch == 0) {
                    var_29h = 0 >> (uVar1 & 0x1f);
                    var_30h = var_30h ^ 0x8b0048f2;
                    uVar1 = 0;
                    var_32h = 0 << (var_28h & 0x1f) == 0x7195015f;
                }
                else if ((var_20h ^ 1 | 0xe9) / -0x4318 == 0) {
                    var_28h = var_28h + 1;
                }
                else {
                    var_22h = var_22h | 0x3361;
                    if (var_22h != 0) break;
                }
                var_3ch = -8;
            }
        }
        var_38h = 1;
        var_18h = var_40h & 1;
        var_40h = var_18h ^ 0xffffffff;
        var_1ch = var_1ch + -1;
    } while( true );
}
