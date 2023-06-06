/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_556.c
 * Seed:      2913861404
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint32_t g_2_l, uint8_t g_5_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint32_t g_2 = 4294967295U;
uint8_t g_5 = 0x80;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes: g_5
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint32_t g_2_l = 4294967295U;
    uint8_t g_5_l = 0x80;
 /* block id: 0 */
    int16_t l_3 = (-4);
    int32_t l_4 = (-8);
    l_3 |= g_2_l;
    l_4 = 0xB22124F8;
    g_5_l &= g_2_l;
    return set_var(g_2_l, g_5_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
