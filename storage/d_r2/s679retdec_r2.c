
// WARNING: Removing unreachable block (ram,0x000015a5)
// WARNING: Removing unreachable block (ram,0x000016b1)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint var_84h;
    uint var_7dh;
    uint var_78h;
    uint var_73h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint var_30h;
    uint8_t var_2ah;
    uint8_t var_29h;
    uint32_t var_28h;
    int32_t var_24h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint8_t var_12h;
    uint32_t var_10h;
    
    var_12h = 0xf6;
    var_18h = 0xa7084bc;
    var_1ch = 0xffffffff;
    var_1eh = 0x8c9a;
    var_24h = -1;
    var_28h = 1;
    var_29h = 0x4b;
    var_2ah = 1;
    for (var_10h = 0; var_10h < 2; var_10h = var_10h + 3) {
        var_3ch = 0xfffffff9;
        var_2ah = var_2ah ^ 0x4c;
        if (var_2ah == 0) {
            var_1ch = 0;
            while ((0x2a < var_1ch && (var_3ch = 0xffffffff,  var_12h == 0))) {
                var_12h = 0;
                while (var_12h == 0x1d) {
                    var_28h = 0xe0c3 < (0x20 < var_1ch);
                    if (((var_28h == 0x1bcf2ec2) / -2 & 0xffff) + 1 < 0x7222631) {
                        var_29h = 0;
                    }
                    else {
                        var_3ch = var_3ch & 0x1d;
                    }
                    var_12h = 0x1e;
                }
                var_1ch = var_1ch + 1;
            }
        }
        else {
            var_18h = 1 / var_12h;
            for (var_38h = 0; var_38h < -1; var_38h = var_38h + -5) {
                var_3ch = 0xcb8f6c21;
                var_1ch = 0x9bdd;
                var_1eh = var_18h != 0;
            }
            var_73h._1_1_ = (var_1eh >> ((var_18h & 1U - var_2ah) % var_1ch & 0x1f) & 0x20U) != 0 && var_38h != 0;
            var_24h = (((var_73h._1_1_ == 0x5352f76e) % (var_12h - 1)) * var_10h ^ 0xffff) + -1;
            var_12h = var_12h - 1;
        }
        if ((var_3ch != 0) || (var_18h != 0)) break;
    }
    sym.set_var(var_10h, 0x20, var_12h, var_18h, var_1ch, var_1eh, var_24h, var_28h, var_29h);
    return var_10h & 0xffff;
}
