/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1850.c
 * Seed:      3595303989
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int32_t g_12_l, uint16_t g_13_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = 0x9532BB11;
int32_t g_12 = 1;
uint16_t g_13 = 65529U;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_12, "g_12", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_12 g_13
 * writes: g_12 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0x9532BB11;
    int32_t g_12_l = 1;
    uint16_t g_13_l = 65529U;
 /* block id: 0 */
    int32_t l_3 = 0x37186542;
    int32_t l_10 = 0xAE7B79F6;
    uint32_t l_11 = 4294967288U;
    l_10 = ((g_13_l ^= (((g_12_l ^= (g_2_l | (((l_3 = g_2_l) , ((int16_t)((int16_t)((((int8_t)(l_3 = l_3) / (int8_t)g_2_l) && l_3) <= l_10) % (int16_t)3U) % (int16_t)l_10)) > l_11))) , 0x79) <= 1U)) & g_2_l);
    g_12_l = ((uint8_t)l_10 * (uint8_t)255U);
    return set_var(g_2_l, g_12_l, g_13_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
