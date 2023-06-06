/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_792.c
 * Seed:      4083902288
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_3_l, uint32_t g_4_l, int16_t g_10_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_3 = 0xECF54C3C;
uint32_t g_4 = 0x82EAC453;
int16_t g_10 = (-1);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_10 g_4
 * writes: g_3 g_4 g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_3_l = 0xECF54C3C;
    uint32_t g_4_l = 0x82EAC453;
    int16_t g_10_l = (-1);
 /* block id: 0 */
    uint32_t l_2 = 4294967295U;
    uint8_t l_16 = 0x9C;
    const uint32_t l_19 = 0x7D02268F;
    g_4_l = ((g_3_l |= l_2) && 0);
    for (g_3_l = 12; (g_3_l > (-4)); g_3_l--)
    { /* block id: 5 */
        int32_t l_9 = 0;
        int32_t l_13 = 0x8D9BA5F2;
        g_10_l = ((int16_t)l_9 % (int16_t)0x1653);
        l_13 = ((((g_10_l < ((((uint8_t)((0xB4 ^ (l_9 != 7U)) | g_4_l) / (uint8_t)249U) != g_4_l) && 0xC7)) ^ l_2) >= 9U) , g_4_l);
        for (l_2 = 0; (l_2 == 54); l_2++)
        { /* block id: 10 */
            l_13 = g_3_l;
            ++l_16;
        }
    }
    return set_var(g_3_l, g_4_l, g_10_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
