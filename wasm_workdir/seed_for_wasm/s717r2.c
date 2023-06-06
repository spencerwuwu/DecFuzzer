/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_946.c
 * Seed:      1604116531
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint32_t g_5_l, int32_t g_6_l, uint16_t g_13_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint32_t g_5 = 0x6444696A;
int32_t g_6 = 9;
uint16_t g_13 = 4U;
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_13 g_5 g_6
 * writes: g_5 g_6 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint32_t g_5_l = 0x6444696A;
    int32_t g_6_l = 9;
    uint16_t g_13_l = 4U;
 /* block id: 0 */
    int32_t l_4 = 0x632667A8;
    int32_t l_21 = 0;
    g_5_l = ((int16_t)l_4 - (int16_t)0xE6BA);
    g_6_l = l_4;
    l_4 = (((int16_t)(((((int8_t)((l_4 >= ((uint16_t)(g_13_l ^= 65535U) * (uint16_t)((~(g_5_l < ((int8_t)((uint32_t)(((l_21 ^= ((uint16_t)65531U / (uint16_t)0x7E0D)) > 0xDC) == g_6_l) - (uint32_t)l_4) << (int8_t)l_4))) | g_6_l))) & g_6_l) % (int8_t)1U) >= g_5_l) & 0) != 0x2F) / (int16_t)g_5_l) == l_4);
    return set_var(g_5_l, g_6_l, g_13_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
