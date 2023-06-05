
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a71a)
// WARNING: Removing unreachable block (ram,0x0804a9a3)
// WARNING: Removing unreachable block (ram,0x0804a9b0)
// WARNING: Removing unreachable block (ram,0x0804a6f3)
// WARNING: Removing unreachable block (ram,0x0804a7c3)
// WARNING: Removing unreachable block (ram,0x0804a67d)
// WARNING: Removing unreachable block (ram,0x0804a683)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    int32_t iVar1;
    uint32_t uVar2;
    int32_t iVar3;
    uint var_c8h;
    uint var_c4h;
    uint var_c0h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    uint var_a8h;
    uint var_a0h;
    uint var_9ch;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_54h;
    uint var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint16_t var_3ch;
    uint16_t var_3ah;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint var_28h;
    uint var_21h;
    uint32_t var_1ch;
    int32_t var_15h;
    uint var_10h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_30h = -0x539b597c;
    var_38h = 0x17d0b0a3;
    var_21h._0_1_ = 0x9d;
    var_28h = 0x48f7c4fb;
    var_2ch = 0;
    var_15h._0_1_ = -0x67;
    var_1ch = 0xfffffff9;
    stack0xffffffdc = 0x4014c235;
    var_10h = 0xf6acb5b9;
    stack0xffffffe8 = -4;
    var_3ah = 0xfffd;
    var_3ch = 1;
    var_40h = 6;
    var_44h = 0xd085c9e5;
    var_48h = 0x1ab14a3d;
    var_34h = 0x12;
    while( true ) {
        if (var_34h < 0x19) {
            sym.set_var(var_30h, var_34h, var_38h, var_21h, var_28h, var_2ch, var_15h, var_1ch, stack0xffffffdc, 
                        0xffff8ff7, 0xffffffff, 0xb764d413, var_10h, 0xffffffff, stack0xffffffe8, var_3ah, var_3ch, 
                        var_40h, 0xffffdbc9, 0xfd);
            return var_40h;
        }
        var_30h = 0x4432;
        if (0 < (var_44h | 0xad)) break;
        var_44h = 0;
        var_48h = var_48h | 0x8cfe46da;
        for (var_4ch._3_1_ = 0; 0x16 < var_4ch._3_1_; var_4ch._3_1_ = var_4ch._3_1_ + 4) {
            iVar3 = var_21h;
            if ((~((var_48h & 0xffff) % var_21h) < var_21h) || (var_30h == 0)) {
                iVar1 = 0;
            }
            else {
                iVar1 = 1;
            }
            uVar2 = var_21h;
            if (var_30h == 0) {
                var_2ch = var_2ch + 1;
                var_15h._0_1_ = -1;
                var_21h._0_1_ = var_21h ^ 0xff / var_4ch._3_1_;
                var_28h = 0;
                if (var_48h == 0) {
                    unique0x00001d00 = stack0xffffffe8 + 1;
                    var_3ah = var_3ah | 0xff9d;
                    var_1ch = 0 < (var_21h ^ var_3ah * 0xff);
                    if (-(var_1ch / (var_38h & 0xffff)) << (iVar3 < ((iVar1 != -9) == uVar2)) != 0) {
                        sym.set_var(0, var_34h, var_38h, var_21h, 0, var_2ch, 0xffffffff, var_1ch, stack0xffffffdc, 
                                    0xffff8ff7, 0xffffffff, 0xb764d413, 0xfffffff7, 0xffffffff, unique0x00001d00, 
                                    var_3ah, var_3ch, var_40h, 0xffffdbc9, 0xfd);
                        return 0xff;
                    }
                    var_10h = 0xffffffff;
                    var_38h = 0xefdd03b6;
                    var_44h = var_44h | 1 << (var_2ch & 0x1f);
                    var_3ch = 0x1f6;
                    var_40h = var_34h ^ 1;
                }
                else {
                    *NULL = 1;
                    var_30h = 1;
                    var_44h = var_44h & 0xe0b9da2;
                    var_1ch = var_48h;
                }
            }
        }
        var_34h = var_34h + 1;
    }
    if (var_34h != 0) {
        sym.set_var(0x4432, var_34h, var_38h, var_21h, var_28h, var_2ch, var_15h, var_1ch, stack0xffffffdc, 0xffff8ff7, 
                    0xffffffff, 0xb764d413, var_10h, 0xffffffff, stack0xffffffe8, var_3ah, var_3ch, var_40h, 0xffffdbc9
                    , 0xfd);
        return 0xd55c;
    }
    if (-1 < 0 << (var_38h & 0x1f)) {
        var_30h = 1;
        var_2ch = var_2ch + -1;
        var_28h = 0;
    }
    sym.set_var(var_30h, 0, var_38h, 0, var_28h, var_2ch, var_15h, var_1ch, stack0xffffffdc, 0xffff8ff7, 0xffffffff, 
                0xb764d413, var_10h, 0xffffffff, stack0xffffffe8, var_3ah, var_3ch, var_40h, 0xffffdbc9, 0xfd);
    return 0;
}
