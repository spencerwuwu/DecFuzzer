/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_764.c
 * Seed:      141084764
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = (-8);
static uint32_t g_6 = 0x14768C0A;
static int8_t g_22 = (-1);
static volatile uint16_t g_32 = 65535U;/* VOLATILE GLOBAL g_32 */
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_2_l, uint32_t g_6_l, int8_t g_22_l, uint16_t g_32_l){
    g_2 = g_2_l;g_6 = g_6_l;g_22 = g_22_l;g_32 = g_32_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_22 g_32
 * writes: g_2 g_6 g_22 g_32
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = (-8);
    uint32_t g_6_l = 0x14768C0A;
    int8_t g_22_l = (-1);
    uint16_t g_32_l = 65535U;
 /* block id: 0 */
    int16_t l_14 = 0x91B6;
    int32_t l_15 = 0x4C975158;
    int32_t l_27 = 1;
lbl_30:
    for (g_2_l = 0; (g_2_l >= 27); ++g_2_l)
    { /* block id: 3 */
        int32_t l_5 = 0xDB22124F;
        g_6_l &= l_5;
        l_14 |= ((int8_t)0x0C + (int8_t)(((int32_t)(-7) - (int32_t)l_5) || (((-(int8_t)0x5B) ^ g_2_l) != 0x9876)));
        l_15 = ((g_6_l != (l_5 || l_14)) ^ 0x7647F1A9);
        l_15 &= ((uint32_t)(((((int16_t)3 + (int16_t)(l_5 >= 9U)) >= (((int8_t)l_5 - (int8_t)0) <= g_2_l)) , 7U) > 0xB058EFA9) - (uint32_t)0x51EF9953);
    }
lbl_31:
    l_27 |= ((-1) || ((((((g_22_l = g_6_l) != (((int8_t)(((int8_t)l_14 / (int8_t)(0xC3 & l_14)) < g_2_l) * (int8_t)g_6_l) != g_2_l)) == l_15) <= l_15) <= l_15) == 0x9116));
    for (g_22_l = 0; (g_22_l != (-20)); g_22_l -= 4)
    { /* block id: 13 */
        g_2_l &= (-1);
        if (g_2_l)
            goto lbl_30;
        if (g_6_l)
            continue;
        if (l_14)
            goto lbl_31;
    }
    ++g_32_l;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_22_l, "g_22", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_32_l, "g_32", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
