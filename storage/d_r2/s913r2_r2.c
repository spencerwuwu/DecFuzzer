
// WARNING: Removing unreachable block (ram,0x00001431)

ushort sym.func_1(void)

{
    uint var_3ch;
    uint var_34h;
    uint var_30h;
    uint var_2ah;
    uint var_24h;
    int16_t var_1eh;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint8_t var_dh;
    uint var_8h;
    
    var_dh = 0;
    for (var_1eh = -10; 0xe < var_1eh; var_1eh = var_1eh + 6) {
        var_dh = var_dh ^ 0x24;
    }
    sym.set_var(0, 0, 0xfff8, var_dh);
    return 0xfff8;
}
