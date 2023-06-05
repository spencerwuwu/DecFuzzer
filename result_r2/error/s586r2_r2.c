
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a9ef)
// WARNING: Removing unreachable block (ram,0x0804a9fc)
// WARNING: Removing unreachable block (ram,0x0804ae8d)
// WARNING: Removing unreachable block (ram,0x0804b057)
// WARNING: Removing unreachable block (ram,0x0804ae99)
// WARNING: Removing unreachable block (ram,0x0804aec8)
// WARNING: Removing unreachable block (ram,0x0804aed2)
// WARNING: Removing unreachable block (ram,0x0804af99)
// WARNING: Removing unreachable block (ram,0x0804b061)
// WARNING: Removing unreachable block (ram,0x0804ade7)
// WARNING: Removing unreachable block (ram,0x0804adf7)
// WARNING: Removing unreachable block (ram,0x0804ad79)
// WARNING: Removing unreachable block (ram,0x0804b065)
// WARNING: Removing unreachable block (ram,0x0804ad89)
// WARNING: Removing unreachable block (ram,0x0804ae6d)
// WARNING: Removing unreachable block (ram,0x0804ada2)
// WARNING: Removing unreachable block (ram,0x0804adbf)
// WARNING: Removing unreachable block (ram,0x0804adcc)
// WARNING: Removing unreachable block (ram,0x0804adc5)
// WARNING: Removing unreachable block (ram,0x0804add1)
// WARNING: Removing unreachable block (ram,0x0804adf0)
// WARNING: Removing unreachable block (ram,0x0804adfc)
// WARNING: Removing unreachable block (ram,0x0804ae12)
// WARNING: Removing unreachable block (ram,0x0804ae02)
// WARNING: Removing unreachable block (ram,0x0804ae0b)
// WARNING: Removing unreachable block (ram,0x0804ae17)
// WARNING: Removing unreachable block (ram,0x0804ae78)
// WARNING: Removing unreachable block (ram,0x0804b072)
// WARNING: Removing unreachable block (ram,0x0804ae83)
// WARNING: Removing unreachable block (ram,0x0804b06f)
// WARNING: Removing unreachable block (ram,0x0804a839)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint8_t uVar1;
    char cVar2;
    uint var_150h;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_140h;
    uint var_134h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_11ch;
    uint var_114h;
    uint var_110h;
    uint var_10ch;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_c8h;
    uint var_c0h;
    uint var_bch;
    uint var_b4h;
    uint var_ach;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_6ch;
    uint8_t var_65h;
    uint32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint8_t var_42h;
    uint32_t var_41h;
    uint var_39h;
    uint16_t var_34h;
    uint16_t var_32h;
    uint32_t var_30h;
    uint var_28h;
    uint var_24h;
    uint var_1eh;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_54h = 8;
    var_58h = -1;
    var_48h = 0x99649744;
    var_4ch = 0x6af9031e;
    var_50h = 0xffffffff;
    var_41h._0_1_ = 0xc0;
    var_42h = 0xc2;
    var_39h._0_1_ = 0xff;
    stack0xffffffbc = 0xe1338462;
    var_30h = 0xffffffff;
    var_32h = 0xfffc;
    var_34h = 9;
    var_1eh._1_1_ = 0xff;
    var_14h = 0xffffffff;
    var_10h = 0xc383c67e;
    var_18h = 5;
    do {
        if (0xc < var_18h) {
code_r0x0804b09f:
            sym.set_var(var_54h, var_58h, 0xfffffff6, var_48h, var_4ch, var_50h, var_41h, var_42h, var_39h, 
                        stack0xffffffbc, var_30h, var_32h, 0xffffffff, 0x5b285efc, var_34h, 0x421460d0, 9, 0xcfee3166, 2
                        , 0xffffffff, 0xf59378e2, 6, 0, 0, 0, 0, 0xffffffff, var_1eh._1_1_);
            return 0;
        }
        var_14h = var_14h ^ var_54h != 0;
        var_58h = var_58h + 1;
        var_48h = var_48h | (var_18h ^ 1) < 0xfffffff7;
        var_4ch = var_10h % ((var_48h & 0xff) - 0xfd) == -8;
        if (0xfffffff8 < var_4ch) goto code_r0x0804b09f;
        var_64h = 0x3f16a1ea;
        var_65h = 0xd7;
        var_5ch = 0;
        while (var_5ch == -0x17) {
            var_48h = 0;
            while ((1 < var_48h && (var_54h == 0))) {
                var_48h = var_48h + 1;
            }
            var_65h = var_65h | 0x3f;
            var_10h = var_65h * 0xff;
            var_50h = var_50h ^ (var_48h & 0xffff) != 0xda;
            var_54h = (var_50h & 0xffff) / var_54h;
            var_5ch = -0x1f;
        }
        var_41h._0_1_ = var_41h + 1;
        uVar1 = var_42h - 1;
        if (var_42h == 0) {
            var_4ch = var_4ch - 1;
            var_39h._0_1_ = var_54h == 0x107;
            if (var_39h) goto code_r0x0804a95f;
            var_10h = var_10h | (var_18h & 0xff) + (0xeb2cfb10 < var_14h);
            if ((var_39h && 1 < (((var_10h == 0xeb2cfb11) <= var_30h) * var_30h < 0x4f) >> (stack0xffffffbc & 0x1f)) < 2
               ) {
                var_32h = var_10h == 0x3effc1;
                if ((var_41h < 0x15 / (var_32h != 0)) || (var_34h != 0)) {
                    cVar2 = '\x01';
                }
                else {
                    cVar2 = '\0';
                }
                if (2 < (var_39h == cVar2 / var_30h)) {
                    var_54h = var_54h & 0xf05509ca;
                    var_42h = uVar1;
                    goto code_r0x0804b09f;
                }
            }
            var_10h = var_10h | 0x57;
            var_4ch = 0;
            unique0x00007a00 = stack0xffffffbc ^ 0xf6 < uVar1;
        }
        else {
code_r0x0804a95f:
            for (var_10h = 0; 0 < var_10h; var_10h = var_10h + 1) {
                if ((var_64h == 0) && (var_48h == 0)) {
                    *NULL = 0;
                }
                else {
                    *NULL = 1;
                }
                var_30h = var_30h ^ *NULL;
                var_64h = var_64h & 0x17f16c3b;
                var_34h = var_34h - 1;
            }
        }
        var_1eh._1_1_ = 0x7e;
        var_18h = var_18h + 6;
        var_42h = uVar1;
    } while( true );
}
