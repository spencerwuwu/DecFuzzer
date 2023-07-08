
// WARNING: Removing unreachable block (ram,0x000013f7)

uint32_t sym.func_1(void)

{
    uint var_34h;
    uint var_30h;
    uint var_28h;
    uint var_24h;
    uint var_1ch;
    uint var_14h;
    uint16_t var_eh;
    uint32_t var_ch;
    
    var_eh = 1;
    for (var_ch = 10; -0x18 < var_ch; var_ch = var_ch - 1) {
        var_eh = var_eh - 1;
    }
    sym.set_var(var_ch, var_eh);
    return var_ch & 0xffff;
}
