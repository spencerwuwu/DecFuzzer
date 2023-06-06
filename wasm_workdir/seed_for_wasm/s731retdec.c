/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_963.c
 * Seed:      2313611462
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_11_l, int16_t g_36_l, uint32_t *crc32_context, uint32_t *crc32_tab){
const int16_t g_3 = 0x4801;
uint8_t g_11 = 0U;
int16_t g_36 = (-4);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    transparent_crc(g_36, "g_36", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_11 g_36
 * writes: g_11 g_36
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    const int16_t g_3_l = 0x4801;
    uint8_t g_11_l = 0U;
    int16_t g_36_l = (-4);
 /* block id: 0 */
    uint32_t l_2 = 4294967291U;
    uint32_t l_20 = 9U;
    uint8_t l_21 = 0xD3;
    int32_t l_22 = 8;
    if (l_2)
    { /* block id: 1 */
        return set_var(g_11_l, g_36_l, &crc32_context, crc32_tab);
    }
    else
    { /* block id: 3 */
        int8_t l_8 = 0xC9;
        if (g_3_l)
        { /* block id: 4 */
            return set_var(g_11_l, g_36_l, &crc32_context, crc32_tab);
        }
        else
        { /* block id: 6 */
            int32_t l_10 = 0x2FA4AD74;
            uint32_t l_33 = 0x6EFE0CD1;
            g_11_l = ((int8_t)((int16_t)(l_8 = (g_3_l | g_3_l)) - (int16_t)(-(uint16_t)l_2)) + (int8_t)l_10);
            l_22 = ((uint8_t)((int8_t)((uint32_t)(((int16_t)(l_20 != (l_10 >= ((l_8 != l_21) || g_3_l))) + (int16_t)g_11_l) <= l_10) - (uint32_t)4294967292U) << (int8_t)0) << (uint8_t)2);
            g_36_l = ((uint32_t)g_3_l % (uint32_t)((int8_t)0xDC - (int8_t)((uint8_t)(((int16_t)(((uint8_t)((((l_33--) > l_10) >= ((-6) == 0xBB)) , l_22) + (uint8_t)0xAE) , g_3_l) * (int16_t)g_3_l) && l_33) << (uint8_t)l_22)));
        }
    }
    return set_var(g_11_l, g_36_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
