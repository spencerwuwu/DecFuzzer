
// WARNING: Variable defined which should be unmapped: var_1h

uint8_t sym.func_1(void)

{
    uint8_t uVar1;
    uint var_8h;
    uint var_1h;
    
    do {
        uVar1 = 8;
        while( true ) {
            if (0x1b < uVar1) {
                return uVar1;
            }
            if (uVar1 != 0) break;
            uVar1 = 3;
        }
    } while( true );
}
