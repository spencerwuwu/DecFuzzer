
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_28h;
    uint var_24h;
    uint var_1dh;
    uint var_18h;
    uint var_14h;
    int32_t var_10h;
    uint var_ch;
    uint var_6h;
    
    var_10h = 0;
    do {
        if (0x12 < var_10h) {
            sym.set_var(0xf, 0, var_10h);
            var_6h._1_1_ = -4;
code_r0x0000147a:
            return var_6h._1_1_;
        }
        if (var_10h == 0) {
            sym.set_var(0xf, 0, 0);
            var_6h._1_1_ = '\x01';
            goto code_r0x0000147a;
        }
        var_10h = var_10h + 9;
    } while( true );
}
