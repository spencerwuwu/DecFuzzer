
// WARNING: Removing unreachable block (ram,0x000016d6)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000015f5)
// WARNING: Removing unreachable block (ram,0x00001e37)
// WARNING: Removing unreachable block (ram,0x00001caa)
// WARNING: Removing unreachable block (ram,0x00001d04)
// WARNING: Removing unreachable block (ram,0x00001d11)
// WARNING: Removing unreachable block (ram,0x00001d83)
// WARNING: Removing unreachable block (ram,0x00001d93)
// WARNING: Removing unreachable block (ram,0x00001df3)
// WARNING: Removing unreachable block (ram,0x00001e00)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_102h;
    uint var_f6h;
    uint var_edh;
    uint var_e8h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d1h;
    uint var_cch;
    uint var_c4h;
    uint var_bdh;
    uint var_b8h;
    uint var_b4h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_99h;
    uint var_94h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint32_t var_60h;
    uint var_58h;
    uint var_54h;
    uint var_50h;
    uint32_t var_48h;
    uint16_t var_42h;
    uint var_3ch;
    uint var_38h;
    uint8_t var_33h;
    uint16_t var_32h;
    uint32_t var_30h;
    int32_t var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    char var_1ah;
    bool var_19h;
    uint32_t var_18h;
    uint8_t var_11h;
    int16_t var_10h;
    uint var_eh;
    
    var_eh._0_2_ = 0xa4a1;
    var_10h = -0x638f;
    var_11h = 1;
    var_18h = 0xfffffff7;
    var_19h = true;
    var_1ah = '\0';
    var_20h = 0x4983ca30;
    var_21h = 0x30;
    var_28h = 0x7d18c36e;
    var_30h = 0x9977ace7;
    var_32h = 1;
    var_33h = 2;
    var_48h = 0x6a5d0c9a;
    for (var_42h = 0; var_42h < 0x13; var_42h = var_42h + 1) {
        var_11h = var_11h + 1;
        var_60h = 1;
        var_19h = 0x1e9a < var_42h;
        var_1ah = '\x01';
        for (var_18h = 3; 0x38 < var_18h; var_18h = var_18h + 5) {
            for (var_10h = -0x10; var_10h != -10; var_10h = var_10h + 2) {
                var_48h = var_eh;
            }
            if (0xd33e < ((var_48h & 0xff) % ((!var_19h + 0xfdf7dd3d ^ 0xfffe) & 0xff) < -10)) {
                var_21h = 0;
            }
        }
        if (((var_11h != 0) && (var_20h = var_10h,  var_20h != 0)) && (var_18h != 0)) break;
        for (var_20h = 0xb; var_20h < -0xe; var_20h = var_20h + -1) {
            var_28h = var_28h + 1;
            if (var_18h == 0) {
                if (var_21h != 0) break;
                for (var_eh._0_2_ = 0; var_eh < 0x24; var_eh._0_2_ = var_eh + 1) {
                    var_32h = var_32h + 1;
                    var_33h = var_33h + 1;
                    var_1ah = '\0';
                    var_10h = (var_30h < -0x2d700aad) * 0x1aa;
                    var_30h = ((1 < ((-0x2d700aaf < (var_eh ^ var_60h) == true) < var_33h) + -0x382) / var_60h) /
                              var_33h;
                    var_60h = var_28h + (0x1e99 < (0x1b1dc044 < (var_30h & 0xf8) << var_19h));
                }
            }
        }
    }
    sym.set_var(var_eh, var_10h, var_11h, var_18h, var_19h, var_1ah, var_20h, var_21h, var_28h, 0x382, var_28h, var_32h
                , var_33h, 0x29d10, 0x1b1dc044, 0xfffe);
    return var_eh;
}
