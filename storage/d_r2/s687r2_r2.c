
// WARNING: Removing unreachable block (ram,0x00001419)

uint sym.func_1(void)

{
    uint var_28h;
    uint var_24h;
    uint16_t var_1ch;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint var_bp_ch;
    
    var_10h = 0x2c03342e;
    var_18h = 1;
    var_19h = 200;
    var_1ch = 0x637b;
    for (var_14h = 0; var_14h != 0x15; var_14h = var_14h + 1) {
        var_18h = var_14h;
        if (var_14h != 0) {
            var_19h = var_19h ^ var_14h;
        }
        var_1ch = var_1ch & var_14h != 0;
        var_10h = var_14h & var_10h;
    }
    sym.set_var(var_10h, 0x7770, var_18h, var_19h, var_1ch);
    return 0x7770;
}
