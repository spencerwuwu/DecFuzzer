/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1911.c
 * Seed:      2218483346
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_5 = 0xCE9D05BA;
static volatile int16_t g_7 = (-4);/* VOLATILE GLOBAL g_7 */
static int32_t g_8 = 0x6F084217;
static int8_t g_20 = 0x83;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_5_l, int16_t g_7_l, int32_t g_8_l, int8_t g_20_l){
    g_5 = g_5_l;g_7 = g_7_l;g_8 = g_8_l;g_20 = g_20_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_7 g_8
 * writes: g_8 g_20
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_5_l = 0xCE9D05BA;
    int16_t g_7_l = (-4);
    int32_t g_8_l = 0x6F084217;
    int8_t g_20_l = 0x83;
 /* block id: 0 */
    uint32_t l_6 = 0xB60E704F;
    uint32_t l_9 = 0x56160CBE;
    int32_t l_17 = 9;
    int32_t l_23 = 2;
    g_8_l |= ((int8_t)((~g_5_l) >= g_5_l) * (int8_t)((0xF4 | (l_6 = (g_5_l != 0xEA66E58D))) <= g_7_l));
    --l_9;
    l_23 ^= (-(int16_t)(((uint8_t)(((int8_t)(l_17 = l_6) << (int8_t)4) , (((int16_t)(g_20_l = (g_5_l || 0U)) * (int16_t)((uint32_t)(l_17 = ((l_17 ^ 0x5C8A52B4) || l_17)) + (uint32_t)g_8_l)) != g_8_l)) % (uint8_t)(-9)) && g_8_l));
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_20_l, "g_20", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
