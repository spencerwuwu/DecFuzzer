
uint32_t sym.func_1(void)

{
    uint32_t uVar1;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint32_t var_28h;
    uint var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    char var_15h;
    uint32_t var_14h;
    uint32_t var_10h;
    
    var_10h = 0xfffffffe;
    var_15h = '?';
    var_1ch = 0xfffffffe;
    var_20h = 0;
    var_28h = 1;
    for (var_14h = 0; var_14h != 0xffffffeb; var_14h = var_14h - 7) {
        var_15h = -7;
        var_1ch = var_1ch | 0x4d;
        uVar1 = var_14h ^ (var_1ch == 0x47) / -3 ^ 0xfffffffb;
        var_20h = uVar1 - var_10h | var_20h;
        var_28h = var_28h - 1;
        var_10h = uVar1;
    }
    sym.set_var((var_1ch != 0xffffffff) - (var_28h & 0xff) & var_1ch, 0xffffffeb, var_15h, var_1ch, var_20h);
    return var_1ch;
}
