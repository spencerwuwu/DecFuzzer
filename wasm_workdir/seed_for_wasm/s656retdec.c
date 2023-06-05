/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_323.c
 * Seed:      1662118572
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = (-1);/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = 0x8C176B0F;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_2_l, int32_t g_3_l){
    g_2 = g_2_l;g_3 = g_3_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = (-1);
    int32_t g_3_l = 0x8C176B0F;
 /* block id: 0 */
    uint16_t l_7 = 0U;
    for (g_3_l = 13; (g_3_l <= (-14)); g_3_l -= 2)
    { /* block id: 3 */
        uint16_t l_6 = 0U;
        uint16_t l_8 = 0xF07B;
        l_7 = l_6;
        l_8 &= l_6;
    }
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
