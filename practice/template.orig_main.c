#include <stdio.h>
#include <stdint.h>
#include "{{libname}}.h"

int main ()
{
    uint32_t crc = func_1();
	printf ("checksum = %X\n", crc);
    return 0;
}
