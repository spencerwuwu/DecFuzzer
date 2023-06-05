/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_396.c
 * Seed:      90117346
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2 = 0x70;
static uint32_t g_3 = 4294967295U;
static uint32_t g_4 = 0x2FFAB8C3;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_2_l, uint32_t g_3_l, uint32_t g_4_l){
    g_2 = g_2_l;g_3 = g_3_l;g_4 = g_4_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4
 * writes: g_3 g_4
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int8_t g_2_l = 0x70;
    uint32_t g_3_l = 4294967295U;
    uint32_t g_4_l = 0x2FFAB8C3;
 /* block id: 0 */
    const uint32_t l_5 = 0xFB770A77;
    int32_t l_6 = 5;
    g_3_l = g_2_l;
    g_4_l |= 0x20F89B54;
    l_6 &= l_5;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
