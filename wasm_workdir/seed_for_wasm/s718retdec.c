/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_947.c
 * Seed:      15672877
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2 = 0x0E60;
static int32_t g_6 = 2;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int16_t g_2_l, int32_t g_6_l){
    g_2 = g_2_l;g_6 = g_6_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_6
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int16_t g_2_l = 0x0E60;
    int32_t g_6_l = 2;
 /* block id: 0 */
    uint32_t l_3 = 0x77DD6887;
    int32_t l_9 = 7;
    g_6_l = (((-6) | 1U) || (++l_3));
    l_9 = ((int16_t)l_3 << (int16_t)14);
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
