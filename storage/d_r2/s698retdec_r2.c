
// WARNING: Variable defined which should be unmapped: var_ah

uchar sym.func_1(void)

{
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint16_t var_16h;
    uint var_14h;
    int16_t var_eh;
    uint var_ah;
    
    var_16h = 0xffff;
    for (var_eh = 0xf; var_eh != -9; var_eh = var_eh + -8) {
        var_16h = var_16h - 1;
    }
    sym.set_var(0x99d9, 0x5c, 0xfffffff7, 0, var_16h);
    return 0xde;
}
