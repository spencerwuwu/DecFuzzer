/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1513.c
 * Seed:      3811254708
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_4 = 0;/* VOLATILE GLOBAL g_4 */
static uint8_t g_5 = 255U;
static int32_t g_7 = (-1);
static uint8_t g_16 = 1U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_4_l, uint8_t g_5_l, int32_t g_7_l, uint8_t g_16_l){
    g_4 = g_4_l;g_5 = g_5_l;g_7 = g_7_l;g_16 = g_16_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_7 g_16
 * writes: g_7 g_16
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int8_t g_4_l = 0;
uint8_t g_5_l = 255U;
int32_t g_7_l = (-1);
uint8_t g_16_l = 1U;
 /* block id: 0 */
    uint32_t l_6 = 4294967295U;
    int8_t l_22 = (-10);
    l_6 |= ((uint32_t)g_4_l + (uint32_t)g_5_l);
    g_7_l = g_5_l;
    for (l_6 = 8; (l_6 < 50); l_6 += 6)
    { /* block id: 5 */
        uint32_t l_21 = 0x30A9BCA7;
        g_7_l = ((int16_t)((int8_t)(g_7_l < g_4_l) - (int8_t)(((uint16_t)((((0x6F && ((--g_16_l) , ((int16_t)1 << (int16_t)0))) == g_5_l) <= g_7_l) , 0xE1C5) * (uint16_t)l_21) & g_5_l)) << (int16_t)4);
    }
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_16_l, "g_16", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
