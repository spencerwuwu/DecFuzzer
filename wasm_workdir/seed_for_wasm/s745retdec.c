/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1011.c
 * Seed:      2071014390
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int32_t g_3_l, uint32_t g_10_l, int32_t g_14_l, uint32_t g_15_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_2 = 0;/* VOLATILE GLOBAL g_2 */
int32_t g_3 = 0xF1124F01;
uint32_t g_10 = 0xD83D7839;
int32_t g_14 = 1;
uint32_t g_15 = 0xCAFA32FD;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_14, "g_14", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_14 g_10 g_2
 * writes: g_3 g_10 g_14 g_15
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0;
    int32_t g_3_l = 0xF1124F01;
    uint32_t g_10_l = 0xD83D7839;
    int32_t g_14_l = 1;
    uint32_t g_15_l = 0xCAFA32FD;
 /* block id: 0 */
    uint16_t l_9 = 0U;
    int32_t l_16 = (-1);
    for (g_3_l = (-18); (g_3_l <= 26); g_3_l += 1)
    { /* block id: 3 */
        uint32_t l_6 = 0x654FDDD3;
        l_6++;
        l_16 &= (((((l_9 , (0x12 <= (g_10_l = 0x00))) , ((~((g_15_l = (g_14_l ^= ((uint8_t)l_9 << (uint8_t)7))) < g_10_l)) < 0x2DB7)) < g_3_l) < g_2_l) && 0x8E);
        return set_var(g_2_l, g_3_l, g_10_l, g_14_l, g_15_l, &crc32_context, crc32_tab);
    }
    return set_var(g_2_l, g_3_l, g_10_l, g_14_l, g_15_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
