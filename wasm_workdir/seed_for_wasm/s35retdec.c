/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1247.c
 * Seed:      241523363
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const int32_t g_6 = 0x37AD4351;
static int8_t g_7 = (-1);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_7_l){
    g_7 = g_7_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7
 * writes: g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
const int32_t g_6_l = 0x37AD4351;
int8_t g_7_l = (-1);
 /* block id: 0 */
    uint32_t l_2 = 0xE8EDF1FE;
    int32_t l_3 = 0;
    l_3 = l_2;
    for (l_2 = (-20); (l_2 < 4); l_2 += 3)
    { /* block id: 4 */
    }
    g_7_l = (l_2 | g_6_l);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
