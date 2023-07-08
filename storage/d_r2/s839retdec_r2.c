
// WARNING: Removing unreachable block (ram,0x00001521)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x00001669)
// WARNING: Removing unreachable block (ram,0x0000157a)
// WARNING: Removing unreachable block (ram,0x0000158c)
// WARNING: Removing unreachable block (ram,0x00001596)
// WARNING: Removing unreachable block (ram,0x00001550)
// WARNING: Removing unreachable block (ram,0x0000162e)
// WARNING: Removing unreachable block (ram,0x00001689)
// WARNING: Removing unreachable block (ram,0x0000180c)

uint sym.func_1(void)

{
    uint16_t var_7eh;
    uint var_7bh;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_66h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    char var_4fh;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_24h;
    uint var_20h;
    uchar var_19h;
    uint16_t var_18h;
    uint var_14h;
    uint var_eh;
    
    var_18h = 0xedf2;
    var_19h = 0x8a;
    for (var_4fh = '\0'; -6 < var_4fh; var_4fh = var_4fh + -1) {
        var_18h = var_18h ^ 0x16;
        var_19h = 5;
    }
    var_7eh = CONCAT11(var_19h, 2);
    sym.set_var(0x12, 4, var_18h, var_7eh >> 8, 1, 0xfffffffe, 0, 0xc2, var_7eh & 0xff, 1);
    return 9;
}
