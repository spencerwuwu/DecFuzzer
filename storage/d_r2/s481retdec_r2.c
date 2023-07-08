
// WARNING: Removing unreachable block (ram,0x000016f7)
// WARNING: Removing unreachable block (ram,0x00001526)
// WARNING: Removing unreachable block (ram,0x0000187b)
// WARNING: Removing unreachable block (ram,0x00001657)

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint var_a4h;
    uint var_9eh;
    uint var_98h;
    uint var_91h;
    uint var_8ah;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    int32_t var_48h;
    uint var_44h;
    uint8_t var_3fh;
    uint var_3ch;
    uint32_t var_38h;
    uint var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint var_24h;
    uint32_t var_1ch;
    int16_t var_16h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_16h = -0x961;
    var_1ch = 0x8f9611ca;
    var_28h = 0xa73bc0e3;
    var_2ch = 0;
    var_38h = 0x15b38d6a;
    uVar1 = 0xf9;
    var_14h = 0;
    do {
        if (-0xd < var_14h) {
            for (var_28h = 0; var_28h < 2; var_28h = var_28h + 7) {
                var_2ch = var_2ch + 1;
            }
            sym.set_var(var_14h, var_16h, 1, var_1ch, 0xfffffffb, 0x6275f98a, var_28h, var_2ch);
            return 0xba2d3c5e;
        }
        uVar2 = 0x4b67;
        var_16h = 1;
        for (var_3fh = 0xe3; var_3fh < '\0'; var_3fh = var_3fh + 1) {
            if (var_3fh != 0) {
                uVar2 = var_3fh <= (var_14h < 0xa2c9) != 0x57f0 & uVar2;
            }
            var_1ch = (var_14h <= uVar2 % var_14h - var_3fh) << (var_3fh & 0x1f);
        }
        if (var_1ch == 8) {
            if (0x6275f98a < (var_14h != 1)) {
                sym.set_var(var_14h, 1, 1, 9, 0xfffffffb, 0x6275f98a, var_28h, 0);
                return var_38h;
            }
            uVar1 = uVar1 & 1;
            var_1ch = ((var_38h | 0xe96c9f93) < (uVar1 != 0xc)) * -5;
            var_28h = ((1 < (var_1ch & 0xe96c9f93) & uVar2) != 0) * -5;
        }
        else {
            var_60h = 0xffffffff;
            var_64h = 0xf2fe87a7;
            for (var_48h = 0x15; -0x1e < var_48h; var_48h = var_48h + -1) {
                var_64h = var_60h ^ 0xffffffff;
                var_60h = var_64h;
            }
            var_38h = var_14h & 0xffff & var_38h;
            var_1ch = 2 < ((var_38h % (var_28h & 0xffff) + ((var_64h ^ 0xffffffff) & 0xffff) & 0xff) % 0x9f | 0xfffffffb
                          );
        }
        var_14h = var_14h - 1;
    } while( true );
}
