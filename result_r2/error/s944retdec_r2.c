
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x000015f8)
// WARNING: Removing unreachable block (ram,0x00001590)
// WARNING: Removing unreachable block (ram,0x000015a8)
// WARNING: Removing unreachable block (ram,0x00001602)
// WARNING: Removing unreachable block (ram,0x00001634)
// WARNING: Removing unreachable block (ram,0x0000163e)

uint sym.func_1(void)

{
    uint var_5bh;
    uint var_50h;
    uint var_4ah;
    uint var_40h;
    uint32_t var_3bh;
    uint var_34h;
    int32_t var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint var_18h;
    int16_t var_12h;
    int16_t var_10h;
    uint var_dh;
    
    var_10h = 0;
    var_12h = 0;
    stack0xffffffc4 = 0xb6890635;
    for (var_2ch = 0; var_2ch < -0x16; var_2ch = var_2ch + -1) {
        var_10h = 1;
        var_12h = 1 % (stack0xffffffc4 & 0xff | 1) + 5;
        unique0x100000e2 = stack0xffffffc4 | 1;
    }
    sym.set_var(1, var_10h, var_12h, 0x887, 0xfffffffe, 2, 0xfb, 1);
    return 0xfe6e3245;
}
