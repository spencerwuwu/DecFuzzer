
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0000167d)

uint sym.func_1(void)

{
    uint var_72h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_59h;
    bool var_51h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 1;
    var_18h = 0x9be67e78;
    var_1ch = 1;
    var_24h = 0xfffffffe;
    var_34h = 6;
    for (var_38h = 0; var_38h < 7; var_38h = var_38h + 9) {
        var_34h = (-8 % var_14h ^ 0xfffffffcU) & var_34h;
        var_18h = (-((var_34h | 5) != 0x5abe) - 9U != var_14h) < 0xfffffffe;
        var_51h = var_18h != 0;
        var_1ch = var_51h;
        var_24h = 0;
        var_14h = var_18h;
    }
    sym.set_var(5, var_14h, var_18h, var_1ch, 0, var_24h, 0xfffe, 0);
    return 0;
}
