
// WARNING: Removing unreachable block (ram,0x00002604)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000027ba)
// WARNING: Removing unreachable block (ram,0x00002a03)
// WARNING: Removing unreachable block (ram,0x000027d8)
// WARNING: Removing unreachable block (ram,0x0000281e)
// WARNING: Removing unreachable block (ram,0x0000282b)
// WARNING: Removing unreachable block (ram,0x0000284c)
// WARNING: Removing unreachable block (ram,0x00002859)
// WARNING: Removing unreachable block (ram,0x0000288c)
// WARNING: Removing unreachable block (ram,0x0000289f)
// WARNING: Removing unreachable block (ram,0x00001d9f)
// WARNING: Removing unreachable block (ram,0x00002639)
// WARNING: Removing unreachable block (ram,0x00002263)
// WARNING: Removing unreachable block (ram,0x000023df)
// WARNING: Removing unreachable block (ram,0x000023e9)
// WARNING: Removing unreachable block (ram,0x000023ee)
// WARNING: Removing unreachable block (ram,0x00002276)
// WARNING: Removing unreachable block (ram,0x000022b3)
// WARNING: Removing unreachable block (ram,0x000022d5)
// WARNING: Removing unreachable block (ram,0x000022e5)
// WARNING: Removing unreachable block (ram,0x000022ae)
// WARNING: Removing unreachable block (ram,0x00002339)
// WARNING: Removing unreachable block (ram,0x00002354)
// WARNING: Removing unreachable block (ram,0x0000237e)
// WARNING: Removing unreachable block (ram,0x00002391)
// WARNING: Removing unreachable block (ram,0x000023d5)
// WARNING: Removing unreachable block (ram,0x000023da)
// WARNING: Removing unreachable block (ram,0x000023f3)
// WARNING: Removing unreachable block (ram,0x00002451)
// WARNING: Removing unreachable block (ram,0x000023fd)
// WARNING: Removing unreachable block (ram,0x0000245c)
// WARNING: Removing unreachable block (ram,0x000026de)
// WARNING: Removing unreachable block (ram,0x00002b99)
// WARNING: Removing unreachable block (ram,0x00001ac1)
// WARNING: Removing unreachable block (ram,0x00002505)
// WARNING: Removing unreachable block (ram,0x00002622)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    char cVar1;
    uint8_t uVar2;
    uint var_220h;
    uint var_21ah;
    uint var_214h;
    uint var_210h;
    uint var_209h;
    uint var_1f8h;
    uint var_1f1h;
    uint var_1eah;
    uint var_1e4h;
    uint var_1e0h;
    uint var_1d9h;
    uint var_1cch;
    uint var_1c6h;
    uint var_1c0h;
    uint var_1bch;
    uint var_1b5h;
    uint var_1a4h;
    uint var_1a0h;
    uint var_192h;
    uint var_18ch;
    uint var_188h;
    uint var_181h;
    uint var_174h;
    uint var_16ch;
    uint var_168h;
    uint var_162h;
    uint var_15ch;
    uint var_158h;
    uint var_151h;
    uint var_140h;
    bool var_139h;
    uint var_138h;
    uint var_130h;
    uint var_12ch;
    uint var_125h;
    uint var_11ch;
    uint var_118h;
    uint var_110h;
    uint var_109h;
    uint var_104h;
    uint var_feh;
    uint var_f8h;
    uint var_f4h;
    uint var_efh;
    uint var_e8h;
    uint var_e0h;
    uint var_dch;
    uint var_d4h;
    uint var_d0h;
    uint var_c8h;
    uint var_c0h;
    uint var_b8h;
    uint var_b0h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint32_t var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    uint var_50h;
    int32_t var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint16_t var_32h;
    uint16_t var_30h;
    uint8_t var_29h;
    uint16_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint8_t var_16h;
    uint8_t var_15h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 9;
    var_15h = 0xf6;
    var_16h = 0xa4;
    var_1ch = 0x4c039ecf;
    var_20h = 0xed55c59c;
    var_24h = 0;
    var_28h = 1;
    var_29h = 0xfa;
    var_30h = 0xe02a;
    var_32h = 0x353c;
    uVar2 = 0xfe;
