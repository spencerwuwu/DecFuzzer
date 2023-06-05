/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1326.c
 * Seed:      2953499484
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2 = 1U;/* VOLATILE GLOBAL g_2 */
static volatile int16_t g_3 = (-1);/* VOLATILE GLOBAL g_3 */
static volatile uint32_t g_4 = 1U;/* VOLATILE GLOBAL g_4 */
static uint16_t g_19 = 0xFA97;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_2_l, int16_t g_3_l, uint32_t g_4_l, uint16_t g_19_l){
    g_2 = g_2_l;g_3 = g_3_l;g_4 = g_4_l;g_19 = g_19_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_3 g_19
 * writes: g_3 g_4 g_19
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_2_l = 1U;
    int16_t g_3_l = (-1);
    uint32_t g_4_l = 1U;
    uint16_t g_19_l = 0xFA97;
 /* block id: 0 */
    int32_t l_13 = 0x53D42374;
    uint32_t l_14 = 0U;
    int32_t l_15 = (-10);
    int32_t l_18 = 5;
    int16_t l_22 = 0x0C65;
    g_3_l = g_2_l;
    g_4_l++;
    l_13 = ((int8_t)((((int16_t)(g_3_l && (((l_14 = l_13) >= (((l_13 ^ (((l_15 & l_13) != 0x5158) | g_4_l)) || 4294967294U) != 3)) , g_4_l)) >> (int16_t)5) , l_13) , 7) / (int8_t)(-4));
    for (l_15 = 0; (l_15 == (-17)); --l_15)
    { /* block id: 7 */
        --g_19_l;
    }
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_19_l, "g_19", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
