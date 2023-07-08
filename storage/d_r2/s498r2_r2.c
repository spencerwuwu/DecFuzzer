
// WARNING: Removing unreachable block (ram,0x00001ab6)
// WARNING: Removing unreachable block (ram,0x00001ac7)
// WARNING: Removing unreachable block (ram,0x00001ad1)
// WARNING: Removing unreachable block (ram,0x00001aee)
// WARNING: Removing unreachable block (ram,0x00001ba5)
// WARNING: Removing unreachable block (ram,0x00001bb2)
// WARNING: Removing unreachable block (ram,0x00001a39)
// WARNING: Removing unreachable block (ram,0x00001eb3)
// WARNING: Removing unreachable block (ram,0x00001d9e)
// WARNING: Removing unreachable block (ram,0x0000176d)
// WARNING: Removing unreachable block (ram,0x00001f03)
// WARNING: Removing unreachable block (ram,0x00001f1f)
// WARNING: Removing unreachable block (ram,0x00001f2c)
// WARNING: Removing unreachable block (ram,0x00001fb4)
// WARNING: Removing unreachable block (ram,0x00001fb9)
// WARNING: Removing unreachable block (ram,0x00001fc3)
// WARNING: Removing unreachable block (ram,0x00002010)
// WARNING: Removing unreachable block (ram,0x00002025)
// WARNING: Removing unreachable block (ram,0x00002020)
// WARNING: Removing unreachable block (ram,0x0000197d)
// WARNING: Removing unreachable block (ram,0x00001d1b)
// WARNING: Removing unreachable block (ram,0x00001d4e)
// WARNING: Removing unreachable block (ram,0x00001d5e)
// WARNING: Removing unreachable block (ram,0x00001d79)
// WARNING: Removing unreachable block (ram,0x00001d86)
// WARNING: Removing unreachable block (ram,0x00001dab)
// WARNING: Removing unreachable block (ram,0x00001e0f)
// WARNING: Removing unreachable block (ram,0x00001e1c)
// WARNING: Removing unreachable block (ram,0x00001e37)
// WARNING: Removing unreachable block (ram,0x00001e44)
// WARNING: Removing unreachable block (ram,0x00001e76)
// WARNING: Removing unreachable block (ram,0x00001e83)
// WARNING: Removing unreachable block (ram,0x00001ec0)
// WARNING: Removing unreachable block (ram,0x0000202f)
// WARNING: Removing unreachable block (ram,0x000020ec)
// WARNING: Removing unreachable block (ram,0x000020fb)
// WARNING: Removing unreachable block (ram,0x00002110)
// WARNING: Removing unreachable block (ram,0x00002130)
// WARNING: Removing unreachable block (ram,0x00002143)
// WARNING: Removing unreachable block (ram,0x0000214f)
// WARNING: Removing unreachable block (ram,0x00002179)
// WARNING: Removing unreachable block (ram,0x000020f6)
// WARNING: Removing unreachable block (ram,0x0000204f)
// WARNING: Removing unreachable block (ram,0x00001ee0)
// WARNING: Removing unreachable block (ram,0x00001efe)
// WARNING: Removing unreachable block (ram,0x000021f1)

uint32_t sym.func_1(void)

{
    int32_t iVar1;
    uint var_11fh;
    uint var_118h;
    uint var_113h;
    uint var_108h;
    uint var_104h;
    uint var_100h;
    uint var_f8h;
    uint var_f0h;
    uint var_e8h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d2h;
    uint var_c8h;
    uint var_c0h;
    uint var_b8h;
    uint var_b2h;
    uint var_a9h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_70h;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    uint var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    uint16_t var_1ah;
    uint var_18h;
    uint var_11h;
    
    var_21h = 0xa3;
    var_28h = 1;
    var_1ah = 1;
    var_38h = 2;
    var_3ch = -7;
    do {
        if (var_3ch < 3) {
            sym.set_var(1, 1, 0x2eda8ed4, var_1ah, 1, var_21h, var_28h, 0x6f9e293f, 0xc6739b99);
            return var_38h;
        }
        for (var_38h = 0; var_38h < 0x3b; var_38h = var_38h + 1) {
            var_21h = var_21h | 0x52;
            var_1ah = var_38h == 0x2eda8ed4;
            iVar1 = (var_38h == 0xffffffff) * 0x78;
            if (var_21h <= (-2 < -0x80 - (-5 < (-(iVar1 - var_21h == 0 || iVar1 < var_21h) ^ 0xffffffffU)))) {
                for (var_20h = 0; var_20h != 0x30; var_20h = var_20h + 8) {
                }
                sym.set_var(1, 1, 0x2eda8ed4, var_1ah, 0x30, var_21h, 0x2eda8ed4, 0x6f9e293f, 0xc6739b99);
                return 0xfd73a523;
            }
        }
        var_28h = 0xfffffffa;
        var_3ch = var_3ch + 4;
    } while( true );
}
