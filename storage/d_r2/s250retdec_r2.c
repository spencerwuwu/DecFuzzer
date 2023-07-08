
// WARNING: Removing unreachable block (ram,0x00001809)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001768)
// WARNING: Removing unreachable block (ram,0x00001577)
// WARNING: Removing unreachable block (ram,0x00001b69)
// WARNING: Removing unreachable block (ram,0x00001b7b)
// WARNING: Removing unreachable block (ram,0x0000193e)
// WARNING: Removing unreachable block (ram,0x0000155d)
// WARNING: Removing unreachable block (ram,0x00001c9b)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint16_t uVar1;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_d2h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_7eh;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ah;
    int32_t var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    uint8_t var_2fh;
    uint16_t var_2eh;
    uint32_t var_2ch;
    uint16_t var_26h;
    uint var_24h;
    uint32_t var_20h;
    uint var_1ch;
    int32_t var_18h;
    uint var_14h;
    uint var_eh;
    
    var_1ch = 0xffffffff;
    var_20h = 0xa772304b;
    var_24h = 6;
    var_26h = 0x8cce;
    var_2ch = 0x70fc2448;
    var_2eh = 0xf57a;
    var_2fh = 0xfb;
    var_18h = 0;
    do {
        var_34h = 0;
        if (var_18h < 0x19) {
            sym.set_var(0xf5540d7f, var_18h, var_1ch, var_20h, var_24h, var_26h, var_2ch, var_2eh, var_2fh, 0, 0x7fbb);
            var_eh._0_2_ = 0xd7f;
code_r0x00001d7e:
            return var_eh;
        }
        for (var_20h = 0; 0x7fffffff < var_20h; var_20h = var_20h - 1) {
            var_2ch = var_26h;
            var_2eh = var_1ch;
            var_24h = 0x8ea47160;
            var_1ch = 0x8ea47160;
            var_2eh = var_2eh | 0xaacc;
            uVar1 = var_26h | var_2eh;
            var_2fh = uVar1 != 0;
            if ((((var_2fh ^ 0x85b5f732) & 0xffff) - 0x2a55 & 0x303f0244) < var_2ch != true) {
                var_26h = uVar1 | -var_26h << 1;
                var_24h = 1;
                if (var_18h == 0) {
                    for (var_60h = 0; var_60h != -3; var_60h = var_60h + -1) {
                        var_34h = 1;
                    }
                    sym.set_var(0xf5540d7f, 0, 0x8ea47160, var_20h, 1, var_26h, var_2ch, var_2eh, var_2fh, var_34h, 
                                0xffff);
                    var_eh._0_2_ = -3;
                    goto code_r0x00001d7e;
                }
                break;
            }
            var_2fh = !var_2fh;
            var_26h = uVar1;
        }
        var_18h = var_18h + 4;
    } while( true );
}
