
// WARNING: Removing unreachable block (ram,0x0000158b)
// WARNING: Removing unreachable block (ram,0x00001475)

uint sym.func_1(void)

{
    bool var_45h;
    uint var_44h;
    uint var_40h;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_28h;
    uint32_t var_24h;
    uint var_20h;
    int32_t var_18h;
    int16_t var_12h;
    uint var_10h;
    uint8_t var_9h;
    uint32_t var_8h;
    
    var_9h = 0xeb;
    var_12h = 0x37de;
    var_8h = 0x3643;
    var_24h = 1;
    var_18h = 9;
    while (var_18h == 0x11) {
        var_9h = var_9h + 1;
        var_8h = (4 < var_8h) / var_24h;
        if (var_8h != 0) {
            if (var_9h == 0) {
                var_12h = 0;
            }
            var_45h = var_9h != 0;
            var_24h = -0x54a65983 < var_45h;
        }
        var_18h = 0x12;
    }
    sym.set_var(var_8h, var_9h, 5, var_12h);
    return 5;
}
