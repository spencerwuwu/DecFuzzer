
// WARNING: Removing unreachable block (ram,0x000018ab)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001574)
// WARNING: Removing unreachable block (ram,0x0000159d)
// WARNING: Removing unreachable block (ram,0x000015a7)
// WARNING: Removing unreachable block (ram,0x000015c8)
// WARNING: Removing unreachable block (ram,0x000015d2)
// WARNING: Removing unreachable block (ram,0x00001530)
// WARNING: Removing unreachable block (ram,0x0000153f)
// WARNING: Removing unreachable block (ram,0x000014b3)
// WARNING: Removing unreachable block (ram,0x000014c2)
// WARNING: Removing unreachable block (ram,0x000014bd)
// WARNING: Removing unreachable block (ram,0x000017b5)
// WARNING: Removing unreachable block (ram,0x0000174c)
// WARNING: Removing unreachable block (ram,0x000015f9)
// WARNING: Removing unreachable block (ram,0x0000165e)
// WARNING: Removing unreachable block (ram,0x00001668)
// WARNING: Removing unreachable block (ram,0x00001683)
// WARNING: Removing unreachable block (ram,0x00001781)
// WARNING: Removing unreachable block (ram,0x000017db)
// WARNING: Removing unreachable block (ram,0x000017e5)
// WARNING: Removing unreachable block (ram,0x0000167e)

uchar sym.func_1(void)

{
    int16_t iVar1;
    uint var_81h;
    uint var_79h;
    uint var_70h;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint8_t var_35h;
    uint16_t var_34h;
    uint var_30h;
    uint16_t var_2ch;
    uint32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint var_18h;
    uint var_14h;
    uint var_dh;
    
    var_14h = 9;
    var_18h = 0x6f1860ec;
    var_28h = 0x1aac2b22;
    iVar1 = -2;
    var_34h = 0xffff;
    var_35h = 0x5e;
    for (var_2ch = 0x1a; var_2ch < 0xd; var_2ch = var_2ch - 1) {
        var_18h = 0xffffffff;
        if (var_2ch == 0) {
            var_28h = 0;
            var_34h = 0;
            var_35h = var_35h ^ iVar1 < 0xfa;
            iVar1 = 0;
        }
        var_14h = 0;
    }
    sym.set_var(var_14h, var_18h, 0xfa, var_35h | 1, 0, var_28h, ((var_28h | 0x7dc9) & 0xfa) % var_34h);
    return 0;
}
