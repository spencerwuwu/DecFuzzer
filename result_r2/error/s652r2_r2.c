
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a769)
// WARNING: Removing unreachable block (ram,0x0804aa3c)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint32_t uVar1;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    int32_t var_54h;
    uint var_4ch;
    uint16_t var_46h;
    uint var_44h;
    int32_t var_40h;
    uint8_t var_39h;
    uint32_t var_38h;
    int32_t var_34h;
    uint16_t var_2eh;
    uint8_t var_2bh;
    uint32_t var_2ah;
    uint32_t var_24h;
    uint var_1dh;
    int16_t var_18h;
    char var_15h;
    uint var_14h;
    uint32_t var_10h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_40h = 0x43d9532b;
    var_34h = 8;
    var_38h = 0xffffffff;
    var_39h = 0x9a;
    var_2ah._0_2_ = 0xfffe;
    var_2bh = 0xc0;
    var_2eh = 0xfff9;
    stack0xffffffd4 = 0;
    var_1dh._0_1_ = 'Z';
    var_24h = 0x1da04f93;
    var_10h = 0x452b0610;
    var_14h = 0xfffffffc;
    var_15h = -3;
    var_18h = 0x1d2e;
    stack0xffffffe0 = 7;
    var_44h = 0xfffffffc;
    var_46h = 0xfff9;
code_r0x0804a5ce:
    if (var_40h * var_46h == 0xc) {
        var_34h = -0x20337908;
        for (var_46h = 3; var_46h < 0x19; var_46h = var_46h + 2) {
        }
    }
    else {
        var_38h = var_38h - 1;
    }
    var_40h = 0xb;
    do {
        if (10 < var_40h) {
            sym.set_var(var_40h, 0x8700d35, var_34h, 0xffffd64d, 0x83e3585c, var_38h, var_39h, var_2ah, var_2bh, var_2eh
                        , stack0xffffffd4, var_1dh, var_24h, 0xfffffff7, var_10h, var_14h, var_15h, var_18h, 0x1d3cf30, 
                        0x9d, 0, 0, 0x66f017b8, 0x29cee28c, 0xeb90, stack0xffffffe0, var_44h);
            return 1;
        }
        var_39h = var_39h - 1;
        if (var_40h < -10) {
            var_34h = 0x20;
        }
        else {
            var_34h = 0;
        }
        uVar1 = var_46h == var_34h < -0x41385bd6;
        if ((uVar1 & var_38h) == 0) {
            var_54h = 0;
            if (var_40h != 0) goto code_r0x0804a5ce;
            for (var_34h = 0; var_34h < -9; var_34h = var_34h + -6) {
                var_2bh = var_2bh ^ 0x8b;
                var_2eh = -(var_54h & 0xff);
                var_2ah._0_2_ = var_2ah | var_2eh & 0xff;
                var_1dh._0_1_ = var_2eh != 0;
                *NULL = var_1dh;
                if (*NULL * 0x20 == 5) {
                    var_24h = -0x7c1ca7a5 < (var_38h < 5);
                    var_10h = var_10h ^ var_2eh / ((((var_54h < -0x7c1ca7a4) < -0x7c1ca7a4) * 0x1551026 & 0xff) + 0xf6);
                }
                else {
                    var_2ah._0_2_ = var_2ah - 1;
                    var_54h = -0x26;
                    if (uVar1 != 0) break;
                }
                var_15h = -0x3a;
                var_18h = var_38h;
                for (var_2bh = 0; var_2bh < '\x10'; var_2bh = var_2bh + 1) {
                }
                var_14h = 0;
            }
            var_34h = 1;
            stack0xffffffe0 = 0;
            var_44h = 0;
        }
        else {
            var_2ah._0_2_ = 1;
        }
        var_40h = var_40h + -1;
    } while( true );
}
