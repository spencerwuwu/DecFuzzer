/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_999.c
 * Seed:      1177397857
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint32_t g_2_l, uint16_t g_10_l, int32_t g_13_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint32_t g_2 = 0xA8C6A53D;
uint16_t g_10 = 4U;
int32_t g_13 = 0x34CAA8E5;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_10 g_13
 * writes: g_10 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint32_t g_2_l = 0xA8C6A53D;
    uint16_t g_10_l = 4U;
    int32_t g_13_l = 0x34CAA8E5;
 /* block id: 0 */
    uint8_t l_11 = 0xDA;
    int32_t l_12 = 0x10E6B6CD;
    if (g_2_l)
    { /* block id: 1 */
        uint32_t l_3 = 0x1836CCB0;
        g_13_l = ((g_2_l || (l_3 == 7)) >= (((l_12 = (((((uint16_t)((uint16_t)(((g_10_l = 0x9D010789) , l_3) < 0) % (uint16_t)l_11) << (uint16_t)10) == g_2_l) != l_3) != g_2_l)) , l_12) , g_10_l));
    }
    else
    { /* block id: 5 */
        int32_t l_14 = 0;
        g_13_l = g_2_l;
        l_14 = 0;
    }
    g_13_l = g_13_l;
    return set_var(g_2_l, g_10_l, g_13_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
