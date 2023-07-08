
// WARNING: Removing unreachable block (ram,0x00001a61)
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x000019d0)
// WARNING: Removing unreachable block (ram,0x00001a15)
// WARNING: Removing unreachable block (ram,0x00001a2a)
// WARNING: Removing unreachable block (ram,0x00001a3a)
// WARNING: Removing unreachable block (ram,0x00001aa4)
// WARNING: Removing unreachable block (ram,0x00001ab4)
// WARNING: Removing unreachable block (ram,0x00001a10)
// WARNING: Removing unreachable block (ram,0x00001ae8)
// WARNING: Removing unreachable block (ram,0x00001b03)
// WARNING: Removing unreachable block (ram,0x00001b10)
// WARNING: Removing unreachable block (ram,0x00001c70)
// WARNING: Removing unreachable block (ram,0x00001c94)
// WARNING: Removing unreachable block (ram,0x00001ded)
// WARNING: Removing unreachable block (ram,0x00001e20)
// WARNING: Removing unreachable block (ram,0x00001e30)
// WARNING: Removing unreachable block (ram,0x00001d90)
// WARNING: Removing unreachable block (ram,0x00001dbe)
// WARNING: Removing unreachable block (ram,0x00001dcb)
// WARNING: Removing unreachable block (ram,0x00001e77)
// WARNING: Removing unreachable block (ram,0x00001e81)
// WARNING: Removing unreachable block (ram,0x00001e8e)
// WARNING: Removing unreachable block (ram,0x00001e98)
// WARNING: Removing unreachable block (ram,0x00001fbb)
// WARNING: Removing unreachable block (ram,0x0000201c)
// WARNING: Removing unreachable block (ram,0x00002029)
// WARNING: Removing unreachable block (ram,0x0000204f)
// WARNING: Removing unreachable block (ram,0x0000205f)
// WARNING: Removing unreachable block (ram,0x00002114)
// WARNING: Removing unreachable block (ram,0x00001c8f)
// WARNING: Removing unreachable block (ram,0x00001732)
// WARNING: Removing unreachable block (ram,0x00001566)
// WARNING: Removing unreachable block (ram,0x0000158b)
// WARNING: Removing unreachable block (ram,0x0000159b)
// WARNING: Removing unreachable block (ram,0x000015f6)
// WARNING: Removing unreachable block (ram,0x000018e2)
// WARNING: Removing unreachable block (ram,0x00001769)
// WARNING: Removing unreachable block (ram,0x000015fb)
// WARNING: Removing unreachable block (ram,0x000016f6)
// WARNING: Removing unreachable block (ram,0x00001932)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    int32_t arg_8h;
    uint var_164h;
    uint var_160h;
    uint var_15bh;
    uint var_154h;
    uint var_150h;
    uint var_14ch;
    uint var_147h;
    uint var_140h;
    uint var_139h;
    uint var_131h;
    uint var_12ch;
    uint var_127h;
    uint var_120h;
    uint var_11ch;
    uint var_114h;
    uint var_110h;
    uint var_10ch;
    uint var_107h;
    uint var_100h;
    uint var_f8h;
    uint var_f2h;
    uint var_e9h;
    uint var_e4h;
    uint var_dfh;
    uint var_d8h;
    uint var_d0h;
    uint var_cch;
    int32_t var_c8h;
    uint var_c2h;
    uint var_b8h;
    uint var_b4h;
    uint var_b0h;
    uint var_a8h;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_8ch;
    uint var_84h;
    char var_7dh;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_6eh;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_58h;
    int16_t var_52h;
    uint var_50h;
    uint var_48h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint var_20h;
    uint8_t var_19h;
    int32_t var_18h;
    uint32_t var_14h;
    uint var_eh;
    
    var_14h = 0;
    var_18h = 0x5145ccb9;
    var_2ch = -0x1320c23c;
    var_19h = 0;
    for (var_52h = 0; var_52h < -0x15; var_52h = var_52h + -1) {
        for (var_18h = -1; var_18h < -0xd; var_18h = var_18h + -5) {
            var_19h = 0x4b;
            var_14h = var_14h ^ 0xfffffffd;
            var_2ch = var_2ch + -1;
        }
    }
    var_28h = (var_14h & 0xff) >> 7;
    arg_8h = 0x4b << (-var_52h & 0x1fU);
    var_7dh = '\0';
    do {
        if (-0x13 < var_7dh) {
            sym.set_var(arg_8h, var_18h, var_19h, 1, 0xc0a10336, 0x8307, var_28h, var_2ch, 8, 0xffffffff, 0, 0xfffffffa)
            ;
            var_eh._0_2_ = -0xaf2;
code_r0x000023cb:
            return var_eh;
        }
        var_c8h = 0x2df446b0;
        for (var_52h = -0x1e; 5 < var_52h; var_52h = var_52h + 1) {
            if (var_19h != 0) {
                var_2ch = -1;
            }
            var_c8h = 0;
            var_28h = var_18h != 1;
        }
        if (var_c8h == 0) {
            sym.set_var(arg_8h, var_18h, var_19h, 1, 0xc0a10336, 0x8307, var_28h, var_2ch, 8, 0xffffffff, 0, 0xfffffffa)
            ;
            var_eh._0_2_ = -6;
            goto code_r0x000023cb;
        }
        var_7dh = var_7dh + -1;
    } while( true );
}
