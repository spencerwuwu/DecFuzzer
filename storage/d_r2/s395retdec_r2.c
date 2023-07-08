
// WARNING: Removing unreachable block (ram,0x00001744)
// WARNING: Removing unreachable block (ram,0x00001da3)
// WARNING: Removing unreachable block (ram,0x00001811)
// WARNING: Removing unreachable block (ram,0x00001793)
// WARNING: Removing unreachable block (ram,0x00001d28)

uint16_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_128h;
    uint var_124h;
    uint var_11eh;
    uint var_118h;
    uint var_114h;
    uint var_110h;
    uint var_106h;
    uint var_100h;
    uint var_fch;
    uint var_f4h;
    uint var_f0h;
    uint var_ech;
    uint var_e5h;
    uint var_dch;
    uint var_d8h;
    uint var_d4h;
    uint var_cdh;
    uint var_c8h;
    uint var_c2h;
    uint var_bch;
    uint var_b8h;
    uint var_b4h;
    uint var_aah;
    uint var_a0h;
    uint var_98h;
    uint var_91h;
    uint var_8ch;
    uint var_85h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    uint var_68h;
    uint var_64h;
    uint32_t var_58h;
    uint32_t var_54h;
    uint16_t var_4eh;
    uint32_t var_4ch;
    char var_45h;
    uint var_44h;
    int32_t var_40h;
    uint var_3ch;
    uint var_30h;
    uint16_t var_2ch;
    uint16_t var_2ah;
    uint32_t var_28h;
    uint var_24h;
    uint var_20h;
    uint16_t var_1ah;
    uint var_18h;
    uint var_14h;
    uint var_10h;
    
    var_1ah = 0x9d62;
    var_24h = 0x162a9717;
    var_28h = 0x453f201f;
    var_2ah = 0xffff;
    var_2ch = 0x765;
    var_3ch = 1;
    var_40h = 0x5bb51090;
    var_45h = -1;
    var_4ch = 0x7596e128;
    var_54h = 0x9e1a0e1c;
    var_58h = 0xf891d985;
    var_4eh = 0xfffb;
    while( true ) {
        uVar1 = var_4eh;
        if (0x2f < var_4eh) {
            var_2ah = var_2ah - 1;
            if (((var_54h & 0x5286) == var_2ah * (uVar1 + 0xe7 | var_4eh)) < 0x162a9718 == true) {
                for (var_58h = 0; var_58h != -9; var_58h = var_58h + -9) {
                    uVar1 = (var_2ah | 1) & var_24h;
                    var_40h = uVar1;
                    var_24h = 0x863d3f51;
                    var_2ah = var_2ah & 0xfff7;
                    var_1ah = var_1ah | 0x5f46;
                    var_2ch = var_2ch & uVar1;
                    var_45h = 0xe33710a0 < ((var_28h <= var_2ch == true) << 4 ^ 0xffffffce);
                    var_4ch = var_4ch | 1;
                }
            }
            else {
                var_3ch = 2;
            }
            sym.set_var(0, 0xffffffff, var_1ah, 0x2ef5ead4, var_24h, var_28h, var_2ah, var_2ch, 0x71dc8d5a, 0xfffffffd, 
                        0xffffff9f, 0x515e, 0xfffffff7, var_3ch, var_40h, 0xb6b0d488, var_45h, var_4ch);
            return var_4eh;
        }
        if (var_4eh == 0) break;
        var_2ah = var_2ah ^ var_28h;
        var_54h = 1;
        var_58h = var_58h | 1;
        var_2ch = var_2ch | 0x5286 < (0x2ef5ead4 <
                                      ((0xffff << ((var_2ah | var_58h) < 0x5ff7 == 0x162a9717 & uVar1) & 0x17) - 0x3fU ^
                                      0x53ca6afe) == 0x162a9717);
        var_4eh = var_4eh + 1;
        var_28h = var_28h - 1;
    }
    sym.set_var(0, -4 >> (uVar1 & 0x1f), var_54h < 0, 1, 0x162a9717, var_28h, var_2ah, var_2ch, 0x71dc8d5a, 0xfffffffd, 
                0xffffff9f, 0x515e, 0xfffffff7, 1, 0x5bb51090, 0xb6b0d488, 0xffffffff, 0x7596e128);
    return 1;
}
