
// WARNING: Removing unreachable block (ram,0x00001655)
// WARNING: Removing unreachable block (ram,0x00001991)
// WARNING: Removing unreachable block (ram,0x000019a1)
// WARNING: Removing unreachable block (ram,0x00001606)
// WARNING: Removing unreachable block (ram,0x00001590)
// WARNING: Removing unreachable block (ram,0x000015b4)
// WARNING: Removing unreachable block (ram,0x000017bb)
// WARNING: Removing unreachable block (ram,0x00001882)

uint sym.func_1(void)

{
    uint var_ach;
    uint var_a4h;
    uint var_9dh;
    uint var_95h;
    uint var_8ch;
    uint var_84h;
    uint var_7dh;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint var_5dh;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint16_t var_30h;
    char var_2dh;
    uint16_t var_2ch;
    uint var_28h;
    uint16_t var_22h;
    int32_t var_20h;
    uint var_1ch;
    int32_t var_18h;
    uint8_t var_13h;
    uint var_12h;
    
    var_20h = 0x61fa7bb3;
    var_22h = 2;
    var_28h = 0x6c342871;
    var_2ch = 0x567d;
    var_2dh = -2;
    var_30h = 0xffff;
    var_18h = 0;
    for (var_13h = 0xf5; 1 < var_13h; var_13h = var_13h + 1) {
        var_20h = var_20h + -1;
        if (var_18h == 0) {
            var_28h = 0;
            var_22h = 0;
            var_2ch = var_2ch & 0xfffb;
            var_18h = 3;
            while (var_18h == 0x11) {
                var_2dh = '\0';
                var_18h = 0x12;
            }
            var_30h = var_30h ^ 1;
        }
    }
    sym.set_var(0x4f84, var_13h, 0, var_18h, 0, var_20h, var_22h, var_28h, 0xfffffff9, var_2ch, var_2dh, var_30h);
    return 0xfffd;
}
