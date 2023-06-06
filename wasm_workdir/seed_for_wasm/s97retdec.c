/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1402.c
 * Seed:      586096213
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_2_l, uint8_t g_13_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint8_t g_2 = 0x2E;
uint8_t g_13 = 3U;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint8_t g_2_l = 0x2E;
uint8_t g_13_l = 3U;
 /* block id: 0 */
    int8_t l_9 = 0;
    int32_t l_12 = 0x25A80E35;
    ++g_2_l;
    g_13_l = ((uint8_t)(l_12 = (((int16_t)l_9 >> (int16_t)6) < ((int8_t)8 << (int8_t)l_9))) / (uint8_t)l_9);
    return set_var(g_2_l, g_13_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
