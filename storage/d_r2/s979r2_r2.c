
// WARNING: Removing unreachable block (ram,0x000018b5)
// WARNING: Removing unreachable block (ram,0x000018d1)
// WARNING: Removing unreachable block (ram,0x000018f2)
// WARNING: Removing unreachable block (ram,0x000018fc)
// WARNING: Removing unreachable block (ram,0x0000191e)
// WARNING: Removing unreachable block (ram,0x00001605)
// WARNING: Removing unreachable block (ram,0x0000160c)
// WARNING: Removing unreachable block (ram,0x00001616)
// WARNING: Removing unreachable block (ram,0x00001620)
// WARNING: Removing unreachable block (ram,0x00001625)
// WARNING: Removing unreachable block (ram,0x00001638)
// WARNING: Removing unreachable block (ram,0x00001712)
// WARNING: Removing unreachable block (ram,0x0000171f)
// WARNING: Removing unreachable block (ram,0x00001729)
// WARNING: Removing unreachable block (ram,0x00001742)
// WARNING: Removing unreachable block (ram,0x00001749)
// WARNING: Removing unreachable block (ram,0x00001753)
// WARNING: Removing unreachable block (ram,0x00001769)
// WARNING: Removing unreachable block (ram,0x00001778)
// WARNING: Removing unreachable block (ram,0x00001773)
// WARNING: Removing unreachable block (ram,0x00001764)
// WARNING: Removing unreachable block (ram,0x0000177f)
// WARNING: Removing unreachable block (ram,0x0000178d)
// WARNING: Removing unreachable block (ram,0x00001797)
// WARNING: Removing unreachable block (ram,0x0000179c)
// WARNING: Removing unreachable block (ram,0x000018ab)

uint sym.func_1(void)

{
    uint32_t uVar1;
    uint var_90h;
    uint var_8ch;
    uint var_86h;
    uint var_7ch;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint16_t var_46h;
    uint var_44h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint32_t var_30h;
    uint16_t var_2ah;
    uint8_t var_25h;
    uint32_t var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    int32_t var_14h;
    int32_t var_10h;
    
    var_14h = 0x4981ff29;
    var_18h = 0xfffffff9;
    var_1ch = 0xd0336d06;
    var_24h = 0xf6251ca2;
    var_25h = 0;
    var_2ah = 0x6ff5;
    var_30h = 0x7222631;
    for (var_10h = 9; 5 < var_10h; var_10h = var_10h + -1) {
        uVar1 = -(var_30h & 0xffff) < 0xbbd0;
        var_14h = uVar1 + 1;
        if (var_14h < var_10h) {
            var_25h = var_25h - 1;
        }
        else {
            var_30h = var_10h + -0x36 < 1 | var_30h;
            var_24h = var_24h & 0x406d;
            var_46h = 0;
            while ((var_46h < 2 && (var_24h == 0))) {
                var_46h = var_46h + 1;
            }
            var_25h = var_25h | 0xac;
            var_14h = 0;
            var_18h = 0;
            var_1ch = 4;
            var_2ah = 0x98;
        }
        if (uVar1 != 0) break;
    }
    sym.set_var(var_10h, var_14h, var_18h, var_1ch, 0xa0997736, var_24h, var_25h, 0xffff9353, var_2ah);
    return 0xffff9353;
}
