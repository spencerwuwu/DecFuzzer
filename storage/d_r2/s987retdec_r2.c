
// WARNING: Removing unreachable block (ram,0x000022e5)
// WARNING: Removing unreachable block (ram,0x0000243b)
// WARNING: Removing unreachable block (ram,0x0000244b)
// WARNING: Removing unreachable block (ram,0x00002466)
// WARNING: Removing unreachable block (ram,0x00002473)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001b6f)
// WARNING: Removing unreachable block (ram,0x00001b13)
// WARNING: Removing unreachable block (ram,0x00001c6d)
// WARNING: Removing unreachable block (ram,0x00001c86)
// WARNING: Removing unreachable block (ram,0x00001c96)
// WARNING: Removing unreachable block (ram,0x00001cf8)
// WARNING: Removing unreachable block (ram,0x00001d05)
// WARNING: Removing unreachable block (ram,0x00001d4a)
// WARNING: Removing unreachable block (ram,0x00001d59)
// WARNING: Removing unreachable block (ram,0x00001d54)
// WARNING: Removing unreachable block (ram,0x00001d45)
// WARNING: Removing unreachable block (ram,0x00001ee8)
// WARNING: Removing unreachable block (ram,0x00001eed)
// WARNING: Removing unreachable block (ram,0x000026a9)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint16_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    uint var_212h;
    uint var_20ch;
    uint var_208h;
    uint var_204h;
    uint var_200h;
    uint var_1f9h;
    uint var_1eeh;
    uint var_1e4h;
    uint var_1e0h;
    uint var_1dch;
    uint var_1d8h;
    uint var_1d2h;
    uint var_1cch;
    uint var_1c8h;
    uint var_1c4h;
    uint var_1c0h;
    uint var_1b9h;
    uint var_1aeh;
    uint var_1a4h;
    uint var_1a0h;
    uint var_19ch;
    uint var_198h;
    uint var_194h;
    uint var_18ch;
    uint var_186h;
    uint var_17dh;
    uint var_175h;
    bool var_16fh;
    bool var_16eh;
    uint var_16ch;
    uint var_165h;
    uint var_15ch;
    uint var_154h;
    uint var_14ch;
    uint var_144h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_12eh;
    uint var_125h;
    uint var_11ch;
    uint var_118h;
    uint var_114h;
    uint var_10ch;
    uint var_104h;
    uint var_100h;
    uint var_fch;
    uint var_f8h;
    uint var_f1h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d4h;
    uint var_cch;
    uint var_c4h;
    uint var_c0h;
    uint8_t var_b9h;
    uint32_t var_b8h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    int32_t var_80h;
    uint var_7ch;
    int32_t var_78h;
    uint var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    uint var_68h;
    uint8_t var_61h;
    uint var_60h;
    uint var_5ch;
    uint16_t var_56h;
    uint var_54h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint8_t var_34h;
    uint8_t var_31h;
    uint32_t var_30h;
    uint16_t var_2ah;
    char var_27h;
    char var_26h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    char var_fh;
    uint var_eh;
    
    var_eh._0_1_ = 5;
    var_14h = 0xd9403132;
    var_18h = 3;
    var_1ch = 0xaeacb2d5;
    var_20h = 0x2b6367af;
    var_24h = 0xffffffff;
    var_26h = -5;
    var_27h = 'J';
    var_2ah = 1;
    var_30h = 0xbc9e7330;
    var_31h = 0xfc;
    var_34h = 6;
    var_48h = 0xffffffff;
    var_4ch = 0xa42c73b;
    var_56h = 0;
    var_60h = 0;
    var_61h = 0x60;
    var_6ch = 1;
    uVar1 = 0xfffe;
code_r0x000017ed:
    var_fh = '\x01';
    bVar3 = 1 >> (var_eh & 0x1f) != 0;
    if (bVar3) {
        var_14h = var_6ch / 1;
        var_18h = var_18h & 0xfffffff5;
    }
    uVar1 = bVar3 ^ uVar1;
    var_1ch = uVar1 % -10 | var_1ch;
    uVar2 = (var_eh - var_1ch & 1) != 0;
    if (uVar2 < 2) {
        bVar3 = '\0' < var_26h;
        var_20h = (var_48h & 0xff) - 1;
        if (((bVar3 < ((bVar3 % -0x5d < 5) << bVar3 == 0x2d | 2U)) <= var_4ch == 0xffffffa3) <
            (((var_27h | var_4ch <= var_6ch) ^ uVar2) < var_20h)) {
            var_31h = 0x26;
            var_20h = var_20h | 1;
            var_56h = 0xffff;
            var_60h = 0xffffffff;
            var_61h = 0x61;
        }
        else {
            var_20h = 1;
        }
        sym.set_var(var_eh, 1, var_14h, var_18h, var_1ch, var_20h, var_24h, 0xffffffa3, var_26h, var_27h, var_2ah, 
                    var_30h, var_31h, 0x7f, 1, var_34h, 0xfffff89a, 0x1f61fbc8, var_20h, 1, var_48h, var_4ch, 0, 
                    0xffffffff, var_56h, 0x69775cc2, var_60h, var_61h);
        var_eh._1_1_ = 0;
    }
    else {
        for (var_78h = 0; var_78h != 10; var_78h = var_78h + 2) {
            var_80h = 0;
            while (var_80h == 0xc) {
                var_fh = '8';
                var_20h = 0xe00;
                var_24h = 0;
                var_80h = 0xd;
            }
            for (var_70h = 0; 0x13 < var_70h; var_70h = var_70h + 1) {
                if (var_14h != 0) {
                    var_eh._0_1_ = var_eh - 1;
                    var_26h = '\0';
                    var_27h = '\0';
                    var_20h = 0xa85175ef;
                    var_2ah = var_24h & 1;
                    if ((var_24h & 1) != 0) goto code_r0x000017ed;
                    var_30h = var_30h | 0xfff7;
                    var_31h = 0;
                    var_fh = var_14h;
                    if (var_1ch == 0) {
                        var_34h = var_34h + 1;
                        var_20h = 1;
                        var_31h = 0xff;
                        uVar1 = 1;
                    }
                    break;
                }
                var_16eh = (((var_20h < (var_27h != '\0' | var_6ch) ^ 0xffffffff) & 0xffff) - (var_24h & 0xffff) != 8)
                           << (var_20h & 0x1f) != 0 || var_30h != 0;
                var_20h = var_16eh;
                uVar1 = 0;
                for (var_b8h = 0; 0x7fffffff < var_b8h; var_b8h = var_b8h - 1) {
                    var_16fh = var_24h != 1 || var_26h != '\0';
                    var_6ch = var_16fh >> (var_31h & 0x1f) & var_6ch;
                }
                var_48h = var_48h - 1;
                for (var_b9h = 0x1d; var_b9h < 0x24; var_b9h = var_b9h + 3) {
                    var_20h = 0;
                    var_4ch = var_4ch + 1;
                }
            }
        }
        sym.set_var(var_eh, var_fh, var_14h, var_18h, var_1ch, var_20h, var_24h, 0xffffffa3, var_26h, var_27h, var_2ah, 
                    var_30h, var_31h, 0x7f, 1, var_34h, 0xfffff89a, 0x1f61fbc8, 0x558e2862, 1, var_48h, var_4ch, 0, 
                    0xffffffff, 0, 0x69775cc2, 0, 0x60);
        var_eh._1_1_ = var_31h;
    }
    return var_eh._1_1_;
}
