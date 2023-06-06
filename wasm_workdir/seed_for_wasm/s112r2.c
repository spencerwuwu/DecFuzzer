/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1446.c
 * Seed:      3878742808
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_3_l, int32_t g_4_l, uint8_t g_5_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_3 = 9;
int32_t g_4 = 0xDE2167FA;
uint8_t g_5 = 0x89;
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_3
 * writes: g_3 g_5
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int32_t g_3_l = 9;
int32_t g_4_l = 0xDE2167FA;
uint8_t g_5_l = 0x89;
 /* block id: 0 */
    uint32_t l_2 = 4294967291U;
    g_3_l = l_2;
    ++g_5_l;
    return set_var(g_3_l, g_4_l, g_5_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
