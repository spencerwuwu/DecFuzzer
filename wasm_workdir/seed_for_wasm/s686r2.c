/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_557.c
 * Seed:      3165215153
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_14_l, int32_t g_16_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int16_t g_14 = 0x3948;/* VOLATILE GLOBAL g_14 */
int32_t g_16 = 0;
    transparent_crc(g_14, "g_14", 0, crc32_context, crc32_tab);
    transparent_crc(g_16, "g_16", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_14 g_16
 * writes: g_16
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int16_t g_14_l = 0x3948;
    int32_t g_16_l = 0;
 /* block id: 0 */
    const uint32_t l_4 = 0x9AD59E57;
    int32_t l_15 = 0xB17D72B9;
    l_15 = ((uint8_t)l_4 % (uint8_t)((int8_t)l_4 - (int8_t)(((int32_t)(~((((((int8_t)(((uint8_t)249U + (uint8_t)g_14_l) > 7U) - (int8_t)l_4) != 0x8EA3) < 0x4515FDC8) && g_14_l) >= l_4)) - (int32_t)l_4) == l_4)));
    g_16_l &= g_14_l;
    return set_var(g_14_l, g_16_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
