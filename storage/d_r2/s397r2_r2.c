
int32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    char var_dh;
    int32_t var_ch;
    
    var_dh = -3;
    for (var_ch = -0xc; 3 < var_ch; var_ch = var_ch + 1) {
        var_dh = var_dh + '\x01';
    }
    uVar1 = (var_dh != '\0') * var_ch;
    sym.set_var(var_ch, uVar1, uVar1, 0x7fff, 0xd3e8ea43);
    return var_ch;
}
