/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_446.c
 * Seed:      969061707
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_13 = 1U;
static uint32_t g_14 = 0x5EA6EDAD;
static uint16_t g_15 = 0xB0AD;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_13_l, uint32_t g_14_l, uint16_t g_15_l){
    g_13 = g_13_l;g_14 = g_14_l;g_15 = g_15_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_13 g_14
 * writes: g_14 g_15
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_13_l = 1U;
    uint32_t g_14_l = 0x5EA6EDAD;
    uint16_t g_15_l = 0xB0AD;
 /* block id: 0 */
    int16_t l_7 = 0x7950;
    uint16_t l_12 = 0xDF7C;
    l_12 &= (((((int8_t)((int8_t)((!l_7) && (((uint8_t)((int16_t)0xD6C3 - (int16_t)1U) << (uint8_t)0) | 0)) + (int8_t)0U) * (int8_t)l_7) <= l_7) ^ 0x2443) , (-1));
    g_14_l = (g_13_l && l_12);
    g_15_l = l_12;
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
