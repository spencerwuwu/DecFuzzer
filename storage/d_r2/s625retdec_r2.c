
// WARNING: Removing unreachable block (ram,0x00001f4c)
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x000020b7)
// WARNING: Removing unreachable block (ram,0x000020e7)
// WARNING: Removing unreachable block (ram,0x000020f1)
// WARNING: Removing unreachable block (ram,0x0000210b)
// WARNING: Removing unreachable block (ram,0x00001b4d)
// WARNING: Removing unreachable block (ram,0x00001b63)
// WARNING: Removing unreachable block (ram,0x00001bab)
// WARNING: Removing unreachable block (ram,0x00001bb8)
// WARNING: Removing unreachable block (ram,0x00001c21)
// WARNING: Removing unreachable block (ram,0x00001c2e)
// WARNING: Removing unreachable block (ram,0x00001cba)
// WARNING: Removing unreachable block (ram,0x00001ccc)
// WARNING: Removing unreachable block (ram,0x00001cd9)
// WARNING: Removing unreachable block (ram,0x00001cf5)
// WARNING: Removing unreachable block (ram,0x00001d15)
// WARNING: Removing unreachable block (ram,0x00001d78)
// WARNING: Removing unreachable block (ram,0x00001d85)
// WARNING: Removing unreachable block (ram,0x00001dc1)
// WARNING: Removing unreachable block (ram,0x00001de8)
// WARNING: Removing unreachable block (ram,0x00001df5)
// WARNING: Removing unreachable block (ram,0x00001e42)
// WARNING: Removing unreachable block (ram,0x00001ebb)
// WARNING: Removing unreachable block (ram,0x00001ec8)
// WARNING: Removing unreachable block (ram,0x00001e33)
// WARNING: Removing unreachable block (ram,0x00001f6a)
// WARNING: Removing unreachable block (ram,0x00001d10)
// WARNING: Removing unreachable block (ram,0x000015f1)
// WARNING: Removing unreachable block (ram,0x00001f9b)
// WARNING: Removing unreachable block (ram,0x0000208e)
// WARNING: Removing unreachable block (ram,0x00002089)
// WARNING: Removing unreachable block (ram,0x0000165e)
// WARNING: Removing unreachable block (ram,0x0000187f)

uint sym.func_1(void)

{
    uint var_148h;
    uint var_142h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_12dh;
    uint var_124h;
    uint var_120h;
    uint var_118h;
    uint var_114h;
    uint var_10ch;
    uint var_105h;
    uint var_f9h;
    uint var_f0h;
    uint var_e8h;
    uint var_e0h;
    uint var_dch;
    uint var_d6h;
    uint var_d0h;
    uint var_cch;
    uint var_c8h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b1h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_94h;
    uint var_90h;
    int32_t var_88h;
    uint var_80h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_62h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    uint var_40h;
    uint var_38h;
    char var_31h;
    int32_t var_30h;
    uint var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    int16_t var_1ah;
    uint var_18h;
    int32_t var_14h;
    uint var_dh;
    
    var_28h = 0;
    var_2ch = 0x61ffe8b4;
    var_30h = -1;
    var_31h = '\x01';
    var_40h = 0xe304fec5;
    var_20h = 5;
    var_14h = 0x7b;
    var_24h = 0x8af769ff;
    for (var_1ah = 0; var_1ah < -0x16; var_1ah = var_1ah + -1) {
        var_14h = ((var_20h != (var_20h % 0xe0ea8edf << 7) >> 0xf) < var_24h) * -0x478;
        if (var_1ah == '\x04') {
            if ((var_24h != 0) || (var_1ah == 0)) break;
            var_28h = (var_14h == -1) - 9U & 7 ^ var_28h;
            var_24h = var_20h == 0;
            for (var_88h = 9; var_88h != 0x1d; var_88h = var_88h + 1) {
                var_14h = 1;
            }
            var_2ch = 0;
            var_31h = -1;
            for (var_30h = -0x16; var_30h != -0xd; var_30h = var_30h + 1) {
                var_2ch = 6;
                var_20h = var_20h & 0x23;
                var_40h = 7;
            }
        }
    }
    sym.set_var(var_14h, 3, var_1ah, var_20h, var_24h, var_28h, var_2ch, var_30h, var_31h, 5, 0x4b, var_40h, 0xffd, 3, 1
               );
    return 0x7b;
}
