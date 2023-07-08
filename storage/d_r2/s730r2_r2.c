
uint sym.func_1(void)

{
    uint var_20h;
    uint var_1ch;
    uint var_14h;
    uint var_10h;
    uint16_t var_ah;
    int32_t var_8h;
    
    var_ah = 6;
    var_10h = 0xfffffffd;
    for (var_8h = -0xf; var_8h < -0x14; var_8h = var_8h + -9) {
        var_ah = 0xfff7;
        var_10h = 0;
    }
    sym.set_var(var_8h, var_ah, var_10h);
    return 0xffffffff;
}
