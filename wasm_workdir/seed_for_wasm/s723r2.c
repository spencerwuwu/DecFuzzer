/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_955.c
 * Seed:      1970066738
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_12 = 0x1F;/* VOLATILE GLOBAL g_12 */
static uint16_t g_13 = 1U;
static volatile uint16_t g_14 = 0x44C3;/* VOLATILE GLOBAL g_14 */
static int16_t g_15 = 0x2D62;
static volatile int8_t g_26 = 0x4E;/* VOLATILE GLOBAL g_26 */
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_12_l, uint16_t g_13_l, uint16_t g_14_l, int16_t g_15_l, int8_t g_26_l){
    g_12 = g_12_l;g_13 = g_13_l;g_14 = g_14_l;g_15 = g_15_l;g_26 = g_26_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_13 g_14 g_15 g_26
 * writes: g_15
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_12_l = 0x1F;
    uint16_t g_13_l = 1U;
    uint16_t g_14_l = 0x44C3;
    int16_t g_15_l = 0x2D62;
    int8_t g_26_l = 0x4E;
 /* block id: 0 */
    int32_t l_7 = 1;
    int32_t l_27 = 0x3BCF59F8;
    g_15_l |= ((uint8_t)((0x8701 <= ((((~0x4D07) , l_7) == (((((uint16_t)(((uint16_t)g_12_l << (uint16_t)l_7) < g_13_l) % (uint16_t)g_13_l) & 0x60CBEB96) , l_7) < 0x4D035725)) & g_13_l)) || g_14_l) - (uint8_t)g_13_l);
    l_7 = ((int16_t)l_7 + (int16_t)(((uint16_t)(((!l_7) > (l_7 <= ((~((uint8_t)(((uint8_t)5U >> (uint8_t)g_26_l) && g_26_l) + (uint8_t)g_15_l)) , 65535U))) ^ 1) >> (uint16_t)15) < g_13_l));
    l_27 = (l_7 = g_12_l);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_26_l, "g_26", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
