/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1620.c
 * Seed:      3982778479
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int16_t g_6_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int16_t g_6 = 0xA2C7;/* VOLATILE GLOBAL g_6 */
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int16_t g_6_l = 0xA2C7;
 /* block id: 0 */
    int8_t l_2 = 0;
    if (l_2)
    { /* block id: 1 */
        uint32_t l_3 = 1U;
        return set_var(g_6_l, &crc32_context, crc32_tab);
    }
    else
    { /* block id: 3 */
        uint16_t l_7 = 65533U;
        l_7 = ((int8_t)g_6_l % (int8_t)0xA6);
    }
    return set_var(g_6_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
