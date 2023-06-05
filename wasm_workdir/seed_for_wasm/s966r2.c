/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_815.c
 * Seed:      314615690
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0xB110C93B;/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = (-1);
/* --- FORWARD DECLARATIONS --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static int set_var(int32_t g_2_l, int32_t g_3_l){
    g_2 = g_2_l;g_3 = g_3_l;
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
         int print_hash_value = 0;
         
    int32_t g_2_l = 0xB110C93B;
    int32_t g_3_l = (-1);
 /* block id: 0 */
    uint32_t l_12 = 0x672CA3C0;
    int32_t l_15 = 0x9FCFBCE0;
    uint16_t l_29 = 65535U;
    int32_t l_30 = 0;
    uint8_t l_31 = 246U;
    for (g_3_l = 0; (g_3_l == 0); g_3_l += 2)
    { /* block id: 3 */
        int32_t l_13 = (-1);
        int32_t l_14 = (-1);
        if ((5U >= (l_14 = (1U ^ ((int8_t)g_2_l + (int8_t)((int16_t)((uint16_t)(l_13 &= l_12) << (uint16_t)1) * (int16_t)0))))))
        { /* block id: 6 */
            if (g_2_l)
                break;
        }
        else
        { /* block id: 8 */
            g_2_l |= 0x658EDFE0;
        }
        if (l_14)
            break;
    }
    l_15 &= (0x13E1 > l_12);
    g_3_l = ((uint16_t)(((g_3_l <= ((g_3_l , (!((int8_t)(((int8_t)((l_30 |= (l_15 < (((uint16_t)((uint16_t)g_2_l / (uint16_t)0x8862) + (uint16_t)l_29) != g_3_l))) & 0U) >> (int8_t)7) >= g_3_l) << (int8_t)2))) <= 255U)) != 0x3EFC) ^ 0x5654) >> (uint16_t)15);
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
