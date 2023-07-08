
// WARNING: Removing unreachable block (ram,0x00001a41)
// WARNING: Removing unreachable block (ram,0x00001a4b)
// WARNING: Removing unreachable block (ram,0x00001a63)
// WARNING: Removing unreachable block (ram,0x00001de7)
// WARNING: Removing unreachable block (ram,0x00001ae4)
// WARNING: Removing unreachable block (ram,0x00001da2)
// WARNING: Removing unreachable block (ram,0x00001dc2)
// WARNING: Removing unreachable block (ram,0x00001dcc)
// WARNING: Removing unreachable block (ram,0x00001e26)
// WARNING: Removing unreachable block (ram,0x00001e36)
// WARNING: Removing unreachable block (ram,0x00001e56)
// WARNING: Removing unreachable block (ram,0x00001680)
// WARNING: Removing unreachable block (ram,0x00001e71)
// WARNING: Removing unreachable block (ram,0x000015ad)
// WARNING: Removing unreachable block (ram,0x00001637)
// WARNING: Removing unreachable block (ram,0x00001644)
// WARNING: Removing unreachable block (ram,0x00001716)
// WARNING: Removing unreachable block (ram,0x00001838)
// WARNING: Removing unreachable block (ram,0x00001720)
// WARNING: Removing unreachable block (ram,0x0000175a)
// WARNING: Removing unreachable block (ram,0x00001c83)
// WARNING: Removing unreachable block (ram,0x0000175f)

uint sym.func_1(void)

{
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_12dh;
    uint var_128h;
    uint var_121h;
    uint var_11ch;
    uint var_118h;
    uint var_111h;
    uint var_10ch;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_f9h;
    uint var_f4h;
    uint var_ech;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_c9h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b1h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_99h;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_75h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint8_t var_31h;
    uint32_t var_30h;
    uint16_t var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint32_t var_18h;
    uint var_14h;
    uint var_bp_10h;
    
    var_1ch = 0;
    var_2ch = 0x4f79;
    var_30h = 0xffffffff;
    var_31h = 0xe5;
    var_18h = 0;
    while( true ) {
        if (-0x18 < var_18h) {
            sym.set_var(0xbac64a68, var_18h, var_1ch, 0xfffffff6, 0xffffffff, 3, 0xffffffb0, var_2ch, var_30h, var_31h, 
                        3, 0x89, 0x96703b86);
            return 0;
        }
        var_1ch = 0x250e;
        if (0x250d < var_18h) break;
        var_30h = var_30h & 1;
        var_31h = 3;
        var_2ch = var_2ch & 1;
        var_18h = var_18h - 3;
    }
    sym.set_var(0xbac64a68, var_18h, 0x250e, 0xfffffff6, 0xffffffff, 3, 0xffffffb0, var_2ch, var_30h, var_31h, 3, 0x89, 
                0x96703b86);
    return 0xfffffff6;
}
