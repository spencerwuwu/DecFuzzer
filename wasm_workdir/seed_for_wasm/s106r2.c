/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1414.c
 * Seed:      1540708650
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_5 = 4294967295U;/* VOLATILE GLOBAL g_5 */
static uint32_t g_6 = 0x3371247A;
static uint8_t g_8 = 0x50;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_5_l, uint32_t g_6_l, uint8_t g_8_l){
    g_5 = g_5_l;g_6 = g_6_l;g_8 = g_8_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6 g_8
 * writes: g_8
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
uint32_t g_5_l = 4294967295U;
uint32_t g_6_l = 0x3371247A;
uint8_t g_8_l = 0x50;
 /* block id: 0 */
    uint8_t l_4 = 0U;
    int16_t l_7 = 0x40ED;
    g_8_l = (((((((((((int8_t)((l_4 | g_5_l) & g_6_l) % (int8_t)l_7) && l_7) && 0x1509) == g_6_l) | l_7) , g_5_l) , l_4) | g_6_l) ^ 3) && l_4);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
