/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1615.c
 * Seed:      1177311896
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_7_l, uint16_t g_8_l, int32_t g_9_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int16_t g_7 = (-8);
uint16_t g_8 = 9U;
int32_t g_9 = 1;
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_9, "g_9", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8
 * writes: g_8 g_9
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int16_t g_7_l = (-8);
uint16_t g_8_l = 9U;
int32_t g_9_l = 1;
 /* block id: 0 */
    int16_t l_4 = 0xC203;
    g_9_l = (((int16_t)l_4 * (int16_t)((int16_t)(g_8_l ^= g_7_l) << (int16_t)6)) && (l_4 , (g_8_l != l_4)));
    return set_var(g_7_l, g_8_l, g_9_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
