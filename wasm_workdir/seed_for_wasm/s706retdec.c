/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_920.c
 * Seed:      174227599
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_6 = 0xFE;
static int32_t g_10 = 0xF4F368A9;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_6_l, int32_t g_10_l){
    g_6 = g_6_l;g_10 = g_10_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_10
 * writes: g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_6_l = 0xFE;
    int32_t g_10_l = 0xF4F368A9;
 /* block id: 0 */
    int16_t l_4 = 0xA6B9;
    int32_t l_9 = 0xFB807CFA;
    g_10_l = (((uint16_t)(((l_4 = 0x1C) <= (((~g_6_l) == (0U && ((uint8_t)((g_6_l & l_9) & 0xF996F377) - (uint8_t)2))) || l_9)) || g_6_l) + (uint16_t)1) > g_6_l);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
