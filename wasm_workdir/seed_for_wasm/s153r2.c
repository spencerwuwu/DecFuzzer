/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1529.c
 * Seed:      627883850
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_10 = 1;
static uint32_t g_11 = 0x247ADF1A;
static uint8_t g_13 = 0xED;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_10_l, uint32_t g_11_l, uint8_t g_13_l){
    g_10 = g_10_l;g_11 = g_11_l;g_13 = g_13_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_13
 * writes: g_11 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int32_t g_10_l = 1;
uint32_t g_11_l = 0x247ADF1A;
uint8_t g_13_l = 0xED;
 /* block id: 0 */
    int32_t l_3 = 0xF759609C;
    int32_t l_12 = 0;
    g_13_l = ((((~(l_3 & 0xBB)) & ((int8_t)(((int32_t)((int16_t)((g_11_l = g_10_l) > ((l_12 |= 7U) == l_3)) * (int16_t)g_10_l) / (int32_t)l_3) < 0x2D91509C) - (int8_t)g_10_l)) , l_12) & 0x008FB0B4);
    l_12 &= g_13_l;
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
