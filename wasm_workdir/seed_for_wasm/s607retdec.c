/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_10.c
 * Seed:      376567150
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_7 = 0x15DE05DA;/* VOLATILE GLOBAL g_7 */
static uint32_t g_8 = 0U;
static uint32_t g_9 = 0xB4E94F93;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_7_l, uint32_t g_8_l, uint32_t g_9_l){
    g_7 = g_7_l;g_8 = g_8_l;g_9 = g_9_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8
 * writes: g_9
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_7_l = 0x15DE05DA;
    uint32_t g_8_l = 0U;
    uint32_t g_9_l = 0xB4E94F93;
 /* block id: 0 */
    const uint32_t l_6 = 4294967295U;
    g_9_l = ((int16_t)(((int8_t)((l_6 ^ (g_7_l , g_7_l)) , l_6) * (int8_t)g_8_l) ^ g_8_l) + (int16_t)g_8_l);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
