/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1133.c
 * Seed:      3467557632
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_9 = 1;/* VOLATILE GLOBAL g_9 */
static int32_t g_12 = 5;
static int8_t g_14 = (-10);
static int8_t g_15 = (-6);
static uint32_t g_17 = 0U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_9_l, int32_t g_12_l, int8_t g_14_l, int8_t g_15_l, uint32_t g_17_l){
    g_9 = g_9_l;g_12 = g_12_l;g_14 = g_14_l;g_15 = g_15_l;g_17 = g_17_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_12 g_14 g_17
 * writes: g_14 g_9 g_17
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_9_l = 1;
    int32_t g_12_l = 5;
    int8_t g_14_l = (-10);
    int8_t g_15_l = (-6);
    uint32_t g_17_l = 0U;
 /* block id: 0 */
    const int32_t l_8 = 0x50707DFE;
    uint16_t l_13 = 65531U;
    int32_t l_16 = 1;
    g_9_l = (((int16_t)((uint16_t)(((((((uint32_t)0x921DED68 + (uint32_t)l_8) | g_9_l) & (g_14_l ^= ((uint32_t)(g_12_l != l_13) / (uint32_t)g_12_l))) != l_8) && l_13) | g_12_l) << (uint16_t)6) * (int16_t)1) , g_14_l);
    --g_17_l;
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_17_l, "g_17", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
