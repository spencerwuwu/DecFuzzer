/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1920.c
 * Seed:      2322744467
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2 = 0x99;
static int32_t g_6 = (-1);
static volatile uint32_t g_7 = 0U;/* VOLATILE GLOBAL g_7 */
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_2_l, int32_t g_6_l, uint32_t g_7_l){
    g_2 = g_2_l;g_6 = g_6_l;g_7 = g_7_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes: g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int8_t g_2_l = 0x99;
    int32_t g_6_l = (-1);
    uint32_t g_7_l = 0U;
 /* block id: 0 */
    int8_t l_3 = 0x63;
    int32_t l_4 = (-4);
    int32_t l_5 = 0x79536444;
    g_7_l++;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
