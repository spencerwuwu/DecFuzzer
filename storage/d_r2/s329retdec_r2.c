
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001575)
// WARNING: Removing unreachable block (ram,0x000015b0)

int32_t sym.func_1(void)

{
    uint var_74h;
    uint var_6eh;
    uint var_68h;
    uint var_61h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint16_t var_30h;
    uint16_t var_2eh;
    uint var_2ch;
    uint32_t var_28h;
    char var_21h;
    uint var_20h;
    uint var_18h;
    uint var_14h;
    uint var_dh;
    
    var_28h = 0xd5dc534;
    var_2ch = 0xe2afe588;
    var_2eh = 0xbdad;
    var_30h = 0x6b81;
    for (var_21h = '\x18'; var_21h < -8; var_21h = var_21h + -5) {
        var_28h = var_28h ^ 0x15359783;
        var_2ch = 0xfffffff8;
        var_2eh = var_2eh ^ 0xffbf;
        var_30h = 0xa945;
    }
    sym.set_var(0x593c869a, 0xee6e, 0x5bdddd59, var_21h, var_28h, var_2ch, var_2eh, var_30h);
    return var_2ch;
}
