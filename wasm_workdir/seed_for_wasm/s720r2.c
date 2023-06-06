/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_949.c
 * Seed:      3528182418
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint32_t g_5_l, int8_t g_8_l, int16_t g_9_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint32_t g_5 = 4294967295U;
int8_t g_8 = 5;
int16_t g_9 = 0x6B9C;
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_9, "g_9", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_8 g_9
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint32_t g_5_l = 4294967295U;
    int8_t g_8_l = 5;
    int16_t g_9_l = 0x6B9C;
 /* block id: 0 */
    uint8_t l_2 = 8U;
    int32_t l_3 = 0xD8A87013;
    int32_t l_4 = 0x05BA7723;
    uint8_t l_10 = 0U;
    l_4 = (l_3 = l_2);
    l_10 = (0x073FF82F >= (((l_4 = g_5_l) , 0x0BD2AB60) ^ ((g_9_l = ((l_3 = ((g_8_l = (((int8_t)l_2 >> (int8_t)4) ^ l_2)) & g_5_l)) ^ 0x44C3F4F8)) < g_5_l)));
    return set_var(g_5_l, g_8_l, g_9_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
