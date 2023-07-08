
// WARNING: Removing unreachable block (ram,0x00001ba1)
// WARNING: Removing unreachable block (ram,0x00001c9b)
// WARNING: Removing unreachable block (ram,0x00001cba)
// WARNING: Removing unreachable block (ram,0x00001ccf)
// WARNING: Removing unreachable block (ram,0x00001cdc)
// WARNING: Removing unreachable block (ram,0x00001d06)
// WARNING: Removing unreachable block (ram,0x00001d51)
// WARNING: Removing unreachable block (ram,0x00001d5e)
// WARNING: Removing unreachable block (ram,0x00002092)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00002203)
// WARNING: Removing unreachable block (ram,0x000022ef)
// WARNING: Removing unreachable block (ram,0x000022ff)
// WARNING: Removing unreachable block (ram,0x00001e28)
// WARNING: Removing unreachable block (ram,0x00001e40)
// WARNING: Removing unreachable block (ram,0x00001da8)
// WARNING: Removing unreachable block (ram,0x00001b2c)
// WARNING: Removing unreachable block (ram,0x00001b64)
// WARNING: Removing unreachable block (ram,0x00001b77)
// WARNING: Removing unreachable block (ram,0x00001bd0)
// WARNING: Removing unreachable block (ram,0x00001bdd)
// WARNING: Removing unreachable block (ram,0x00001db2)
// WARNING: Removing unreachable block (ram,0x00001ea2)
// WARNING: Removing unreachable block (ram,0x00002166)
// WARNING: Removing unreachable block (ram,0x00001ea7)
// WARNING: Removing unreachable block (ram,0x00001f1a)
// WARNING: Removing unreachable block (ram,0x00001f27)
// WARNING: Removing unreachable block (ram,0x00002036)
// WARNING: Removing unreachable block (ram,0x00002043)
// WARNING: Removing unreachable block (ram,0x000021bf)
// WARNING: Removing unreachable block (ram,0x000021e1)
// WARNING: Removing unreachable block (ram,0x00002321)
// WARNING: Removing unreachable block (ram,0x000020c6)
// WARNING: Removing unreachable block (ram,0x000020e0)
// WARNING: Removing unreachable block (ram,0x000020ea)
// WARNING: Removing unreachable block (ram,0x00002145)
// WARNING: Removing unreachable block (ram,0x0000232d)
// WARNING: Removing unreachable block (ram,0x000018b2)
// WARNING: Removing unreachable block (ram,0x000018bc)
// WARNING: Removing unreachable block (ram,0x000018c9)
// WARNING: Removing unreachable block (ram,0x000018f1)
// WARNING: Removing unreachable block (ram,0x00001901)
// WARNING: Removing unreachable block (ram,0x000019b5)

uchar sym.func_1(void)

{
    uint var_19ch;
    uint var_198h;
    uint var_191h;
    uint var_18ch;
    uint var_188h;
    uint var_182h;
    uint var_17ah;
    uint var_174h;
    uint var_170h;
    uint var_16bh;
    uint var_161h;
    uint var_158h;
    uint var_154h;
    uint var_14dh;
    uint var_144h;
    uint var_13ch;
    uint var_135h;
    uint var_130h;
    uint var_12ch;
    uint var_126h;
    uint var_11eh;
    uint var_118h;
    uint var_114h;
    uint var_10ch;
    uint var_108h;
    uint var_100h;
    uint var_f9h;
    uint var_f4h;
    uint var_f0h;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d5h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_b8h;
    uint var_b4h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint32_t var_8ch;
    uint var_88h;
    int32_t var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint8_t var_59h;
    uint8_t var_55h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    char var_29h;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    int32_t var_18h;
    int32_t var_14h;
    uint var_dh;
    
    var_14h = -0x81d8666;
    var_24h = 0xad744d02;
    var_29h = '/';
    var_50h = 0x84958140;
    var_54h = 0;
    var_55h = 0x91;
    var_18h = 0;
    do {
        if (var_18h < 2) {
            sym.set_var(var_14h, var_18h, 0xfffffffc, 0x173bf38c, var_24h, 0xba0d8950, var_29h, 0xffffffff, 0xba0d8950, 
                        0xffff, 0xe4de6290, 0xe4d920e9, 0, 0xf675b37, 0xac2cdbaa, 8, var_50h, var_54h, var_55h, 2);
            return var_54h;
        }
        var_8ch = 0x1b55e973;
        for (var_59h = 0; var_59h < 0x10; var_59h = var_59h + 1) {
            var_24h = 0x11;
            if (var_59h == 0) {
                for (var_84h = -3; var_84h != 1; var_84h = var_84h + 2) {
                    var_29h = ((var_14h == 5) != 0xfffffffe) + -1;
                }
                var_14h = 0x8c;
                var_8ch = 0;
            }
            if (var_29h != '\0') break;
        }
        var_54h = var_8ch | var_50h;
        var_55h = var_55h - 1;
        var_18h = var_18h + 1;
        var_50h = var_54h;
    } while( true );
}
