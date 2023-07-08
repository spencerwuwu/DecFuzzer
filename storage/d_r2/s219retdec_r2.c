
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Removing unreachable block (ram,0x000013e6)

uint sym.func_1(void)

{
    uint var_24h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_ch;
    uint16_t var_8h;
    uint var_6h;
    
    var_8h = 3;
    do {
        var_8h = var_8h | 1;
    } while (var_8h != 0);
    sym.set_var(0xffffb950, 0, 0x3817d1dc);
    return 0xec80f219;
}
