/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1037.c
 * Seed:      2249776730
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_2_l, int32_t g_3_l, uint16_t g_20_l, uint32_t g_25_l, uint32_t g_52_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_2 = (-1);/* VOLATILE GLOBAL g_2 */
int32_t g_3 = (-9);
uint16_t g_20 = 65530U;
uint32_t g_25 = 0xEC7E4343;
uint32_t g_52 = 4294967295U;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_20, "g_20", 0, crc32_context, crc32_tab);
    transparent_crc(g_25, "g_25", 0, crc32_context, crc32_tab);
    transparent_crc(g_52, "g_52", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_20 g_25 g_52
 * writes: g_3 g_20 g_2 g_25
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = (-1);
    int32_t g_3_l = (-9);
    uint16_t g_20_l = 65530U;
    uint32_t g_25_l = 0xEC7E4343;
    uint32_t g_52_l = 4294967295U;
 /* block id: 0 */
    int16_t l_11 = 0xD952;
    int8_t l_18 = 0x5E;
    int32_t l_19 = 0;
    int32_t l_36 = 0x38770CE4;
    for (g_3_l = (-7); (g_3_l > (-24)); g_3_l--)
    { /* block id: 3 */
        int32_t l_8 = (-8);
        l_19 = (((int16_t)l_8 / (int16_t)((uint8_t)l_11 + (uint8_t)g_2_l)) | ((uint16_t)((uint8_t)((((int32_t)g_3_l % (int32_t)l_18) && g_3_l) > g_3_l) >> (uint8_t)5) >> (uint16_t)4));
        g_2_l = (g_20_l ^= l_8);
    }
    for (l_19 = 0; (l_19 == 2); l_19++)
    { /* block id: 10 */
        const int16_t l_30 = 7;
        int32_t l_53 = (-6);
        g_2_l = 0;
        if ((l_18 != ((int8_t)(g_25_l = g_20_l) * (int8_t)g_2_l)))
        { /* block id: 13 */
            int8_t l_31 = 1;
            l_31 ^= (g_3_l & ((int16_t)((0x88 && ((uint16_t)l_11 * (uint16_t)(l_30 , 0x8818))) <= l_30) >> (int16_t)l_30));
            return set_var(g_2_l, g_3_l, g_20_l, g_25_l, g_52_l, &crc32_context, crc32_tab);
        }
        else
        { /* block id: 16 */
            int8_t l_43 = (-8);
            g_3_l = ((((((l_18 , (((uint32_t)(((((int32_t)((((l_36 &= g_25_l) >= ((uint8_t)((int16_t)(4294967295U == ((int16_t)0x4087 << (int16_t)3)) << (int16_t)2) + (uint8_t)2)) != l_30) == 0x172C) + (int32_t)l_18) , g_25_l) , (-5)) >= g_20_l) + (uint32_t)g_3_l) && 0)) >= l_30) == g_3_l) , g_3_l) > g_25_l) >= l_43);
            l_53 |= (g_3_l ^= (((int16_t)((uint8_t)(l_36 != 5U) / (uint8_t)((!0xF98A97D6) || (((~0x08) && g_52_l) < (-10)))) >> (int16_t)g_52_l) == l_36));
        }
    }
    return set_var(g_2_l, g_3_l, g_20_l, g_25_l, g_52_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
