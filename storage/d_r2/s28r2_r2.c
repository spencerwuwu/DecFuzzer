
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Removing unreachable block (ram,0x000014f5)

int16_t sym.func_1(void)

{
    uint var_44h;
    uint var_3ch;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    int32_t var_24h;
    uint var_1ch;
    uint var_18h;
    uint16_t var_14h;
    char var_11h;
    uint var_10h;
    uint var_ah;
    
    var_11h = -0xc;
    var_14h = 0xe04a;
    var_24h = 0;
    while( true ) {
        if (-0x1d < var_24h) {
            sym.set_var(0, var_11h, var_14h, 0x31af6658, 0, 0x2088);
            return 0x6658;
        }
        var_11h = '\0';
        if (((var_24h < 0) + 0x46c2) / var_24h == 0) break;
        var_14h = 0;
        var_24h = var_24h + -1;
    }
    sym.set_var(0, 0, var_14h, 0x7d8169b4, 0, 0x2089);
    return var_24h;
}
