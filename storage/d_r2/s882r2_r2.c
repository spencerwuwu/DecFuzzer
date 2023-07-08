
// WARNING: Removing unreachable block (ram,0x00001544)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001537)
// WARNING: Removing unreachable block (ram,0x00001616)
// WARNING: Removing unreachable block (ram,0x00001639)
// WARNING: Removing unreachable block (ram,0x00001646)
// WARNING: Removing unreachable block (ram,0x000016b8)
// WARNING: Removing unreachable block (ram,0x000017b6)
// WARNING: Removing unreachable block (ram,0x00001804)
// WARNING: Removing unreachable block (ram,0x00001811)
// WARNING: Removing unreachable block (ram,0x000016d1)
// WARNING: Removing unreachable block (ram,0x00001706)
// WARNING: Removing unreachable block (ram,0x00001710)
// WARNING: Removing unreachable block (ram,0x000018e5)

uchar sym.func_1(void)

{
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_91h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint8_t var_29h;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_dh;
    
    var_18h = 0x2eb90da1;
    var_20h = 0xffffffff;
    var_28h = 0;
    var_29h = 200;
    for (var_24h = -4; -0x1d < var_24h; var_24h = var_24h + -6) {
        var_28h = var_28h ^ 0xfffffff3;
        var_29h = var_29h ^ 5;
        var_20h = (var_28h != 0xeaf6) + var_24h < 0x565e;
        var_18h = 0xfffffffc;
    }
    sym.set_var(1, var_18h, 0x52cb1363, var_20h, var_24h, var_28h, var_29h, 0x10, 0x17005583, 0, 0x8375f08);
    return 0x83;
}
