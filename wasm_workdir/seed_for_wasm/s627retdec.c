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

static uint32_t set_var(int32_t g_6_l, int16_t g_17_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_6 = 1;/* VOLATILE GLOBAL g_6 */
int16_t g_17 = 0x8951;
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_17, "g_17", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
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
         
    int32_t g_6_l = 1;
    int16_t g_17_l = 0x8951;
 /* block id: 0 */
    int8_t l_9 = 0xD4;
    uint8_t l_16 = 0x99;
    int8_t l_18 = 0;
    int32_t l_19 = (-1);
    l_19 ^= ((uint16_t)(((int8_t)g_6_l * (int8_t)((int16_t)l_9 >> (int16_t)(l_18 = ((int16_t)(0U == ((int8_t)((((int16_t)l_9 - (int16_t)l_16) < 0x9C) , g_17_l) << (int8_t)l_9)) - (int16_t)0x0837)))) & l_9) << (uint16_t)10);
    return set_var(g_6_l, g_17_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
