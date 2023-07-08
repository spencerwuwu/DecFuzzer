
// WARNING: Removing unreachable block (ram,0x00001802)
// WARNING: Removing unreachable block (ram,0x000018f4)
// WARNING: Removing unreachable block (ram,0x00001935)
// WARNING: Removing unreachable block (ram,0x00001942)
// WARNING: Removing unreachable block (ram,0x00001981)
// WARNING: Removing unreachable block (ram,0x0000198e)
// WARNING: Removing unreachable block (ram,0x00001a0c)
// WARNING: Removing unreachable block (ram,0x00001a64)
// WARNING: Removing unreachable block (ram,0x00001a71)

uint sym.func_1(void)

{
    uint32_t uVar1;
    int32_t iVar2;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dah;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c6h;
    uint var_c0h;
    uint var_b5h;
    bool var_adh;
    uint var_ach;
    bool var_a1h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint8_t var_41h;
    int32_t var_40h;
    uint var_38h;
    uint8_t var_32h;
    uint32_t var_30h;
    uint var_2ch;
    uint8_t var_25h;
    uint var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_14h = 2;
    var_1eh = 6;
    var_25h = 0x85;
    var_2ch = 0xfffffff8;
    var_30h = 0x198232c3;
    var_32h = 0;
    var_40h = -9;
    var_41h = 7;
    for (var_1ch = -0x1e; var_1ch != -0x1e; var_1ch = var_1ch + 8) {
        var_a1h = true;
        if (var_1ch == 0) {
            var_1eh = 1;
            var_a1h = (0x9933 < ((var_14h ^ 0xffffffff) < 0)) >> (var_1ch & 0x1f) == 0x11e2;
        }
        uVar1 = var_1ch < var_a1h | 0xd8339896;
        if (0 % var_1ch == 0) {
            var_41h = var_41h + 1;
            for (var_1eh = 0xffe8; 0x33 < var_1eh; var_1eh = var_1eh + 8) {
                var_2ch = 0x7567;
            }
        }
        else {
            var_adh = (var_14h != 0) != uVar1 && var_14h != 0;
            iVar2 = (var_1eh < 0xfff9) * (((var_adh != uVar1) == true) != 0xa76a447d);
            var_25h = iVar2 - var_1ch == 0 || iVar2 < var_1ch;
            var_14h = var_25h < -0x67d03652;
            var_1eh = 5;
        }
        var_30h = var_30h <= 0x29fe0d49 - (var_30h < 0xd40 << (var_25h & 0x1f));
        var_32h = var_32h - 1;
        var_40h = (((var_2ch - (5 < var_41h) == 0x29fe0d49) == true) < 0x29fe0d49) << 2;
    }
    if (var_40h == 0) {
        sym.set_var(var_14h, 1, 0xffffffe2, var_1eh, 1, var_25h, var_2ch, 0, 0x7c, var_32h, 0xfffffffe);
        var_bp_10h = 1;
    }
    else {
        sym.set_var(var_14h, 1, 0xffffffe2, var_1eh, 1, var_25h, var_2ch, var_30h, 0x7c, var_32h, 0xffffffff);
        var_bp_10h = 0x71a01fb8;
    }
    return var_bp_10h;
}
