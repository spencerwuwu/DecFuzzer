
// WARNING: Removing unreachable block (ram,0x000015f4)
// WARNING: Removing unreachable block (ram,0x000017f4)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000016ab)
// WARNING: Removing unreachable block (ram,0x00001874)
// WARNING: Removing unreachable block (ram,0x00001990)
// WARNING: Removing unreachable block (ram,0x00001695)
// WARNING: Removing unreachable block (ram,0x0000178b)
// WARNING: Removing unreachable block (ram,0x000017ce)
// WARNING: Removing unreachable block (ram,0x000017db)
// WARNING: Removing unreachable block (ram,0x000019f1)
// WARNING: Removing unreachable block (ram,0x000019fb)
// WARNING: Removing unreachable block (ram,0x00001a00)
// WARNING: Removing unreachable block (ram,0x0000181f)
// WARNING: Removing unreachable block (ram,0x0000182a)
// WARNING: Removing unreachable block (ram,0x00001837)
// WARNING: Removing unreachable block (ram,0x0000184a)
// WARNING: Removing unreachable block (ram,0x0000184f)
// WARNING: Removing unreachable block (ram,0x00001863)
// WARNING: Removing unreachable block (ram,0x00001901)
// WARNING: Removing unreachable block (ram,0x00001906)
// WARNING: Removing unreachable block (ram,0x0000190d)
// WARNING: Removing unreachable block (ram,0x00001917)
// WARNING: Removing unreachable block (ram,0x0000199d)
// WARNING: Removing unreachable block (ram,0x000019ec)
// WARNING: Removing unreachable block (ram,0x00001a05)

ushort sym.func_1(void)

{
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_99h;
    uint var_91h;
    uint var_8ch;
    uint var_88h;
    uint var_81h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_68h;
    uint var_62h;
    uint var_58h;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint32_t var_2ch;
    char var_25h;
    uint16_t var_24h;
    uint16_t var_22h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 0xad313dd3;
    var_1ch = 0xffffffff;
    var_20h = 1;
    var_22h = 1;
    var_24h = 0xffff;
    var_25h = '\0';
    var_2ch = 0xfffffffe;
    var_38h = 0xf466df46;
    for (var_18h = -0x19; var_18h < 1; var_18h = var_18h + 1) {
        var_1ch = var_1ch + 1;
        var_22h = var_22h + 1;
        var_24h = var_24h & (1 < var_20h ^ var_20h);
        if (var_14h / -1 == 0) {
            var_25h = (var_14h == 0xbe8d) - var_22h;
            var_2ch = (var_14h | 0xe) < 0xbe8d;
code_r0x00001aa7:
            var_20h = ((0x3505ce4e < (8 % (var_1ch & 0xff) ^ var_22h)) + 0x4d) * var_24h;
            var_38h = 1;
            if (var_25h != '\0') break;
        }
        else if (var_22h == 0) {
            if (var_1ch == 0) {
                sym.set_var(var_14h, var_18h, 0, 0, 0, var_24h, var_25h, var_2ch);
                return 0;
            }
            var_14h = 0;
            goto code_r0x00001aa7;
        }
    }
    sym.set_var(var_14h, 0, var_1ch, var_38h, var_22h, var_24h, var_25h, var_2ch);
    return 0xfff7;
}
