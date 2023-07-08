
// WARNING: Removing unreachable block (ram,0x000018dc)
// WARNING: Removing unreachable block (ram,0x00001905)
// WARNING: Removing unreachable block (ram,0x00001915)
// WARNING: Removing unreachable block (ram,0x00001582)
// WARNING: Removing unreachable block (ram,0x000014b9)
// WARNING: Removing unreachable block (ram,0x00001679)
// WARNING: Removing unreachable block (ram,0x00001656)
// WARNING: Removing unreachable block (ram,0x000019cf)

uint sym.func_1(void)

{
    bool bVar1;
    uint var_9eh;
    uint var_96h;
    uint var_90h;
    uint var_88h;
    uint var_7ch;
    uint var_78h;
    uint var_71h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint16_t var_1ch;
    uint8_t var_19h;
    int32_t var_18h;
    char var_13h;
    uint var_12h;
    
    var_18h = 0;
    var_19h = 6;
    var_1ch = 0;
    var_24h = 4;
    do {
        bVar1 = false;
        while (bVar1) {
            var_18h = var_18h + 1;
            var_19h = bVar1 <= (0xfffffff7U < 0 / var_18h + var_18h) == 0xfffffffa;
            if (bVar1) break;
            bVar1 = true;
        }
        var_1ch = var_1ch + 1;
        var_13h = '\0';
        while( true ) {
            if (var_13h != '\x19') {
                sym.set_var(0xfffe, var_13h, var_18h, var_19h, var_1ch, 1, var_24h, 0x5f91b207);
                return 0xd2c8cc2a;
            }
            if (var_1ch != 0) break;
            var_24h = 0xd295891f;
            var_13h = '\x1a';
        }
    } while( true );
}
