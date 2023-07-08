
// WARNING: Removing unreachable block (ram,0x000015f2)
// WARNING: Removing unreachable block (ram,0x000015a8)
// WARNING: Removing unreachable block (ram,0x00001a4a)
// WARNING: Removing unreachable block (ram,0x00001a58)
// WARNING: Removing unreachable block (ram,0x00001a65)
// WARNING: Removing unreachable block (ram,0x00001a84)
// WARNING: Removing unreachable block (ram,0x00001a7f)
// WARNING: Removing unreachable block (ram,0x00001a89)
// WARNING: Removing unreachable block (ram,0x00001a98)
// WARNING: Removing unreachable block (ram,0x00001aac)
// WARNING: Removing unreachable block (ram,0x00001aa7)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint var_c4h;
    uint var_bch;
    uint var_b6h;
    uint var_adh;
    uint var_a8h;
    uint var_a1h;
    uint var_98h;
    uint var_92h;
    uint var_89h;
    uint var_80h;
    uint var_79h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    char var_53h;
    uint var_50h;
    uint var_48h;
    int32_t var_44h;
    int16_t var_3eh;
    uint32_t var_3ch;
    uint32_t var_38h;
    ushort var_32h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    uint var_1ch;
    uint32_t var_18h;
    char var_13h;
    uint var_12h;
    
    var_2ch = -1;
    var_30h = -1;
    var_32h = 0x800;
    var_38h = 1;
    var_3ch = 0xeecc15c4;
    var_24h = 0x10e6;
    var_18h = 0;
    var_13h = '\x01';
    var_3eh = 0;
    do {
        if (var_3eh == 8) {
            sym.set_var(0x10e1, var_13h, var_18h, 0xe6a3735b, 0xffff8047, var_24h, 0xca, 2, var_2ch, var_30h, 
                        var_32h >> 8, var_32h, var_38h, var_3ch);
            return var_2ch;
        }
        var_2ch = var_2ch + 1;
        for (var_18h = 0; 2 < var_18h; var_18h = var_18h + 1) {
            var_30h = var_30h + -1;
            var_24h = -1;
            var_32h = CONCAT11(0xff, var_32h);
            for (var_44h = 0x13; var_44h != 0x13; var_44h = var_44h + 6) {
                var_13h = '\0';
            }
            if (var_30h != 0) break;
        }
        for (var_53h = -0x14; uVar2 = var_32h,  var_53h != -0x11; var_53h = var_53h + '\x01') {
            var_32h._0_1_ = var_32h - 1;
            uVar1 = var_32h & 0xff00;
            var_32h = uVar1 | var_32h;
            var_32h._1_1_ = uVar1 >> 8;
            if (0x78 << ((var_53h != -0x195c8ca5 | 0x92350c16) != 0x9d) != 0) {
                sym.set_var(0x10e1, var_13h, var_18h, 0xe6a3735b, 0xffff8047, var_24h, 0xca, 2, var_2ch, var_30h, 
                            uVar2 >> 8, var_32h, var_38h & 1, var_3ch);
                return 0;
            }
            for (var_38h = 5; 0x39 < var_38h; var_38h = var_38h + 8) {
                var_3ch = ((var_32h._1_1_ ^ 0xff) % (1U - (((var_24h < 1) + 3) * 0xffff != 0) ^ var_32h) == 0) ==
                          var_38h | var_3ch;
                var_24h = -2 >> (var_2ch & 0x1f);
            }
        }
        var_3eh = var_3eh + 8;
    } while( true );
}
