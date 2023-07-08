
// WARNING: Removing unreachable block (ram,0x00001dbb)
// WARNING: Removing unreachable block (ram,0x00001c4a)
// WARNING: Removing unreachable block (ram,0x00001dcc)
// WARNING: Removing unreachable block (ram,0x00001dfb)
// WARNING: Removing unreachable block (ram,0x00001e0b)
// WARNING: Removing unreachable block (ram,0x00001e85)
// WARNING: Removing unreachable block (ram,0x00001e98)
// WARNING: Removing unreachable block (ram,0x00001736)
// WARNING: Removing unreachable block (ram,0x00001c76)
// WARNING: Removing unreachable block (ram,0x00001c7d)
// WARNING: Removing unreachable block (ram,0x00001c87)
// WARNING: Removing unreachable block (ram,0x00001d42)
// WARNING: Removing unreachable block (ram,0x00001d4f)
// WARNING: Removing unreachable block (ram,0x00001d7c)
// WARNING: Removing unreachable block (ram,0x00001d89)
// WARNING: Removing unreachable block (ram,0x00001ee7)
// WARNING: Removing unreachable block (ram,0x000019f5)
// WARNING: Removing unreachable block (ram,0x0000171e)
// WARNING: Removing unreachable block (ram,0x000015dc)
// WARNING: Removing unreachable block (ram,0x00001707)

uint sym.func_1(void)

{
    uint var_140h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_127h;
    uint var_11ch;
    uint var_118h;
    uint var_10dh;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dbh;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bbh;
    uint var_b4h;
    uint var_aeh;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_8eh;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_6ch;
    char var_65h;
    uint var_64h;
    uint32_t var_60h;
    int32_t var_5ch;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint32_t var_48h;
    uint var_40h;
    uint var_34h;
    uint16_t var_2eh;
    int16_t var_2ch;
    uint8_t var_29h;
    uint32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_bp_10h;
    
    var_18h = 0;
    var_28h = 0x22f0f5b8;
    var_29h = 0xf7;
    var_2ch = -0x11ae;
    var_2eh = 0xffff;
    var_34h = 0;
    var_60h = 0xfffffffb;
    var_65h = '\x13';
    for (var_48h = 0xfffffff6; var_48h != 0xffffffe5; var_48h = var_48h - 1) {
        for (var_5ch = 0x19; 0x11 < var_5ch; var_5ch = var_5ch + -2) {
            var_65h = var_65h + -1;
            var_29h = 1;
            var_2ch = 0;
            var_28h = var_28h < ((var_48h & 0xff) != 0x105);
        }
        var_2eh = var_29h ^ 0x8302;
        var_34h = 9;
        if (((var_65h >> 1 <= var_5ch) << 1) * -0x12 == 0) {
            if (var_60h == 0) {
                var_18h = 0xc8d1ea51;
            }
        }
        else {
            var_60h = var_60h ^ 1;
        }
    }
    sym.set_var(0xe1757117, var_18h, 0xebaeef20, 6, 0x48718302, var_28h, var_29h, var_2ch, var_2eh, var_34h, 0, 
                0xffffffff, 0x7e, 0x907af384, 0x56a0);
    return 0x48718302;
}
