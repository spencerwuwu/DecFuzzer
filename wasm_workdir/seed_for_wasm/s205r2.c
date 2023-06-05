/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1629.c
 * Seed:      406020743
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_11 = 0x00;
static uint8_t g_12 = 255U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_11_l, uint8_t g_12_l){
    g_11 = g_11_l;g_12 = g_12_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_12
 * writes: g_12
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
uint8_t g_11_l = 0x00;
uint8_t g_12_l = 255U;
 /* block id: 0 */
    uint16_t l_6 = 0x7D8E;
    g_12_l = ((int16_t)((l_6 && ((((uint32_t)4294967287U + (uint32_t)((uint8_t)l_6 / (uint8_t)0x1B)) , 4294967295U) > g_11_l)) & l_6) << (int16_t)12);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
