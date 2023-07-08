
// WARNING: Removing unreachable block (ram,0x000019ef)
// WARNING: Removing unreachable block (ram,0x000017e6)
// WARNING: Removing unreachable block (ram,0x0000178b)
// WARNING: Removing unreachable block (ram,0x00001786)
// WARNING: Removing unreachable block (ram,0x00001abf)
// WARNING: Removing unreachable block (ram,0x000016ab)
// WARNING: Removing unreachable block (ram,0x000016d4)
// WARNING: Removing unreachable block (ram,0x0000174b)
// WARNING: Removing unreachable block (ram,0x0000175b)
// WARNING: Removing unreachable block (ram,0x000017b2)
// WARNING: Removing unreachable block (ram,0x000017c4)
// WARNING: Removing unreachable block (ram,0x000018f3)
// WARNING: Removing unreachable block (ram,0x00001a6b)
// WARNING: Removing unreachable block (ram,0x00001a93)
// WARNING: Removing unreachable block (ram,0x00001a58)
// WARNING: Removing unreachable block (ram,0x00001a8e)
// WARNING: Removing unreachable block (ram,0x00001aa3)
// WARNING: Removing unreachable block (ram,0x00001ab0)

uint32_t sym.func_1(void)

{
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d2h;
    uint var_c4h;
    uint var_c0h;
    uint var_b9h;
    uint var_b4h;
    uint var_b0h;
    uint var_aah;
    uint var_9fh;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_86h;
    uint var_7dh;
    uint var_74h;
    uint var_70h;
    uint var_69h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_3ch;
    uint var_38h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_28h;
    uint var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_18h = 1;
    for (var_14h = 0; var_14h != 0xfffffff8; var_14h = var_14h - 2) {
        var_18h = var_14h ^ ((1 < var_14h) << (var_14h & 0x1f)) * -0x24;
    }
    sym.set_var(0, var_18h, 3, 0xffff969f, 0x84a8, 0xffffd980, 1, 7, 0xe46196c9, 0xc5dfbc4e, 0, 0xd9a11d30);
    return var_18h;
}
