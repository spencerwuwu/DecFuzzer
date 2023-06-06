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

static uint32_t set_var(int8_t g_3_l, uint32_t g_4_l, uint32_t g_7_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int8_t g_3 = 0xE1;/* VOLATILE GLOBAL g_3 */
volatile uint32_t g_4 = 0x251D69F4;/* VOLATILE GLOBAL g_4 */
uint32_t g_7 = 0x82A1836C;
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
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
         
    int8_t g_3_l = 0xE1;
    uint32_t g_4_l = 0x251D69F4;
    uint32_t g_7_l = 0x82A1836C;
 /* block id: 0 */
    int32_t l_2 = 1;
    ++g_4_l;
    g_7_l = l_2;
    return set_var(g_3_l, g_4_l, g_7_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
