
// WARNING: Removing unreachable block (ram,0x00001ba2)
// WARNING: Removing unreachable block (ram,0x00001bbb)
// WARNING: Removing unreachable block (ram,0x00001bc8)
// WARNING: Removing unreachable block (ram,0x00001904)
// WARNING: Removing unreachable block (ram,0x0000161f)
// WARNING: Removing unreachable block (ram,0x00001793)
// WARNING: Removing unreachable block (ram,0x000015d9)
// WARNING: Removing unreachable block (ram,0x000018a6)
// WARNING: Removing unreachable block (ram,0x000018d0)
// WARNING: Removing unreachable block (ram,0x000018dd)
// WARNING: Removing unreachable block (ram,0x000015ad)
// WARNING: Removing unreachable block (ram,0x000015c5)
// WARNING: Removing unreachable block (ram,0x000015ca)
// WARNING: Removing unreachable block (ram,0x000015d4)
// WARNING: Removing unreachable block (ram,0x0000165d)
// WARNING: Removing unreachable block (ram,0x00001b79)

uint32_t sym.func_1(void)

{
    uint var_13ch;
    uint var_138h;
    uint var_132h;
    uint var_12bh;
    uint var_124h;
    uint var_120h;
    uint var_119h;
    uint var_114h;
    uint var_10eh;
    uint var_107h;
    uint var_100h;
    uint var_fch;
    uint var_f8h;
    uint var_f2h;
    uint var_e8h;
    uint var_e1h;
    uint var_dch;
    uint var_d6h;
    uint var_cfh;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b6h;
    uint var_afh;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_74h;
    uint var_6dh;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint32_t var_54h;
    uint var_50h;
    uint var_4ch;
    uint32_t var_48h;
    uint var_44h;
    uint32_t var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint16_t var_2eh;
    uint var_2ch;
    uint32_t var_28h;
    uint8_t var_23h;
    uint8_t var_22h;
    uint var_20h;
    int32_t var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_22h = 0xab;
    var_23h = 0x28;
    var_2eh = 0xbe38;
    var_40h = 0xffffffff;
    var_54h = 0x70bfa85f;
    var_18h = -0xc;
    var_14h = 0xa8c6a53d;
    var_28h = 0xfffffffa;
    var_48h = 0;
    while( true ) {
        if (var_48h < 8) {
            sym.set_var(var_14h, (var_2eh <= (var_48h & 1)) % var_2eh, 0x60bc, 0xfffffffe, 0xffffff90, var_22h, var_23h
                        , var_28h, 0, var_2eh, 100, 1, 0x9491b29f, 0xfffffffa, var_40h);
            return 0xffffffff;
        }
        var_2eh = 0x32;
        if (var_14h < 0x32) {
            for (var_23h = 0xea; 0x21 < var_23h; var_23h = var_23h + 1) {
                for (var_18h = 0; 3 < var_18h; var_18h = var_18h + 3) {
                }
            }
        }
        else {
            var_14h = var_23h == 1 ^ 8;
            var_28h = 0;
        }
        var_54h = var_54h | 1;
        if (var_54h == 0) break;
        var_22h = 0xff;
        var_40h = 1 < var_23h | var_40h;
        var_28h = (var_40h ^ 100) % 0x4a484df5 < 9;
        var_18h = 0xff;
        var_48h = var_48h + 1;
    }
    sym.set_var(var_14h, var_18h, 0x60bc, 0xfffffffe, 0xffffff90, var_22h, var_23h, var_28h, 0, 0x32, 100, 1, 0x9491b29f
                , 0xfffffffa, var_40h);
    return var_14h;
}
