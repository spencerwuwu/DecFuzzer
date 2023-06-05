/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1335.c
 * Seed:      1854342348
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x8A61928C;
static int32_t g_13 = (-4);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_2_l, int32_t g_13_l){
    g_2 = g_2_l;g_13 = g_13_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_13
 * writes: g_2 g_13
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = 0x8A61928C;
    int32_t g_13_l = (-4);
 /* block id: 0 */
    int8_t l_9 = (-1);
    uint8_t l_12 = 0x0D;
    int32_t l_18 = 1;
    int32_t l_19 = (-10);
    uint8_t l_20 = 0x2A;
    for (g_2_l = (-3); (g_2_l != (-28)); --g_2_l)
    { /* block id: 3 */
        int32_t l_11 = (-2);
        g_13_l |= (((int8_t)((int8_t)(l_9 >= ((!g_2_l) != l_11)) << (int8_t)3) >> (int8_t)4) > (l_11 != l_12));
    }
    g_2_l = (((!(l_19 |= ((~((0x41 & (((int32_t)(g_13_l ^ (l_18 = g_13_l)) - (int32_t)((l_12 & g_2_l) > 4)) && l_9)) , l_18)) == l_12))) && g_2_l) <= g_13_l);
    g_13_l = (g_2_l & (-1));
    l_20 = 0x9D9E177C;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
