
// WARNING: Removing unreachable block (ram,0x000017fd)
// WARNING: Removing unreachable block (ram,0x000016a4)
// WARNING: Removing unreachable block (ram,0x00001862)
// WARNING: Removing unreachable block (ram,0x00001998)
// WARNING: Removing unreachable block (ram,0x000019d4)
// WARNING: Removing unreachable block (ram,0x000019e1)
// WARNING: Removing unreachable block (ram,0x00001947)
// WARNING: Removing unreachable block (ram,0x00001a56)
// WARNING: Removing unreachable block (ram,0x0000163a)
// WARNING: Removing unreachable block (ram,0x000018b9)
// WARNING: Removing unreachable block (ram,0x00001960)
// WARNING: Removing unreachable block (ram,0x00001937)
// WARNING: Removing unreachable block (ram,0x00001671)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    char cVar1;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c6h;
    uint var_b5h;
    uint var_afh;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_76h;
    uint var_6eh;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    int32_t var_48h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint16_t var_2eh;
    uint var_2ch;
    uint var_28h;
    uint16_t var_22h;
    int16_t var_1eh;
    uint16_t var_1ch;
    char var_19h;
    int32_t var_18h;
    uint var_14h;
    uint32_t var_10h;
    
    var_18h = -0x178e268a;
    var_19h = -0x4b;
    var_1ch = 0xffff;
    var_1eh = -8;
    var_22h = 0xffff;
    var_2eh = 0x6f46;
    var_34h = 0xe14b9387;
    var_48h = -0x47c9b4d4;
    for (var_10h = 0xd; -6 < var_10h; var_10h = var_10h - 1) {
        for (var_18h = -0x17; var_18h < -0x14; var_18h = var_18h + 1) {
            var_19h = 0x4f5774d1 < var_18h;
            var_1ch = var_1ch | 0xb;
            var_48h = ((var_19h < var_22h) * (var_10h & 0xffff) != -8) * 0xfa;
            var_22h = var_22h + 1;
        }
    }
    if (var_19h == '\0') {
        cVar1 = -0x58;
        do {
            var_19h = cVar1;
            var_1eh = 1;
            var_b5h._0_1_ = true;
            cVar1 = var_19h;
            if (var_19h == '\0') {
                cVar1 = '\0';
                var_b5h._0_1_ = 1 << (var_1ch & 0x1f) == -0x697fca8b;
            }
            var_1ch = var_b5h._0_1_;
            var_34h = 1;
        } while (var_22h != 0);
    }
    else {
        var_2eh = 0x6f47;
        var_10h = 0;
    }
    sym.set_var(var_10h, var_48h, var_18h, var_19h, 0xffffffff, var_1ch, var_1eh, 0x37, var_22h, 0x53, 0xffffffff, 
                0xfffffffe, var_2eh, var_34h, 1, 0x6f);
    return 1;
}
