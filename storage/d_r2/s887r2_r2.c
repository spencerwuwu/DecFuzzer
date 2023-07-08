
// WARNING: Removing unreachable block (ram,0x000017fe)
// WARNING: Removing unreachable block (ram,0x00001675)
// WARNING: Removing unreachable block (ram,0x000018ab)
// WARNING: Removing unreachable block (ram,0x000016aa)
// WARNING: Removing unreachable block (ram,0x000018ce)

uint sym.func_1(void)

{
    uint var_deh;
    uint var_d8h;
    uint var_d4h;
    uint var_cch;
    uint var_c6h;
    uint var_c0h;
    uint var_bch;
    uint var_b4h;
    uint var_aeh;
    uint var_a8h;
    uint var_a4h;
    uint var_98h;
    uint var_94h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    char var_3dh;
    uint var_3ch;
    int32_t var_38h;
    uint var_30h;
    uint16_t var_28h;
    uint var_20h;
    uint var_1ch;
    uint var_14h;
    uint var_bp_10h;
    
    var_28h = 0x2f88;
    var_30h = 0xffffffff;
    var_38h = 0x2416071e;
    do {
        var_28h = var_28h + 1;
        var_3dh = '\t';
        while( true ) {
            if (var_3dh < 0x80000000) {
                sym.set_var(0xc213532f, 0x532f, 0xfffffff9, 0xfffffff9, 0, 0xffffffac, 0xffffd8ea, var_28h, 0x8e, 
                            var_30h, 0x42, var_38h, 0);
                return 0x42;
            }
            var_30h = 0x30;
            if ((((((var_3dh & 0x30) * 0x5500 | 0x5500U) == 0x64e3176a) != true) < 0x5501) * 0x532f == 0) break;
            var_3dh = var_3dh + -5;
        }
        var_38h = var_38h + 1;
    } while( true );
}
