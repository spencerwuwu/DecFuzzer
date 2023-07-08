
// WARNING: Removing unreachable block (ram,0x00001516)

ushort sym.func_1(void)

{
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint32_t var_40h;
    uint var_3ch;
    uint var_38h;
    uint32_t var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    int32_t var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    int32_t var_14h;
    uint var_10h;
    
    var_24h = 0x7222631;
    var_28h = 0xffffffff;
    var_30h = 0xffffffff;
    var_34h = 0x6a205b29;
    var_40h = 0x545f0a86;
    for (var_14h = 0; 0x12 < var_14h; var_14h = var_14h + 1) {
        for (var_24h = 0; var_24h < 0x11; var_24h = var_24h + 4) {
            var_28h = 0xd8f8f576;
            var_34h = 0xd8f8f576;
        }
        var_30h = 0x9980;
        var_40h = (var_34h ^ 0xfe660000) & var_40h;
    }
    sym.set_var(2, var_40h, 5, 0xaed23b61, 0xffffffff, var_24h, var_28h, 0xc8e82b3, var_30h);
    return var_40h;
}
