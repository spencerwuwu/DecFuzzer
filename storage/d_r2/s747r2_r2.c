
// WARNING: Removing unreachable block (ram,0x000016de)
// WARNING: Removing unreachable block (ram,0x00002184)
// WARNING: Removing unreachable block (ram,0x00002299)
// WARNING: Removing unreachable block (ram,0x000022a6)
// WARNING: Removing unreachable block (ram,0x000022c1)
// WARNING: Removing unreachable block (ram,0x000022d1)
// WARNING: Removing unreachable block (ram,0x0000287c)
// WARNING: Removing unreachable block (ram,0x00002891)
// WARNING: Removing unreachable block (ram,0x00002899)
// WARNING: Removing unreachable block (ram,0x00001b97)
// WARNING: Removing unreachable block (ram,0x000017a4)
// WARNING: Removing unreachable block (ram,0x00001913)
// WARNING: Removing unreachable block (ram,0x0000160a)
// WARNING: Removing unreachable block (ram,0x0000171c)
// WARNING: Removing unreachable block (ram,0x00001979)
// WARNING: Removing unreachable block (ram,0x00001e04)
// WARNING: Removing unreachable block (ram,0x00002720)
// WARNING: Removing unreachable block (ram,0x0000272a)
// WARNING: Removing unreachable block (ram,0x0000272f)
// WARNING: Removing unreachable block (ram,0x00002734)
// WARNING: Removing unreachable block (ram,0x00001e2c)
// WARNING: Removing unreachable block (ram,0x00001e39)
// WARNING: Removing unreachable block (ram,0x00001e54)
// WARNING: Removing unreachable block (ram,0x00001e5e)
// WARNING: Removing unreachable block (ram,0x00001ea3)
// WARNING: Removing unreachable block (ram,0x00001f19)
// WARNING: Removing unreachable block (ram,0x00001f1e)
// WARNING: Removing unreachable block (ram,0x0000204d)
// WARNING: Removing unreachable block (ram,0x00002062)
// WARNING: Removing unreachable block (ram,0x00002084)
// WARNING: Removing unreachable block (ram,0x00002091)
// WARNING: Removing unreachable block (ram,0x000020cc)
// WARNING: Removing unreachable block (ram,0x0000215f)
// WARNING: Removing unreachable block (ram,0x00002101)
// WARNING: Removing unreachable block (ram,0x00002116)
// WARNING: Removing unreachable block (ram,0x0000213f)
// WARNING: Removing unreachable block (ram,0x00002417)
// WARNING: Removing unreachable block (ram,0x00002421)
// WARNING: Removing unreachable block (ram,0x000024ba)
// WARNING: Removing unreachable block (ram,0x000024cd)
// WARNING: Removing unreachable block (ram,0x00002513)
// WARNING: Removing unreachable block (ram,0x00002523)
// WARNING: Removing unreachable block (ram,0x0000256c)
// WARNING: Removing unreachable block (ram,0x00002713)
// WARNING: Removing unreachable block (ram,0x0000277b)
// WARNING: Removing unreachable block (ram,0x00001f23)
// WARNING: Removing unreachable block (ram,0x0000196f)
// WARNING: Removing unreachable block (ram,0x0000280f)
// WARNING: Removing unreachable block (ram,0x00001b1e)

uint sym.func_1(void)

{
    bool bVar1;
    char cVar2;
    uint16_t uVar3;
    uint8_t uVar4;
    uint var_173h;
    uint var_165h;
    uint var_15eh;
    uint var_150h;
    uint var_14ch;
    uint var_13ch;
    uint var_135h;
    uint var_12eh;
    uint var_120h;
    uint var_119h;
    uint var_10ah;
    uint var_f8h;
    uint var_f4h;
    uint var_ech;
    uint var_e4h;
    uint var_e0h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_d0h;
    uint var_c8h;
    uint var_c4h;
    uint var_bch;
    uint var_b4h;
    uint var_b0h;
    uint var_ach;
    uint var_a4h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_6ch;
    uint var_68h;
    uint var_64h;
    uint var_60h;
    uint var_5ch;
    uint var_58h;
    uint var_50h;
    uint var_48h;
    uint var_44h;
    uint var_40h;
    uint var_34h;
    uint var_30h;
    uint var_2ch;
    uint var_24h;
    uint16_t var_1eh;
    uint16_t var_1ch;
    uint8_t var_16h;
    uint var_14h;
    uint var_bp_10h;
    
    var_16h = 0xf8;
    var_1ch = 0x51dd;
    uVar4 = 0x37;
    uVar3 = var_1ch;
    do {
        var_1ch = uVar3;
        var_16h = var_16h - 1;
        uVar3 = var_1ch - 1;
        cVar2 = 0 >> (uVar4 & 0x1f);
        uVar4 = (cVar2 & 0xd6U) != 0;
        if (!uVar4) {
            sym.set_var(0, 0, var_16h, 0xd7, 0xffff966e, uVar3, 0, cVar2, 0xb5b2332f, 0xa5, 0, 0x1f1f586, 1, 0xa4, 
                        0xfffffff9, 0x8434);
            return 0x8434;
        }
        var_1eh = 0;
        while( true ) {
            if (var_1eh != 0x3a) {
                bVar1 = -2 < (0xfe < ((var_1eh ^ 0xffffffff) < 2));
                sym.set_var(0xd5537929, 0, var_16h, 0xd6, 0xffff966e, var_1ch, var_1eh, bVar1, bVar1, 0xa4, 
                            7 < bVar1 % -0x5c ^ 2, 0x1f1f586, 0xcc1ef986, 0xa4, 0xfffffff9, 0x8434);
                return 0xd5537929;
            }
            if (uVar3 == 0) break;
            var_1eh = 0x3b;
        }
    } while( true );
}
