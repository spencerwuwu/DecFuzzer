
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x0000147f)

uchar sym.func_1(void)

{
    uint8_t uVar1;
    uint var_20h;
    uint var_1ch;
    uint var_18h;
    uint var_10h;
    char var_bh;
    uint var_5h;
    
    uVar1 = 0xff;
    for (var_bh = '\x0e'; var_bh != '.'; var_bh = var_bh + '\x01') {
        uVar1 = 0;
    }
    sym.set_var(1, 0, uVar1 & 0xf8, 7);
    return 1;
}
