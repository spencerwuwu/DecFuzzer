
// WARNING: Removing unreachable block (ram,0x00001428)
// WARNING: Removing unreachable block (ram,0x000014d2)
// WARNING: Removing unreachable block (ram,0x000014e4)
// WARNING: Removing unreachable block (ram,0x000014f6)
// WARNING: Removing unreachable block (ram,0x00001500)
// WARNING: Removing unreachable block (ram,0x00001527)
// WARNING: Removing unreachable block (ram,0x00001539)
// WARNING: Removing unreachable block (ram,0x00001543)
// WARNING: Removing unreachable block (ram,0x00001569)

uint32_t sym.func_1(void)

{
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint32_t var_1ch;
    uint var_18h;
    uint var_14h;
    uint8_t var_dh;
    int32_t var_ch;
    
    var_dh = 100;
    var_14h = 0xd11e7587;
    var_1ch = 0xffffffff;
    for (var_ch = -2; var_ch < 0x1c; var_ch = var_ch + 1) {
        var_dh = 0;
        var_1ch = var_1ch ^ 0xf8;
        var_14h = 3;
    }
    sym.set_var(var_ch, var_dh, var_14h, 3, var_1ch);
    return var_1ch;
}
