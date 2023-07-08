
// WARNING: Removing unreachable block (ram,0x00001460)

uchar sym.func_1(void)

{
    uint var_40h;
    uint var_38h;
    uint var_30h;
    uint var_28h;
    uint var_20h;
    char var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    
    var_14h = -0x138ae95e;
    var_18h = 0x4b7b8319;
    var_19h = -3;
    for (var_10h = 0; var_10h < -2; var_10h = var_10h + -4) {
        var_14h = var_10h;
        var_18h = 1 < var_10h;
        var_19h = '\x01';
    }
    sym.set_var(var_10h, var_14h, var_18h, var_19h, 0xd1d9d660);
    return var_18h;
}
