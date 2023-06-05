
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804b02d)
// WARNING: Removing unreachable block (ram,0x0804b033)
// WARNING: Removing unreachable block (ram,0x0804af16)
// WARNING: Removing unreachable block (ram,0x0804af2c)
// WARNING: Removing unreachable block (ram,0x0804af32)
// WARNING: Removing unreachable block (ram,0x0804af38)
// WARNING: Removing unreachable block (ram,0x0804a705)
// WARNING: Removing unreachable block (ram,0x0804aac4)
// WARNING: Removing unreachable block (ram,0x0804ad4b)
// WARNING: Removing unreachable block (ram,0x0804add8)
// WARNING: Removing unreachable block (ram,0x0804ad57)
// WARNING: Removing unreachable block (ram,0x0804adcb)
// WARNING: Removing unreachable block (ram,0x0804adc4)
// WARNING: Removing unreachable block (ram,0x0804add0)
// WARNING: Removing unreachable block (ram,0x0804ade2)
// WARNING: Removing unreachable block (ram,0x0804aaea)
// WARNING: Removing unreachable block (ram,0x0804aba9)
// WARNING: Removing unreachable block (ram,0x0804abb3)
// WARNING: Removing unreachable block (ram,0x0804abb8)
// WARNING: Removing unreachable block (ram,0x0804abe9)
// WARNING: Removing unreachable block (ram,0x0804ace5)
// WARNING: Removing unreachable block (ram,0x0804ad00)
// WARNING: Removing unreachable block (ram,0x0804ad16)
// WARNING: Removing unreachable block (ram,0x0804ade9)
// WARNING: Removing unreachable block (ram,0x0804af98)
// WARNING: Removing unreachable block (ram,0x0804afa6)
// WARNING: Removing unreachable block (ram,0x0804b07f)
// WARNING: Removing unreachable block (ram,0x0804a649)
// WARNING: Removing unreachable block (ram,0x0804aedc)
// WARNING: Removing unreachable block (ram,0x0804aee9)
// WARNING: Removing unreachable block (ram,0x0804af02)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    bool bVar1;
    uint var_144h;
    uint var_140h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_11ch;
    uint var_118h;
    uint var_114h;
    uint var_10eh;
    uint var_108h;
    uint var_100h;
    uint var_fah;
    uint var_f4h;
    uint var_ech;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_8ch;
    uint var_78h;
    char var_71h;
    uint32_t var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    char var_45h;
    uint var_44h;
    uint var_40h;
    int16_t var_3ah;
    int32_t var_38h;
    int32_t var_34h;
    uint var_30h;
    uint16_t var_26h;
    uint var_24h;
    uint32_t var_1ch;
    uint32_t var_15h;
    uint var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0xdda3;
    stack0xffffffe8 = 0;
    var_1ch = 0xffffffff;
    var_26h = 0xffff;
    var_34h = -3;
    var_3ah = -10;
    var_45h = 'q';
    for (var_38h = 0; var_38h != 0x22; var_38h = var_38h + 1) {
        for (var_3ah = 0; var_3ah < 0x15; var_3ah = var_3ah + 1) {
            var_45h = var_45h + -1;
            if (var_45h == '\0') {
                var_eh._0_2_ = var_eh & 0x2b;
            }
            var_1ch = 0;
            *NULL = 1;
        }
    }
    var_15h._0_1_ = -8;
    while( true ) {
        if (var_15h != '\a') {
            sym.set_var(8, 0xffffa92b, var_15h, var_1ch, var_eh, stack0xffffffe8, 0xffffffff, 0xffffa3e4, 4, 0xffffffa9
                        , 0xffffe5be, 0xb1a5a204, 0xffffffd4, 0x3d1a, var_26h, 0, 2, 0x39, 0, 3, 1, 0x2d19, 0xcf76f22c, 
                        var_34h);
            return 0;
        }
        if (var_3ah != 0) break;
        if ((((var_eh + 0x1143) - stack0xffffffe8 | stack0xffffffe8) == 1) < 0xfffffffc) {
            sym.set_var(8, 0xffffa92b, 7, 0, var_eh, stack0xffffffe8, 0, 0xffffa3e4, 4, 0xffffffa9, 0xffffe5be, 
                        0xb1a5a204, 0xffffffd4, 0x3d1a, var_26h, 0, 2, 0x39, 0, 3, 1, 0x2d19, 0xcf76f22c, var_34h);
            return 0;
        }
        var_1ch = stack0xffffffe8;
        bVar1 = true;
        var_38h = 0;
        while (var_38h == 0x13) {
            for (var_70h = 0; var_70h < 0xc; var_70h = var_70h + 1) {
                var_1ch = 1;
                for (var_26h = 0xffff; var_26h != 10; var_26h = var_26h + 1) {
                }
            }
            if (bVar1) {
                var_71h = '\x04';
            }
            else {
                var_71h = '\x02';
            }
            bVar1 = var_71h != '\0';
            var_38h = 0x14;
        }
        var_34h = var_34h + -1;
        var_15h._0_1_ = '\b';
    }
    sym.set_var(8, 0xffffa92b, 7, stack0xffffffe8, var_eh, stack0xffffffe8, 0xffffffff, 0xffffa3e4, 4, 0xffffffa9, 
                0xffffe5be, 0xb1a5a204, 0xffffffd4, 0x3d1a, var_26h, 0, 2, 0x39, 0, 3, 1, 0x2d19, 0xcf76f22c, var_34h);
    return stack0xffffffe8;
}
