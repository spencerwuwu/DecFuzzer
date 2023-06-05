/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_437.c
 * Seed:      2265097329
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_8 = 1;
static int8_t g_15 = (-3);
static int16_t g_16 = (-1);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_8_l, int8_t g_15_l, int16_t g_16_l){
    g_8 = g_8_l;g_15 = g_15_l;g_16 = g_16_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_15 g_16
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int8_t g_8_l = 1;
    int8_t g_15_l = (-3);
    int16_t g_16_l = (-1);
 /* block id: 0 */
    uint32_t l_4 = 0xAD95E17C;
    int32_t l_9 = 0x5FDC8DFB;
    uint32_t l_10 = 0x0188753E;
    int32_t l_11 = 0xE3E45BBB;
    int32_t l_12 = 0x89E022A5;
    int32_t l_17 = (-3);
    l_10 = (((uint8_t)l_4 - (uint8_t)(+0x3901)) <= ((l_4 & (((((int32_t)(g_8_l ^ 0xDE9BF9F3) + (int32_t)6U) , l_9) , g_8_l) <= 1)) <= 0U));
    l_12 = (l_11 |= g_8_l);
    g_16_l = ((int8_t)(l_10 < (g_15_l = 0U)) << (int8_t)1);
    l_17 = 0x11FC80AE;
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_16_l, "g_16", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
