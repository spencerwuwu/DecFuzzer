/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1465.c
 * Seed:      3870727232
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_2_l, uint32_t g_3_l, int32_t g_5_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint8_t g_2 = 0U;/* VOLATILE GLOBAL g_2 */
uint32_t g_3 = 0x299DADA4;
int32_t g_5 = 7;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_5
 * writes: g_3 g_5
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint8_t g_2_l = 0U;
uint32_t g_3_l = 0x299DADA4;
int32_t g_5_l = 7;
 /* block id: 0 */
    int16_t l_4 = 8;
    int32_t l_6 = (-7);
    g_3_l |= g_2_l;
    l_6 = (g_5_l ^= l_4);
    return set_var(g_2_l, g_3_l, g_5_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
