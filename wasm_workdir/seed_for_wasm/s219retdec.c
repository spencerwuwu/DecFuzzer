/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1680.c
 * Seed:      3961794351
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_4_l, uint16_t g_15_l, uint32_t g_16_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int16_t g_4 = 0xB950;
uint16_t g_15 = 3U;
uint32_t g_16 = 1U;
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    transparent_crc(g_16, "g_16", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_15 g_16
 * writes: g_15 g_16
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int16_t g_4_l = 0xB950;
uint16_t g_15_l = 3U;
uint32_t g_16_l = 1U;
 /* block id: 0 */
    int16_t l_11 = 0x106E;
    int32_t l_14 = 0x96F377CC;
    const uint32_t l_18 = 0xEC80F219;
lbl_17:
    g_16_l = (((((uint32_t)((g_4_l >= (g_15_l |= ((uint16_t)(((int8_t)(((uint16_t)(0U || l_11) - (uint16_t)(((uint8_t)(l_14 = g_4_l) % (uint8_t)1) && l_14)) > g_4_l) << (int8_t)2) , 1U) / (uint16_t)1))) <= l_11) + (uint32_t)l_11) | g_4_l) && 0xAE) , 0x3817D1DC);
    l_14 = g_16_l;
    if (g_15_l)
        goto lbl_17;
    return set_var(g_4_l, g_15_l, g_16_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
