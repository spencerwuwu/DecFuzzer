
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x00001475)
// WARNING: Removing unreachable block (ram,0x000014ab)
// WARNING: Removing unreachable block (ram,0x000014b5)
// WARNING: Removing unreachable block (ram,0x00001600)
// WARNING: Removing unreachable block (ram,0x000014d5)
// WARNING: Removing unreachable block (ram,0x000014df)
// WARNING: Removing unreachable block (ram,0x00001537)
// WARNING: Removing unreachable block (ram,0x00001541)

uchar sym.func_1(void)

{
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    uint var_28h;
    uint var_20h;
    uint var_18h;
    int32_t var_14h;
    uint var_dh;
    
    var_18h = 0xffffffff;
    for (var_14h = 0; var_14h < 0x1a; var_14h = var_14h + 1) {
        var_18h = 0;
    }
    sym.set_var(var_14h, var_18h, 5, 0xff, 0xfffffff9, 0xffffffee, 0xfffd);
    return 0xff;
}
