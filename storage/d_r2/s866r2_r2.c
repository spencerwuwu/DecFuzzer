
// WARNING: Removing unreachable block (ram,0x00001db1)
// WARNING: Removing unreachable block (ram,0x00001ab6)
// WARNING: Removing unreachable block (ram,0x00001ac7)
// WARNING: Removing unreachable block (ram,0x00001acc)
// WARNING: Removing unreachable block (ram,0x00001b2d)
// WARNING: Removing unreachable block (ram,0x00001b3d)
// WARNING: Removing unreachable block (ram,0x00001c5d)
// WARNING: Removing unreachable block (ram,0x00001c82)
// WARNING: Removing unreachable block (ram,0x00001db8)
// WARNING: Removing unreachable block (ram,0x00001c7d)
// WARNING: Removing unreachable block (ram,0x00001fa9)
// WARNING: Removing unreachable block (ram,0x000016ba)
// WARNING: Removing unreachable block (ram,0x000016dd)
// WARNING: Removing unreachable block (ram,0x000016ea)
// WARNING: Removing unreachable block (ram,0x00001ddf)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint var_114h;
    uint var_110h;
    uint var_108h;
    uint var_ffh;
    uint var_f4h;
    uint var_f0h;
    uint var_e8h;
    uint var_dfh;
    uint var_d1h;
    uint var_cbh;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a1h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint32_t var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint32_t var_5ch;
    uint var_58h;
    uint16_t var_52h;
    uint var_50h;
    uint32_t var_4ch;
    uint16_t var_46h;
    uint var_44h;
    uint var_40h;
    uint16_t var_38h;
    uint var_34h;
    uint8_t var_26h;
    uint32_t var_24h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint8_t var_17h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_17h = 0x54;
    var_1ch = 0x3967be2d;
    var_1eh = 0xd17f;
    var_24h = 0x3b0e2d30;
    var_26h = 0xf6;
    var_38h = 0xdff4;
    var_4ch = 0x6f9a4d91;
    var_52h = 0xfff7;
    var_5ch = 0;
code_r0x00001678:
    for (var_14h = 0x10; 0x13 < var_14h; var_14h = var_14h + 1) {
    }
    var_46h = 0;
    do {
        if (var_46h < 0x35) {
            sym.set_var(var_14h, 0xffff83db, var_17h, var_1ch, var_1eh, 1, var_24h, 0x7d, var_26h, 0xffffffc1, 
                        0xffffffce, 0x10, 1, 0xae80, 3, 0xffffffa8, var_38h, 0xffffff95, 0x280f67d3, 2);
            return var_4ch;
        }
        var_4ch = 0;
        while (var_4ch < 0x22) {
            var_14h = 1;
            if (var_4ch != 0) goto code_r0x00001678;
            var_52h = var_52h - 1;
            var_17h = var_46h | 1;
            if (('\x01' < var_17h) < 0x4c7e) {
                var_1ch = var_1ch + 1;
                var_14h = var_1ch;
            }
            for (var_90h = 0; var_90h < 0x1b; var_90h = var_90h + 1) {
            }
            var_5ch = var_14h ^ 0xfffffffe | var_5ch;
            var_17h = var_17h & var_5ch <= var_52h;
            var_cbh._1_1_ = (var_90h == 1) < 3 && var_52h != 0;
            var_1eh = var_1eh & var_cbh._1_1_;
            var_24h = var_24h & 32000;
            var_4ch = 1;
        }
        var_26h = 0xce;
        var_14h = var_14h | 0xffffffce;
        var_38h = var_38h - 1;
        var_46h = var_46h + 1;
    } while( true );
}
