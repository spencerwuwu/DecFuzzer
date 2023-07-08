
// WARNING: Removing unreachable block (ram,0x00001981)
// WARNING: Removing unreachable block (ram,0x000015ac)
// WARNING: Removing unreachable block (ram,0x0000162d)
// WARNING: Removing unreachable block (ram,0x000019c0)
// WARNING: Removing unreachable block (ram,0x000019a0)
// WARNING: Removing unreachable block (ram,0x000019aa)
// WARNING: Removing unreachable block (ram,0x000019bb)
// WARNING: Removing unreachable block (ram,0x000019d3)
// WARNING: Could not reconcile some variable overlaps

int32_t sym.func_1(void)

{
    uint var_a2h;
    uint var_9ch;
    uint var_96h;
    uint var_90h;
    uint var_8ch;
    uint var_87h;
    uint var_7ch;
    uint var_74h;
    uint var_6eh;
    uint var_64h;
    uint var_60h;
    uint var_5bh;
    uint var_54h;
    uint var_48h;
    uint var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    char var_35h;
    uint var_34h;
    uint8_t var_2bh;
    uint8_t var_2ah;
    char var_29h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint8_t var_12h;
    uint var_11h;
    
    var_11h._0_1_ = 0x90;
    var_12h = 0x84;
    var_18h = 0x6c4779d4;
    var_1ch = 0xaf953423;
    var_28h = 0xfffffffe;
    var_29h = 'Z';
    var_2ah = 0xff;
    var_2bh = 1;
    var_40h = 0;
    var_35h = -0xf;
    while (var_35h == '\r') {
        var_40h = 0;
        for (var_3ch = 0; var_3ch < -0xe; var_3ch = var_3ch + -9) {
            var_40h = 0x12;
            while (var_40h == -0x15) {
                for (var_11h._0_1_ = 9; var_11h < 10; var_11h._0_1_ = var_11h + 4) {
                    var_18h = var_18h + 1;
                    var_1ch = var_1ch - 1;
                }
                var_12h = var_1ch & 0xe8;
                var_40h = -0x16;
            }
        }
        var_35h = '\x0e';
    }
    for (var_24h = 0xd; 0x21 < var_24h; var_24h = var_24h + 1) {
        var_28h = var_28h - 1;
        var_29h = '}';
        var_2ah = var_2ah + 1;
        var_2bh = var_2bh ^ var_35h != '\0';
    }
    sym.set_var(var_11h, var_12h, var_18h, var_1ch, 0x6ed7, var_24h, var_28h, var_29h, var_2ah, var_2bh, 
                (var_24h == (((var_1ch != 0 ^ 0x71) & var_1ch) != 0) ^ 0xffffffff) == var_28h, 0, 0xe3c69bb0);
    return var_40h;
}
