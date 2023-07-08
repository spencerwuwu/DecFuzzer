
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    bool var_46h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint16_t var_eh;
    uint32_t var_ch;
    int16_t var_8h;
    uint var_5h;
    
    var_8h = 0;
    var_eh = 0xffff;
    var_5h._0_1_ = 'L';
    for (var_ch = 0x1d; var_ch < 0x3d; var_ch = var_ch + 1) {
        var_8h = 1;
        var_5h._0_1_ = '\0';
        var_46h = var_ch != 1 || (1U % 0 & 0xffffffff) % 0xe5741311 < '\x01';
        var_eh = var_46h;
    }
    sym.set_var(var_5h, var_8h, var_ch, var_eh);
    return var_ch;
}
