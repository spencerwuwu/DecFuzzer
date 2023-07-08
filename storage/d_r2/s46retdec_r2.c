
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001f60)
// WARNING: Removing unreachable block (ram,0x000018ec)
// WARNING: Removing unreachable block (ram,0x00001910)
// WARNING: Removing unreachable block (ram,0x00001920)
// WARNING: Removing unreachable block (ram,0x00001962)
// WARNING: Removing unreachable block (ram,0x00001972)
// WARNING: Removing unreachable block (ram,0x000019d3)
// WARNING: Removing unreachable block (ram,0x000019e3)
// WARNING: Removing unreachable block (ram,0x00002146)
// WARNING: Could not reconcile some variable overlaps

uint16_t sym.func_1(void)

{
    uint8_t uVar2;
    uint32_t uVar1;
    uint var_160h;
    uint var_15ch;
    uint var_158h;
    uint var_152h;
    uint var_149h;
    uint var_143h;
    uint var_13ch;
    uint var_131h;
    uint var_129h;
    uint var_121h;
    uint var_11ch;
    uint var_118h;
    uint var_112h;
    uint var_109h;
    uint var_103h;
    uint var_fch;
    uint var_f1h;
    uint var_e9h;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_cch;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b4h;
    uint var_ach;
    uint var_a8h;
    uint32_t var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    char var_61h;
    uint var_60h;
    uint8_t var_59h;
    int32_t var_58h;
    int32_t var_54h;
    uint var_4ch;
    uint var_44h;
    uint8_t var_3dh;
    uint32_t var_3ch;
    uint8_t var_37h;
    uint16_t var_36h;
    uint var_34h;
    uint16_t var_30h;
    uint32_t var_2ch;
    uint8_t var_25h;
    uint var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 0;
    var_1ch = -0x3dfc67f9;
    var_1eh = 0xfff8;
    var_25h = 0xff;
    var_2ch = 0xffc42e2e;
    var_30h = 0xd797;
    var_36h = 2;
    var_37h = 4;
    var_3ch = 0x47b8cee1;
    var_3dh = 6;
    var_54h = 0;
    var_58h = 0;
    var_59h = 0xff;
    var_61h = -5;
    var_18h = 0xfffffffd;
    do {
        if (var_18h != 0xfffffff7) {
            uVar1 = CONCAT11(var_3dh + 1, var_3dh);
            uVar2 = uVar1 >> 8;
            sym.set_var(var_14h, (uVar2 != 0) != 0xab484368 ^ var_18h, var_1ch, var_1eh, 7, 0xfb, var_2ch, 1, var_30h, 
                        0xa339bca7, var_36h - 1, var_37h, var_3ch & 0x54a6f35b, uVar2, 0xffffffff, 0xfd, 1, 0xffffffff, 
                        var_54h, var_58h, var_59h, 0x7f9db91b);
            return (var_3ch & 0x54a6f35b) < 0xff - (uVar1 & 0xff);
        }
        for (var_1ch = 0; var_1ch != 0; var_1ch = var_1ch + 1) {
            var_14h = 0;
            if (var_1ch == 0) {
                sym.set_var(0, 0xfffffff7, 0, var_1eh, 7, var_25h, var_2ch, 1, var_30h, 0xa339bca7, var_36h, var_37h, 
                            var_3ch, var_3dh, 0, 0xfd, 1, 0xffffffff, var_54h, var_58h, var_59h, 0x7f9db91b);
                return 0x38bb;
            }
            var_a4h = 0x4f5ac3d6;
            for (var_61h = '\x17'; -0x1c < var_61h; var_61h = var_61h + -1) {
                var_a4h = var_a4h + 1;
                var_1eh = var_1eh & var_a4h;
                var_14h = var_1eh | (var_1ch * -0x10 == 0x26) * 0x29ef & (var_14h ^ 0xffffffff);
            }
            var_25h = var_25h - 1;
            var_2ch = -9 < var_25h;
            if (-9 < var_25h) {
                var_36h = var_36h - 1;
            }
            var_30h = true < (0xf89738bb < ((var_1ch ^ 0xe839) / 0x19e2 | var_a4h));
            var_e4h._3_1_ = -9 < (var_1ch <= (var_30h != -0xbfd17c7)) != 0xfffa || var_1eh != 0;
            var_37h = var_37h | var_e4h._3_1_;
            var_3ch = var_1eh * 0x4000;
            var_1eh = (var_3ch < 2) * -9;
            var_3dh = var_3dh ^ 2;
            var_54h = var_54h + -1;
        }
        var_14h = (((('\0' < var_61h) >> (var_14h & 0x1f) < -2) + -0x77cb <= var_3dh ^ 0xffU) & 1) << 7;
        var_3ch = 0;
        while (var_3ch == 0x30) {
            var_58h = var_58h + -1;
            var_3ch = 0x31;
        }
        var_59h = var_59h - 1;
        var_18h = 0xffffffef;
    } while( true );
}
