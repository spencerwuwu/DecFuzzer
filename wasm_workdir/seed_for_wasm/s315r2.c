/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_165.c
 * Seed:      764327000
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2 = 8U;
static uint8_t g_5 = 255U;
static uint8_t g_15 = 0U;
static uint32_t g_17 = 4294967295U;
static int32_t g_18 = 5;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint16_t g_2_l, uint8_t g_5_l, uint8_t g_15_l, uint32_t g_17_l, int32_t g_18_l){
    g_2 = g_2_l;g_5 = g_5_l;g_15 = g_15_l;g_17 = g_17_l;g_18 = g_18_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_17
 * writes: g_5 g_15 g_17 g_18
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint16_t g_2_l = 8U;
    uint8_t g_5_l = 255U;
    uint8_t g_15_l = 0U;
    uint32_t g_17_l = 4294967295U;
    int32_t g_18_l = 5;
 /* block id: 0 */
    int32_t l_6 = (-10);
    int16_t l_16 = 3;
    l_6 ^= (g_5_l = (g_2_l && ((int8_t)0x39 << (int8_t)0)));
    g_18_l = (g_17_l &= (((int16_t)((int16_t)(255U | (((int16_t)(((g_2_l ^ (g_2_l >= (g_15_l = ((int8_t)l_6 >> (int8_t)7)))) & l_6) || l_6) % (int16_t)l_16) < l_16)) >> (int16_t)12) * (int16_t)0x09CB) & l_6));
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_17_l, "g_17", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_18_l, "g_18", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
