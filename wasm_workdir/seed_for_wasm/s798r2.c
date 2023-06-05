/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1209.c
 * Seed:      3152617162
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_7 = 255U;
static uint32_t g_24 = 4294967295U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_7_l, uint32_t g_24_l){
    g_7 = g_7_l;g_24 = g_24_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_24
 * writes: g_24
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_7_l = 255U;
    uint32_t g_24_l = 4294967295U;
 /* block id: 0 */
    uint32_t l_2 = 0x93B4E1A3;
    int32_t l_16 = 0xC87A7525;
    uint8_t l_19 = 7U;
    uint8_t l_20 = 0U;
    int32_t l_21 = 0x733147F5;
    int32_t l_23 = 9;
    l_2--;
    if (l_2)
        goto lbl_22;
lbl_22:
    l_21 |= ((uint8_t)(g_7_l < (((((uint8_t)((((((int8_t)((int16_t)((((uint8_t)((l_16 == ((uint8_t)l_19 / (uint8_t)g_7_l)) ^ l_19) >> (uint8_t)3) , g_7_l) , l_19) % (int16_t)g_7_l) % (int8_t)g_7_l) ^ g_7_l) & 0x405C) | l_20) , g_7_l) >> (uint8_t)g_7_l) >= g_7_l) > l_20) , l_2)) >> (uint8_t)l_19);
    g_24_l &= (l_21 ^= (((l_2 <= (g_7_l ^ l_19)) <= g_7_l) >= l_23));
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_24_l, "g_24", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
