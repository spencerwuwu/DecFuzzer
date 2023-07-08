
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x000018c3)
// WARNING: Removing unreachable block (ram,0x00001905)
// WARNING: Removing unreachable block (ram,0x00001915)
// WARNING: Removing unreachable block (ram,0x00001980)
// WARNING: Removing unreachable block (ram,0x0000197b)
// WARNING: Removing unreachable block (ram,0x00001a9b)
// WARNING: Removing unreachable block (ram,0x00001aff)
// WARNING: Removing unreachable block (ram,0x00001b0c)
// WARNING: Removing unreachable block (ram,0x00001b60)
// WARNING: Removing unreachable block (ram,0x00001b5b)
// WARNING: Removing unreachable block (ram,0x00001d51)

uchar sym.func_1(void)

{
    char cVar1;
    uint var_13ah;
    uint var_131h;
    uint var_12ch;
    uint var_124h;
    uint var_11eh;
    uint var_115h;
    uint var_110h;
    uint var_109h;
    uint var_feh;
    uint var_f5h;
    uint var_f0h;
    uint var_e9h;
    uint var_e5h;
    uint var_deh;
    uint var_d5h;
    uint var_d0h;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    int32_t var_50h;
    int32_t var_48h;
    int16_t var_42h;
    uint16_t var_40h;
    uint16_t var_3eh;
    int32_t var_3ch;
    int32_t var_38h;
    uint16_t var_34h;
    uint var_30h;
    char var_29h;
    uint32_t var_28h;
    uint32_t var_24h;
    char var_1dh;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint var_dh;
    
    var_14h = 0xdae8c9f3;
    var_1dh = -0x70;
    var_24h = 0x6fe0855b;
    var_28h = 0xffffffff;
    var_29h = '\x06';
    var_34h = 0xc035;
    var_38h = -0x1fd0ee6e;
    var_3ch = -0x333a0aab;
    var_3eh = 0xffff;
    var_40h = 0;
    var_16h = 0;
    cVar1 = -10;
    for (var_1ch = 0; var_1ch != 0xfffffff7; var_1ch = var_1ch - 9) {
        var_48h = 0;
        while (var_48h == 0x14) {
            for (var_16h = 0; var_16h < 0x2d; var_16h = var_16h + 1) {
                var_42h = -3;
                while (var_42h == 0x35) {
                    if (var_16h == 0) {
                        var_1dh = '\x01';
                    }
                    var_24h = var_24h ^ 0xffffffff;
                    var_28h = (var_24h & 1) != 0;
                    var_14h = (var_1dh <= cVar1) % var_1ch & var_14h;
                    var_29h = var_14h;
                    var_34h = var_34h - 1;
                    var_42h = 0x36;
                }
            }
            var_48h = 0x15;
        }
        for (var_38h = -0xf; var_38h != 0xf; var_38h = var_38h + 1) {
            for (var_16h = 0; var_16h < 0x20; var_16h = var_16h + 5) {
                var_3eh = 0xf555;
                cVar1 = '\0';
            }
        }
    }
    for (var_50h = 0; -0x18 < var_50h; var_50h = var_50h + -9) {
        var_40h = var_40h + 1;
        var_3ch = var_40h * (var_24h & 0xff);
    }
    sym.set_var(var_14h, var_16h, 0xfffffff7, var_1dh, var_24h, var_28h, var_29h, 0xc574c3fc, 0xfffffffb, var_34h, 
                var_38h, var_3ch, var_3eh, var_40h);
    return 0x62;
}
