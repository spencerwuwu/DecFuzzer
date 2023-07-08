
// WARNING: Removing unreachable block (ram,0x000014b6)
// WARNING: Removing unreachable block (ram,0x000014d1)
// WARNING: Removing unreachable block (ram,0x00001512)

uint sym.func_1(void)

{
    uint16_t uVar1;
    uint var_48h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    int32_t var_2ch;
    uint var_24h;
    int32_t var_20h;
    uint var_1ch;
    int32_t var_18h;
    uint var_14h;
    uint var_10h;
    
    var_14h = 0xffffffff;
    var_18h = 1;
    uVar1 = 0x9501;
    var_20h = 5;
    var_2ch = 0x18;
    while (var_2ch == 4) {
        for (var_20h = -1; var_20h != 0; var_20h = var_20h + 1) {
            uVar1 = 1;
        }
        var_14h = 9;
        var_18h = (uVar1 ^ 1) << 0xc;
        var_2ch = -2;
    }
    sym.set_var(9, var_14h, var_18h, var_20h + 1 >> (var_20h & 0x1f), var_20h, 0xffffffff, var_18h);
    return 9;
}
