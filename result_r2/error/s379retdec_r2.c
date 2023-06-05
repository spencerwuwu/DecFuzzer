
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804aca2)
// WARNING: Removing unreachable block (ram,0x0804acc1)
// WARNING: Removing unreachable block (ram,0x0804ad04)
// WARNING: Removing unreachable block (ram,0x0804ad08)
// WARNING: Removing unreachable block (ram,0x0804ad2b)
// WARNING: Removing unreachable block (ram,0x0804ad34)
// WARNING: Removing unreachable block (ram,0x0804ad3b)
// WARNING: Removing unreachable block (ram,0x0804ad40)
// WARNING: Removing unreachable block (ram,0x0804ab18)
// WARNING: Removing unreachable block (ram,0x0804ab29)
// WARNING: Removing unreachable block (ram,0x0804adc5)
// WARNING: Removing unreachable block (ram,0x0804a8a3)
// WARNING: Removing unreachable block (ram,0x0804ac14)
// WARNING: Removing unreachable block (ram,0x0804a8e3)
// WARNING: Removing unreachable block (ram,0x0804a926)
// WARNING: Could not reconcile some variable overlaps

uint32_t sym.func_1(void)

{
    uint8_t uVar1;
    bool bVar2;
    uint var_118h;
    uint var_114h;
    uint var_110h;
    uint var_100h;
    uint var_f8h;
    uint var_f2h;
    uint var_e8h;
    uint var_e4h;
    uint var_e0h;
    uint var_dah;
    uint var_d4h;
    uint var_d0h;
    uint var_cch;
    uint var_c4h;
    uint var_bch;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_4dh;
    uint var_48h;
    uint32_t var_44h;
    uint var_40h;
    uint32_t var_3ch;
    uint32_t var_35h;
    uint32_t var_2dh;
    uint32_t var_28h;
    uint var_22h;
    uint16_t var_1eh;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_3ch = 9;
    var_35h._0_1_ = 0xf6;
    var_2dh._0_1_ = 0xa4;
    stack0xffffffc8 = 0x4c039ecf;
    stack0xffffffd0 = 0xed55c59c;
    var_28h = 0;
    var_22h._0_2_ = 1;
    var_22h._3_1_ = 0xfa;
    var_1eh = 0xe02a;
    var_eh._0_2_ = 0x353c;
code_r0x0804a560:
    var_3ch = var_3ch ^ 0x47;
code_r0x0804a567:
    var_2dh._0_1_ = var_2dh - 1;
code_r0x0804a571:
    unique0x00007a80 = stack0xffffffc8 + 1;
    if (unique0x00007a80 == 0) {
code_r0x0804ae56:
        sym.set_var(var_3ch, var_35h, var_2dh, unique0x00007a80, stack0xffffffd0, var_28h, 0xffffffbe, var_22h, 
                    var_22h._3_1_, 1, 0x81a1, var_1eh, var_eh, 1, 0xffffffff, 0xffffffff, 0xe95154dc);
        return 0xe95154dc;
    }
    var_18h = 8;
    do {
        if (var_18h == 0xd) {
code_r0x0804ac56:
            for (var_44h = 0x12; var_44h < 0x20; var_44h = var_44h + 1) {
                var_3ch = 1;
                for (var_eh._0_2_ = 0; var_eh != 0x2f; var_eh._0_2_ = var_eh + 1) {
                    var_3ch = 0xf48fb08c;
                }
            }
            var_1eh = 0;
            goto code_r0x0804ae56;
        }
        bVar2 = true;
        if (var_18h != 0) goto code_r0x0804a560;
        if (unique0x00007a80 < var_35h) {
            var_28h = var_28h + 1;
            stack0xffffffd0 = var_3ch;
            if (unique0x00007a80 == 0) {
                var_22h._0_2_ = 0xffbe;
            }
            else {
                for (var_14h = 0xd; var_14h < 5; var_14h = var_14h + -1) {
                    if (var_3ch != 0) goto code_r0x0804a567;
                    stack0xffffffd0 = 0;
                }
            }
            for (var_1ch = 0; var_1ch < 0x14; var_1ch = var_1ch + 5) {
            }
            stack0xffffffd0 = 0;
        }
        else {
            var_35h._0_1_ = (var_3ch < ((var_35h != var_2dh) < 0x51dba339)) * var_3ch & 0x25U ^ 4;
            if (var_2dh == 0) {
                var_22h._0_2_ = var_22h + 1;
                var_28h = 0;
            }
            else {
                var_22h._3_1_ =
                     (-0x5fdb / (stack0xffffffd0 & var_28h) & 0xffU) - (stack0xffffffd0 & var_28h & 0xff) < -0x41;
                var_22h._0_2_ = var_22h._3_1_;
                bVar2 = var_28h < 0xff;
                if (!bVar2) break;
                var_3ch = 0;
                unique0x00007a00 = 0x279e;
            }
            if ((0xed / (-0x28 % bVar2 & 0xff) >> (var_35h != 0) == 0) || (var_28h == 0)) {
                uVar1 = 0;
            }
            else {
                uVar1 = 1;
            }
            if (uVar1 != var_22h._3_1_) {
                sym.set_var(var_3ch, var_35h, var_2dh, unique0x00007a80, stack0xffffffd0, var_28h, 0xffffffbe, var_22h, 
                            var_22h._3_1_, 1, 0x81a1, var_1eh, var_eh, 1, 0xffffffff, 0xffffffff, 0xe95154dc);
                return unique0x00007a80;
            }
            stack0xffffffd0 = 0x2daab72b;
            var_3ch = var_3ch | 0x2daab72b;
            var_1eh = var_1eh ^ 1;
            if ((var_1eh & 1) == 0) {
                var_eh._0_2_ = var_eh - 1;
            }
            else {
                *NULL = 0xac;
            }
            if (var_28h != 0) goto code_r0x0804ac56;
        }
        var_18h = 5;
    } while( true );
    unique0x00007a00 = 0xfffffff8;
    goto code_r0x0804a571;
}
