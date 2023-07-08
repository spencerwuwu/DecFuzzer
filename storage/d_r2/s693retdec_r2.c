
// WARNING: Removing unreachable block (ram,0x00001c53)
// WARNING: Removing unreachable block (ram,0x00001ef3)
// WARNING: Removing unreachable block (ram,0x00001a6f)
// WARNING: Removing unreachable block (ram,0x00001a95)
// WARNING: Removing unreachable block (ram,0x00001aa5)
// WARNING: Removing unreachable block (ram,0x00001ad6)
// WARNING: Removing unreachable block (ram,0x00001ae3)
// WARNING: Removing unreachable block (ram,0x0000220b)
// WARNING: Removing unreachable block (ram,0x00001b5f)
// WARNING: Removing unreachable block (ram,0x00001b91)
// WARNING: Removing unreachable block (ram,0x00001bec)
// WARNING: Removing unreachable block (ram,0x00001c9f)
// WARNING: Removing unreachable block (ram,0x00001caf)
// WARNING: Removing unreachable block (ram,0x00001887)
// WARNING: Removing unreachable block (ram,0x000020c5)
// WARNING: Removing unreachable block (ram,0x000018bc)
// WARNING: Removing unreachable block (ram,0x000021f1)

uint sym.func_1(void)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint var_16ch;
    uint var_168h;
    uint var_164h;
    uint var_160h;
    uint var_15ch;
    uint var_158h;
    uint var_154h;
    uint var_14dh;
    uint var_141h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_121h;
    uint var_110h;
    uint var_10ch;
    uint var_108h;
    uint var_100h;
    uint var_fah;
    uint var_f1h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d3h;
    uint var_cch;
    uint var_c8h;
    uint var_c0h;
    uint var_b9h;
    uint var_b0h;
    uint32_t var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_96h;
    uint var_90h;
    uint var_8ch;
    uint16_t var_86h;
    uint var_84h;
    uint var_80h;
    int32_t var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    int16_t var_68h;
    uint32_t var_64h;
    uint var_60h;
    char var_59h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint16_t var_44h;
    uint8_t var_41h;
    uint var_40h;
    uint32_t var_3ch;
    char var_37h;
    uint var_34h;
    uint16_t var_30h;
    char var_2dh;
    uint32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint var_1ch;
    uint var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_14h = 0xc03342eb;
    var_20h = 0xf54c3c69;
    var_28h = 0x34b0b4ef;
    var_2ch = 0xbf118c84;
    var_2dh = -0x46;
    var_30h = 8;
    var_37h = '\x06';
    var_3ch = 0xffffffff;
    var_40h = 0x155c2003;
    var_41h = 0x36;
    var_44h = 2;
    var_24h = 0;
    do {
        if (-0x18 < var_24h) {
            sym.set_var(var_14h, 0xa115252c, 1, var_20h, var_24h, var_28h, var_2ch, var_2dh, var_30h, 0x3c1d2601, 0x395f
                        , var_37h, var_3ch, var_40h, var_41h, var_44h, 0x2b96);
            return 0x395f;
        }
        var_68h = -0x4830;
        iVar2 = var_24h;
        uVar1 = var_20h / iVar2;
        var_28h = (uVar1 & 0xff) * iVar2;
        if (uVar1 == '\0') {
            var_59h = '\x1d';
            while ((var_59h != '\v' && (var_28h == 0))) {
                var_2ch = var_2ch + 1;
                var_2dh = -1;
                if (((-(var_24h & 0xff) / 0xb8575526 ^ 0x7610) - iVar2 & 0xffffU) + (var_24h & 0xffff) == 0) {
                    var_14h = (((var_3ch < 0x29c1e949) * var_68h) % 0x5a4a7757 + 0xb8575526) % 1 | var_20h;
                }
                else {
                    var_86h = 0x75f0;
                    var_68h = var_2ch;
                    var_30h = 0;
                    var_20h = var_20h | 1;
                    if (var_24h == 0 && var_14h == 0) {
                        sym.set_var(var_14h, 0xa115252c, 1, var_20h, var_24h, 0, var_2ch, 0xffffffff, 0, 0x3c1d2601, 
                                    0x395f, var_37h, var_3ch, var_40h, var_41h, var_44h, 0x2b96);
                        return 0;
                    }
                    var_7ch = 0;
                    while (var_7ch == 0x19) {
                        var_a8h = 0xffffffff;
                        var_37h = '\x01';
                        var_64h = (var_2ch == 0 & var_2ch) * -4 | var_2ch;
                        for (var_28h = 9; 0x1c < var_28h; var_28h = var_28h + 1) {
                            var_64h = var_a8h ^ var_64h;
                            var_14h = var_86h == 0;
                            var_2ch = var_2ch + 1;
                            var_a8h = var_2ch == 0x2f49 ^ var_a8h;
                            var_20h = (0x5807e84 < ((0x1a < (var_a8h & 0xffff) >> 9) % 0x49) * (var_64h & 0xff)) +
                                      (var_68h & 0xffffU) | var_20h;
                            var_3ch = var_64h;
                        }
                        for (var_86h = 0xb; var_86h < 0x10; var_86h = var_86h + 3) {
                            var_41h = var_41h - 1;
                        }
                        var_44h = var_44h | 1;
                        var_7ch = 0x1a;
                    }
                    var_40h = 0;
                }
                var_59h = var_59h + -9;
            }
        }
        var_24h = var_24h - 2;
    } while( true );
}
