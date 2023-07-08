
// WARNING: Removing unreachable block (ram,0x00001658)
// WARNING: Removing unreachable block (ram,0x00001cef)
// WARNING: Removing unreachable block (ram,0x00001d54)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001c45)
// WARNING: Removing unreachable block (ram,0x00001c65)
// WARNING: Removing unreachable block (ram,0x00001c72)
// WARNING: Removing unreachable block (ram,0x0000156c)
// WARNING: Removing unreachable block (ram,0x00001969)
// WARNING: Removing unreachable block (ram,0x000016f3)
// WARNING: Removing unreachable block (ram,0x000017c6)
// WARNING: Removing unreachable block (ram,0x00001735)
// WARNING: Removing unreachable block (ram,0x000018d8)
// WARNING: Removing unreachable block (ram,0x00001909)
// WARNING: Removing unreachable block (ram,0x00001931)
// WARNING: Removing unreachable block (ram,0x00001941)
// WARNING: Removing unreachable block (ram,0x00001a53)
// WARNING: Removing unreachable block (ram,0x00001a9a)
// WARNING: Removing unreachable block (ram,0x00001aa7)
// WARNING: Removing unreachable block (ram,0x000015a7)

uchar sym.func_1(void)

{
    uint var_ech;
    uint var_e6h;
    uint var_d4h;
    uint var_d0h;
    uint var_c9h;
    uint var_c2h;
    uint var_b1h;
    uint var_ach;
    uint var_a4h;
    uint var_9eh;
    uint var_90h;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_77h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint32_t var_34h;
    uint var_30h;
    uint var_2ch;
    uint32_t var_24h;
    uint8_t var_1bh;
    char var_15h;
    uint var_14h;
    uint var_dh;
    
    var_1bh = 0xa7;
    var_24h = 0x2945289e;
    var_30h = 0x47eb93d7;
    var_34h = 9;
    var_38h = 0xeb00d6;
    for (var_15h = '\x16'; -0x1c < var_15h; var_15h = var_15h + -1) {
        var_1bh = var_15h != '\t';
        for (var_24h = 0; var_24h < 6; var_24h = var_24h + 1) {
            var_30h = 1;
            var_38h = 0x960;
            var_34h = var_24h != 0;
        }
    }
    sym.set_var(0xea75c96, var_15h, 1, 0xffffc7d2, 0x374f, var_1bh, 0xa247, var_24h, 0, 0x32c37782, var_30h, var_34h, 
                var_38h);
    return var_24h;
}
