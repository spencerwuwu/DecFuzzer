
// WARNING: Removing unreachable block (ram,0x000016e0)
// WARNING: Removing unreachable block (ram,0x000016f2)
// WARNING: Removing unreachable block (ram,0x000016ff)
// WARNING: Removing unreachable block (ram,0x0000173f)
// WARNING: Removing unreachable block (ram,0x0000174f)
// WARNING: Removing unreachable block (ram,0x0000178b)
// WARNING: Removing unreachable block (ram,0x00001798)
// WARNING: Removing unreachable block (ram,0x000017ce)
// WARNING: Removing unreachable block (ram,0x000017db)
// WARNING: Removing unreachable block (ram,0x0000180c)
// WARNING: Removing unreachable block (ram,0x0000181c)
// WARNING: Removing unreachable block (ram,0x00001836)
// WARNING: Removing unreachable block (ram,0x00001843)
// WARNING: Removing unreachable block (ram,0x00001876)
// WARNING: Removing unreachable block (ram,0x00001893)
// WARNING: Removing unreachable block (ram,0x00001912)
// WARNING: Removing unreachable block (ram,0x00001926)
// WARNING: Removing unreachable block (ram,0x00001952)
// WARNING: Removing unreachable block (ram,0x00001962)
// WARNING: Removing unreachable block (ram,0x00001cac)
// WARNING: Removing unreachable block (ram,0x00001cb3)
// WARNING: Removing unreachable block (ram,0x00001cbd)
// WARNING: Removing unreachable block (ram,0x00001cc7)
// WARNING: Removing unreachable block (ram,0x00001ccc)
// WARNING: Removing unreachable block (ram,0x00001cf9)
// WARNING: Removing unreachable block (ram,0x00001e41)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_17ch;
    uint var_174h;
    uint var_170h;
    uint var_16ch;
    uint var_166h;
    uint var_160h;
    uint var_15ch;
    uint var_158h;
    uint var_152h;
    uint var_14ah;
    uint var_144h;
    uint var_13ch;
    uint var_138h;
    uint var_134h;
    uint var_12eh;
    uint var_128h;
    uint var_124h;
    uint var_120h;
    uint var_11ah;
    uint var_112h;
    uint var_109h;
    uint var_100h;
    uint var_fch;
    uint var_f8h;
    uint var_f2h;
    uint var_ech;
    uint var_e8h;
    uint var_e4h;
    uint var_deh;
    uint var_d6h;
    uint var_d0h;
    uint var_cch;
    uint var_c4h;
    uint var_c0h;
    uint var_b9h;
    uint var_b0h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint8_t var_50h;
    uint32_t var_4ch;
    uint var_48h;
    uint16_t var_42h;
    uint32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    uint var_2ch;
    uint var_24h;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_10h;
    
    var_30h = 1;
    var_34h = 5;
    var_38h = 0x34a2d56a;
    var_40h = 0x88696b6c;
    var_42h = 0x93c;
    var_48h = 0x5044ef07;
    var_4ch = 0xc2202b94;
    var_50h = 0xff;
    var_60h = 0xaf9eb11d;
    var_64h = 0xffffffff;
    var_68h = 0xc;
    do {
        if (-0x1c < var_68h) {
            sym.set_var(1, 0xc3, 0xffffffff, 0xf323e629, 0x393632ca, 0, 0xffffc2df, 0xfb053aa9, var_30h, var_34h, 
                        var_38h, 0x79f7, var_40h, var_42h, var_48h, var_4ch, 0xfffffffd, 0xffffff84, var_50h, 0xd706802a
                       );
            var_10h._3_1_ = var_60h;
code_r0x0000216a:
            return var_10h._3_1_;
        }
        var_30h = var_30h + 1;
        for (var_60h = 0xfffffff5; var_60h < 0x28; var_60h = var_60h + 9) {
            if (0xc6c9cd34 < ((var_64h & 1) == 0xb874b34b)) {
                sym.set_var(1, 0xc3, 0xffffffff, 0xf323e629, 0x393632ca, 0, 0xffffc2df, 0xfb053aa9, var_30h, 1, var_38h
                            , 0x79f7, var_40h, var_42h, var_48h, var_4ch, 0xfffffffd, 0xffffff84, var_50h, 0xd706802a);
                var_10h._3_1_ = -0x36;
                goto code_r0x0000216a;
            }
            var_38h = var_38h + 1;
            var_34h = 1;
            for (var_64h = 0; 0x17 < var_64h; var_64h = var_64h + 9) {
                var_34h = (6 >> ((var_60h != 0) << 0x17 < 0x393632cb) & 0xffU) / 99 ^ var_34h;
                var_40h = var_34h ^ var_40h;
                var_42h = var_40h != 0;
                var_48h = 0xffffffe9;
                var_4ch = (var_38h < 2 ^ 0xffU) & 1;
                var_50h = var_50h + 1;
            }
        }
        var_68h = var_68h + -1;
    } while( true );
}
