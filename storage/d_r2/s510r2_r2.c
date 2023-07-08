
// WARNING: Removing unreachable block (ram,0x00001409)
// WARNING: Removing unreachable block (ram,0x00001449)

uint sym.func_1(void)

{
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint16_t var_12h;
    char var_dh;
    uint32_t var_ch;
    int32_t var_8h;
    
    var_ch = 0x14768c0a;
    var_12h = 0x91b6;
code_r0x000013d2:
    for (var_8h = 0; 0x1a < var_8h; var_8h = var_8h + 1) {
        var_ch = var_ch & 0xdb22124f;
        var_12h = var_12h | 0xd;
    }
    do {
        var_dh = '\0';
        while( true ) {
            if (var_dh == -0x14) {
                sym.set_var(var_8h, var_ch, 0xffffffec, 0);
                return 0xffffffec;
            }
            if (var_8h != 0) goto code_r0x000013d2;
            if ((var_ch == 0) && (var_12h != 0)) break;
            var_dh = var_dh + -4;
        }
    } while( true );
}
