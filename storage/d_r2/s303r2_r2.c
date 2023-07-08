
// WARNING: Removing unreachable block (ram,0x00001ee3)
// WARNING: Removing unreachable block (ram,0x00001f1c)
// WARNING: Removing unreachable block (ram,0x00001f29)
// WARNING: Removing unreachable block (ram,0x00002091)
// WARNING: Removing unreachable block (ram,0x000020a1)
// WARNING: Removing unreachable block (ram,0x000020e0)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000018c2)
// WARNING: Removing unreachable block (ram,0x00001b97)
// WARNING: Removing unreachable block (ram,0x00001bba)
// WARNING: Removing unreachable block (ram,0x00001bc3)
// WARNING: Removing unreachable block (ram,0x00001be4)
// WARNING: Removing unreachable block (ram,0x00001bdf)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint16_t uVar1;
    uint var_158h;
    uint var_154h;
    uint var_14eh;
    uint var_140h;
    uint var_139h;
    uint var_132h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_11ch;
    uint var_114h;
    uint var_10ch;
    uint var_105h;
    uint var_feh;
    uint var_f0h;
    uint var_e9h;
    uint var_e2h;
    uint var_dch;
    uint var_d8h;
    uint var_d0h;
    uint var_c8h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    int32_t var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint8_t var_32h;
    uint8_t var_31h;
    uint32_t var_30h;
    uint8_t var_29h;
    uint var_28h;
    uint32_t var_24h;
    char var_1dh;
    uint16_t var_1ch;
    uint16_t var_1ah;
    uint16_t var_18h;
    uint16_t var_16h;
    uint32_t var_14h;
    uint var_eh;
    
    var_16h = 5;
    var_18h = 0x136e;
    var_1ah = 0x2614;
    var_1ch = 0xfff8;
    var_1dh = -0x14;
    var_24h = 7;
    var_29h = 1;
    var_30h = 0xfffffff7;
    var_31h = 1;
    var_32h = 0xa3;
    var_38h = 0x5b1c4912;
    var_3ch = 8;
    var_44h = 0xddb6f600;
    var_58h = -0x33e9820e;
    var_5ch = 0x60136b80;
    var_14h = 0;
    do {
        if (0x31 < var_14h) {
            sym.set_var(var_14h, var_16h, var_18h, var_1ah, var_1ch, var_1dh, var_24h, 0xc5f07b86, var_29h, var_30h, 
                        var_31h, var_32h, var_38h, var_3ch, 0, var_44h, 0x202e, 0xc1156827, 
                        (var_5ch & 0xff) >> (var_5ch & 0x1f) < 0xfffffff9 == true);
            var_eh._0_2_ = 0xfa;
code_r0x00002300:
            return var_eh;
        }
        uVar1 = var_16h - 1;
        if (var_16h < ((0xffe25bff < var_14h) <= var_14h)) {
            var_18h = 0xc921;
            var_58h = 0;
            if (0xcf9e8bfa < (var_14h != 0)) {
                var_29h = 1;
                var_5ch = 0x16;
                while (var_5ch == 0xffffffe7) {
                    var_30h = (0 >> (-0xb < (var_1dh == -0x5c90db0c))) % -1;
                    var_5ch = 0xffffffe6;
                }
                var_31h = var_31h - 1;
                goto code_r0x00001e22;
            }
            if ((var_14h | 1) == 0) {
                sym.set_var(var_14h, uVar1, 0xc921, var_1ah, var_1ch, var_14h, var_24h, 0xc5f07b86, var_29h, var_30h, 
                            var_31h, var_32h, var_38h, var_3ch, 0, var_44h, 0x202e, 0xc1156827, 1);
                var_eh._0_2_ = -0x36df;
                goto code_r0x00002300;
            }
            var_5ch = 1;
            var_1ch = (1 / (uVar1 / var_14h & 0xffff) ^ uVar1 & 1) & var_14h;
            var_1ah = var_14h;
        }
        else {
            var_29h = var_29h - 1;
            var_1dh = ((var_14h < 1 % (var_30h & 0xff)) <= var_58h) + '\x02';
            for (var_ach = 0x14; var_ach < -0xb; var_ach = var_ach + -8) {
            }
code_r0x00001e22:
            var_18h = var_18h + 1;
            var_24h = var_31h ^ var_24h;
            var_32h = var_30h;
            var_38h = (var_30h & 0xffff) >> ((uVar1 < 0x80000000) % -0x36df & 0x1f);
            var_3ch = 0;
            var_44h = 0;
        }
        var_14h = var_14h + 1;
        var_16h = uVar1;
    } while( true );
}
