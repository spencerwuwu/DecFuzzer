/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1104.c
 * Seed:      443820502
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2 = 0xC29A3DF6;/* VOLATILE GLOBAL g_2 */
static uint8_t g_8 = 0x49;
static uint32_t g_9 = 0x3989226C;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_2_l, uint8_t g_8_l, uint32_t g_9_l){
    g_2 = g_2_l;g_8 = g_8_l;g_9 = g_9_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_8 g_9
 * writes: g_9
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_2_l = 0xC29A3DF6;
    uint8_t g_8_l = 0x49;
    uint32_t g_9_l = 0x3989226C;
 /* block id: 0 */
    int8_t l_7 = 3;
    g_9_l |= ((g_2_l < ((uint8_t)(((int8_t)l_7 - (int8_t)(g_8_l , ((g_8_l & l_7) && g_8_l))) == l_7) >> (uint8_t)0)) >= g_8_l);
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
