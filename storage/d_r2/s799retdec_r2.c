
// WARNING: Removing unreachable block (ram,0x00001537)

uint sym.func_1(void)

{
    uint16_t uVar1;
    uint var_68h;
    uint var_64h;
    uint var_5eh;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    int16_t var_2eh;
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint16_t var_18h;
    uint var_14h;
    uint var_10h;
    
    var_18h = 0xaafd;
    uVar1 = 0;
    for (var_2eh = 0x1d; var_2eh < 10; var_2eh = var_2eh + -1) {
        uVar1 = uVar1 ^ 49000;
        var_18h = var_18h ^ uVar1;
    }
    sym.set_var(0x231fbf68, 1, 0xffffbf69, var_18h, 0xffffcfb6, 0x1e, 8, 0xd1f2830, 0, 0xfffffffe);
    return 8;
}
