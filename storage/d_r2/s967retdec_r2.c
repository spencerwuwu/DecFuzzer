
// WARNING: Variable defined which should be unmapped: var_dh

uint sym.func_1(void)

{
    uint var_41h;
    uint var_3ch;
    uint var_35h;
    uint var_2ch;
    int32_t var_28h;
    uint var_24h;
    uint16_t var_20h;
    uint var_1ch;
    uint var_14h;
    uint var_dh;
    
    var_20h = 0xffff;
    for (var_28h = -0x16; -9 < var_28h; var_28h = var_28h + 9) {
        var_20h = (var_28h != 0) % 0xfa;
    }
    sym.set_var(0xd3, 8, 99, 0xffffffd1, 0xab8c3ad3, 0xfffa, var_20h);
    return 8;
}
