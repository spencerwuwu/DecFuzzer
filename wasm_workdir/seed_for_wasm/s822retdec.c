/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1279.c
 * Seed:      3939644680
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_6_l, uint16_t g_7_l, int16_t g_10_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_6 = (-4);/* VOLATILE GLOBAL g_6 */
uint16_t g_7 = 0x3EEE;
int16_t g_10 = 0;
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7 g_10
 * writes: g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_6_l = (-4);
    uint16_t g_7_l = 0x3EEE;
    int16_t g_10_l = 0;
 /* block id: 0 */
    int8_t l_8 = 0x21;
    int32_t l_9 = 0x4B4B1328;
    l_9 |= (((int32_t)((int8_t)(g_6_l < (g_7_l ^ 4U)) >> (int8_t)3) / (int32_t)l_8) || l_8);
    g_10_l |= l_9;
    return set_var(g_6_l, g_7_l, g_10_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
