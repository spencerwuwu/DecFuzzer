
// WARNING: Removing unreachable block (ram,0x00001ab6)
// WARNING: Removing unreachable block (ram,0x00001d07)

int32_t sym.func_1(void)

{
    uint var_d0h;
    uint var_cah;
    uint var_c4h;
    uint var_c0h;
    uint var_b5h;
    uint var_ach;
    uint var_a6h;
    bool var_9dh;
    uint var_9ch;
    uint var_98h;
    uint var_8ch;
    uint var_88h;
    uint var_80h;
    uint var_7ch;
    uint var_78h;
    uint var_74h;
    uint var_70h;
    int32_t var_6ch;
    uint var_68h;
    uint8_t var_62h;
    uint32_t var_60h;
    uint var_58h;
    uint var_54h;
    uint var_4ch;
    uint var_48h;
    uint32_t var_44h;
    uint var_40h;
    uint var_3ch;
    int32_t var_38h;
    uint var_34h;
    uint8_t var_30h;
    char var_2fh;
    uint8_t var_2eh;
    int16_t var_2ch;
    bool var_29h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint8_t var_20h;
    uint8_t var_1fh;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint16_t var_12h;
    int32_t var_10h;
    
    var_12h = 0xfffc;
    var_18h = 0xffffffff;
    var_1ch = 0xec17e5c2;
    var_1eh = 0xfff7;
    var_1fh = 0x9b;
    var_20h = 0xb8;
    var_24h = 1;
    var_28h = 1;
    var_29h = false;
    var_2ch = -0x1e28;
    var_2eh = 0x68;
    var_2fh = -1;
    var_30h = 0x49;
    var_34h = 0xffffffff;
    var_38h = -0x3b2affb3;
    var_44h = 0x1fb0335;
    var_10h = 0x1b;
    do {
        if (var_10h == 2) {
            sym.set_var(2, var_12h, var_18h, var_1ch, var_1eh, var_1fh, var_20h, var_24h, var_28h, var_29h, var_2ch, 
                        0xffffffd3, var_2eh, var_2fh, var_30h, var_34h, var_38h);
            return var_44h;
        }
        var_18h = var_18h + 1;
        for (var_12h = 0x10; 0x2b < var_12h; var_12h = var_12h + 1) {
            var_60h = 0x653649d9;
            var_62h = 0x9e;
            for (var_1ch = 8; var_1ch < 0x26; var_1ch = var_1ch + 9) {
                var_1eh = var_1eh + 1;
                var_1fh = var_18h < var_10h * (((var_12h < 0x3ec58f55) <= (var_1ch == 0)) < 0xc57f39cf);
                var_20h = (1 >> (var_18h & 0x1f)) * var_1eh;
                if (var_20h == 8) {
                    var_60h = 0;
                    var_9dh = 0xfff7 << var_1fh != 0 || var_1eh != 0;
                    var_24h = var_9dh ^ var_24h;
                    if (0xef5d < (((var_24h != 0) == var_28h) == var_1ch) != true) {
                        var_20h = 9;
                        var_29h = var_1ch < 0x6748;
                    }
                    var_2ch = 0;
                    var_2eh = var_2eh | 1 % var_1eh == var_29h;
                    var_44h = 0;
                    var_2fh = 'U';
                    var_30h = var_30h & 1;
                    var_28h = var_30h;
                    break;
                }
                for (var_2eh = 0x15; var_2eh < 7; var_2eh = var_2eh - 4) {
                    var_29h = false;
                    var_60h = ((((var_2fh < '\x01' & var_2eh) == 0) == var_1ch) < 0x21f1eb32) / var_2fh ^ var_60h;
                    var_44h = var_60h ^ var_44h;
                    var_1fh = var_1fh + 1;
                    var_2ch = -0x315c;
                }
                var_62h = var_62h | var_30h;
                var_28h = var_62h;
                for (var_6ch = 0x11; var_6ch != -1; var_6ch = var_6ch + -6) {
                    var_34h = 0;
                }
                var_38h = var_38h + 1;
            }
            if (var_60h != 0) break;
        }
        var_10h = var_10h + -1;
    } while( true );
}
