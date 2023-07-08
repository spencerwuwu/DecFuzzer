
// WARNING: Removing unreachable block (ram,0x00001890)
// WARNING: Removing unreachable block (ram,0x00001926)
// WARNING: Removing unreachable block (ram,0x00001921)
// WARNING: Removing unreachable block (ram,0x00001af7)

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_e8h;
    uint var_e1h;
    uint var_dbh;
    uint16_t var_d7h;
    uint var_d5h;
    uint var_cdh;
    uint var_c5h;
    uchar var_c1h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b1h;
    uint var_a9h;
    uint var_a1h;
    uint var_9ch;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_83h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint32_t var_4ch;
    uint var_48h;
    uint var_44h;
    uint32_t var_40h;
    uint var_3ch;
    char var_35h;
    uint var_34h;
    uint var_30h;
    uint8_t var_29h;
    uint32_t var_28h;
    uint var_24h;
    uint16_t var_20h;
    uint8_t var_1dh;
    uint var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_15h = 0xc0;
    var_1dh = 2;
    var_20h = 0x467;
    var_24h = 1;
    var_28h = 0xe3f50e16;
    var_29h = 0xf9;
    var_30h = 6;
    var_34h = 0x3475f540;
    var_35h = -1;
    var_40h = 0x6c12a7b0;
    uVar1 = 1;
    var_4ch = 0xffffffff;
    var_14h = 0xffffffe9;
    while( true ) {
        if (var_14h < 0x12) {
            var_d7h = CONCAT11(var_29h, var_35h + '\x01');
            sym.set_var(var_14h, var_15h, 0x421dd2eb, var_1dh, var_20h, var_24h, var_4ch ^ 0xec31a0a7, var_29h, 
                        0xffffffff, var_30h, var_34h, var_d7h & 0xff, 1);
            return var_40h;
        }
        var_15h = 0xf6;
        var_1dh = var_40h & var_1dh;
        var_20h = var_1dh < var_14h | var_14h | 1;
        if (var_20h <= var_14h == var_14h) break;
        for (var_40h = 0; 0x1d < var_40h; var_40h = var_40h + 6) {
            uVar1 = uVar1 - 1;
            var_24h = 0x2625a004;
            if (((uVar1 & 4) * '$' >> (var_14h & 0x1f) != var_14h | var_1dh) == 0) {
                var_28h = 0xffff9932;
                var_30h = 0;
                var_34h = 0xffff9932;
            }
            else {
                var_29h = 1U - (var_20h != 0xf34c9333) != var_28h;
                var_28h = -0xcb36ccd < var_29h * 0x100;
                if (var_14h == 0) {
                    stack0xffffff5e = CONCAT11(var_29h, var_35h);
                    sym.set_var(0, 0xf6, 0x421dd2eb, var_1dh, var_20h, 0x2625a004, var_28h, var_29h, 0xffffffff, var_30h
                                , var_34h, stack0xffffff5e & 0xff, 1);
                    return var_1dh;
                }
            }
        }
        var_35h = -0xe;
        var_4ch = 1;
        var_14h = var_14h + 1;
    }
    _var_c1h = CONCAT11(var_29h, var_35h);
    sym.set_var(var_14h, 0xf6, 0x421dd2eb, var_1dh, var_20h, var_24h, var_28h, var_29h, 0xffffffff, var_30h, var_34h, 
                _var_c1h & 0xff, 1);
    return var_29h;
}
