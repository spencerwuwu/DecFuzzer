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
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_7 = 0x905D;/* VOLATILE GLOBAL g_7 */
static uint32_t g_11 = 1U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint16_t g_7_l, uint32_t g_11_l){
    g_7 = g_7_l;g_11 = g_11_l;
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
         int print_hash_value = 0;
         
uint16_t g_7_l = 0x905D;
uint32_t g_11_l = 1U;
 /* block id: 0 */
    int8_t l_4 = 0x45;
    uint8_t l_10 = 0U;
    g_11_l ^= ((l_4 , ((int16_t)g_7_l * (int16_t)l_4)) <= ((((uint16_t)7U - (uint16_t)l_4) | l_10) > 0x09));
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
