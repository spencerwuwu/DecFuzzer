
// WARNING: Removing unreachable block (ram,0x000015a3)
// WARNING: Removing unreachable block (ram,0x000016f3)
// WARNING: Removing unreachable block (ram,0x000016c1)
// WARNING: Removing unreachable block (ram,0x000016d6)
// WARNING: Removing unreachable block (ram,0x000016e0)
// WARNING: Removing unreachable block (ram,0x00001785)
// WARNING: Removing unreachable block (ram,0x000017dd)
// WARNING: Removing unreachable block (ram,0x000017e7)
// WARNING: Removing unreachable block (ram,0x00001810)
// WARNING: Removing unreachable block (ram,0x000018d8)
// WARNING: Removing unreachable block (ram,0x0000192b)
// WARNING: Removing unreachable block (ram,0x00001926)
// WARNING: Removing unreachable block (ram,0x0000181d)
// WARNING: Removing unreachable block (ram,0x0000182c)
// WARNING: Removing unreachable block (ram,0x0000183b)
// WARNING: Removing unreachable block (ram,0x00001836)
// WARNING: Removing unreachable block (ram,0x00001827)
// WARNING: Removing unreachable block (ram,0x0000180b)

int32_t sym.func_1(void)

{
    uint32_t arg_1ch;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_91h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7fh;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_30h;
    char var_2bh;
    uint8_t var_29h;
    uint32_t var_28h;
    int32_t var_20h;
    uint var_1ch;
    uint32_t var_18h;
    uint var_14h;
    uint var_bp_10h;
    
    var_18h = 0x13717be9;
    var_20h = -4;
    var_28h = 1;
    var_29h = 0x5e;
    var_2bh = 'S';
    var_30h = 0xf8487b25;
    var_38h = 0x13;
    while (-10 < var_38h) {
        var_18h = var_38h != 0 & var_18h;
        var_20h = var_38h;
        arg_1ch = var_28h & 0xfff9;
        var_29h = arg_1ch;
        if ((var_28h & 0xf9) < 0xe31b) {
            sym.set_var(0, var_18h, 0xffffffff, var_38h, 0xfff9, arg_1ch, var_28h & 0xf9, 0x43, var_2bh, var_30h, 1);
            return 0xfff9;
        }
        var_2bh = ((var_28h & 0xf9) != 1) < 0x47825498 != true;
        var_28h = arg_1ch ^ 0x11f0b9f5;
        var_30h = 0;
        if (var_38h != 0) break;
        var_38h = -7;
    }
    sym.set_var(0, var_18h, 1, var_20h, 0xfff9, var_28h, var_29h, 0x43, var_2bh, var_30h, 1);
    return var_20h;
}
