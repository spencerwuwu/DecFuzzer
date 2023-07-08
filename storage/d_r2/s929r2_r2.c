
// WARNING: Removing unreachable block (ram,0x000019db)
// WARNING: Removing unreachable block (ram,0x00001666)

uint sym.func_1(void)

{
    uint var_fch;
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_eah;
    uint var_e1h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_cah;
    uint var_c1h;
    uint var_b8h;
    uint var_b1h;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    int16_t var_42h;
    int32_t var_40h;
    uint var_3ch;
    uint32_t var_34h;
    uint var_30h;
    uint16_t var_2ch;
    uint var_28h;
    int16_t var_22h;
    int32_t var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_bp_10h;
    
    var_28h = 0xc0e07525;
    var_2ch = 0x8475;
    var_30h = 0xffffffff;
    var_34h = 0x6574f20;
    var_40h = 0x5a815809;
    var_20h = -0x1c;
    while (var_20h == -0x18) {
        var_20h = -0x17;
    }
    var_42h = 0xb;
    while (var_42h == 0x33) {
        var_2ch = var_2ch - 1;
        var_30h = 0;
        var_40h = var_40h + -1;
        var_34h = 0;
        var_20h = 0x20306220;
        var_42h = 0x35;
    }
    var_22h = -2;
    while( true ) {
        if (0x18 < var_22h) {
            sym.set_var(0xec2e0cf5, 0xe83c7730, 5, var_20h, var_22h, var_28h, 0xfffffffb, var_2ch, var_30h, var_34h, 
                        0xfffffff7, 0, var_40h);
            return 5;
        }
        var_28h = 0xfffffff9;
        if ((var_34h & 1) == 0xfffffffb) break;
        var_34h = ((0 >> (var_22h & 0x1f) < 7) + var_20h & 0xfdU) != 0xfb | var_34h & 1;
        var_22h = var_22h + 2;
    }
    sym.set_var(0xec2e0cf5, 0xe83c7730, 5, var_20h, var_22h, 0xfffffff9, 0xfffffffb, var_2ch, var_30h, 0xfffffffb, 
                0xfffffff7, 0, var_40h);
    return 0x66ca;
}
