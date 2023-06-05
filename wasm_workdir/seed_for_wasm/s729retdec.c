/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_961.c
 * Seed:      109685201
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_7 = 0xBEA12209;/* VOLATILE GLOBAL g_7 */
static uint16_t g_9 = 0U;
static int16_t g_10 = 9;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_7_l, uint16_t g_9_l, int16_t g_10_l){
    g_7 = g_7_l;g_9 = g_9_l;g_10 = g_10_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_9 g_10
 * writes: g_9 g_7 g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_7_l = 0xBEA12209;
    uint16_t g_9_l = 0U;
    int16_t g_10_l = 9;
 /* block id: 0 */
    uint32_t l_6 = 0x7CA0029B;
    int32_t l_8 = 8;
    int8_t l_11 = (-1);
    g_7_l = ((int8_t)((int8_t)(l_6 = 4) << (int8_t)(g_9_l = (g_7_l != l_8))) * (int8_t)0x6B);
    g_7_l ^= ((g_10_l ^= g_9_l) <= l_11);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
