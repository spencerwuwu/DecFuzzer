/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_127.c
 * Seed:      2536853826
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_6_l, uint8_t g_10_l, uint32_t g_14_l, uint32_t g_16_l, int32_t g_23_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int16_t g_6 = (-1);
uint8_t g_10 = 3U;
uint32_t g_14 = 0x6D21CD43;
uint32_t g_16 = 0U;
int32_t g_23 = 0;
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_14, "g_14", 0, crc32_context, crc32_tab);
    transparent_crc(g_16, "g_16", 0, crc32_context, crc32_tab);
    transparent_crc(g_23, "g_23", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_10 g_14 g_16
 * writes: g_10 g_6 g_14 g_16 g_23
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int16_t g_6_l = (-1);
    uint8_t g_10_l = 3U;
    uint32_t g_14_l = 0x6D21CD43;
    uint32_t g_16_l = 0U;
    int32_t g_23_l = 0;
 /* block id: 0 */
    int32_t l_9 = (-9);
    g_10_l = (((int32_t)(((((uint16_t)(g_6_l ^ (((uint32_t)0xD058A835 - (uint32_t)(l_9 , l_9)) == 1U)) - (uint16_t)1U) >= l_9) > g_6_l) && 0U) - (int32_t)l_9) != 1U);
    l_9 = g_10_l;
    for (g_6_l = 0; (g_6_l >= (-2)); g_6_l--)
    { /* block id: 5 */
        int16_t l_13 = 0xEA96;
        g_14_l |= l_13;
        g_16_l ^= (!l_13);
        l_9 &= 0;
        g_23_l = ((uint8_t)(((int16_t)(4294967295U != ((l_13 || g_16_l) & (((int16_t)l_9 >> (int16_t)12) & 0x1D))) >> (int16_t)5) , g_14_l) >> (uint8_t)6);
    }
    return set_var(g_6_l, g_10_l, g_14_l, g_16_l, g_23_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
