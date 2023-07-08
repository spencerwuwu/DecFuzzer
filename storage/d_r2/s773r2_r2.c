
// WARNING: Removing unreachable block (ram,0x00001674)
// WARNING: Removing unreachable block (ram,0x00001bbf)
// WARNING: Removing unreachable block (ram,0x00001c92)
// WARNING: Removing unreachable block (ram,0x000018f7)
// WARNING: Removing unreachable block (ram,0x00001901)
// WARNING: Removing unreachable block (ram,0x00001906)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    int32_t iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint var_c8h;
    uint var_c4h;
    uint var_beh;
    uint var_b8h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    bool var_98h;
    bool var_95h;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_84h;
    int32_t var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6dh;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint32_t var_3ch;
    uint8_t var_31h;
    uint16_t var_30h;
    uint32_t var_2ch;
    uint8_t var_27h;
    uint16_t var_26h;
    uint32_t var_24h;
    uint16_t var_20h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint16_t var_16h;
    int32_t var_14h;
    uint var_10h;
    
    var_16h = 0x39e3;
    var_1ch = 0x1791e6e4;
    var_1eh = 0x79c9;
    var_20h = 0xc2a9;
    var_24h = 0xad4a2b52;
    var_26h = 0;
    var_27h = 8;
    var_2ch = 0xeac3b263;
    var_30h = 0x85bf;
    var_31h = 0xec;
    var_3ch = 0x9796a0b5;
    for (var_14h = 0; var_14h < -0x19; var_14h = var_14h + -1) {
        uVar3 = var_16h + 1;
        var_95h = false;
        if (var_16h != 0) {
            var_1ch = var_3ch < var_14h;
            var_1eh = 0;
            var_95h = 0xfff6 >> (var_3ch & 0x1f) != var_14h;
        }
        uVar2 = var_14h == 0;
        var_98h = var_95h < 8 || uVar2 != 0;
        var_20h = var_98h / -0x75be6702 <= uVar2;
        var_3ch = (var_1ch != 0) - uVar3;
        if (var_3ch == 0) {
            for (var_16h = 0; 0xf < var_16h; var_16h = var_16h + 1) {
                var_3ch = 1;
                var_20h = var_16h;
                var_24h = 0;
            }
            var_27h = var_27h - 1;
            if (((var_24h + 9U | var_1eh) ^ -(uVar2 != 0) | 0xfffffffc) != 0) {
                var_7ch = -0x5a4c9d8a;
                for (var_6dh._0_1_ = '\x0e'; '\b' < var_6dh; var_6dh._0_1_ = var_6dh + -7) {
                    var_24h = var_26h;
                    var_2ch = ((var_24h != 0 ^ 0xffU) & 1) << 1;
                    var_30h = var_30h + 1;
                    var_3ch = var_6dh - 1U ^ var_3ch;
                    var_7ch = 2;
                    iVar1 = var_7ch;
                    var_7ch = 2;
                    if (var_20h != 0) break;
                    var_7ch = iVar1;
                }
                var_31h = 2;
                var_2ch = (uVar2 < ((var_2ch == var_30h) + '&') * 8 | 2U) < 0xfa;
                if (var_7ch != 0) break;
                var_30h = 0xffff;
                var_24h = 3;
            }
        }
        else {
            for (var_1ch = 0x14; var_16h = uVar3,  var_1ch < 0x3c; var_1ch = var_1ch + 4) {
                var_26h = var_26h - 1;
            }
        }
        var_16h = var_16h - 1;
    }
    sym.set_var(0xfffffff6, var_14h, var_16h, var_1ch, var_1eh, var_20h, var_24h, var_26h, var_27h, var_2ch, 0, var_30h
                , var_31h, 0x525c, 0x60);
    return 0x4a54;
}
