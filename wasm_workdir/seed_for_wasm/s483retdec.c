/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_682.c
 * Seed:      1765811244
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int8_t g_12_l, uint8_t g_17_l, int16_t g_19_l, uint32_t g_20_l, int32_t g_23_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int8_t g_12 = 0x07;/* VOLATILE GLOBAL g_12 */
uint8_t g_17 = 0xCA;
int16_t g_19 = 0;
uint32_t g_20 = 4294967289U;
int32_t g_23 = 4;
    transparent_crc(g_12, "g_12", 0, crc32_context, crc32_tab);
    transparent_crc(g_17, "g_17", 0, crc32_context, crc32_tab);
    transparent_crc(g_19, "g_19", 0, crc32_context, crc32_tab);
    transparent_crc(g_20, "g_20", 0, crc32_context, crc32_tab);
    transparent_crc(g_23, "g_23", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_17 g_20 g_19 g_23
 * writes: g_19 g_20 g_23
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int8_t g_12_l = 0x07;
    uint8_t g_17_l = 0xCA;
    int16_t g_19_l = 0;
    uint32_t g_20_l = 4294967289U;
    int32_t g_23_l = 4;
 /* block id: 0 */
    uint16_t l_13 = 65531U;
    int32_t l_16 = 0x0566A927;
    int32_t l_18 = (-10);
    g_19_l = ((uint8_t)((int8_t)0xA1 % (int8_t)(l_18 = ((((int8_t)((int8_t)((uint16_t)(g_12_l || (((l_13 ^ ((l_16 = ((uint8_t)252U % (uint8_t)l_13)) | l_13)) , g_12_l) || g_12_l)) << (uint16_t)10) / (int8_t)g_17_l) * (int8_t)l_13) == l_13) , 1U))) << (uint8_t)6);
    g_20_l &= 0x917AB6DA;
    l_16 = g_12_l;
    for (l_16 = 18; (l_16 >= (-23)); l_16 -= 1)
    { /* block id: 8 */
        uint8_t l_24 = 0xD9;
        int32_t l_38 = 0xE76DCB0C;
        g_23_l = 0;
        g_23_l = (((((l_24 > ((l_18 = ((uint32_t)(6 | (l_24 && (((int8_t)l_13 / (int8_t)g_19_l) & l_16))) + (uint32_t)g_19_l)) | g_17_l)) || l_18) ^ (-2)) | g_17_l) , l_24);
        l_38 ^= (((!((((int8_t)((uint8_t)g_12_l % (uint8_t)((int32_t)(g_23_l > l_24) + (int32_t)(((int8_t)l_24 << (int8_t)g_20_l) <= g_17_l))) >> (int8_t)g_19_l) && 0xD8EB) | l_13)) >= (-1)) == g_20_l);
        if (g_19_l)
            break;
    }
    return set_var(g_12_l, g_17_l, g_19_l, g_20_l, g_23_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
