
// WARNING: Removing unreachable block (ram,0x00002043)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001f3b)
// WARNING: Removing unreachable block (ram,0x00001f5b)
// WARNING: Removing unreachable block (ram,0x00001fae)
// WARNING: Removing unreachable block (ram,0x0000171c)
// WARNING: Removing unreachable block (ram,0x00001795)
// WARNING: Removing unreachable block (ram,0x000017a5)
// WARNING: Removing unreachable block (ram,0x0000195c)
// WARNING: Removing unreachable block (ram,0x000019f3)
// WARNING: Removing unreachable block (ram,0x00001a08)
// WARNING: Removing unreachable block (ram,0x00001a15)
// WARNING: Removing unreachable block (ram,0x00001a2c)
// WARNING: Removing unreachable block (ram,0x00001a41)
// WARNING: Removing unreachable block (ram,0x00001a51)
// WARNING: Removing unreachable block (ram,0x00001a7c)
// WARNING: Removing unreachable block (ram,0x00001aad)
// WARNING: Removing unreachable block (ram,0x00001abd)
// WARNING: Removing unreachable block (ram,0x00001b94)
// WARNING: Removing unreachable block (ram,0x00001bba)
// WARNING: Removing unreachable block (ram,0x00001bc7)
// WARNING: Removing unreachable block (ram,0x000017c4)
// WARNING: Removing unreachable block (ram,0x000017d1)
// WARNING: Removing unreachable block (ram,0x000017de)
// WARNING: Removing unreachable block (ram,0x00001828)
// WARNING: Removing unreachable block (ram,0x00001840)
// WARNING: Removing unreachable block (ram,0x0000184d)
// WARNING: Removing unreachable block (ram,0x00001883)
// WARNING: Removing unreachable block (ram,0x00001914)
// WARNING: Removing unreachable block (ram,0x00001921)
// WARNING: Removing unreachable block (ram,0x00001957)
// WARNING: Removing unreachable block (ram,0x00001bf8)
// WARNING: Removing unreachable block (ram,0x000016d0)
// WARNING: Removing unreachable block (ram,0x00001c01)
// WARNING: Removing unreachable block (ram,0x00001c0e)
// WARNING: Removing unreachable block (ram,0x00001c85)
// WARNING: Removing unreachable block (ram,0x00001c92)
// WARNING: Removing unreachable block (ram,0x00001cdd)
// WARNING: Removing unreachable block (ram,0x00001e04)
// WARNING: Removing unreachable block (ram,0x00001e8c)
// WARNING: Removing unreachable block (ram,0x00001efd)

int32_t sym.func_1(void)

{
    char cVar1;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_f4h;
    uint var_f0h;
    uint var_ebh;
    uint var_e4h;
    uint var_dch;
    uint var_d4h;
    uint var_cch;
    uint var_c4h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_95h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    int32_t var_48h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint32_t var_34h;
    uint16_t var_30h;
    uint var_2ch;
    uint8_t var_23h;
    int32_t var_20h;
    char var_1bh;
    uint var_18h;
    uint var_14h;
    uint var_dh;
    
    var_1bh = -0xf;
    var_20h = 1;
    var_23h = 7;
    var_2ch = 0;
    var_30h = 1;
    cVar1 = '\x01';
    for (var_34h = 0xffffffe9; var_34h < 0x10; var_34h = var_34h + 1) {
        cVar1 = cVar1 + '\x01';
        var_1bh = '\0';
        var_20h = var_20h + 1;
        var_23h = var_23h - 1;
        for (var_48h = 5; 3 < var_48h; var_48h = var_48h + -5) {
            var_30h = var_30h + 1;
        }
        var_2ch = 1;
    }
    sym.set_var(0xffffffff, 0x3f7e813a, 0x5240, var_1bh, var_20h, 0xffffdc57, var_23h, 0, var_2ch, 0, var_30h);
    return cVar1;
}
