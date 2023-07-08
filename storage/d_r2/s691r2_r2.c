
// WARNING: Removing unreachable block (ram,0x000013f0)
// WARNING: Removing unreachable block (ram,0x00001435)

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_3ch;
    uint var_34h;
    uint var_30h;
    uint var_29h;
    uint var_20h;
    int32_t var_1ch;
    uint var_18h;
    uint8_t var_11h;
    uint var_10h;
    uint32_t var_ch;
    uint var_8h;
    
    var_11h = 0x33;
    uVar1 = 1;
    for (var_ch = 0xfffffff1; var_ch < 7; var_ch = var_ch + 1) {
        var_1ch = 0;
        while ((-10 < var_1ch && (var_11h = var_11h + 1,  uVar1 == 0))) {
            var_1ch = var_1ch + -7;
            uVar1 = var_11h;
        }
    }
    sym.set_var(0x7d65121a, var_ch, 5, var_11h);
    return var_ch & 0xffff;
}
