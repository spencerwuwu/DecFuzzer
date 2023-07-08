
// WARNING: Removing unreachable block (ram,0x0000180d)
// WARNING: Removing unreachable block (ram,0x00001c22)
// WARNING: Removing unreachable block (ram,0x00001a70)
// WARNING: Removing unreachable block (ram,0x00001acb)
// WARNING: Removing unreachable block (ram,0x00001ad8)
// WARNING: Removing unreachable block (ram,0x000017fd)
// WARNING: Removing unreachable block (ram,0x000016a1)
// WARNING: Removing unreachable block (ram,0x00001786)
// WARNING: Removing unreachable block (ram,0x00001d5f)
// WARNING: Removing unreachable block (ram,0x00001d66)
// WARNING: Removing unreachable block (ram,0x00001d70)
// WARNING: Removing unreachable block (ram,0x00001d8d)
// WARNING: Removing unreachable block (ram,0x000017a9)
// WARNING: Removing unreachable block (ram,0x000017e5)
// WARNING: Removing unreachable block (ram,0x0000181f)
// WARNING: Removing unreachable block (ram,0x0000182d)
// WARNING: Removing unreachable block (ram,0x000018ad)
// WARNING: Removing unreachable block (ram,0x000018ba)
// WARNING: Removing unreachable block (ram,0x00001c03)
// WARNING: Removing unreachable block (ram,0x00001c0f)
// WARNING: Removing unreachable block (ram,0x000018d4)
// WARNING: Removing unreachable block (ram,0x0000190b)
// WARNING: Removing unreachable block (ram,0x0000191b)
// WARNING: Removing unreachable block (ram,0x0000194c)
// WARNING: Removing unreachable block (ram,0x0000195f)
// WARNING: Removing unreachable block (ram,0x00001af4)

uint sym.func_1(void)

{
    uint var_118h;
    uint var_112h;
    uint var_10ch;
    uint var_106h;
    uint var_fch;
    uint var_f6h;
    uint var_f0h;
    uint var_eah;
    uint var_ddh;
    uint var_d6h;
    uint var_d0h;
    uint var_cah;
    uint var_c0h;
    uint var_b9h;
    uint var_b2h;
    uint var_ach;
    uint var_a6h;
    uint var_9ch;
    uint var_94h;
    uint var_8fh;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_40h;
    uint var_38h;
    uint var_30h;
    int32_t var_2ch;
    uint16_t var_24h;
    uint16_t var_22h;
    uint32_t var_20h;
    uint var_1ch;
    char var_16h;
    uint8_t var_15h;
    uint var_14h;
    uint var_bp_10h;
    
    var_16h = '\x06';
    var_1ch = 0;
    var_20h = 0x56d20a2e;
    var_22h = 0xffff;
    var_24h = 0xffff;
    var_2ch = -1;
    for (var_15h = 0xed; 0x1a < var_15h; var_15h = var_15h + 5) {
        var_16h = -0x76;
        var_1ch = 0xfffffff0;
        var_20h = 0x8a >> (var_15h & 0x1f) | 9;
        var_22h = 0;
        var_24h = var_24h & 0xd3f7;
        var_2ch = var_2ch + -1;
    }
    sym.set_var(0x88d0d3f7, var_15h ^ 1, var_16h, var_1ch, var_20h, var_22h, var_24h, 1, var_2ch, 
                (var_15h ^ 1) * 2 <= (var_22h != 0), -1 < var_20h + 0x30, 0xffffffd4, 1, 1, 0xd4);
    return 5;
}
