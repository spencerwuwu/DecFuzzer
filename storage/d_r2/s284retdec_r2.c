
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0000193f)
// WARNING: Removing unreachable block (ram,0x00001986)
// WARNING: Removing unreachable block (ram,0x00001993)
// WARNING: Removing unreachable block (ram,0x000019b7)
// WARNING: Removing unreachable block (ram,0x00001a67)
// WARNING: Removing unreachable block (ram,0x00001a92)
// WARNING: Removing unreachable block (ram,0x00001ab4)
// WARNING: Removing unreachable block (ram,0x00001ad0)
// WARNING: Removing unreachable block (ram,0x00001b39)
// WARNING: Removing unreachable block (ram,0x00001b49)
// WARNING: Removing unreachable block (ram,0x00001684)

uint sym.func_1(void)

{
    bool bVar1;
    bool bVar2;
    uint var_a9h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_96h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_69h;
    uint var_60h;
    uint var_5ah;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    int32_t var_3ch;
    uint var_38h;
    uint var_30h;
    uint var_28h;
    uint var_24h;
    uint16_t var_1eh;
    uint8_t var_1ah;
    char var_19h;
    uint var_18h;
    uint var_14h;
    uint var_eh;
    
    var_19h = '\x04';
    var_1ah = 0xf0;
    var_1eh = 5;
    bVar1 = false;
    for (var_3ch = 0; var_3ch != -0xb; var_3ch = var_3ch + -1) {
        var_1ah = var_3ch != 0;
        var_1eh = 8;
        bVar2 = var_3ch != 0;
        var_19h = bVar1;
        bVar1 = bVar2;
    }
    sym.set_var(0xdf, 7, 0x1e, var_19h, var_1ah, 0x592a, var_1eh, 0xffffffc6, 0x5621383e, 0, 0);
    return 0x41;
}
