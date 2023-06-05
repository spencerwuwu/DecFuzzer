/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1516.c
 * Seed:      974815766
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_8 = 1;/* VOLATILE GLOBAL g_8 */
static int32_t g_18 = (-1);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int16_t g_8_l, int32_t g_18_l){
    g_8 = g_8_l;g_18 = g_18_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_18
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int16_t g_8_l = 1;
int32_t g_18_l = (-1);
 /* block id: 0 */
    uint8_t l_9 = 0x44;
    int32_t l_17 = 0x2D83D783;
    const uint8_t l_19 = 0x4E;
    int32_t l_20 = 7;
    l_20 = ((int16_t)(((int8_t)((int32_t)g_8_l - (int32_t)(((l_9 ^ l_9) > ((uint8_t)((uint8_t)((uint8_t)(l_17 = (!l_9)) + (uint8_t)g_18_l) % (uint8_t)g_18_l) / (uint8_t)l_19)) || 65535U)) >> (int8_t)g_18_l) | g_18_l) >> (int16_t)l_19);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_18_l, "g_18", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
