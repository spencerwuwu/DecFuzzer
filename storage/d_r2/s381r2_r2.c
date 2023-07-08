
// WARNING: Removing unreachable block (ram,0x0000174b)
// WARNING: Removing unreachable block (ram,0x000019d5)
// WARNING: Removing unreachable block (ram,0x00001a16)
// WARNING: Removing unreachable block (ram,0x00001a23)
// WARNING: Removing unreachable block (ram,0x0000180e)
// WARNING: Removing unreachable block (ram,0x00001820)
// WARNING: Removing unreachable block (ram,0x00001845)
// WARNING: Removing unreachable block (ram,0x00001a71)

uint sym.func_1(void)

{
    int16_t iVar1;
    uint var_d4h;
    uint var_cdh;
    uint var_c8h;
    uint var_c2h;
    uint var_b9h;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a2h;
    uint var_9ch;
    uint var_95h;
    uint var_8ch;
    uint var_86h;
    uint var_7dh;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    int32_t var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_4ch;
    uint32_t var_48h;
    uint8_t var_41h;
    uint var_40h;
    uint32_t var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_2ch;
    int32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint8_t var_11h;
    uint32_t var_10h;
    
    var_11h = 3;
    var_18h = 0x7030fc35;
    var_1ch = 1;
    var_1dh = 0x5c;
    var_24h = -0x2dbd13df;
    var_3ch = 0x27df68d3;
    var_41h = 0xff;
    var_48h = 0xc5abfede;
    for (var_10h = 0; var_10h < -0x1e; var_10h = var_10h - 1) {
        if (var_10h == 0) {
            for (var_18h = -10; -0x19 < var_18h; var_18h = var_18h + -1) {
                var_48h = 0;
                var_1dh = var_11h;
                for (var_6ch = 1; var_6ch < -8; var_6ch = var_6ch + -5) {
                    var_24h = var_24h + 1;
                }
            }
            var_3ch = var_3ch + 1;
            iVar1 = var_48h;
            if ((var_48h + 0x5eU & var_3ch < 0xfd513f7a) < 0x79 == 0xffffffff) {
                var_48h = var_1ch;
                var_18h = -iVar1 | 0xffffffd3;
            }
            else {
                var_18h = 0x45c000;
            }
            var_41h = var_1ch;
            var_18h = var_1ch == 0 ^ 0xffffffff ^ var_18h;
        }
        else {
            var_11h = 1;
            var_1ch = (((var_10h ^ 1) & 0xffff) / 0x5976) * var_18h - var_10h != 0 & var_1ch;
        }
    }
    sym.set_var(var_10h, var_11h, var_18h, var_1ch, var_1dh, 0xffffffd3, var_24h, 0x78, 0xfffffff6, 7, 1, 0x3a8b8e48, 
                0xffffffff, var_3ch, 0, var_41h);
    return 0;
}
