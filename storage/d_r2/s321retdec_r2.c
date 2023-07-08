
// WARNING: Removing unreachable block (ram,0x000015e5)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001598)
// WARNING: Removing unreachable block (ram,0x00001589)
// WARNING: Removing unreachable block (ram,0x000016c3)

uint32_t sym.func_1(void)

{
    uint var_6ah;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4bh;
    uint var_44h;
    uint var_3ch;
    uint var_34h;
    uint var_30h;
    int32_t var_2ch;
    uint16_t var_24h;
    uint32_t var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_eh;
    
    var_24h = 0;
    var_2ch = -0x1cd724e6;
    var_20h = 0xfffffff0;
    while (var_20h == 0x14) {
        var_24h = 9;
        var_2ch = var_2ch + 1;
        var_20h = 0x15;
    }
    sym.set_var(0xfffb, 0, 0x727c, 0, 0xfffb, var_20h, 0xfffe, var_24h, 0xffffe816, var_2ch);
    return var_20h & 0xffff;
}
