/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1454.c
 * Seed:      3423303250
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_6 = 0x4D073FF8;
static uint32_t g_15 = 4294967295U;
static uint16_t g_40 = 0xF69A;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_6_l, uint32_t g_15_l, uint16_t g_40_l){
    g_6 = g_6_l;g_15 = g_15_l;g_40 = g_40_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_15
 * writes: g_15 g_40
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
uint32_t g_6_l = 0x4D073FF8;
uint32_t g_15_l = 4294967295U;
uint16_t g_40_l = 0xF69A;
 /* block id: 0 */
    uint32_t l_2 = 4U;
    int16_t l_3 = 0xA870;
    int32_t l_7 = (-1);
    int32_t l_36 = 0x0CBBBC25;
    int32_t l_39 = 1;
    l_3 ^= l_2;
    if (l_3)
        goto lbl_8;
lbl_8:
    l_7 = ((uint8_t)(g_6_l , g_6_l) * (uint8_t)l_2);
    if ((g_6_l != ((int8_t)(l_3 , (((uint16_t)g_6_l % (uint16_t)((((int32_t)(g_15_l = (l_2 > l_3)) % (int32_t)0x257EA0D0) >= g_6_l) , g_15_l)) || l_7)) >> (int8_t)3)))
    { /* block id: 5 */
        uint32_t l_37 = 0xF59F89F2;
        int8_t l_38 = 0x78;
        l_39 = (((uint16_t)g_6_l % (uint16_t)((uint8_t)((l_7 ^= ((uint16_t)0x83A0 << (uint16_t)0)) , ((((int32_t)((((uint32_t)((uint8_t)((uint8_t)0U / (uint8_t)((((uint16_t)((int16_t)(((int16_t)0x6E85 % (int16_t)l_36) | l_37) % (int16_t)g_15_l) % (uint16_t)l_2) >= g_6_l) | l_37)) % (uint8_t)l_37) - (uint32_t)0) ^ g_15_l) == g_6_l) - (int32_t)g_15_l) & 1) , l_3)) >> (uint8_t)g_6_l)) , l_38);
    }
    else
    { /* block id: 9 */
        g_40_l = g_6_l;
    }
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_40_l, "g_40", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
