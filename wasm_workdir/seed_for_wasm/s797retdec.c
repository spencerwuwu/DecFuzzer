/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1208.c
 * Seed:      1767979041
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_3 = 0xE1;/* VOLATILE GLOBAL g_3 */
static volatile uint32_t g_4 = 0x251D69F4;/* VOLATILE GLOBAL g_4 */
static uint32_t g_7 = 0x82A1836C;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_3_l, uint32_t g_4_l, uint32_t g_7_l){
    g_3 = g_3_l;g_4 = g_4_l;g_7 = g_7_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_4 g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int8_t g_3_l = 0xE1;
    uint32_t g_4_l = 0x251D69F4;
    uint32_t g_7_l = 0x82A1836C;
 /* block id: 0 */
    int32_t l_2 = 1;
    ++g_4_l;
    g_7_l = l_2;
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
