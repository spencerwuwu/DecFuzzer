/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1222.c
 * Seed:      2571145706
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int16_t g_15_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = 0xB110C93B;
int16_t g_15 = 0x9EC1;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_15
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int32_t g_2_l = 0xB110C93B;
int16_t g_15_l = 0x9EC1;
 /* block id: 0 */
    uint32_t l_14 = 1U;
    for (g_2_l = 0; (g_2_l <= (-12)); --g_2_l)
    { /* block id: 3 */
        int8_t l_7 = 1;
        int32_t l_12 = 1;
        g_15_l = (((((((int16_t)l_7 * (int16_t)((uint16_t)0x72CA % (uint16_t)((uint8_t)(((((((l_12 = g_2_l) ^ (-(uint16_t)(((l_7 < 0x0B44) && g_2_l) , g_2_l))) || 65535U) & l_14) & g_2_l) <= 0xBDE64F6C) , 0x2E) << (uint8_t)7))) & l_7) && l_14) == g_2_l) & g_2_l) & (-1));
    }
    return set_var(g_2_l, g_15_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
