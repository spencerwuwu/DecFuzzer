
// WARNING: Removing unreachable block (ram,0x00001467)
// WARNING: Removing unreachable block (ram,0x000015c3)
// WARNING: Removing unreachable block (ram,0x00001634)
// WARNING: Removing unreachable block (ram,0x00001699)
// WARNING: Removing unreachable block (ram,0x000016a3)
// WARNING: Removing unreachable block (ram,0x000016c0)
// WARNING: Removing unreachable block (ram,0x000016ec)

uint sym.func_1(void)

{
    uint var_58h;
    bool var_52h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_1ch;
    uint32_t var_18h;
    uint16_t var_12h;
    uint32_t var_10h;
    
    var_12h = 0;
    var_18h = 0xb99bf0bb;
    for (var_10h = 0; var_10h < -0x10; var_10h = var_10h - 1) {
        var_12h = (var_10h & 0xff) * 0xfc == 0x5b68;
        var_52h = (var_10h < ((var_12h < 0x9c96c798) + var_10h <= var_10h)) < 0xffff == 0x9c96c797 && var_10h != 0;
        var_18h = var_52h | var_10h & 0xb7e59501;
        var_12h = var_12h + 1;
    }
    sym.set_var(var_10h, var_12h, var_18h, 0xfffffffe, 0xfffffffa, 0xfff7);
    return 0xfffe;
}
