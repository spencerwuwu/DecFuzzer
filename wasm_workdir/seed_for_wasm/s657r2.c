/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_324.c
 * Seed:      914884510
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_4_l, uint32_t g_7_l, uint32_t g_11_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint8_t g_4 = 3U;/* VOLATILE GLOBAL g_4 */
uint32_t g_7 = 1U;
uint32_t g_11 = 1U;
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_11
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint8_t g_4_l = 3U;
    uint32_t g_7_l = 1U;
    uint32_t g_11_l = 1U;
 /* block id: 0 */
    uint32_t l_10 = 0xF48C443E;
    g_11_l = ((((((int8_t)(g_4_l == ((uint32_t)g_7_l + (uint32_t)((uint8_t)l_10 % (uint8_t)0x06))) - (int8_t)l_10) == g_7_l) > g_7_l) > l_10) , l_10);
    return set_var(g_4_l, g_7_l, g_11_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
