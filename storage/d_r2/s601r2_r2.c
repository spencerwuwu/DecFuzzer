
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001555)
// WARNING: Removing unreachable block (ram,0x00001586)
// WARNING: Removing unreachable block (ram,0x00001590)
// WARNING: Removing unreachable block (ram,0x000014b3)

uchar sym.func_1(void)

{
    uint var_4dh;
    uint var_44h;
    uint var_3ch;
    uint var_36h;
    uint var_30h;
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint32_t var_14h;
    uint var_dh;
    
    var_14h = 0xffffffff;
    var_1ah = 0xfffa;
    for (var_18h = -7; -0x18 < var_18h; var_18h = var_18h + -1) {
        var_1ah = var_1ah ^ 0xfff8;
        var_14h = var_1ah;
    }
    sym.set_var(var_14h, var_18h, var_1ah, 0xec7e4343, 0xffffffff);
    return 0x5e;
}
