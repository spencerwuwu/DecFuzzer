
// WARNING: Removing unreachable block (ram,0x000018d6)
// WARNING: Removing unreachable block (ram,0x00001c49)
// WARNING: Removing unreachable block (ram,0x00001d58)
// WARNING: Removing unreachable block (ram,0x00001d65)
// WARNING: Removing unreachable block (ram,0x00001892)
// WARNING: Removing unreachable block (ram,0x00001dda)
// WARNING: Removing unreachable block (ram,0x00001dea)
// WARNING: Removing unreachable block (ram,0x00001e48)
// WARNING: Removing unreachable block (ram,0x00001e71)
// WARNING: Removing unreachable block (ram,0x00001e81)
// WARNING: Removing unreachable block (ram,0x00001d78)
// WARNING: Removing unreachable block (ram,0x00001d85)
// WARNING: Removing unreachable block (ram,0x00001da4)
// WARNING: Removing unreachable block (ram,0x00001ec6)
// WARNING: Removing unreachable block (ram,0x00001901)
// WARNING: Removing unreachable block (ram,0x000019e0)

uint16_t sym.func_1(void)

{
    uint8_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint var_fah;
    uint var_f3h;
    uchar var_efh;
    uint var_eeh;
    uint var_e0h;
    uint var_dah;
    uint var_d3h;
    uint var_c9h;
    uint var_bch;
    uint var_b8h;
    uint var_b0h;
    bool var_a9h;
    uint var_a8h;
    uint var_a4h;
    uint var_a0h;
    uint var_9ch;
    uint var_98h;
    uint var_94h;
    uint var_90h;
    uint var_8bh;
    uint var_80h;
    uint var_7ch;
    uint var_74h;
    uint32_t var_70h;
    uint var_68h;
    uint var_64h;
    uint var_5ch;
    uint var_58h;
    uint32_t var_54h;
    uint var_4ch;
    uint var_44h;
    uint var_3ch;
    uint8_t var_35h;
    uint16_t var_34h;
    char var_31h;
    uint var_30h;
    uint32_t var_2ch;
    uint16_t var_28h;
    uint8_t var_25h;
    uint var_24h;
    uint16_t var_1eh;
    uint16_t var_1ch;
    uint32_t var_18h;
    uint var_12h;
    
    var_18h = 0xfffffff8;
    var_1ch = 0xffff;
    var_1eh = 1;
    var_25h = 0xfa;
    var_28h = 0x9a7b;
    var_2ch = 0x7e389239;
    var_31h = '\0';
    var_34h = 0xd7fa;
    var_35h = 0xf6;
    uVar3 = 0x9e;
code_r0x00001533:
    uVar1 = uVar3;
    cVar2 = var_18h * 0x72 >> (var_18h & 0x1f);
    var_1eh = var_1eh ^ var_35h != 2;
    var_35h = 0;
    do {
        if (var_35h < '\x1b') {
            for (var_18h = 0xffffffe7; var_18h < 0x33; var_18h = var_18h + 1) {
            }
            _var_efh = CONCAT11(var_25h, var_31h);
            sym.set_var(2, var_18h, cVar2, var_1ch, var_1eh, 0xf849fb95, _var_efh >> 8, var_28h, var_2ch, 
                        var_1eh != 0xd034, _var_efh & 0xff, var_34h);
            return var_34h;
        }
        for (var_18h = 0xffffffe2; var_18h < 0xf; var_18h = var_18h + 1) {
            uVar3 = 0x99;
            var_1ch = 0;
            var_25h = var_35h;
            var_70h = var_35h <= ((var_1eh < 2) << (0 << (var_18h & 0x1f) & 0x1f) == 0xdc23);
            var_28h = var_1eh;
            for (var_54h = 0; var_54h < 0x28; var_54h = var_54h + 1) {
                var_a9h = var_70h != 0 && var_28h != 0;
                uVar3 = cVar2 < (var_a9h ^ 0xffffffff ^ var_25h) & uVar3;
                var_28h = var_28h | 1;
                var_25h = var_1eh + var_28h + 2U ^ 0xff;
                if ((var_25h == var_1ch) < cVar2) goto code_r0x00001533;
                var_2ch = var_1ch == 0x30 ^ var_2ch;
                var_1ch = (var_18h != 0) < -0x7b6046b;
                if ((var_1ch <= var_1eh) << (uVar1 & 0x1f) == 0) {
                    var_31h = var_31h + -1;
                    uVar3 = 0;
                }
                var_28h = var_2ch;
                var_34h = var_34h | var_54h < (var_2ch & 0xffff);
                var_70h = 0xf849fb95;
            }
        }
        var_35h = var_35h + 1;
    } while( true );
}
