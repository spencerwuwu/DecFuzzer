
// WARNING: Removing unreachable block (ram,0x000017dd)
// WARNING: Removing unreachable block (ram,0x00001c48)
// WARNING: Removing unreachable block (ram,0x00001c8c)
// WARNING: Removing unreachable block (ram,0x00001d36)
// WARNING: Removing unreachable block (ram,0x00001eb4)
// WARNING: Variable defined which should be unmapped: var_fh
// WARNING: Removing unreachable block (ram,0x00002106)
// WARNING: Removing unreachable block (ram,0x00002130)
// WARNING: Removing unreachable block (ram,0x00002140)
// WARNING: Removing unreachable block (ram,0x00001fda)
// WARNING: Removing unreachable block (ram,0x0000191b)
// WARNING: Removing unreachable block (ram,0x00001986)
// WARNING: Removing unreachable block (ram,0x0000199e)
// WARNING: Removing unreachable block (ram,0x00001b64)
// WARNING: Removing unreachable block (ram,0x00001b76)
// WARNING: Removing unreachable block (ram,0x00001b83)
// WARNING: Removing unreachable block (ram,0x00002197)
// WARNING: Removing unreachable block (ram,0x000021eb)
// WARNING: Removing unreachable block (ram,0x00002213)
// WARNING: Removing unreachable block (ram,0x0000224d)
// WARNING: Removing unreachable block (ram,0x0000200a)
// WARNING: Removing unreachable block (ram,0x00002185)

int32_t sym.func_1(void)

{
    uint var_189h;
    uint var_184h;
    uint var_180h;
    uint var_17ch;
    uint var_178h;
    uint var_174h;
    uint var_170h;
    uint var_16ah;
    uint var_164h;
    uint var_160h;
    uint var_15ch;
    uint var_156h;
    uint var_150h;
    uint var_14ch;
    uint var_148h;
    uint var_144h;
    uint var_13dh;
    uint var_f9h;
    uint var_134h;
    uint var_130h;
    uint var_12ch;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_11ah;
    uint var_114h;
    uint var_110h;
    uint var_10ch;
    uint var_106h;
    uint var_100h;
    bool var_f2h;
    uint var_f0h;
    uint var_ech;
    uint var_e4h;
    uint var_e0h;
    uint var_d8h;
    uint var_d4h;
    uint var_cch;
    uint var_c8h;
    uint var_c4h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    int32_t var_a8h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    int32_t var_5ch;
    uint var_58h;
    uint var_54h;
    uint32_t var_50h;
    uint8_t var_4bh;
    int16_t var_4ah;
    uint var_48h;
    int32_t var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_14h;
    uint var_fh;
    
    var_28h = 3;
    var_38h = -2;
    var_3ch = 1;
    var_40h = -0x7222852e;
    var_4ah = -0x69d1;
    var_4bh = 1;
    var_50h = 1;
    var_5ch = -10;
    var_2ch = 0;
    do {
        if (var_2ch < 0x1c) {
            sym.set_var(2, 1, 1, 0xffffffff, 0xe9d05ba7, 0x4b25b3b, var_28h, 0x88078df3, 0x35e1, 7, var_38h, var_3ch, 
                        var_40h, 9, 0xfffffff9, var_4ah, var_4bh, var_50h, 0, 0, var_5ch);
            return var_50h;
        }
        if ((var_38h != 0) / -1 == 0x35e1) {
            var_3ch = 0x35e1;
            var_40h = var_40h + -1;
            if (var_28h == 0) {
                var_4ah = -1;
            }
            var_f2h = var_28h != 0 || var_40h != 0;
            if (var_f2h * -0x1f == 0) {
                var_28h = 1;
                var_50h = var_50h ^ 0x3ffe4;
            }
            else {
                var_4bh = 0xf9;
            }
        }
        for (var_a8h = 0; var_a8h != 0xf; var_a8h = var_a8h + 1) {
            var_50h = var_50h + 1;
            if (var_50h == 0) {
                var_5ch = 0xfffa;
            }
            var_28h = 0;
            if (var_5ch != 0) break;
        }
        var_2ch = var_2ch + 1;
        var_38h = var_38h + 1;
    } while( true );
}
