/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1282.c
 * Seed:      1012943359
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_4 = 2U;/* VOLATILE GLOBAL g_4 */
static const int32_t g_5 = 0x2E31D832;
static int32_t g_6 = 0xC1574781;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_4_l, int32_t g_6_l){
    g_4 = g_4_l;g_6 = g_6_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5
 * writes: g_6
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_4_l = 2U;
    const int32_t g_5_l = 0x2E31D832;
    int32_t g_6_l = 0xC1574781;
 /* block id: 0 */
    uint32_t l_7 = 0x715F0ED1;
    l_7 = (g_6_l = ((int8_t)(g_4_l > g_5_l) << (int8_t)3));
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