code_r0x00001642:
    var_14h = var_14h ^ 0x47;
code_r0x0000164c:
    var_16h = var_16h - 1;
code_r0x00001654:
    var_1ch = var_1ch + 1;
    if (var_1ch == 0) {
code_r0x00002c40:
        sym.set_var(var_14h, var_15h, var_16h, var_1ch, var_20h, var_24h, 0xffffffbe, var_28h, var_29h, 1, 0x81a1, 
                    var_30h, var_32h, 1, 0xffffffff, 0xffffffff, 0xe95154dc);
        var_eh._0_2_ = 0x54dc;
code_r0x00002d7e:
        return var_eh;
    }
    var_54h = 8;
code_r0x000016a6:
    if (var_54h != 0xd) {
        cVar1 = -1;
        if (var_54h != 0) goto code_r0x00001642;
        if ((var_1ch < var_15h) ||
           (var_15h = (var_14h < ((var_15h != var_16h) < 0x51dba339)) * var_14h & 0x25U ^ 4,  0 % var_14h != 0)) {
            var_24h = var_24h + 1;
            var_20h = var_14h;
            if (var_1ch == 0) {
                var_28h = 0xffbe;
            }
            else {
                for (var_4ch = 0xd; var_4ch < 5; var_4ch = var_4ch + -1) {
                    if (var_14h != 0) goto code_r0x0000164c;
                    var_20h = 0;
                }
            }
            for (var_58h = 0; var_58h < 0x14; var_58h = var_58h + 5) {
            }
            var_20h = 0;
code_r0x0000273b:
            var_54h = 5;
            goto code_r0x000016a6;
        }
        if (var_16h < ((uVar2 != 0) != 0xffffffd3)) {
            var_28h = var_28h + 1;
            var_24h = 0;
        }
        else {
            uVar2 = 0xbe;
            var_29h = (-0x5fdb / (var_24h & var_20h) & 0xffU) - (var_24h & var_20h & 0xff) < -0x41;
            var_28h = var_29h;
            cVar1 = var_24h < 0xff;
            if (!cVar1) goto code_r0x00001aa9;
            var_14h = (var_29h % -1 != 0x51dba339) % -1;
            var_20h = var_14h | 0x279e;
        }
        var_139h = 0xed / (-0x28 % cVar1 & 0xff) >> (var_15h != 0) != 0 && var_24h != 0;
        if (var_139h != var_29h) {
            if ((0 >> (var_15h & 0x1f) != var_20h) == 0xffffffff) {
                if ((var_20h + 0x20) / -0x68b1 == 0) goto code_r0x00002749;
                sym.set_var(var_14h, var_15h, var_16h, var_1ch, var_20h, var_24h, 0xffffffbe, var_28h, var_29h, 1, 
                            0x81a1, var_30h, var_32h, 1, 0xffffffff, 0xffffffff, 0xe95154dc);
                var_eh._0_2_ = -0x48d5;
            }
            else {
                sym.set_var(var_14h, var_15h, var_16h, var_1ch, var_20h, var_24h, 0xffffffbe, var_28h, var_29h, 1, 
                            0x81a1, var_30h, var_32h, 1, 0xffffffff, 0xffffffff, 0xe95154dc);
                var_eh._0_2_ = var_1ch;
            }
            goto code_r0x00002d7e;
        }
        uVar2 = uVar2 ^ 0xff;
        var_20h = 0x2daab72b;
        var_14h = var_14h | 0x2daab72b;
        var_30h = var_30h ^ 1;
        if (var_30h % 2 == 0) {
            var_32h = var_32h - 1;
        }
        else {
            var_20h = 0xac;
        }
        if (var_24h == 0) goto code_r0x0000273b;
    }
code_r0x00002749:
    for (var_78h = 0x12; var_78h < 0x20; var_78h = var_78h + 1) {
        var_14h = 1;
        for (var_32h = 0; var_32h != 0x2f; var_32h = var_32h + 1) {
            var_14h = 0xf48fb08c;
        }
    }
    var_30h = 0;
    goto code_r0x00002c40;
code_r0x00001aa9:
    var_20h = 0xfffffff8;
    goto code_r0x00001654;
}
