/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_324.c
 * Seed:      914884510
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_4 = 3U;/* VOLATILE GLOBAL g_4 */
static uint32_t g_7 = 1U;
static uint32_t g_11 = 1U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_4_l, uint32_t g_7_l, uint32_t g_11_l){
    g_4 = g_4_l;g_7 = g_7_l;g_11 = g_11_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_11
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_4_l = 3U;
    uint32_t g_7_l = 1U;
    uint32_t g_11_l = 1U;
 /* block id: 0 */
    uint32_t l_10 = 0xF48C443E;
    g_11_l = ((((((int8_t)(g_4_l == ((uint32_t)g_7_l + (uint32_t)((uint8_t)l_10 % (uint8_t)0x06))) - (int8_t)l_10) == g_7_l) > g_7_l) > l_10) , l_10);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
