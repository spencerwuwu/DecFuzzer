
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a71a)
// WARNING: Removing unreachable block (ram,0x0804a727)
// WARNING: Removing unreachable block (ram,0x0804a75b)
// WARNING: Removing unreachable block (ram,0x0804aa41)
// WARNING: Could not reconcile some variable overlaps

uint16_t sym.func_1(void)

{
    uint var_f8h;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_c8h;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_9ch;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_79h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint8_t var_4ah;
    uint var_49h;
    int32_t var_40h;
    uint var_3ch;
    uint16_t var_36h;
    uint var_34h;
    uint8_t var_2dh;
    int32_t var_2ch;
    uint var_24h;
    uint var_1eh;
    uint32_t var_11h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_34h = 0xfffffffd;
    var_11h._0_1_ = 1;
    var_49h._0_1_ = 0xb9;
    var_1eh._0_2_ = 0x767;
    stack0xffffffec = 0x275a8055;
    var_36h = 0xffff;
    var_2ch = -1;
    var_4ah = 0xff;
    var_40h = 0x3271fe85;
    for (var_2dh = 0; var_2dh < 9; var_2dh = var_2dh + 3) {
        var_11h._0_1_ = var_11h - 1;
        var_49h._0_1_ = 0;
        var_34h = 1;
        var_36h = var_36h + 1;
        if (var_1eh == 0) {
            var_1eh._0_2_ = var_11h != 5;
            *NULL = var_1eh;
            var_2ch = var_2ch + 1;
        }
        else {
            var_34h = 2;
            *NULL = var_36h;
            for (var_11h._0_1_ = 0xef; var_11h < 5; var_11h._0_1_ = var_11h + 1) {
                var_49h._0_1_ = 0x95;
                var_4ah = 0xa2d34cab < var_36h;
                *NULL = var_36h != 0xffffffff;
            }
            var_40h = var_40h + 1;
        }
    }
    sym.set_var(0, var_34h, 0, var_11h, var_49h, var_1eh, stack0xffffffec, 0xffffffff, 0x352b, 0x2630, 0xffffffff, 
                var_36h, 0, 0xfffffffe, var_2ch, var_4ah, var_40h, 0x21247b8c, 1, 1, 0xfffffff9, 0xfffffff9, 0xfffffffd
                , 0xffffffef, 0xffffd5cd, 0xfb, 5);
    return var_36h;
}
