/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1685.c
 * Seed:      3008266900
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int8_t g_3_l, uint32_t g_4_l, int8_t g_14_l, int32_t g_15_l, uint32_t g_16_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int8_t g_3 = (-8);
volatile uint32_t g_4 = 0xDE0B4074;/* VOLATILE GLOBAL g_4 */
int8_t g_14 = 0x53;
volatile int32_t g_15 = 0x5CF1C946;/* VOLATILE GLOBAL g_15 */
uint32_t g_16 = 0x17F4039E;
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_14, "g_14", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    transparent_crc(g_16, "g_16", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_3 g_16
 * writes: g_4 g_14 g_16
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int8_t g_3_l = (-8);
uint32_t g_4_l = 0xDE0B4074;
int8_t g_14_l = 0x53;
int32_t g_15_l = 0x5CF1C946;
uint32_t g_16_l = 0x17F4039E;
 /* block id: 0 */
    int32_t l_2 = 0xBAF43B7C;
    int32_t l_13 = (-4);
    g_4_l--;
    for (l_2 = (-18); (l_2 < (-10)); l_2 += 6)
    { /* block id: 4 */
        int32_t l_9 = (-1);
        int32_t l_12 = 0x8531D14C;
        g_14_l = ((g_3_l , ((g_4_l ^ (l_9 | ((uint8_t)(l_13 = (((((l_2 , g_3_l) , l_2) | g_3_l) | l_12) || 0x95)) * (uint8_t)0))) , 0xD5)) && 1);
    }
    --g_16_l;
    return set_var(g_3_l, g_4_l, g_14_l, g_15_l, g_16_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
