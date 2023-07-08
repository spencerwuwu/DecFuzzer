
// WARNING: Removing unreachable block (ram,0x00001753)
// WARNING: Removing unreachable block (ram,0x000019e4)
// WARNING: Removing unreachable block (ram,0x00001a1f)
// WARNING: Removing unreachable block (ram,0x00001a29)
// WARNING: Removing unreachable block (ram,0x00001a3e)
// WARNING: Removing unreachable block (ram,0x0000196f)
// WARNING: Removing unreachable block (ram,0x00001811)
// WARNING: Removing unreachable block (ram,0x00001899)

uint sym.func_1(void)

{
    bool bVar1;
    uint var_8bh;
    uint var_84h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_50h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint8_t var_22h;
    char var_21h;
    uint var_20h;
    uint8_t var_1bh;
    uint8_t var_1ah;
    uint8_t var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    
    var_10h = 0xa5d6c05b;
    var_14h = 9;
    var_19h = 0x56;
    var_1ah = 0xd5;
    var_1bh = 0xfb;
    var_20h = 1;
    var_21h = -6;
    var_22h = 7;
    var_18h = 0;
    while (var_18h != 0xfffffff8) {
        var_1bh = var_18h;
        var_1ah = var_1bh;
        for (var_19h = 0xf1; var_19h < 0x31; var_19h = var_19h + 1) {
            bVar1 = (0 >> (var_1bh & 0x1f) & 0xffU) != var_10h;
            var_14h = ((((((var_1bh < 0xf3e63d4e) << (var_1ah & 0x1f) & 0xffffU) << 7) / 1 & 0xffU) * 0x10 + bVar1 != 0)
                      <= 0xffff0001 / var_19h) % -0x7882;
            var_20h = 0xc718fe3b;
            var_21h = '\x01';
            var_1ah = (var_1ah <= ((var_18h & 0xff) + 0x42 < var_14h) || bVar1) << (var_1bh & 0x1f) & 0x3b;
            var_10h = 1;
        }
        if (var_18h != 0) break;
        var_22h = var_22h + 1;
        var_18h = 0xffffffff;
    }
    sym.set_var(var_10h, var_14h, var_18h, var_19h, var_1ah, var_1bh, var_20h, var_21h, var_22h);
    return var_20h;
}
