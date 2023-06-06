/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_191.c
 * Seed:      3262079550
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, uint32_t g_10_l, uint32_t g_11_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = 1;
uint32_t g_10 = 0U;
uint32_t g_11 = 0xA1C17C77;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_10
 * writes: g_2 g_11
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int32_t g_2_l = 1;
uint32_t g_10_l = 0U;
uint32_t g_11_l = 0xA1C17C77;
 /* block id: 0 */
    const uint32_t l_7 = 0U;
    for (g_2_l = (-8); (g_2_l >= 12); g_2_l += 1)
    { /* block id: 3 */
        g_11_l = (g_2_l > ((uint8_t)l_7 >> (uint8_t)(((((uint8_t)(g_2_l < (g_2_l < g_10_l)) << (uint8_t)g_2_l) | g_2_l) == 0xFAF0) & l_7)));
    }
    return set_var(g_2_l, g_10_l, g_11_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
