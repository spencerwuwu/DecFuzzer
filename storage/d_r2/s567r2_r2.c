
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000016cc)
// WARNING: Removing unreachable block (ram,0x00001784)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_68h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_51h;
    uint var_4ch;
    uint var_44h;
    uint32_t var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_30h;
    uint var_2ch;
    int16_t var_20h;
    char var_1dh;
    uint16_t var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_eh;
    
    var_1ch = 0xb7dd;
    var_1dh = -0x4f;
    var_20h = 1;
    var_40h = 0x2e3979d7;
    var_eh._0_2_ = 0xfffe;
    for (var_38h = -1; var_38h < -0x12; var_38h = var_38h + -1) {
        var_1ch = var_1ch & var_eh;
        var_eh._0_2_ = (-1 < ((var_40h & 0xff) < 10)) << 1;
        var_20h = 0;
        var_40h = var_40h | 9;
        var_1dh = '\x01';
    }
    sym.set_var(var_eh, 9, 1, 0, var_1ch, var_1dh, var_20h, 1, 1);
    return 0xabd119e2;
}
