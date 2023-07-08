
// WARNING: Removing unreachable block (ram,0x0000168c)
// WARNING: Removing unreachable block (ram,0x00001553)
// WARNING: Removing unreachable block (ram,0x0000151d)
// WARNING: Removing unreachable block (ram,0x000015c7)
// WARNING: Removing unreachable block (ram,0x00001743)
// WARNING: Removing unreachable block (ram,0x00001750)
// WARNING: Removing unreachable block (ram,0x0000175a)
// WARNING: Removing unreachable block (ram,0x00001781)
// WARNING: Removing unreachable block (ram,0x0000178b)
// WARNING: Removing unreachable block (ram,0x000017b9)
// WARNING: Removing unreachable block (ram,0x000017c3)
// WARNING: Removing unreachable block (ram,0x000017e6)
// WARNING: Removing unreachable block (ram,0x00001722)

uchar sym.func_1(void)

{
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_63h;
    uint var_58h;
    uint var_50h;
    uint var_4ch;
    uint var_47h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    char var_25h;
    uint var_24h;
    int16_t var_20h;
    uint var_1ch;
    char var_18h;
    uint var_14h;
    uint var_10h;
    
    var_20h = 1;
    var_24h = 0;
    var_18h = 'W';
    var_25h = '\0';
    while (var_25h == ',') {
        var_18h = var_18h + '\x01';
        var_20h = 0;
        var_24h = 1;
        var_25h = '-';
    }
    sym.set_var(0, 0xfffffffe, 1, 0xffffffa9, var_18h, 0, 0xffffffff, var_20h, var_24h);
    return 0;
}
