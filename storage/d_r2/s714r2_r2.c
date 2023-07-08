
// WARNING: Removing unreachable block (ram,0x00001bdb)
// WARNING: Removing unreachable block (ram,0x000018c2)
// WARNING: Removing unreachable block (ram,0x000015e7)
// WARNING: Removing unreachable block (ram,0x0000160e)
// WARNING: Removing unreachable block (ram,0x0000161e)
// WARNING: Removing unreachable block (ram,0x00001656)
// WARNING: Removing unreachable block (ram,0x00001663)
// WARNING: Removing unreachable block (ram,0x00001adc)
// WARNING: Removing unreachable block (ram,0x00001b16)
// WARNING: Removing unreachable block (ram,0x00001b23)
// WARNING: Removing unreachable block (ram,0x00001b4b)
// WARNING: Removing unreachable block (ram,0x00001b50)
// WARNING: Removing unreachable block (ram,0x00001b65)
// WARNING: Removing unreachable block (ram,0x00001b69)
// WARNING: Removing unreachable block (ram,0x00001b76)
// WARNING: Removing unreachable block (ram,0x00001c0f)
// WARNING: Removing unreachable block (ram,0x00001cf8)
// WARNING: Removing unreachable block (ram,0x000018ac)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_116h;
    uint var_110h;
    uint var_10ah;
    uint var_104h;
    uint var_100h;
    uint var_fbh;
    uint var_f4h;
    uint var_eeh;
    uint var_e8h;
    uint var_e4h;
    uint var_dch;
    uint var_d6h;
    uint var_d0h;
    uint var_c9h;
    uint var_c1h;
    uint var_bch;
    uint var_b6h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_89h;
    uint var_84h;
    uint var_7dh;
    uint var_74h;
    uint var_6fh;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint32_t var_44h;
    uint32_t var_40h;
    uint16_t var_3ah;
    uint32_t var_38h;
    uint var_30h;
    uint8_t var_2ah;
    uint8_t var_29h;
    uint var_28h;
    uint32_t var_24h;
    char var_1dh;
    uint32_t var_1ch;
    uint var_18h;
    uint var_12h;
    
    var_12h._0_2_ = 0xd7f;
    var_1dh = '\x04';
    var_24h = 0xd6b9c2d6;
    var_29h = 0xfc;
    var_2ah = 7;
    var_38h = 0xec94644a;
    var_3ah = 0xffff;
    var_40h = 0;
    for (var_44h = 0xffffffee; var_44h < 0x17; var_44h = var_44h + 1) {
        for (var_12h._0_2_ = 0x14; var_12h < 8; var_12h._0_2_ = var_12h + -8) {
            var_1dh = '\0';
            var_24h = (1 % 0 ^ 0xffff) + 0xf6;
            var_29h = 1;
        }
        var_40h = -1 < var_40h | var_29h;
    }
    for (var_1ch = 0xfffffff8; var_1ch < 0x11; var_1ch = var_1ch + 1) {
        if ((var_1ch & 0xff) >> 6 != var_44h) {
            var_44h = var_29h & var_44h;
        }
        var_2ah = var_44h & var_29h;
        if (var_2ah < var_1ch) {
            if (var_29h != 0) break;
            if ((var_3ah ^ 1) / 0xc942 != 0) {
                sym.set_var(var_12h, 0xffffffff, var_1ch, var_1dh, var_24h, 0x9d20578c, 0, var_2ah, 0xffffffcc, 
                            0xbcd962f9, 5, var_38h, var_3ah ^ 1);
                return 0xfffffffa;
            }
            var_29h = 1;
            var_3ah = 1;
            var_38h = var_38h & 0x170593e5;
        }
        else {
            if ((((-1 < var_44h) / var_24h != -0x8bc ^ 0xffU) & 1) == 0x62dfa874) {
                sym.set_var(0xfffff744, 0xffffffff, var_1ch, var_1dh, var_24h, 0x9d20578c, var_29h, 
                            ((var_40h & 0xfffffffa | 9) < var_29h != 0xe364) != var_24h, 0xffffffcc, 0xbcd962f9, 5, 
                            var_38h, var_3ah);
                return 0x2a;
            }
            for (var_40h = 0xfffffffd; var_40h < 5; var_40h = var_40h + 5) {
            }
            var_12h._0_2_ = -0x8bc;
        }
        var_44h = 0;
    }
    sym.set_var(var_12h, 0xffffffff, var_1ch, var_1dh, var_24h, 0x9d20578c, var_29h, var_2ah, 0xffffffcc, 0xbcd962f9, 5
                , var_38h, var_3ah);
    return 0xffffffcc;
}
