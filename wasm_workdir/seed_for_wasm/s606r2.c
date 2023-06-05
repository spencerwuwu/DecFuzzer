/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_9.c
 * Seed:      2652614890
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const int32_t g_2 = (-1);
static int16_t g_3 = (-9);
static int32_t g_13 = 0xD0D658ED;
static uint16_t g_14 = 65534U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int16_t g_3_l, int32_t g_13_l, uint16_t g_14_l){
    g_3 = g_3_l;g_13 = g_13_l;g_14 = g_14_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3 g_13 g_14
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    const int32_t g_2_l = (-1);
    int16_t g_3_l = (-9);
    int32_t g_13_l = 0xD0D658ED;
    uint16_t g_14_l = 65534U;
 /* block id: 0 */
    const int32_t l_6 = (-7);
lbl_15:
    g_3_l = (g_2_l & (-1));
    g_14_l = ((uint8_t)((l_6 | ((uint16_t)(4294967295U || (8 && ((uint8_t)((int32_t)(((g_13_l = l_6) , 0x2C87A752) ^ l_6) - (int32_t)0x09CF13E1) - (uint8_t)0x9C))) % (uint16_t)g_3_l)) | g_2_l) % (uint8_t)7);
    if (g_3_l)
        goto lbl_15;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
