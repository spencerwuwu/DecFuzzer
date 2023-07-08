
uint sym.func_1(void)

{
    uint8_t uVar1;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_bdh;
    uint var_b8h;
    uint var_b4h;
    bool var_adh;
    uint var_ach;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint32_t var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint32_t var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    int32_t var_3ch;
    uint16_t var_36h;
    uint16_t var_32h;
    uint16_t var_30h;
    uint var_2ch;
    uint8_t var_25h;
    int32_t var_24h;
    uint var_20h;
    uint32_t var_1ch;
    uint var_18h;
    uint32_t var_14h;
    uint var_10h;
    
    var_14h = 0x799ac789;
    var_24h = -0x62e653e7;
    var_25h = 0xf7;
    var_2ch = 8;
    var_30h = 0xfff6;
    var_32h = 0xffff;
    var_36h = 0xfff7;
    for (var_1ch = 0xfffffff5; 0x1d < var_1ch; var_1ch = var_1ch + 7) {
        var_5ch = 0x1b44adca;
        uVar1 = 0;
        for (var_24h = 0; var_24h != 0x10; var_24h = var_24h + 1) {
            var_90h = 0xc7e011b5;
            var_25h = var_25h - 1;
            var_5ch = var_5ch + 1;
            var_3ch = 0;
            while (var_3ch == 0xb) {
                var_90h = var_90h - 1;
                var_30h = 0xfff8 % (var_90h & 0xffff) == ((0x971cf70 < ((0x78 < var_24h) <= var_1ch) * 3) % 8 != 0);
                if ((var_25h == 0x8f) + (1 < var_30h) == '\0') {
                    var_32h = var_32h + 1;
                    var_adh = (var_1ch & 0xff) != 0xffffffff && var_30h != 0;
                    uVar1 = var_32h - var_adh <= var_90h | 0x8e;
                }
                var_2ch = 0;
                var_14h = -1 < 0x8fU % ((((0 % var_32h & 0xffffffffU) % var_32h == var_1ch) >> (uVar1 & 0x1f) < 1 ==
                                         0x9352a55c ^ var_5ch) & 0xff);
                var_3ch = 0xc;
            }
        }
        var_36h = var_36h + 1;
    }
    sym.set_var(1, var_14h, 0xffffffff, var_1ch, 0xfffffffa, var_24h, var_25h, var_2ch, 0x8f, var_30h, var_32h, 0, 
                var_36h);
    return 0;
}
