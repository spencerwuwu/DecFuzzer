
// WARNING: Removing unreachable block (ram,0x000015f1)
// WARNING: Removing unreachable block (ram,0x000015dd)
// WARNING: Removing unreachable block (ram,0x000015d3)

int32_t sym.func_1(void)

{
    char cVar1;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_30h;
    uint8_t var_29h;
    uint var_28h;
    uint var_24h;
    int32_t var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_10h;
    
    var_18h = 0;
    var_29h = 0xff;
    cVar1 = '\b';
    for (var_1ch = 0x1a; var_1ch < -4; var_1ch = var_1ch + -6) {
        cVar1 = cVar1 + '\x01';
        var_18h = 0xfffffffe;
        var_29h = var_29h + 1;
    }
    sym.set_var(0xb110c93b, 0xfffffff9, var_18h, var_1ch, 0xffffffe6, 0xffffff86, 9, 0xffffffff, 0, var_29h);
    return cVar1;
}
