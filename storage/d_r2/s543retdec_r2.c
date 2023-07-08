
// WARNING: Removing unreachable block (ram,0x00001506)
// WARNING: Removing unreachable block (ram,0x000014f4)
// WARNING: Removing unreachable block (ram,0x0000155f)

uint sym.func_1(void)

{
    uint var_70h;
    uint var_69h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_51h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint var_1ch;
    uint var_18h;
    uint8_t var_11h;
    uint var_10h;
    
    var_11h = 5;
    var_20h = 0x3bc6c2db;
    var_24h = 0x5c2c102d;
    var_28h = 3;
    for (var_38h = 0; 2 < var_38h; var_38h = var_38h + 3) {
        var_24h = (((var_20h | 0x1170 | var_11h) != 0x422d5fba) + '\x05') * '?' ^ var_24h;
        var_11h = var_11h & 0xbc18 / ((var_20h | 0x1170) < ((var_38h != 0) != true)) + 1U;
        var_20h = var_11h == 0;
        var_28h = var_28h + 1;
    }
    sym.set_var(0xfffffffb, var_11h, 0x422d5fba, 0xffffffff, 1, var_24h, var_28h, 0xf288841e, 0xf288841e);
    return 0x18;
}
