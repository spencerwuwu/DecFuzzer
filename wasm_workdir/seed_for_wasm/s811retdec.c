/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1258.c
 * Seed:      3556486606
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_18_l, uint32_t g_19_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_18 = 1;/* VOLATILE GLOBAL g_18 */
uint32_t g_19 = 7U;
    transparent_crc(g_18, "g_18", 0, crc32_context, crc32_tab);
    transparent_crc(g_19, "g_19", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_18 g_19
 * writes: g_18
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_18_l = 1;
    uint32_t g_19_l = 7U;
 /* block id: 0 */
    int8_t l_12 = 0;
    int32_t l_20 = 0;
    int32_t l_21 = 0x9EF4A042;
    g_18_l = (l_21 |= (((int16_t)1 >> (int16_t)14) && ((((int16_t)(l_20 = ((uint16_t)((int16_t)((int16_t)l_12 >> (int16_t)4) + (int16_t)(~(((((int16_t)0xF545 >> (int16_t)14) < ((uint8_t)(g_18_l >= g_19_l) << (uint8_t)g_19_l)) ^ g_19_l) && l_12))) << (uint16_t)l_12)) * (int16_t)0U) , l_12) | l_12)));
    return set_var(g_18_l, g_19_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
