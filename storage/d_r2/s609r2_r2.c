
// WARNING: Removing unreachable block (ram,0x000019b8)
// WARNING: Removing unreachable block (ram,0x00001e3a)
// WARNING: Removing unreachable block (ram,0x00001d20)
// WARNING: Removing unreachable block (ram,0x00001fcc)
// WARNING: Removing unreachable block (ram,0x00001d2d)
// WARNING: Removing unreachable block (ram,0x00001d8e)
// WARNING: Removing unreachable block (ram,0x00001daa)
// WARNING: Removing unreachable block (ram,0x00001dd2)
// WARNING: Removing unreachable block (ram,0x00001ddf)
// WARNING: Removing unreachable block (ram,0x00001e07)
// WARNING: Removing unreachable block (ram,0x00001e14)
// WARNING: Removing unreachable block (ram,0x00001e76)
// WARNING: Removing unreachable block (ram,0x000023c0)
// WARNING: Removing unreachable block (ram,0x00002344)
// WARNING: Removing unreachable block (ram,0x000018e2)
// WARNING: Removing unreachable block (ram,0x00001996)
// WARNING: Removing unreachable block (ram,0x000019a8)
// WARNING: Removing unreachable block (ram,0x00001a13)
// WARNING: Removing unreachable block (ram,0x000022f3)
// WARNING: Removing unreachable block (ram,0x00001712)
// WARNING: Removing unreachable block (ram,0x00001a90)
// WARNING: Removing unreachable block (ram,0x00002537)
// WARNING: Removing unreachable block (ram,0x00001a8b)

uint sym.func_1(void)

{
    uint8_t uVar1;
    uint var_1d0h;
    uint var_1cch;
    uint var_1c8h;
    uint var_1c4h;
    uint var_1c0h;
    uint var_1bbh;
    uint var_1b3h;
    uint var_1ach;
    uint var_1a8h;
    uint var_1a4h;
    uint var_1a0h;
    uint var_19ch;
    uint var_197h;
    uint var_18fh;
    uint var_183h;
    uint var_17ch;
    uint var_178h;
    uint var_174h;
    uint var_170h;
    uint var_16bh;
    uint var_163h;
    uint var_15ch;
    uint var_158h;
    uint var_154h;
    uint var_150h;
    uint var_14ch;
    uint var_147h;
    uint var_13fh;
    uint var_135h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_11fh;
    uint var_117h;
    uint var_110h;
    uint var_10ch;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_fbh;
    uint var_f3h;
    uint var_e8h;
    uint var_e4h;
    uint var_ddh;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c7h;
    uint var_bfh;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a6h;
    uint var_a0h;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint32_t var_54h;
    char var_4dh;
    uint32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    uint8_t var_2dh;
    uint var_2ch;
    uint8_t var_27h;
    uint8_t var_25h;
    int32_t var_24h;
    uint var_20h;
    uint var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint var_10h;
    
    var_14h = -6;
    var_18h = 0x318d5816;
    var_24h = 5;
    var_25h = 0xe8;
    var_27h = 100;
    uVar1 = 0xbb;
    var_2dh = 0xff;
    var_44h = -0x28b53038;
    var_48h = 0xed58cdb4;
    var_4ch = 0xfffffff6;
    var_4dh = -0x71;
    var_54h = 0;
    do {
        if (0x11 < var_54h) {
            sym.set_var(var_14h, var_18h, 0, 0xfffffffd, var_24h, var_25h, 0xf7, var_27h, 0xfffffff2, var_2dh, 0x255f, 
                        0xffffc34e, 0xb8c27a4a, 0x7adb25b5, var_44h, var_48h, var_4ch, var_4dh);
            return 0x84;
        }
        for (var_18h = 0; 0x17 < var_18h; var_18h = var_18h + 1) {
            var_24h = var_24h + -1;
            if (var_14h != 0) {
                var_25h = 0xf8;
                var_14h = 0;
                var_27h = var_27h | ((var_18h + 1U & 0xff) / (var_18h & 0xff)) / var_18h;
                break;
            }
            var_2dh = uVar1;
            if ((var_18h + var_44h ^ 0xff) * -0x3b == 0) {
                var_48h = var_48h ^ 2;
                var_14h = var_24h;
                var_2dh = 0x4a;
            }
            var_4ch = var_4ch & 0xfffffffa;
            var_44h = var_44h + 1;
            uVar1 = var_2dh;
        }
        var_4dh = var_27h < 1 / 0;
        var_4ch = (var_4ch & 0xff) != 0xffffff2d;
        var_54h = var_54h + 8;
    } while( true );
}
