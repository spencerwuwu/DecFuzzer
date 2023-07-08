
// WARNING: Removing unreachable block (ram,0x000020fc)
// WARNING: Removing unreachable block (ram,0x00001674)
// WARNING: Removing unreachable block (ram,0x00001ef9)
// WARNING: Removing unreachable block (ram,0x0000180d)
// WARNING: Removing unreachable block (ram,0x00001939)
// WARNING: Removing unreachable block (ram,0x00002080)
// WARNING: Removing unreachable block (ram,0x000020dc)
// WARNING: Removing unreachable block (ram,0x000020ec)
// WARNING: Removing unreachable block (ram,0x00002146)
// WARNING: Removing unreachable block (ram,0x00002153)
// WARNING: Removing unreachable block (ram,0x00002183)
// WARNING: Removing unreachable block (ram,0x00002190)
// WARNING: Removing unreachable block (ram,0x000021c9)
// WARNING: Removing unreachable block (ram,0x000021dc)
// WARNING: Removing unreachable block (ram,0x000019e7)
// WARNING: Removing unreachable block (ram,0x00001dfa)

uint sym.func_1(void)

{
    uint16_t uVar1;
    uint32_t arg_14h;
    bool bVar2;
    uint var_140h;
    uint var_13ch;
    uint var_136h;
    uint var_130h;
    uint var_120h;
    uint var_11ch;
    uint var_115h;
    uint var_110h;
    uint var_10ah;
    uint var_104h;
    uint var_fch;
    uint var_f8h;
    uint var_f2h;
    uint var_ech;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d0h;
    uint var_c8h;
    uint var_c4h;
    uint var_beh;
    uint var_b8h;
    bool var_aeh;
    uint var_ach;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_95h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint32_t var_60h;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint16_t var_22h;
    uint32_t var_20h;
    uint16_t var_1ah;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_18h = 0xfffffffe;
    var_1ah = 0x4ed3;
    var_20h = 0xe055a24b;
    var_22h = 0xfecc;
    var_28h = 3;
    var_2ch = 0;
    var_3ch = 0x45187fa;
    uVar1 = 7;
    var_14h = 0;
    do {
        if (var_14h == 0xfffffff8) {
            sym.set_var(0xfffffff8, var_18h, var_1ah, var_20h, var_22h, 0xfc, var_28h, var_2ch, 0, 0, 1, var_3ch);
            return 0;
        }
        var_18h = var_18h ^ 0xd21dfe4b;
        var_1ah = var_1ah - 1;
        var_aeh = (0x66525c7e < (uVar1 <= var_1ah) | var_14h) != 0 && var_1ah != 0;
        if (var_1ah == 0) {
            bVar2 = (-1 < var_aeh >> (var_14h & 0x1f) != 0xd21dfe4b) + 0x45U < 0xfb;
            var_22h = bVar2;
            var_20h = var_14h != -0x1a91ce3d;
            if ((var_18h == var_14h) == 0xffff0009) {
                var_22h = bVar2 || 0x19 < ((var_2ch % 0x37ad == 0) == var_28h);
            }
            else {
                var_2ch = var_2ch & 0xd21dfe4b;
                if (var_2ch == 0) {
                    uVar1 = 0xffe6;
                    for (var_60h = 0; var_60h < 0x2e; var_60h = var_60h + 1) {
                        var_20h = 2;
                        var_2ch = 1;
                        if (((var_14h == 0 ^ 0xffU) & 1) << 0x18 != -8) break;
                        var_2ch = 1;
                    }
                }
                else {
                    for (var_22h = 7; var_22h < -7; var_22h = var_22h - 6) {
                        var_20h = 0x8c9c9652;
                    }
                    if (0xd < var_20h) {
                        arg_14h = 0x8a347b78 < (0xa131 < -var_18h ^ 0xa001a3c8);
                        sym.set_var(var_14h, var_18h, 0, arg_14h, var_22h, 0xfc, 1, arg_14h, 1 / 0, 0, 1, var_3ch);
                        return 0xfc;
                    }
                    var_2ch = 0xff03;
                    var_1ah = 0xff02;
                    var_20h = (var_20h / 0xf4 < 0xff02 != 0xd86a) - 0xdeU & 0xff;
                }
                var_28h = 1;
                var_3ch = 0x16;
            }
        }
        else {
            var_1ah = var_1ah | 1;
            var_20h = 4 % var_1ah;
        }
        var_14h = var_14h - 4;
    } while( true );
}
