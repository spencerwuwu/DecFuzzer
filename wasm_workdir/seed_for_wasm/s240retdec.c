/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1846.c
 * Seed:      3132562235
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, uint8_t g_7_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_2 = 1;/* VOLATILE GLOBAL g_2 */
int32_t g_3 = 0x3A4A9BDB;
int32_t g_6 = (-10);
volatile uint8_t g_7 = 0x1D;/* VOLATILE GLOBAL g_7 */
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_7
 * writes: g_3 g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 1;
    int32_t g_3_l = 0x3A4A9BDB;
    int32_t g_6_l = (-10);
    uint8_t g_7_l = 0x1D;
 /* block id: 0 */
    int16_t l_10 = 0xB5A5;
    for (g_3_l = 29; (g_3_l > 16); g_3_l--)
    { /* block id: 3 */
        --g_7_l;
    }
    return set_var(g_2_l, g_3_l, g_6_l, g_7_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
