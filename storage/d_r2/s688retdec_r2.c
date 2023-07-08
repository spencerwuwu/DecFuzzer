
// WARNING: Removing unreachable block (ram,0x0000145f)
// WARNING: Removing unreachable block (ram,0x000014a4)
// WARNING: Removing unreachable block (ram,0x000014ae)
// WARNING: Removing unreachable block (ram,0x000014c0)
// WARNING: Removing unreachable block (ram,0x000014ca)
// WARNING: Removing unreachable block (ram,0x000014fd)
// WARNING: Removing unreachable block (ram,0x00001507)
// WARNING: Removing unreachable block (ram,0x00001531)

int32_t sym.func_1(void)

{
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_24h;
    uint16_t var_1eh;
    uint var_1ch;
    uint var_18h;
    int32_t var_10h;
    
    var_1eh = 0x688;
    var_24h = 0xffffffff;
    for (var_10h = 0xb; var_10h < 1; var_10h = var_10h + -1) {
        var_24h = 0xd149febb;
        var_1eh = var_1eh | 1;
    }
    sym.set_var(var_10h, 0xa6f, var_24h, 1, var_1eh, 0);
    return var_10h;
}
