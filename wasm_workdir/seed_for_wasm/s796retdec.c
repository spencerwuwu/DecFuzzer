/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1207.c
 * Seed:      668518259
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_4 = 1U;
static int16_t g_7 = (-4);
static int16_t g_9 = 0x0946;
static uint32_t g_12 = 0x5AA96141;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_4_l, int16_t g_7_l, int16_t g_9_l, uint32_t g_12_l){
    g_4 = g_4_l;g_7 = g_7_l;g_9 = g_9_l;g_12 = g_12_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_9
 * writes: g_4 g_12
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_4_l = 1U;
    int16_t g_7_l = (-4);
    int16_t g_9_l = 0x0946;
    uint32_t g_12_l = 0x5AA96141;
 /* block id: 0 */
    int16_t l_2 = 0x0657;
    uint8_t l_3 = 254U;
    int32_t l_5 = (-1);
    int32_t l_6 = 0x25CBD945;
    int32_t l_8 = 0x9CF1813F;
    int32_t l_10 = 0x292C5EB2;
    int32_t l_11 = (-2);
    g_4_l = (l_3 = l_2);
    g_12_l++;
    l_6 |= l_11;
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    