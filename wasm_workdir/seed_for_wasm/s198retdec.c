/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1621.c
 * Seed:      3307505374
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint16_t g_7_l, uint32_t g_11_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint16_t g_7 = 0x905D;/* VOLATILE GLOBAL g_7 */
uint32_t g_11 = 1U;
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_11
 * writes: g_11
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint16_t g_7_l = 0x905D;
uint32_t g_11_l = 1U;
 /* block id: 0 */
    int8_t l_4 = 0x45;
    uint8_t l_10 = 0U;
    g_11_l ^= ((l_4 , ((int16_t)g_7_l * (int16_t)l_4)) <= ((((uint16_t)7U - (uint16_t)l_4) | l_10) > 0x09));
    return set_var(g_7_l, g_11_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
