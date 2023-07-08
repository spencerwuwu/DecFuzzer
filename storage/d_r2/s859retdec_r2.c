
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001458)

ushort sym.func_1(void)

{
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint32_t var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_eh;
    
    var_14h = 8;
    var_18h = 0xcb81eca6;
    for (var_24h = 0; var_24h < 0x10; var_24h = var_24h + 1) {
        var_14h = 0;
        var_18h = 0;
    }
    sym.set_var(0xf880, var_14h, var_18h, 1, 7);
    return 0xf880;
}
