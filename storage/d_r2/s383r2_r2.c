
// WARNING: Removing unreachable block (ram,0x000017a2)

uint sym.func_1(void)

{
    uint var_9ch;
    uint var_96h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    int32_t var_40h;
    uint var_3ch;
    uint8_t var_33h;
    uint16_t var_32h;
    int32_t var_30h;
    uint8_t var_29h;
    int32_t var_28h;
    uint var_20h;
    uint8_t var_19h;
    int32_t var_18h;
    uint8_t var_12h;
    uint var_10h;
    
    var_19h = 0x5d;
    var_28h = -0x267565da;
    var_29h = 0xb7;
    var_30h = 1;
    var_32h = 0;
    var_33h = 0xff;
    var_12h = 0xfc;
    for (var_18h = -0x1d; var_18h != 0x14; var_18h = var_18h + 1) {
        var_19h = var_19h & 9;
        if (((true < ((((var_18h | 0x1cec) >> 8 & 0xffU) * 0xff != 0) < -4)) < -9) < var_12h) {
            for (var_40h = -7; var_40h < -0xf; var_40h = var_40h + -1) {
                var_28h = var_28h + 1;
                var_12h = (var_18h | 0xfa) ^ 0x11;
                var_29h = (var_12h == 0x30) + 6;
                var_30h = -0x3a % var_28h;
            }
            var_32h = var_32h | ((0x3142 - ((-1 >> (var_18h != 0) != 0 ^ 0xffU) & 1)) % 0 & 0xff) >> (var_29h & 0x1f) ^
                                0x4c;
        }
        else {
            var_33h = var_33h | 0x9e;
        }
    }
    sym.set_var(0xa32b1cec, 0x30, var_12h, 0x14, var_19h, 0xffffffff, 0, var_28h, var_29h, var_30h, var_32h, var_33h);
    return 0xa32b1cec;
}
