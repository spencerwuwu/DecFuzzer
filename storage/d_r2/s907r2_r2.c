
uint sym.func_1(void)

{
    uint var_28h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint32_t var_ch;
    uint32_t var_8h;
    
    var_ch = 0xfffffff6;
    for (var_8h = 0; -10 < var_8h; var_8h = var_8h - 1) {
        if (var_8h < 0x14d2edc7) {
            var_ch = var_8h | var_ch;
        }
    }
    sym.set_var(var_8h, var_ch, 0xfe);
    return 1;
}
