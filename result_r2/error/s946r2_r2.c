
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804a64c)
// WARNING: Removing unreachable block (ram,0x0804a66c)
// WARNING: Removing unreachable block (ram,0x0804a673)
// WARNING: Removing unreachable block (ram,0x0804a62b)
// WARNING: Removing unreachable block (ram,0x0804a611)
// WARNING: Removing unreachable block (ram,0x0804a638)
// WARNING: Removing unreachable block (ram,0x0804a73e)
// WARNING: Removing unreachable block (ram,0x0804a67a)
// WARNING: Removing unreachable block (ram,0x0804a67f)
// WARNING: Removing unreachable block (ram,0x0804a79a)
// WARNING: Could not reconcile some variable overlaps

uint sym.func_1(void)

{
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ah;
    uint var_90h;
    uint var_8ch;
    uint var_84h;
    uint var_7ch;
    uint var_6ch;
    uint var_64h;
    uint var_5eh;
    uint32_t var_5ah;
    uint var_54h;
    uint var_50h;
    uint var_4ch;
    uint32_t var_44h;
    uint16_t var_3eh;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_12h;
    uint var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_3ch = 0xffffffff;
    var_3eh = 0xfffb;
    var_44h = 7;
    var_54h = 0xf7d1d410;
    stack0xffffffa4 = 0xcd19708e;
    var_5ah._0_2_ = 0;
    while (var_5ah == 0x2c) {
        var_54h = 1;
        var_3ch = 1;
        var_3eh = 0xc586;
        var_44h = var_44h + 1;
        *NULL = ((var_44h & 0xffff) != 1) == 0x4981c586;
        var_5ah._0_2_ = 0x2d;
    }
    sym.set_var(var_5ah, 0x4981c586, var_3ch, var_3eh, var_44h, var_54h, stack0xffffffa4, 0x40, 0, 0x66, 0x89d3, 2, 0, 
                0xffffffff, 0xffffcf38, 1, 0x3379, 1, 0xffffcf38, 0x4189, 0x1f69, 0, 100, 0xfffffff8);
    return 1;
}
