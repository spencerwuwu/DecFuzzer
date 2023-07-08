
// WARNING: Removing unreachable block (ram,0x00001503)
// WARNING: Removing unreachable block (ram,0x00001603)
// WARNING: Removing unreachable block (ram,0x0000163f)

uint sym.func_1(void)

{
    uint8_t uVar1;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    uint var_2ch;
    uint32_t var_28h;
    uint var_24h;
    char var_1fh;
    int16_t var_1eh;
    uint var_1ch;
    int32_t var_18h;
    uint var_14h;
    uint var_10h;
    
    var_10h = 0x90ac204e;
    var_1eh = 0;
    var_1fh = '\t';
    var_24h = 0xad8edce5;
    var_28h = 0x7aa55709;
    for (var_18h = 0; 2 < var_18h; var_18h = var_18h + 2) {
        var_1eh = -0x6719;
        uVar1 = 0xffff % 0 ^ 0xe7;
        var_1fh = ((uVar1 & 0xffffU) * (uVar1 & 0xffffU) < 0x6dad3f05) / uVar1;
        var_24h = 1;
        var_10h = 0;
        var_28h = -4 < (2U - var_18h & 0xffff) * 0xfffa & var_28h;
    }
    sym.set_var(var_10h, 0x58e469ad, var_18h, 1, var_1eh, var_1fh, var_24h, var_28h);
    return 0xfffffffc;
}
