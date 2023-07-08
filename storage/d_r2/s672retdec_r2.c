
int32_t sym.func_1(void)

{
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint var_18h;
    uint var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    
    var_8h = 0xe1757117;
    var_1ch = 0xca3eaa3e;
    var_ch = -0xc;
    while ((-0x1b < var_ch && (var_8h == 0))) {
        for (var_1eh = 0; 0x28 < var_1eh; var_1eh = var_1eh + 4) {
            var_1ch = var_8h ^ 0xfffffffc ^ var_1ch;
            var_8h = 0;
        }
        var_ch = var_ch + -1;
    }
    sym.set_var(var_8h, var_ch);
    return var_1ch;
}
