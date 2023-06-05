/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1595.c
 * Seed:      1291823847
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2 = 2;
static int32_t g_3 = 0xD4E7937D;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_2_l, int32_t g_3_l){
    g_2 = g_2_l;g_3 = g_3_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int8_t g_2_l = 2;
int32_t g_3_l = 0xD4E7937D;
 /* block id: 0 */
    int16_t l_8 = 0x215E;
    int32_t l_17 = 8;
    int32_t l_18 = 0x0351A938;
    int16_t l_19 = 0;
    l_19 = ((g_3_l &= g_2_l) >= ((((int16_t)((int8_t)(l_8 & ((uint32_t)(+((uint16_t)(((+((int16_t)1 * (int16_t)l_8)) || l_8) & l_17) + (uint16_t)l_8)) % (uint32_t)l_17)) / (int8_t)l_18) << (int16_t)l_18) && 0x35) & l_8));
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
