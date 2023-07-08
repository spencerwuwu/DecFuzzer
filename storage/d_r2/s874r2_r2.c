
// WARNING: Removing unreachable block (ram,0x000016d2)

uint16_t sym.func_1(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint var_8ch;
    uint var_86h;
    uint var_80h;
    uint var_7ch;
    uint var_70h;
    uint var_68h;
    uint var_61h;
    uint var_58h;
    int16_t var_52h;
    uint var_50h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_34h;
    uint32_t var_2ch;
    uint8_t var_25h;
    uint32_t var_24h;
    uint16_t var_1eh;
    uint var_1ch;
    int32_t var_18h;
    int16_t var_12h;
    uint var_10h;
    
    var_1eh = 0xb775;
    var_24h = 0x2f69a016;
    var_25h = 0x6f;
    var_2ch = 0xda4cdc86;
    var_34h = 1;
    var_38h = -9;
    uVar1 = 1;
    uVar2 = 0;
    var_18h = 6;
    for (var_12h = 0; var_12h != 0x14; var_12h = var_12h + 1) {
        var_1eh = var_38h;
        var_24h = 0x45 << (uVar2 & 0x1f) != 0;
        var_25h = 0;
        uVar1 = uVar1 | 0x78;
        for (var_38h = 0x1c; -3 < var_38h; var_38h = var_38h + -1) {
            var_1eh = var_1eh + 1;
            uVar2 = uVar1 ^ 0x17 ^ uVar2;
            var_52h = -0xf;
            while (var_52h == 0x17) {
                var_52h = 0x1b;
            }
            var_2ch = var_1eh < -7 ^ var_2ch;
        }
        var_18h = var_18h + -1;
        var_34h = 0xffffffff;
    }
    sym.set_var(0x244c3f4f, 0x14, var_18h, 2, var_1eh, var_24h, var_25h, var_2ch, 0xe042, var_34h);
    return var_1eh;
}
