/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1467.c
 * Seed:      2158371505
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint16_t g_15_l, int8_t g_16_l, uint8_t g_18_l, uint32_t *crc32_context, uint32_t *crc32_tab){
const volatile uint8_t g_8 = 5U;/* VOLATILE GLOBAL g_8 */
uint16_t g_15 = 0x0274;
int8_t g_16 = 0xE0;
uint8_t g_18 = 0x42;
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    transparent_crc(g_16, "g_16", 0, crc32_context, crc32_tab);
    transparent_crc(g_18, "g_18", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_15 g_16 g_18
 * writes: g_15 g_18
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
const uint8_t g_8_l = 5U;
uint16_t g_15_l = 0x0274;
int8_t g_16_l = 0xE0;
uint8_t g_18_l = 0x42;
 /* block id: 0 */
    uint32_t l_2 = 0xAD95E17C;
    int32_t l_17 = 0x45BBBDEB;
    l_17 = (((l_2 || ((uint16_t)(g_15_l = (((int8_t)(~l_2) << (int8_t)g_8_l) , (((int32_t)((int16_t)((((uint32_t)7U - (uint32_t)0x0815898F) && g_8_l) && g_8_l) / (int16_t)l_2) + (int32_t)g_15_l) , l_2))) + (uint16_t)g_16_l)) , 0) < g_16_l);
    g_18_l &= (-6);
    return set_var(g_15_l, g_16_l, g_18_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
