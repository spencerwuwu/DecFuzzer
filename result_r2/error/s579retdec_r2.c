
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a8fc)
// WARNING: Removing unreachable block (ram,0x0804a663)
// WARNING: Removing unreachable block (ram,0x0804a74a)
// WARNING: Removing unreachable block (ram,0x0804a7a2)
// WARNING: Removing unreachable block (ram,0x0804a7de)
// WARNING: Removing unreachable block (ram,0x0804a7e7)
// WARNING: Removing unreachable block (ram,0x0804a7f0)
// WARNING: Removing unreachable block (ram,0x0804a7f7)
// WARNING: Removing unreachable block (ram,0x0804a7fc)
// WARNING: Removing unreachable block (ram,0x0804a813)
// WARNING: Removing unreachable block (ram,0x0804a803)
// WARNING: Removing unreachable block (ram,0x0804a911)
// WARNING: Removing unreachable block (ram,0x0804a915)
// WARNING: Removing unreachable block (ram,0x0804a90b)
// WARNING: Removing unreachable block (ram,0x0804a91b)
// WARNING: Removing unreachable block (ram,0x0804a91e)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    ushort extraout_var;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_90h;
    uint var_88h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    uint var_50h;
    uint var_4ah;
    uint32_t var_46h;
    uint32_t var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint var_18h;
    int32_t var_10h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_4ah._0_2_ = 0xf2ab;
    stack0xffffffb8 = 0x7d98a9a2;
    var_20h = 3;
    var_24h = 0xffffffff;
    var_28h = -1;
    for (var_10h = 0; var_10h != 0x10; var_10h = var_10h + 1) {
        var_40h = 0xfffffff6;
        var_4ah._0_2_ = var_4ah | ~(var_10h != 0xd890) & var_10h;
        for (var_2ch = 0; var_2ch < 0x17; var_2ch = var_2ch + 1) {
            unique0x00007a00 = var_40h & (var_4ah >> 1 ^ var_4ah);
            var_20h = 0xffffd890;
            var_24h = 0;
            var_28h = var_28h + -1;
            var_40h = unique0x00007a00;
        }
        if (stack0xffffffb8 != 0) break;
    }
    sym.set_var(0xd51, var_4ah, 0, stack0xffffffb8, var_20h, var_24h, var_28h, 1, 0x3396ac63, 0, 0x17e4cdb7, 6, 0x81, 
                0x7814, 0, 0x9d96bd77, 0xffff8dd5, 0, 0x93edb1a9, 0xffffecea, 0xb24f3459, 0x6490b889, 3, 6, 1, 
                0xfffffff7);
    return CONCAT22(extraout_var, 0xffff);
}
