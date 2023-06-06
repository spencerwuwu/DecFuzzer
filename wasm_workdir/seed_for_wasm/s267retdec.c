/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1935.c
 * Seed:      3017025450
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_2_l, int8_t g_17_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int16_t g_2 = (-4);
int8_t g_17 = 9;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_17, "g_17", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_17
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int16_t g_2_l = (-4);
    int8_t g_17_l = 9;
 /* block id: 0 */
    int32_t l_11 = 0xCEC79E67;
    int32_t l_16 = 0x2758E92E;
lbl_18:
    g_2_l = 0x10C93B4E;
    g_17_l = ((int16_t)(((int16_t)((int8_t)(g_2_l | ((int32_t)(l_11 && (g_2_l && ((((+((!(((l_11 & l_11) ^ g_2_l) <= g_2_l)) != l_16)) != l_11) == g_2_l) >= g_2_l))) / (int32_t)g_2_l)) / (int8_t)g_2_l) >> (int16_t)g_2_l) , l_16) - (int16_t)0U);
    if (l_16)
        goto lbl_18;
    return set_var(g_2_l, g_17_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
