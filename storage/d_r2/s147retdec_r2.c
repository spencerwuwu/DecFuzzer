
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001b18)
// WARNING: Removing unreachable block (ram,0x00001921)
// WARNING: Removing unreachable block (ram,0x000017d5)
// WARNING: Removing unreachable block (ram,0x00001814)
// WARNING: Removing unreachable block (ram,0x00001821)
// WARNING: Removing unreachable block (ram,0x0000185d)
// WARNING: Removing unreachable block (ram,0x0000186d)
// WARNING: Removing unreachable block (ram,0x00001a9f)
// WARNING: Removing unreachable block (ram,0x00001bb8)
// WARNING: Removing unreachable block (ram,0x00001bc2)
// WARNING: Removing unreachable block (ram,0x00001bc7)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_f8h;
    uint var_f2h;
    uint var_e9h;
    uint var_e4h;
    uint var_deh;
    uint var_d2h;
    uint var_c9h;
    uint var_c4h;
    uint var_beh;
    uint var_b8h;
    uint var_b1h;
    uint var_aah;
    uint var_a1h;
    uint var_9ch;
    uint var_94h;
    uint var_8ch;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint8_t var_3fh;
    uint var_3ch;
    int32_t var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint8_t var_1dh;
    int32_t var_1ch;
    char var_16h;
    char var_15h;
    int32_t var_14h;
    uint var_eh;
    
    var_16h = '\x01';
    var_1dh = 0;
    var_24h = 0xffffffff;
    var_38h = 1;
    var_3fh = 0;
    for (var_14h = 0; var_1ch = 0,  var_14h < 2; var_14h = var_14h + 1) {
        var_16h = '\0';
        if (var_14h == -0x2037) {
            sym.set_var(0xffffdfc9, ((var_14h < 0xfb) <= var_14h) % var_14h < var_14h, 0, 0, 0, 0xffffffff, 0x98934eca, 
                        1, 0x19e2f9db, 0xfffffffc, 1, 0x379bbdc2, 0xfffffffb, 0);
            var_eh._0_2_ = -0x2037;
            goto code_r0x00001d2c;
        }
    }
    var_15h = -6;
    do {
        if (var_15h < -9) {
            sym.set_var(var_14h, var_15h, var_16h, var_1ch, var_1dh, var_24h, 0x98934eca, 1, 0x19e2f9db, 0xfffffffc, 
                        var_38h, 0x379bbdc2, 0xfffffffb, var_3fh);
            var_eh._0_2_ = var_24h;
code_r0x00001d2c:
            return var_eh;
        }
        var_24h = 0;
        var_1dh = 0x28;
        if (var_1ch == 0) {
            sym.set_var(var_14h, var_15h, var_16h, 0, 0x28, 0, 0x98934eca, 1, 0x19e2f9db, 0xfffffffc, var_38h, 
                        0x379bbdc2, 0xfffffffb, var_3fh);
            var_eh._0_2_ = -0xd90;
            goto code_r0x00001d2c;
        }
        for (var_16h = '\0'; var_16h < -0xc; var_16h = var_16h + -1) {
            var_1ch = -1;
            while ((var_1ch == 0x2b && (var_15h == '\0'))) {
                var_1ch = 0x2c;
            }
        }
        var_38h = var_38h + 1;
        var_3fh = var_3fh + 1;
        var_14h = 0;
        var_15h = var_15h + -1;
    } while( true );
}
