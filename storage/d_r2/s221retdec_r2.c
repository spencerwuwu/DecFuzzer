
// WARNING: Removing unreachable block (ram,0x00001460)
// WARNING: Variable defined which should be unmapped: var_dh

int32_t sym.func_1(void)

{
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    int32_t var_24h;
    uint var_20h;
    uint var_1ch;
    char var_15h;
    uint var_14h;
    uint var_dh;
    
    var_15h = 'S';
    for (var_24h = -0x12; var_24h < -10; var_24h = var_24h + 6) {
        var_15h = '\x01';
    }
    sym.set_var(0xfffffff8, 0xde0b4073, var_15h, 0x5cf1c946, 0x17f4039d);
    return var_24h;
}
