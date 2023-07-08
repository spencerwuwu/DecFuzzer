
// WARNING: Removing unreachable block (ram,0x000014f0)
// WARNING: Removing unreachable block (ram,0x00001760)
// WARNING: Removing unreachable block (ram,0x0000176a)
// WARNING: Removing unreachable block (ram,0x000017ee)
// WARNING: Removing unreachable block (ram,0x000017e9)
// WARNING: Removing unreachable block (ram,0x00001677)
// WARNING: Removing unreachable block (ram,0x00001465)
// WARNING: Removing unreachable block (ram,0x000015b1)
// WARNING: Removing unreachable block (ram,0x000015be)
// WARNING: Removing unreachable block (ram,0x000015c8)
// WARNING: Removing unreachable block (ram,0x00001645)
// WARNING: Removing unreachable block (ram,0x000016a1)
// WARNING: Could not reconcile some variable overlaps

uint8_t sym.func_1(void)

{
    uint var_60h;
    uint var_5bh;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint8_t var_1fh;
    char var_1dh;
    uint var_18h;
    uint32_t var_10h;
    
    var_10h = 0;
    var_1dh = '\n';
    for (var_1fh = 0xf2; var_1fh < 0xf; var_1fh = var_1fh + 1) {
        var_5bh._2_1_ = var_10h != 0;
        var_10h = ((var_5bh._2_1_ == var_10h | var_10h) != 0) < 0x659e;
        var_1dh = '\0';
    }
    sym.set_var(var_10h, 9, 4, 0xffffffff, 1, var_1dh, 0xdf);
    return var_1fh;
}
