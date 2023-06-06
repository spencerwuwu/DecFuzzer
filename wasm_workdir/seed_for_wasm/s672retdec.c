/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_445.c
 * Seed:      2474402851
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int32_t g_3_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_2 = 0xE1757117;/* VOLATILE GLOBAL g_2 */
int32_t g_3 = 0xEDF1FEBA;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3 g_2
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0xE1757117;
    int32_t g_3_l = 0xEDF1FEBA;
 /* block id: 0 */
    uint16_t l_6 = 0xE2C0;
    uint32_t l_24 = 0xF08E2294;
    int32_t l_27 = 1;
    int32_t l_28 = 0xCA3EAA3E;
    for (g_3_l = (-12); (g_3_l > (-27)); g_3_l--)
    { /* block id: 3 */
        uint16_t l_9 = 0x3F9E;
        int32_t l_16 = 0xE9C96C79;
        --l_6;
        ++l_9;
        if (g_2_l)
            break;
        for (l_9 = 0; (l_9 >= 41); l_9 += 4)
        { /* block id: 9 */
            uint32_t l_25 = 8U;
            int32_t l_26 = 9;
            g_2_l = (((int8_t)0x00 * (int8_t)(l_16 = g_2_l)) == g_3_l);
            g_2_l = ((((6 >= (l_28 ^= ((+((uint32_t)4294967292U + (uint32_t)((((uint8_t)(l_27 = (((l_6 && (l_26 = (l_24 > l_25))) , 0xA0193208) >= l_6)) + (uint8_t)g_3_l) , l_26) < 0))) ^ l_16))) , l_9) ^ l_25) & 1);
        }
    }
    l_27 |= ((0xD4 & ((uint8_t)g_3_l % (uint8_t)((uint8_t)g_3_l * (uint8_t)g_2_l))) | (-1));
    g_3_l = (g_3_l , g_3_l);
    return set_var(g_2_l, g_3_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
