
// WARNING: Removing unreachable block (ram,0x00001624)
// WARNING: Removing unreachable block (ram,0x0000188a)
// WARNING: Removing unreachable block (ram,0x000018a4)
// WARNING: Removing unreachable block (ram,0x000018b1)

uint32_t sym.func_1(void)

{
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_99h;
    uint var_94h;
    uint var_8ch;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_71h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint32_t var_4ch;
    uint var_44h;
    uint32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    uint8_t var_2dh;
    uint16_t var_2ch;
    uint32_t var_28h;
    uint16_t var_22h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    
    var_10h = -0x539b597c;
    var_18h = 9;
    var_1ch = 9;
    var_20h = -0x4d8b4070;
    var_22h = 0xce6b;
    var_28h = 0x69ed994a;
    var_2ch = 1;
    var_2dh = 0xff;
    var_34h = 1;
    var_38h = 0;
    var_40h = 3;
    var_14h = 2;
    do {
        if (-0xb < var_14h) {
            sym.set_var(var_10h, var_14h, var_18h, var_1ch, var_20h, var_22h, var_28h, var_2ch, var_2dh, var_34h, 
                        var_38h);
            return var_28h;
        }
        var_4ch = 0xa4ccfd6;
        for (var_18h = -0x17; var_18h < -0x1a; var_18h = var_18h + -1) {
            for (var_20h = 0x17; var_20h < 0x12; var_20h = var_20h + -1) {
                var_10h = 1;
                var_22h = var_4ch;
                var_4ch = 0xffffedbf;
            }
            var_22h = var_22h + 1;
            var_40h = 0x2595;
            var_28h = ((var_10h != 0) == 0x3542) < 0x2cfeaa3c | var_28h;
            var_2ch = var_2ch + 1;
            var_2dh = var_2dh | (-2 < (((var_1ch < (var_2ch <= var_22h)) < 0xe06f66b6) % 0xb7 >> 1 < 0x11cf5fc6)) %
                                -0x3eb02bd7;
            var_34h = var_2dh;
            var_4ch = ((((var_20h != 0) + 0xa23c0fa3 & 0xff) >> 1 ^ 0xff) - 2U & 0xffff) >> 9 | var_4ch;
            if (var_34h != 0) break;
            var_38h = var_38h + -1;
        }
        for (var_2dh = 0; var_2dh != 0; var_2dh = var_2dh + 8) {
            var_1ch = var_40h;
        }
        var_10h = var_38h;
        var_14h = var_14h + -1;
    } while( true );
}
