/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_108.c
 * Seed:      821150243
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_6 = 1;/* VOLATILE GLOBAL g_6 */
static int16_t g_17 = 0x8951;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_6_l, int16_t g_17_l){
    g_6 = g_6_l;g_17 = g_17_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_17
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_6_l = 1;
    int16_t g_17_l = 0x8951;
 /* block id: 0 */
    int8_t l_9 = 0xD4;
    uint8_t l_16 = 0x99;
    int8_t l_18 = 0;
    int32_t l_19 = (-1);
    l_19 ^= ((uint16_t)(((int8_t)g_6_l * (int8_t)((int16_t)l_9 >> (int16_t)(l_18 = ((int16_t)(0U == ((int8_t)((((int16_t)l_9 - (int16_t)l_16) < 0x9C) , g_17_l) << (int8_t)l_9)) - (int16_t)0x0837)))) & l_9) << (uint16_t)10);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_17_l, "g_17", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
