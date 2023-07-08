
// WARNING: Removing unreachable block (ram,0x00001642)
// WARNING: Removing unreachable block (ram,0x000016a4)

int32_t sym.func_1(void)

{
    uint var_6ch;
    uint var_68h;
    uint var_63h;
    uint var_5ch;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_44h;
    uint var_3ch;
    uint var_34h;
    uint16_t var_2eh;
    uint var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_bp_10h;
    
    var_14h = 0x85f70ad6;
    var_1ch = 0xffffffff;
    var_20h = 0xc51978e6;
    var_24h = 0xb8d23212;
    var_28h = -1;
    var_2eh = 0xffff;
    var_18h = 0x16;
    do {
        if (-5 < var_18h) {
code_r0x00001689:
            sym.set_var(var_14h, var_24h | var_18h, var_1ch, var_20h, var_24h, var_28h, 4);
            return 1 - var_20h;
        }
        var_14h = 0;
        if (var_18h != 0) {
            if (var_18h == 0) {
                sym.set_var(0, 0, var_1ch, var_20h, var_24h, var_28h, 5);
                return 0;
            }
            goto code_r0x00001689;
        }
        var_20h = (var_2eh | 1) != 0xffff;
        var_24h = var_2eh < 0x34ae ^ var_24h;
        var_28h = var_28h + 1;
        for (var_2eh = 0xb; 0xf < var_2eh; var_2eh = var_2eh + 2) {
            var_14h = var_28h != 0;
        }
        var_18h = 0xffffffff;
        var_1ch = var_20h;
    } while( true );
}
