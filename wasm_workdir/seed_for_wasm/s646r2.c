/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_248.c
 * Seed:      2500613737
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_4 = 1;/* VOLATILE GLOBAL g_4 */
static uint32_t g_8 = 0U;
static int32_t g_9 = 5;
static uint16_t g_10 = 65535U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_4_l, uint32_t g_8_l, int32_t g_9_l, uint16_t g_10_l){
    g_4 = g_4_l;g_8 = g_8_l;g_9 = g_9_l;g_10 = g_10_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_9 g_10
 * writes: g_8 g_9 g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_4_l = 1;
    uint32_t g_8_l = 0U;
    int32_t g_9_l = 5;
    uint16_t g_10_l = 65535U;
 /* block id: 0 */
    int16_t l_5 = 1;
    g_9_l |= ((uint8_t)(((g_4_l && l_5) , ((g_8_l = ((((int8_t)(l_5 , l_5) / (int8_t)g_4_l) == 1U) || g_4_l)) && 4294967295U)) && l_5) * (uint8_t)0x4D);
    --g_10_l;
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
