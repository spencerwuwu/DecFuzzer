
// WARNING: Removing unreachable block (ram,0x0000158a)
// WARNING: Removing unreachable block (ram,0x0000169b)
// WARNING: Removing unreachable block (ram,0x00001959)
// WARNING: Removing unreachable block (ram,0x00001848)
// WARNING: Removing unreachable block (ram,0x00001883)
// WARNING: Removing unreachable block (ram,0x00001893)
// WARNING: Removing unreachable block (ram,0x00001903)
// WARNING: Removing unreachable block (ram,0x00001938)
// WARNING: Removing unreachable block (ram,0x00001502)
// WARNING: Removing unreachable block (ram,0x00001526)
// WARNING: Removing unreachable block (ram,0x00001548)
// WARNING: Removing unreachable block (ram,0x00001576)
// WARNING: Removing unreachable block (ram,0x000015a4)
// WARNING: Removing unreachable block (ram,0x0000166f)

uint8_t sym.func_1(void)

{
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_28h;
    uint8_t var_1dh;
    uint var_1ch;
    uint8_t var_15h;
    uint var_14h;
    uint var_bp_10h;
    
    var_1dh = 0xbe;
    var_1ch = 0;
    for (var_15h = 0; var_15h < 0x23; var_15h = var_15h + 1) {
        if (var_15h == 0) {
            var_1dh = var_1dh + 1;
        }
        var_1ch = 1;
    }
    sym.set_var(0x83c8fc55, var_15h, var_1ch, var_1dh, 0x275d, 0xffffffa8, 0xfffffffa, 0xab, 0x1940);
    return var_15h;
}
