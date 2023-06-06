/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1554.c
 * Seed:      1362326860
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_7_l, uint8_t g_8_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_7 = 1;/* VOLATILE GLOBAL g_7 */
uint8_t g_8 = 0U;
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8
 * writes: g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int32_t g_7_l = 1;
uint8_t g_8_l = 0U;
 /* block id: 0 */
    int16_t l_2 = 0;
    int32_t l_11 = 0x93E0566A;
    l_2 = 0x61928C17;
    l_11 = ((uint16_t)((int8_t)(g_7_l | ((g_8_l | 8U) >= ((g_8_l && 0U) | l_2))) * (int8_t)(-1)) >> (uint16_t)g_8_l);
    g_7_l = l_2;
    return set_var(g_7_l, g_8_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
