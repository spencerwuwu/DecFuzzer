/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_282.c
 * Seed:      2227849094
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0;
static int32_t g_14 = (-10);
static uint8_t g_18 = 255U;
/* --- FORWARD DECLARATIONS --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static int set_var(int32_t g_2_l, int32_t g_14_l, uint8_t g_18_l){
    g_2 = g_2_l;g_14 = g_14_l;g_18 = g_18_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_14 g_18
 * writes: g_2 g_14 g_18
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = 0;
    int32_t g_14_l = (-10);
    uint8_t g_18_l = 255U;
 /* block id: 0 */
    int32_t l_13 = 0x4B064BAE;
    int32_t l_16 = 1;
    int32_t l_17 = 7;
    for (g_2_l = 0; (g_2_l >= (-9)); --g_2_l)
    { /* block id: 3 */
        int32_t l_5 = 0x14D2EDC7;
        if ((g_2_l < l_5))
        { /* block id: 4 */
            l_13 = (((int32_t)((int8_t)((((uint8_t)((6U < ((-(uint8_t)((0xB64B5C6F < l_5) ^ 0x505B0BB8)) >= g_2_l)) || l_5) + (uint8_t)(-4)) , g_2_l) && g_2_l) * (int8_t)0x1E) - (int32_t)g_2_l) || 0x53F0);
            g_14_l |= g_2_l;
        }
        else
        { /* block id: 7 */
            const int16_t l_15 = 0;
            if (l_15)
                break;
        }
    }
    g_18_l--;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_18_l, "g_18", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
