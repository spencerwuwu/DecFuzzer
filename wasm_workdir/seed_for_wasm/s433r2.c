/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_524.c
 * Seed:      3996517679
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_5 = 0xBF2B2994;/* VOLATILE GLOBAL g_5 */
static int32_t g_8 = 0;
static volatile int16_t g_10 = 0x807C;/* VOLATILE GLOBAL g_10 */
static uint32_t g_26 = 0x6FEC1B16;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_5_l, int32_t g_8_l, int16_t g_10_l, uint32_t g_26_l){
    g_5 = g_5_l;g_8 = g_8_l;g_10 = g_10_l;g_26 = g_26_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8
 * writes: g_8 g_26
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_5_l = 0xBF2B2994;
    int32_t g_8_l = 0;
    int16_t g_10_l = 0x807C;
    uint32_t g_26_l = 0x6FEC1B16;
 /* block id: 0 */
    uint16_t l_2 = 1U;
    uint8_t l_12 = 0x06;
    if ((l_2 || (l_2 != (-2))))
    { /* block id: 1 */
        int32_t l_6 = 0x5FEF9D78;
        int32_t l_11 = 0xF5F996F3;
        for (l_2 = 21; (l_2 <= 40); ++l_2)
        { /* block id: 4 */
            int32_t l_7 = (-8);
            if (g_5_l)
                break;
            l_7 = l_6;
            if (l_2)
                goto lbl_9;
        }
lbl_9:
        g_8_l = l_2;
        ++l_12;
    }
    else
    { /* block id: 12 */
        int16_t l_25 = (-8);
        g_26_l = (l_12 ^ ((uint8_t)g_5_l + (uint8_t)(((int32_t)(((int8_t)(g_8_l , ((((uint16_t)((uint8_t)(l_25 & g_8_l) >> (uint8_t)7) - (uint16_t)l_25) , 65535U) ^ g_8_l)) + (int8_t)l_2) ^ g_8_l) + (int32_t)4294967295U) < g_8_l)));
        for (l_25 = 0; (l_25 != 27); l_25 += 1)
        { /* block id: 16 */
            uint32_t l_29 = 4294967287U;
        }
    }
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_26_l, "g_26", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
