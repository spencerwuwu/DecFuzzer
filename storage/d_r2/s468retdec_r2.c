
// WARNING: Removing unreachable block (ram,0x00001939)
// WARNING: Removing unreachable block (ram,0x00001967)
// WARNING: Removing unreachable block (ram,0x00001977)
// WARNING: Removing unreachable block (ram,0x0000199c)
// WARNING: Removing unreachable block (ram,0x000019a9)
// WARNING: Removing unreachable block (ram,0x000019d6)
// WARNING: Removing unreachable block (ram,0x000019d1)
// WARNING: Removing unreachable block (ram,0x00001b2f)
// WARNING: Removing unreachable block (ram,0x00001b44)
// WARNING: Removing unreachable block (ram,0x00001b51)
// WARNING: Removing unreachable block (ram,0x00001b99)
// WARNING: Removing unreachable block (ram,0x00001c73)
// WARNING: Removing unreachable block (ram,0x00001c80)
// WARNING: Removing unreachable block (ram,0x00001cbb)
// WARNING: Removing unreachable block (ram,0x00001ccb)
// WARNING: Removing unreachable block (ram,0x00001d0c)
// WARNING: Removing unreachable block (ram,0x00001d19)
// WARNING: Removing unreachable block (ram,0x00001d9c)
// WARNING: Removing unreachable block (ram,0x00001da9)
// WARNING: Removing unreachable block (ram,0x000017c5)
// WARNING: Removing unreachable block (ram,0x0000191d)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint32_t uVar1;
    uint var_114h;
    uint var_110h;
    uint var_10ch;
    uint var_106h;
    uint var_ffh;
    uint16_t var_f6h;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e0h;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_cah;
    uint var_c3h;
    uint var_b8h;
    uint var_b1h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint var_6ch;
    int32_t var_68h;
    char var_61h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uchar var_2fh;
    uint16_t var_2eh;
    uint32_t var_2ch;
    int16_t var_28h;
    uint8_t var_25h;
    int32_t var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint var_bp_10h;
    
    var_18h = 0xfffffff6;
    var_1ch = 9;
    var_1eh = 0x86f8;
    var_24h = 0x2e46a6f;
    var_25h = 3;
    var_28h = 1;
    var_2ch = 0;
    var_2eh = 1;
    var_2fh = 0xcb;
    var_14h = -10;
    while (var_14h == 0x18) {
        var_61h = '\f';
        uVar1 = var_18h | 8;
        var_1ch = var_1ch + -1;
        var_1eh = uVar1 <= ((var_18h & ((var_1ch | 0x5e) / -7 & 0xffU) != 0xc0) % 0x3e == 8);
        if (var_1eh == 0) {
            var_2ch = var_2ch ^ 0x616e91f1;
            var_2eh = var_2eh | ((var_2ch & 0xff) + 0x18 & var_1ch * 0xd4) - 1 << 0xc;
            var_18h = uVar1;
            if (var_25h != 0) break;
            for (var_24h = 0; var_25h = var_1ch,  var_24h != 6; var_24h = var_24h + 6) {
                var_b1h._0_1_ = var_61h != '\0' || var_2eh < 0;
                var_2fh = var_b1h._0_1_;
                var_61h = '\b';
            }
        }
        else {
            for (var_18h = 0x18; -0x1d < var_18h; var_18h = var_18h - 1) {
                for (var_68h = 0; -0x19 < var_68h; var_68h = var_68h + -4) {
                    var_24h = var_24h + 1;
                    var_25h = (var_1eh != 0xbd) == true;
                    var_28h = -0x10e9;
                }
            }
        }
        var_14h = 0x19;
    }
    var_f6h = CONCAT11(var_2fh, 6);
    sym.set_var(var_14h, var_18h, var_1ch, var_1eh, var_24h, var_25h, var_28h, var_2ch, var_2eh, var_f6h >> 8, 
                0xffffffff, 0x7a216d7e, 0, 0xfffffffa, var_f6h & 0xff, 0xfffffffd);
    return 0xffffffff;
}
