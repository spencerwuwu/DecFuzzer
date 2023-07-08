
// WARNING: Removing unreachable block (ram,0x000015aa)
// WARNING: Removing unreachable block (ram,0x00001573)
// WARNING: Removing unreachable block (ram,0x000014f9)
// WARNING: Removing unreachable block (ram,0x00001724)

uint32_t sym.func_1(void)

{
    uint var_80h;
    uint var_7ah;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint var_5dh;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint32_t var_40h;
    uint var_38h;
    uint32_t var_34h;
    uint var_30h;
    uint16_t var_2ah;
    uint var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    uint var_18h;
    int16_t var_12h;
    uint var_10h;
    
    var_20h = -0x710f9733;
    var_21h = 0xff;
    var_28h = 0xffffffff;
    var_2ah = 0xb48f;
    var_34h = 0;
    var_40h = 0xfffffff8;
    var_12h = 0;
    while ((-0x18 < var_12h && (var_34h == 0x3c72))) {
        for (var_34h = 0xfffffff0; 0x10 < var_34h; var_34h = var_34h + 2) {
            var_20h = var_20h + -1;
        }
        var_40h = var_34h;
        var_28h = 0x491e29ea;
        var_21h = 0x12;
        var_2ah = 0;
        var_12h = var_12h + -1;
    }
    sym.set_var(0x491e29ea, var_12h, 1, 1, var_20h, var_21h, var_28h, var_2ah, 1);
    return var_40h;
}
