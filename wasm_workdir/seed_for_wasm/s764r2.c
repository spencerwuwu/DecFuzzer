/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1111.c
 * Seed:      1068277730
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_11_l, int32_t g_12_l, int8_t g_13_l, uint8_t g_22_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int16_t g_11 = 0xDE03;
volatile int32_t g_12 = 3;/* VOLATILE GLOBAL g_12 */
int8_t g_13 = 2;
uint8_t g_22 = 255U;
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    transparent_crc(g_12, "g_12", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    transparent_crc(g_22, "g_22", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_13 g_11 g_22
 * writes: g_11 g_12 g_22
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int16_t g_11_l = 0xDE03;
    int32_t g_12_l = 3;
    int8_t g_13_l = 2;
    uint8_t g_22_l = 255U;
 /* block id: 0 */
    uint32_t l_4 = 4294967295U;
    uint8_t l_21 = 0x3D;
    int32_t l_29 = 6;
    g_12_l = ((((int8_t)l_4 - (int8_t)(((int16_t)(l_4 ^ (((int16_t)l_4 - (int16_t)((int16_t)(((g_11_l = (-1)) < 0xD697E780) , l_4) >> (int16_t)g_12_l)) != g_13_l)) / (int16_t)l_4) | g_13_l)) | g_13_l) == l_4);
    for (g_11_l = (-15); (g_11_l < (-1)); g_11_l++)
    { /* block id: 5 */
        uint16_t l_16 = 65535U;
        l_16 = (-1);
    }
    g_12_l = (((int16_t)((uint8_t)((g_22_l &= (l_21 && (g_11_l = 0))) >= (((((uint16_t)((uint16_t)g_13_l % (uint16_t)((l_29 = (!(+g_12_l))) | 0xF7)) >> (uint16_t)g_13_l) ^ l_21) & g_13_l) ^ 0x0CBEDFA9)) + (uint8_t)l_4) - (int16_t)g_13_l) == (-1));
    return set_var(g_11_l, g_12_l, g_13_l, g_22_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
