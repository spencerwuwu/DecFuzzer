/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_556.c
 * Seed:      2913861404
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_2 = 4294967295U;
static uint8_t g_5 = 0x80;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_2_l, uint8_t g_5_l){
    g_2 = g_2_l;g_5 = g_5_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes: g_5
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_2_l = 4294967295U;
    uint8_t g_5_l = 0x80;
 /* block id: 0 */
    int16_t l_3 = (-4);
    int32_t l_4 = (-8);
    l_3 |= g_2_l;
    l_4 = 0xB22124F8;
    g_5_l &= g_2_l;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
