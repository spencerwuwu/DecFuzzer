
// WARNING: Removing unreachable block (ram,0x000014c9)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x0000153e)
// WARNING: Removing unreachable block (ram,0x00001620)

uint sym.func_1(void)

{
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ah;
    uint var_44h;
    uint var_3dh;
    int32_t var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    uint var_20h;
    int32_t var_1ch;
    uint var_14h;
    uint var_dh;
    
    var_20h = 0xb2d863e3;
    var_1ch = 0;
    for (var_38h = 0; 0x10 < var_38h; var_38h = var_38h + 3) {
        var_1ch = var_1ch + 1;
        var_20h = 6;
    }
    sym.set_var(0x7f, 0xf39cee24, 6, var_1ch, var_20h, 0);
    return 0xffffffff;
}
