/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1110.c
 * Seed:      2386216822
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_8 = 0x04800FA7;
static volatile uint32_t g_15 = 4294967295U;/* VOLATILE GLOBAL g_15 */
static const int8_t g_16 = 0xDB;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_8_l, uint32_t g_15_l){
    g_8 = g_8_l;g_15 = g_15_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_15 g_16
 * writes: g_8
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint32_t g_8_l = 0x04800FA7;
    uint32_t g_15_l = 4294967295U;
    const int8_t g_16_l = 0xDB;
 /* block id: 0 */
    int16_t l_6 = 0xA75C;
    int32_t l_7 = 0xA41449C9;
    int32_t l_17 = 0x478C38EC;
    l_7 = ((uint16_t)(l_17 &= ((int16_t)(l_6 & l_6) + (int16_t)(((((g_8_l++) , (((int16_t)(l_7 & (((uint16_t)0xBB6B * (uint16_t)0xEC3D) && g_8_l)) % (int16_t)8) & g_8_l)) & g_15_l) , 0xD2D1) >= g_16_l))) + (uint16_t)(-10));
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_16_l, "g_16", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    