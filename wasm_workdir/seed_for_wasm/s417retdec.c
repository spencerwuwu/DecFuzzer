/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_488.c
 * Seed:      444172816
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_8 = 0x76EC7516;
static volatile int32_t g_10 = (-10);/* VOLATILE GLOBAL g_10 */
static int32_t g_14 = 0x7C7AB89B;
static uint32_t g_16 = 0x42FF18C9;
static int8_t g_21 = 0xCE;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_8_l, int32_t g_10_l, int32_t g_14_l, uint32_t g_16_l, int8_t g_21_l){
    g_8 = g_8_l;g_10 = g_10_l;g_14 = g_14_l;g_16 = g_16_l;g_21 = g_21_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_8 g_16 g_14
 * writes: g_8 g_14 g_16 g_21
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_8_l = 0x76EC7516;
    int32_t g_10_l = (-10);
    int32_t g_14_l = 0x7C7AB89B;
    uint32_t g_16_l = 0x42FF18C9;
    int8_t g_21_l = 0xCE;
 /* block id: 0 */
    int32_t l_4 = 0xF54C3C69;
    int32_t l_11 = 6;
    if (((-9) < ((uint16_t)l_4 << (uint16_t)14)))
    { /* block id: 1 */
        int8_t l_7 = 0xC5;
        int32_t l_15 = (-1);
        for (l_4 = (-3); (l_4 <= 20); l_4 += 6)
        { /* block id: 4 */
            uint32_t l_9 = 0x6C902DAF;
            l_11 |= ((((g_8_l = l_7) || l_9) || l_7) >= (g_10_l != 0));
            if (g_8_l)
                break;
            g_16_l = ((int8_t)(g_14_l = (0xA7B7E80D ^ (g_10_l && l_7))) % (int8_t)(((l_15 = g_8_l) , g_8_l) | g_8_l));
            if (l_7)
                continue;
        }
        g_21_l = ((int8_t)(0x7D02 == (0xF8 >= (((((((uint8_t)(((g_10_l <= (l_7 || 0)) >= g_16_l) | l_7) >> (uint8_t)g_16_l) , g_14_l) ^ 0x7C) || 8) == 248U) && 0x5F))) + (int8_t)g_8_l);
    }
    else
    { /* block id: 14 */
        uint32_t l_22 = 0x0B137D37;
    }
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_16_l, "g_16", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_21_l, "g_21", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
