
// WARNING: Removing unreachable block (ram,0x0000171f)
// WARNING: Removing unreachable block (ram,0x00001b9d)
// WARNING: Removing unreachable block (ram,0x00001607)
// WARNING: Removing unreachable block (ram,0x000014b3)
// WARNING: Removing unreachable block (ram,0x000014d2)
// WARNING: Removing unreachable block (ram,0x000014df)
// WARNING: Removing unreachable block (ram,0x000014fe)
// WARNING: Removing unreachable block (ram,0x0000150b)
// WARNING: Removing unreachable block (ram,0x000016c9)
// WARNING: Removing unreachable block (ram,0x0000178e)
// WARNING: Removing unreachable block (ram,0x0000188f)
// WARNING: Removing unreachable block (ram,0x00001947)
// WARNING: Removing unreachable block (ram,0x0000189a)
// WARNING: Removing unreachable block (ram,0x000018ac)
// WARNING: Removing unreachable block (ram,0x000018b9)
// WARNING: Removing unreachable block (ram,0x00001798)
// WARNING: Removing unreachable block (ram,0x000017a6)
// WARNING: Removing unreachable block (ram,0x000017b0)
// WARNING: Removing unreachable block (ram,0x000017c8)
// WARNING: Removing unreachable block (ram,0x000017d5)
// WARNING: Removing unreachable block (ram,0x000017f7)
// WARNING: Removing unreachable block (ram,0x00001804)
// WARNING: Removing unreachable block (ram,0x0000188a)
// WARNING: Removing unreachable block (ram,0x000019d7)
// WARNING: Removing unreachable block (ram,0x000019d2)
// WARNING: Removing unreachable block (ram,0x00001620)
// WARNING: Removing unreachable block (ram,0x0000157b)

ushort sym.func_1(void)

{
    uint var_c4h;
    uint var_bch;
    uint var_b8h;
    uint var_b1h;
    uint var_a9h;
    uint var_a0h;
    uint var_98h;
    uint var_8ch;
    uint var_84h;
    uint var_7ah;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    int32_t var_48h;
    uint var_40h;
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint32_t var_20h;
    uint8_t var_19h;
    uint var_18h;
    uint8_t var_11h;
    uint var_10h;
    
    var_19h = 1;
    var_20h = 0xffffffd1;
    for (var_11h = 0; 0x38 < var_11h; var_11h = var_11h + 8) {
        var_20h = var_20h ^ 0x9d776076;
    }
    for (var_48h = 0; var_48h != -8; var_48h = var_48h + -1) {
        var_19h = var_19h | 0x3a;
    }
    sym.set_var(0xf06, var_11h - 1, 0xba5e0b2f, var_19h, var_11h << 7, var_20h, 0x58fb5c4b, 2);
    return 0x5c4b;
}
