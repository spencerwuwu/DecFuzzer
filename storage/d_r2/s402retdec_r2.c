
// WARNING: Removing unreachable block (ram,0x00001507)
// WARNING: Removing unreachable block (ram,0x0000155b)

uint sym.func_1(void)

{
    uint32_t uVar1;
    uint var_7ch;
    uint var_75h;
    uint var_6ch;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    int32_t var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint16_t var_24h;
    char var_21h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    
    var_14h = -1;
    var_18h = 0;
    var_1ch = 0xcbedfa90;
    var_20h = 0x1d319d7f;
    var_21h = '\0';
    var_24h = 1;
    for (var_10h = 0; var_10h < -0x13; var_10h = var_10h - 2) {
        var_14h = var_14h + -1;
        var_18h = 1;
        for (var_44h = 0; var_44h < -5; var_44h = var_44h + -1) {
            uVar1 = ((var_10h & 0xff) >> 4 != ((var_10h != 1) * -0x3d == -0x49a7e128) * 0x40) + 1U ^ 0xffffffff;
            var_20h = var_20h & 1;
            var_1ch = true < (((((var_20h + var_10h & 0xff) != 1) < -1) + uVar1 >> 2 != -0x19fec948) == uVar1);
        }
        var_21h = var_21h + '\x01';
        var_24h = 0x7938;
    }
    sym.set_var(var_10h, var_14h, var_18h, var_1ch, var_20h, CONCAT11(0x33, var_21h) & 0xff, var_24h, 
                CONCAT11(0x33, var_21h) >> 8, var_24h < 0xb6);
    return 0xd32ffab8;
}
