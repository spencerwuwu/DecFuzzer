
// WARNING: Removing unreachable block (ram,0x00001b27)
// WARNING: Removing unreachable block (ram,0x00001ec9)
// WARNING: Removing unreachable block (ram,0x0000228b)
// WARNING: Removing unreachable block (ram,0x0000219c)
// WARNING: Removing unreachable block (ram,0x000021ec)
// WARNING: Removing unreachable block (ram,0x000021fc)
// WARNING: Removing unreachable block (ram,0x00001b41)
// WARNING: Removing unreachable block (ram,0x00001b51)
// WARNING: Removing unreachable block (ram,0x00001898)
// WARNING: Removing unreachable block (ram,0x00001f0f)
// WARNING: Removing unreachable block (ram,0x00001717)
// WARNING: Removing unreachable block (ram,0x00001f2c)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    bool bVar1;
    uint8_t uVar2;
    char cVar3;
    int16_t iVar4;
    uint8_t uVar5;
    bool bVar6;
    uint var_18dh;
    uint var_188h;
    uint var_180h;
    uint var_17ch;
    uint var_174h;
    uint var_16dh;
    uint var_169h;
    uint var_163h;
    uint var_15ah;
    uint var_154h;
    uint var_14ch;
    uint var_148h;
    uint var_140h;
    uint var_13bh;
    uint var_134h;
    uint var_12eh;
    uint var_128h;
    uint var_120h;
    uint var_11ch;
    uint var_114h;
    uint var_10dh;
    bool var_109h;
    uint var_108h;
    uint var_102h;
    uint var_fch;
    uint var_f4h;
    uint var_f0h;
    uint var_e8h;
    uint var_dch;
    uint var_d8h;
    uint var_d0h;
    uint var_cch;
    uint var_c5h;
    uint var_beh;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint32_t var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint8_t var_4bh;
    uint16_t var_4ah;
    uint32_t var_48h;
    int32_t var_44h;
    uint16_t var_3eh;
    uint var_3ch;
    uint var_38h;
    int32_t var_30h;
    uint32_t var_2ch;
    int16_t var_28h;
    uint8_t var_26h;
    char var_25h;
    int32_t var_24h;
    uint32_t var_20h;
    uint8_t var_1ch;
    uint8_t var_1bh;
    uint16_t var_1ah;
    int32_t var_18h;
    uint var_11h;
    
    var_11h._0_1_ = 4;
    var_1ah = 0xfffc;
    var_1bh = 0xff;
    var_1ch = 0xd0;
    var_20h = 0;
    var_24h = -0x614c1cd2;
    var_26h = 0;
    var_28h = 0x3e41;
    var_2ch = 0x7e1c5715;
    var_30h = -0x7187273c;
    var_3eh = 7;
    var_44h = 1;
    var_48h = 0x624cee3a;
    var_4ah = 0xffff;
    var_4bh = 0;
    var_5ch = 0xc2a91181;
    uVar2 = 0xf8;
code_r0x000016a1:
    bVar1 = '\0' < var_11h;
    var_18h = -0xf;
    do {
        if (var_18h == 0x32) {
code_r0x00002461:
            for (var_25h = '\0'; -0xb < var_25h; var_25h = var_25h + -1) {
                var_4bh = var_4bh + 1;
            }
            sym.set_var(var_11h, var_18h, var_1ah, var_1bh, var_1ch, var_20h, var_24h, var_25h, var_26h, var_28h, 
                        var_2ch, var_30h, 1, 0xffffffff, 0xa9ed742a, var_3eh, var_44h, var_48h, var_4ah, var_4bh);
            return -0x6773730a;
        }
        cVar3 = var_5ch;
        uVar5 = (var_5ch < var_18h * 0x4000 ^ 0xa2U) * var_11h ^ 0xbf;
        var_5ch = 0xffffffec;
        var_1ah = var_18h + (uVar5 & bVar1) & 8;
        var_11h._0_1_ = var_1ah;
        if ((1 % ((var_1bh == 5) + 0x14) & var_1bh) >> 5 == '\0') {
            var_1ah = 0;
            var_11h._0_1_ = (var_1ch | uVar2) + 0x7b;
            if (var_11h == 0) {
                var_1bh = var_26h;
                if (1 / (cVar3 - 0x4dU & 0xbf | uVar5 | 0x9ba5e0b2U) != 0) goto code_r0x00002461;
                for (var_28h = -0x15; var_28h < 0x10; var_28h = var_28h + 2) {
                    var_1ah = 1;
                    var_44h = var_26h >> 1;
                    var_48h = var_20h < 2;
                }
            }
            else {
                var_20h = var_11h + 1U ^ var_20h;
                if ((var_20h | var_18h != 0) == 8) break;
                var_3eh = var_3eh - 1;
            }
            uVar2 = 0xdb;
            for (var_26h = 0; var_26h < 0x1f; var_26h = var_26h + 5) {
                var_48h = var_48h | 1;
                var_4ah = var_4ah & var_48h;
            }
        }
        else {
            var_1ch = var_1ch | var_11h;
        }
        var_18h = var_18h + 5;
    } while( true );
    var_24h = var_24h + -1;
    uVar2 = 0x11;
    iVar4 = (var_1ch ^ 0x11U) + 0xbb08;
    bVar6 = (-(var_20h | 0x988c8cf6) != var_18h) == 0xfffc;
    var_109h = 0x6da0 < bVar6 && var_20h != 0;
    if (var_109h <= var_1bh != bVar1) {
        sym.set_var(var_11h, var_18h, 0, var_1bh, var_1ch, var_20h, var_24h, bVar6, var_26h, var_28h, var_2ch, var_30h, 
                    1, 0xffffffff, 0xa9ed742a, var_3eh, var_44h, var_48h, var_4ah, 0);
        return -1;
    }
    var_2ch = var_1ch < '\x02';
    var_1ch = 3;
    var_30h = ((bVar6 - 10U != var_20h) < 0x5758) * -0x7f89 + -(((var_26h * 0x11 ^ 0xf2) & 0xff) >> 3);
    var_28h = iVar4;
    if (!bVar1) {
        sym.set_var(var_11h, var_18h, 0, var_1bh, 3, var_20h, var_24h, bVar6, var_26h, iVar4, var_2ch, var_30h, 1, 
                    0xffffffff, 0xa9ed742a, var_3eh, var_44h, var_48h, var_4ah, 0);
        return var_18h;
    }
    goto code_r0x000016a1;
}
