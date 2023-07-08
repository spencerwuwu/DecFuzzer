
// WARNING: Removing unreachable block (ram,0x000019cc)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    char cVar1;
    uint var_a0h;
    uint16_t var_9bh;
    uint var_97h;
    uint var_8ch;
    uint var_88h;
    uint var_84h;
    uint var_80h;
    uint var_78h;
    uint var_74h;
    uint var_6ch;
    uint var_68h;
    uint var_60h;
    uint var_58h;
    uint var_53h;
    uint var_4ch;
    uint var_48h;
    int16_t var_44h;
    uint16_t var_42h;
    uint var_40h;
    uint var_3ch;
    uint var_34h;
    uint32_t var_30h;
    int16_t var_2ah;
    uint8_t var_27h;
    uint8_t var_26h;
    uint8_t var_25h;
    uint var_24h;
    uint16_t var_1eh;
    uint8_t var_1bh;
    char var_1ah;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint var_10h;
    
    var_10h = 0x2c03342e;
    var_14h = 1;
    var_19h = 0xff;
    var_1ah = -1;
    var_1bh = 0x39;
    var_1eh = 0xbb0c;
    var_25h = 0xc9;
    var_26h = 0xff;
    var_27h = 0x31;
    var_30h = 0xfffffffd;
    for (var_18h = 2; 8 < var_18h; var_18h = var_18h + 1) {
        var_42h._0_1_ = -0x7f;
        cVar1 = var_42h;
        var_42h._0_1_ = -0x7f;
        if (0xffffffff % var_18h == 0) {
            var_42h._0_1_ = cVar1;
            if (var_19h == 0) {
                var_42h._0_1_ = '\0';
                while (var_42h == '\x02') {
                    var_1bh = var_1bh - 1;
                    var_19h = var_1bh < var_19h / -var_18h;
                    for (var_44h = 0x17; var_44h != 0x15; var_44h = var_44h + -1) {
                        var_1eh = 0xfffd;
                    }
                    var_42h._0_1_ = '\v';
                }
            }
            for (var_1ah = '\x1b'; var_1ah < '\n'; var_1ah = var_1ah + -1) {
            }
        }
        else {
            var_2ah = -0xf;
            while (var_2ah == 10) {
                var_19h = 0x18b8 < ((-2 < -1 - (1 - var_18h) ^ 0xffU) & 1);
                var_30h = var_19h < 0xd258d034 | 0xa120;
                var_2ah = 0xd;
            }
        }
        var_25h = var_25h ^ -var_42h;
        for (var_42h = 0; 8 < var_42h; var_42h = var_42h + 7) {
            var_27h = var_19h;
            if ((-((var_1bh >> (var_19h & 0x1f) & 0xffff) / var_1eh) & 0xffU) != 0) {
                var_10h = 0xffffffff;
            }
            var_26h = var_27h;
        }
        var_14h = var_14h ^ 0xffffffff;
    }
    var_9bh = CONCAT11(var_1bh, CONCAT11(var_26h, var_19h) >> 8);
    sym.set_var(var_10h, var_14h, var_18h, CONCAT11(var_26h, var_19h) & 0xff, var_1ah, var_1bh, var_1eh, var_30h, 
                var_25h, var_9bh & 0xff, var_27h ^ 0xf6);
    return var_27h ^ 0xf6;
}
