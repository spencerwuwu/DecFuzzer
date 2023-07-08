
// WARNING: Removing unreachable block (ram,0x000015ee)
// WARNING: Removing unreachable block (ram,0x0000158b)
// WARNING: Removing unreachable block (ram,0x00001644)

uint8_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_88h;
    uint var_81h;
    bool var_76h;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_62h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_20h;
    int32_t var_1ch;
    uint16_t var_18h;
    uint8_t var_11h;
    int32_t var_10h;
    
    var_18h = 0xfff9;
    var_1ch = -0x1ba56e8e;
    for (var_11h = 0; var_11h < 0x1e; var_11h = var_11h + 2) {
        var_18h = 0x118;
    }
    for (var_10h = 0; var_10h < -0xb; var_10h = var_10h + -5) {
        var_1ch = 0x21;
    }
    uVar1 = var_10h == 1 ^ 0xac;
    var_76h = (0xfd < uVar1) < var_18h + 1 || var_18h != 0xffff;
    sym.set_var(var_10h, var_11h, 0xffffffff, 1, var_18h, 
                ((1 - (var_11h != 0 | 0xd16c)) % -0x5f2e0768 & 0xffU) << 7 != var_1ch, 0x59c2d16c, uVar1, 0xfe, 
                0x59c2d16c, var_76h);
    return var_11h;
}
