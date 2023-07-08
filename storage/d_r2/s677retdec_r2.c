
// WARNING: Removing unreachable block (ram,0x0000149d)

uint sym.func_1(void)

{
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int16_t var_16h;
    uint var_14h;
    uint var_ch;
    
    var_16h = -1;
    var_1ch = 4;
    for (var_20h = 0; 0x19 < var_20h; var_20h = var_20h + 1) {
        var_16h = var_20h;
        var_1ch = var_1ch + 1;
    }
    sym.set_var(0xfffffff9, 7, 0xb6bd0d4, var_16h, var_1ch);
    return 0xffffffff;
}
