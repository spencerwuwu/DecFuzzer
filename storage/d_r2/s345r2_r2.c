
// WARNING: Removing unreachable block (ram,0x00001665)
// WARNING: Removing unreachable block (ram,0x000016c4)
// WARNING: Removing unreachable block (ram,0x000016f0)
// WARNING: Removing unreachable block (ram,0x000016fa)
// WARNING: Removing unreachable block (ram,0x00001726)
// WARNING: Removing unreachable block (ram,0x00001730)
// WARNING: Removing unreachable block (ram,0x00001750)

int32_t sym.func_1(void)

{
    uint var_68h;
    uint var_62h;
    uint var_58h;
    uint var_4ch;
    uint32_t var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    int32_t var_28h;
    uint8_t var_22h;
    uint var_20h;
    uint16_t var_18h;
    uint8_t var_15h;
    uint16_t var_14h;
    uint16_t var_12h;
    uint32_t var_10h;
    
    var_12h = 0;
    var_14h = 0x3af7;
    var_15h = 0;
    var_18h = 0x7142;
    for (var_10h = 0; 0xe < var_10h; var_10h = var_10h + 1) {
        var_12h = var_12h + 1;
        for (var_28h = -0xc; var_28h < -1; var_28h = var_28h + 1) {
            var_48h = 1;
            for (var_22h = 0; var_22h < 0x1d; var_22h = var_22h + 1) {
                var_48h = var_10h & 1 & var_48h;
                var_14h = var_12h | -1 < var_28h;
                var_15h = -0xe / var_48h;
            }
        }
        var_18h = var_10h / var_12h < 0x71424772;
    }
    sym.set_var(1, var_12h, var_14h, var_15h | 1, var_18h, 0xfffff9de, 0xffffffc9, 6, 0, 1);
    return var_15h | 1;
}
