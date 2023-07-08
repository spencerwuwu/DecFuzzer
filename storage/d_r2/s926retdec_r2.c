
// WARNING: Removing unreachable block (ram,0x00001801)
// WARNING: Removing unreachable block (ram,0x00001813)
// WARNING: Removing unreachable block (ram,0x0000184b)
// WARNING: Removing unreachable block (ram,0x00001858)
// WARNING: Removing unreachable block (ram,0x0000188e)
// WARNING: Removing unreachable block (ram,0x0000189e)
// WARNING: Removing unreachable block (ram,0x000018aa)

uint sym.func_1(void)

{
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_beh;
    uint var_b4h;
    uint var_aeh;
    uint var_a6h;
    uint var_9dh;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint32_t var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    int32_t var_4ch;
    char var_45h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint32_t var_2ch;
    int32_t var_28h;
    uint16_t var_22h;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint var_18h;
    uint var_14h;
    int32_t var_10h;
    
    var_1eh = 0x791f;
    var_22h = 1;
    var_28h = -0x2a4ed738;
    var_2ch = 0x9f167e62;
    var_44h = 0xd5734c63;
    var_45h = '\x01';
    for (var_10h = 0x1a; -0x18 < var_10h; var_10h = var_10h + -8) {
        for (var_1ch = 0; 0xe < var_1ch; var_1ch = var_1ch + 1) {
            var_4ch = 0;
            while (var_4ch == 0x1c) {
                var_4ch = 0x1d;
            }
        }
        var_60h = 0xffffffeb;
        while ((var_60h != 0xfffffff0 && (var_1eh = 0 / var_1eh,  (var_1eh & var_10h) != 0))) {
            var_22h = var_22h - 1;
            var_1ch = -8;
            var_28h = var_28h + 1;
            var_60h = var_60h + 5;
        }
        var_2ch = -(var_1ch ^ 1) & var_60h;
    }
    if (var_22h == 0) {
        var_44h = 0xd5734c62;
        var_45h = 'b';
    }
    sym.set_var(var_10h, 0xfffffff8, 0, 1, var_1eh, 1, var_22h, var_28h, var_2ch, 0x48cc, 0x14, 0xff440556, 1, 0x39db, 
                0xe186b95f, var_44h, var_45h);
    return 1;
}
