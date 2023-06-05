
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804af41)
// WARNING: Removing unreachable block (ram,0x0804b6ef)
// WARNING: Removing unreachable block (ram,0x0804b3ba)
// WARNING: Removing unreachable block (ram,0x0804b318)
// WARNING: Removing unreachable block (ram,0x0804b666)
// WARNING: Removing unreachable block (ram,0x0804a79a)
// WARNING: Removing unreachable block (ram,0x0804a7aa)
// WARNING: Removing unreachable block (ram,0x0804a99f)
// WARNING: Removing unreachable block (ram,0x0804b02d)
// WARNING: Removing unreachable block (ram,0x0804a9d3)
// WARNING: Removing unreachable block (ram,0x0804aa98)
// WARNING: Removing unreachable block (ram,0x0804ae19)
// WARNING: Removing unreachable block (ram,0x0804a9ee)
// WARNING: Removing unreachable block (ram,0x0804aaa2)
// WARNING: Removing unreachable block (ram,0x0804aad0)
// WARNING: Removing unreachable block (ram,0x0804aadd)
// WARNING: Removing unreachable block (ram,0x0804aad6)
// WARNING: Removing unreachable block (ram,0x0804aae2)
// WARNING: Removing unreachable block (ram,0x0804ab36)
// WARNING: Removing unreachable block (ram,0x0804acf1)
// WARNING: Removing unreachable block (ram,0x0804aee1)
// WARNING: Removing unreachable block (ram,0x0804b0b0)
// WARNING: Removing unreachable block (ram,0x0804af4f)
// WARNING: Removing unreachable block (ram,0x0804ac9e)
// WARNING: Removing unreachable block (ram,0x0804b074)
// WARNING: Removing unreachable block (ram,0x0804aec9)
// WARNING: Removing unreachable block (ram,0x0804b2d2)
// WARNING: Removing unreachable block (ram,0x0804a7ea)
// WARNING: Removing unreachable block (ram,0x0804a84a)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    char cVar1;
    uint32_t uVar2;
    uint var_170h;
    uint var_16ch;
    uint var_168h;
    uint var_164h;
    uint var_160h;
    uint var_15ch;
    uint var_158h;
    uint var_154h;
    uint var_150h;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_140h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_120h;
    uint var_11ch;
    uint var_118h;
    uint var_110h;
    uint var_108h;
    uint var_100h;
    uint var_fah;
    uint var_f4h;
    uint var_f0h;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_cch;
    uint var_c8h;
    uint var_c0h;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_76h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint32_t var_60h;
    uint var_58h;
    uint var_54h;
    int32_t var_50h;
    uint var_4ch;
    uint var_48h;
    uint16_t var_42h;
    uint16_t var_40h;
    char var_3dh;
    uint32_t var_3ch;
    uint8_t var_35h;
    uint32_t var_34h;
    uint8_t var_30h;
    char var_2fh;
    uint var_2dh;
    uint32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    int32_t var_18h;
    uint32_t var_11h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    stack0xffffffec = 0xffffffff;
    var_11h._0_1_ = 0xff;
    var_18h = -1;
    var_1ch._0_2_ = -5;
    var_24h._3_1_ = -0x3a;
    var_24h._0_2_ = 0xe2ae;
    var_28h = 8;
    stack0xffffffd2 = 10;
    var_2dh._1_2_ = 0;
    var_2dh._0_1_ = 1;
    var_2fh = -1;
    var_30h = 0xff;
    var_34h = 0xffffffff;
    var_35h = 0x4a;
    var_3ch = 0x2e8f3fbb;
    var_3dh = '\x16';
    cVar1 = '\x02';
    var_42h = 2;
    do {
        if (0x27 < var_42h) {
            sym.set_var(0x2a1e, var_2dh, 0, var_2fh, var_30h, var_2dh._1_2_, stack0xffffffd2, 0x1fe, 0x930a17c0, 
                        0x25b9e7dc, var_28h, 0xe8e67043, var_24h, var_1ch, 0xfffffff6, var_24h._3_1_, 0x8b6a91e5, 
                        var_11h, 0xc54c, 1, 0xfffffffb, 0x4f61, var_18h, 0, 0xffffffa5, stack0xffffffec, var_34h, 
                        var_35h, var_3ch, var_3dh, 0x3fbee5e2);
            return 0x25537350;
        }
        for (var_2fh = '\x11'; var_2fh != '\x19'; var_2fh = var_2fh + '\x01') {
            var_60h = 0x7164aaab;
            for (var_50h = 0; var_50h < -0xf; var_50h = var_50h + -1) {
                if (cVar1 == '\0') {
                    var_24h._0_2_ = var_24h & 1;
                }
                var_24h._0_2_ = var_24h + 1;
                var_30h = var_30h & var_50h + (var_24h < 200);
                if (stack0xffffffd2 != 1) break;
                var_30h = 1;
                var_60h = 0;
                var_2dh._1_2_ = 1;
            }
            for (var_50h = 0; var_50h < -0x14; var_50h = var_50h + -4) {
                var_60h = stack0xffffffd2;
            }
            if (var_24h == 0) {
                var_11h._0_1_ = var_11h + 1;
                *NULL = stack0xffffffd2 & 0x339e;
                var_30h = 0;
                var_28h = 0xffffff02;
                var_24h._0_2_ = -0x3f / var_50h;
                if (var_50h == 0) {
                    var_24h._3_1_ = '\x10';
                    var_35h = var_35h - 1;
                }
                else {
                    var_18h = var_18h + -1;
                    if (var_2dh._1_2_ != 0) goto code_r0x0804b78c;
                    for (var_40h = 0xffed; var_40h < 0x2c; var_40h = var_40h + 1) {
                    }
                }
                var_3ch = var_3ch + 1;
                for (var_28h = 0x12; -0x16 < var_28h; var_28h = var_28h - 9) {
                    var_24h._0_2_ = var_24h - 1;
                    var_2dh._0_1_ = var_2dh - 1;
                    if (var_24h < 0x58280425) {
                        sym.set_var(0x2a1e, var_2dh, 0, var_2fh, 0, var_2dh._1_2_, *NULL, 0x1fe, 0x930a17c0, 0x25b9e7dc
                                    , var_28h, 0xe8e67043, var_24h, var_1ch, 0xfffffff6, var_24h._3_1_, 0x8b6a91e5, 
                                    var_11h, 0xc54c, 1, 0xfffffffb, 0x4f61, var_18h, 0, 0xffffffa5, 0x8b6a91e5, var_34h
                                    , var_35h, var_3ch, var_3dh, 0x3fbee5e2);
                        return 0xa5;
                    }
                    if (var_3ch < 0xfffffffe) {
                        uVar2 = 0xff;
                    }
                    else {
                        uVar2 = 0;
                    }
                    var_34h = (var_60h == 0xfffffbdc) != uVar2 / var_2dh._1_2_;
                    var_3dh = 'N';
                    var_1ch._0_2_ = 0;
                }
            }
            else {
                stack0xffffffd2 = var_2dh._1_2_;
                var_28h = var_2dh._1_2_;
                cVar1 = '\x12';
            }
code_r0x0804b78c:
        }
        stack0xffffffec = var_28h;
        var_42h = var_42h + 1;
    } while( true );
}
