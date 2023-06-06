/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_123.c
 * Seed:      37951463
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static uint32_t set_var(int32_t g_2_l, uint16_t g_19_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = 0x831713B9;
volatile uint16_t g_19 = 1U;/* VOLATILE GLOBAL g_19 */
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_19, "g_19", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_19
 * writes: g_2 g_19
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0x831713B9;
    uint16_t g_19_l = 1U;
 /* block id: 0 */
    uint16_t l_12 = 65531U;
    int32_t l_13 = 1;
    for (g_2_l = 10; (g_2_l > (-24)); --g_2_l)
    { /* block id: 3 */
        uint16_t l_7 = 65535U;
        int16_t l_8 = 0x7E55;
        int32_t l_9 = (-8);
        if ((l_8 = ((uint16_t)g_2_l + (uint16_t)l_7)))
        { /* block id: 5 */
            l_9 = 0x588E1B61;
        }
        else
        { /* block id: 7 */
            uint16_t l_14 = 0x1162;
            int32_t l_18 = 4;
            l_13 = (((((uint8_t)l_8 % (uint8_t)l_12) <= ((((g_2_l , 0U) , g_2_l) & 0x10) , l_13)) || 0x465CD386) ^ 0x1A);
            l_18 = (l_9 > (l_14 >= (((int8_t)((-(uint32_t)(g_2_l || (l_13 ^ l_9))) , 1) - (int8_t)g_2_l) != g_2_l)));
        }
        --g_19_l;
    }
    return set_var(g_2_l, g_19_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
