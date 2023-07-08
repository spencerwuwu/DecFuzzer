
// WARNING: Removing unreachable block (ram,0x000018d9)
// WARNING: Removing unreachable block (ram,0x00001927)
// WARNING: Removing unreachable block (ram,0x00001934)
// WARNING: Removing unreachable block (ram,0x0000196e)
// WARNING: Removing unreachable block (ram,0x0000197b)
// WARNING: Removing unreachable block (ram,0x000019e0)
// WARNING: Removing unreachable block (ram,0x000019f0)
// WARNING: Removing unreachable block (ram,0x00001a1d)
// WARNING: Removing unreachable block (ram,0x00001a2a)
// WARNING: Removing unreachable block (ram,0x00001ac2)
// WARNING: Removing unreachable block (ram,0x00001b55)
// WARNING: Removing unreachable block (ram,0x00001b73)
// WARNING: Removing unreachable block (ram,0x00001bf2)
// WARNING: Removing unreachable block (ram,0x00001c02)
// WARNING: Removing unreachable block (ram,0x00001c4e)
// WARNING: Removing unreachable block (ram,0x00001ca1)
// WARNING: Removing unreachable block (ram,0x00001cae)
// WARNING: Removing unreachable block (ram,0x00001d6d)
// WARNING: Removing unreachable block (ram,0x00001d7d)
// WARNING: Removing unreachable block (ram,0x00001af5)
// WARNING: Removing unreachable block (ram,0x00001df0)
// WARNING: Removing unreachable block (ram,0x00001df6)
// WARNING: Removing unreachable block (ram,0x00001e03)
// WARNING: Removing unreachable block (ram,0x00001e3d)
// WARNING: Removing unreachable block (ram,0x00001e4a)
// WARNING: Removing unreachable block (ram,0x00001f3e)
// WARNING: Removing unreachable block (ram,0x00001f48)
// WARNING: Removing unreachable block (ram,0x00001f4d)
// WARNING: Removing unreachable block (ram,0x00001f54)
// WARNING: Removing unreachable block (ram,0x00001f5e)
// WARNING: Removing unreachable block (ram,0x00001fa5)
// WARNING: Removing unreachable block (ram,0x00001fb5)
// WARNING: Removing unreachable block (ram,0x00001fd8)
// WARNING: Removing unreachable block (ram,0x0000183a)
// WARNING: Removing unreachable block (ram,0x00001702)
// WARNING: Removing unreachable block (ram,0x00001808)

int16_t sym.func_1(void)

{
    uint var_118h;
    uint var_114h;
    uint var_10eh;
    uint var_108h;
    uint var_102h;
    uint var_fch;
    uint var_f5h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_ddh;
    uint var_d0h;
    bool var_c9h;
    uint var_c8h;
    uint var_c0h;
    uint var_bch;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_64h;
    uint32_t var_5ch;
    uint var_50h;
    uint var_4ch;
    uint32_t var_44h;
    uint var_40h;
    uint var_3ch;
    int16_t var_36h;
    uint var_34h;
    uint var_30h;
    uint32_t var_28h;
    uint16_t var_22h;
    uint32_t var_20h;
    uint var_1ch;
    uint16_t var_16h;
    int32_t var_14h;
    int32_t var_10h;
    
    var_14h = -7;
    var_16h = 0xfffa;
    var_20h = 3;
    var_22h = 0xb7b8;
    var_28h = 0xb03be465;
    var_36h = 0x282c;
    var_44h = 1;
    var_10h = 0;
    do {
        if (var_10h < 10) {
            sym.set_var(var_10h, var_14h, var_16h, 0x43260389, var_20h, var_22h, var_28h, 0, 1, 0xd2e611ab, var_36h, 8, 
                        0x10f87bc);
            return var_36h;
        }
        var_5ch = 4;
        for (var_14h = 0; -0x18 < var_14h; var_14h = var_14h + -1) {
            if (var_14h == 0) {
                var_22h = var_22h - 1;
                var_5ch = (var_44h ^ (var_44h | 0xffff)) % var_22h;
            }
            else {
                var_16h = var_16h ^ 1;
                var_44h = var_16h < 0x94;
            }
            var_c9h = (var_22h & var_5ch & 0xff) >> 2 != 0 || var_16h != 0;
            var_28h = var_c9h;
            if (var_c9h) {
                var_44h = 0x43260389;
                var_20h = 1;
                if (var_28h != 0) break;
                var_44h = 0x43260389;
            }
            else {
                var_36h = var_14h;
                var_20h = var_36h ^ 0xae0b;
            }
        }
        var_10h = var_10h + 9;
    } while( true );
}
