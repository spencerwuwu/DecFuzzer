/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1852.c
 * Seed:      3186633111
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2 = 4294967295U;/* VOLATILE GLOBAL g_2 */
static uint32_t g_12 = 1U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_2_l, uint32_t g_12_l){
    g_2 = g_2_l;g_12 = g_12_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_12
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_2_l = 4294967295U;
    uint32_t g_12_l = 1U;
 /* block id: 0 */
    int8_t l_3 = 0xF1;
    int32_t l_4 = 0;
    int32_t l_10 = 0;
    int32_t l_11 = (-3);
    int8_t l_13 = 2;
    if (((g_2_l | (l_4 = l_3)) == (((uint32_t)(((uint8_t)(l_11 &= (l_10 &= (((-(int32_t)l_3) ^ (-1)) , 0xEF))) + (uint8_t)g_12_l) && 0x0086) + (uint32_t)l_3) <= 65527U)))
    { /* block id: 4 */
        uint32_t l_14 = 1U;
        l_13 = g_12_l;
        l_14 = (-8);
    }
    else
    { /* block id: 7 */
    }
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
