/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_670.c
 * Seed:      1817852313
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0x4E064826;/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = 1;
static int16_t g_12 = 0x2524;
static int32_t g_14 = 0x5EAFB5D1;
/* --- FORWARD DECLARATIONS --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static int set_var(int32_t g_2_l, int32_t g_3_l, int16_t g_12_l, int32_t g_14_l){
    g_2 = g_2_l;g_3 = g_3_l;g_12 = g_12_l;g_14 = g_14_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_12 g_14
 * writes: g_3 g_12 g_14 g_2
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = 0x4E064826;
    int32_t g_3_l = 1;
    int16_t g_12_l = 0x2524;
    int32_t g_14_l = 0x5EAFB5D1;
 /* block id: 0 */
    int32_t l_6 = 0xF2E5664D;
    int32_t l_23 = 1;
    int32_t l_24 = (-7);
    const uint32_t l_25 = 4294967295U;
    for (g_3_l = 0; (g_3_l <= (-12)); g_3_l--)
    { /* block id: 3 */
        uint32_t l_13 = 0x6FD43DDC;
        g_14_l ^= (((l_6 > (((uint8_t)g_2_l >> (uint8_t)(((-(uint16_t)((uint16_t)((l_13 = (1 & (g_12_l = (((l_6 & 5) && l_6) || (-1))))) || g_12_l) << (uint16_t)2)) || l_13) == l_6)) | g_3_l)) | 0x0D54) , 0x623B4709);
        g_2_l = ((int8_t)(l_23 = ((l_6 = l_13) || (((uint16_t)(+(g_3_l , ((int32_t)(g_14_l | (-(uint16_t)0U)) / (int32_t)l_6))) - (uint16_t)l_13) , g_2_l))) + (int8_t)l_24);
    }
    l_6 = (g_2_l <= l_25);
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
