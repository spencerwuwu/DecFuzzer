
// WARNING: Removing unreachable block (ram,0x00001b6c)
// WARNING: Removing unreachable block (ram,0x00001aa2)
// WARNING: Removing unreachable block (ram,0x00001550)
// WARNING: Removing unreachable block (ram,0x00001a2b)
// WARNING: Removing unreachable block (ram,0x00001628)
// WARNING: Removing unreachable block (ram,0x00001668)
// WARNING: Removing unreachable block (ram,0x0000167a)
// WARNING: Removing unreachable block (ram,0x00001dc5)

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_130h;
    uint var_12ch;
    uint var_126h;
    uint var_11ch;
    uint var_118h;
    uint var_114h;
    uint var_10ch;
    uint var_105h;
    uint var_100h;
    uint var_fah;
    uint var_f0h;
    uint var_e8h;
    uint var_e0h;
    uint var_d9h;
    uint var_d1h;
    uint var_c8h;
    uint var_c4h;
    uint var_bdh;
    uint var_b8h;
    uint var_b4h;
    uint var_ach;
    uint var_a8h;
    uint var_a0h;
    int32_t var_9ch;
    uint var_98h;
    uint var_8ch;
    uint var_88h;
    uint32_t var_84h;
    uint var_7ch;
    uint var_74h;
    uint32_t var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    int32_t var_5ch;
    uint var_54h;
    uint32_t var_4ch;
    uint var_48h;
    uint32_t var_44h;
    int32_t var_3ch;
    uint8_t var_36h;
    int8_t var_35h;
    uint var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    int32_t var_14h;
    uint var_10h;
    
    var_14h = 4;
    var_1ah = 0x4be4;
    var_20h = 1;
    var_28h = 0xf2c5fdd6;
    var_2ch = 1;
    var_30h = 0xfffffffe;
    var_35h = 6;
    var_36h = 0;
    var_44h = 0xffffffff;
    var_5ch = -3;
    uVar1 = 0x62;
    var_70h = 0x5c3c62ed;
    var_4ch = 0;
    var_24h = 0;
    for (var_18h = 0; var_18h != 8; var_18h = var_18h + 1) {
        for (var_84h = 0x10; 0x33 < var_84h; var_84h = var_84h + 1) {
            for (var_20h = 0; -0xc < var_20h; var_20h = var_20h + -5) {
                var_1ah = 0xfff0;
                while ((var_1ah == 0xfff8 && (var_18h == 0))) {
                    var_14h = -8;
                    var_28h = var_28h ^ 0xfffffff8;
                    var_4ch = (var_4ch == 0xfffffff8) * -2;
                    var_1ah = 0xfffd;
                }
            }
            for (var_3ch = 0x12; 9 < var_3ch; var_3ch = var_3ch + -3) {
                var_24h = (var_1ah + -1) % 0;
            }
            var_2ch = var_4ch | var_2ch;
            if ((var_2ch & 0xff) + 0x91 < (-5 / var_84h | 0xfe)) {
                var_70h = ((-1 << var_35h < var_24h) < -8 & var_70h) != 0xfb787705;
                var_44h = var_70h - var_30h != var_1ah;
                var_2ch = (-3 << ((var_44h != 0x3965c3e6) + var_30h == 0x6ab0) & 0xffffU) << (uVar1 & 0x1f) | var_2ch;
            }
            else {
                uVar1 = 0;
                if (var_20h != 0) break;
                var_1ah = ((var_14h | 0xd8ca) + 1 == -2 < (var_14h != 0 ^ 0xfffffffa | 1)) < var_24h;
                var_30h = (((var_44h + -3) % var_4ch & 0xffU) * 6 - var_28h == 0) - 0x6a3f & var_30h;
                var_35h = var_84h != 0;
                var_2ch = 0;
                for (var_9ch = -0x10; var_9ch < 0x14; var_9ch = var_9ch + 1) {
                    var_36h = var_36h + 1;
                }
            }
        }
        var_5ch = var_5ch + -1;
        if (var_5ch != 0) break;
    }
    sym.set_var(var_14h, -uVar1 & 0xffff, var_1ah, var_20h, (var_36h != 0xffff ^ 0xffU) & 1, var_28h, var_2ch, var_30h, 
                1, var_35h, var_36h);
    return var_30h;
}
