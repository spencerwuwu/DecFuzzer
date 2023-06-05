/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1220.c
 * Seed:      4154606631
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_6 = 0x8B;/* VOLATILE GLOBAL g_6 */
static uint16_t g_11 = 65533U;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_6_l, uint16_t g_11_l){
    g_6 = g_6_l;g_11 = g_11_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_11
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int8_t g_6_l = 0x8B;
uint16_t g_11_l = 65533U;
 /* block id: 0 */
    uint32_t l_12 = 7U;
    uint16_t l_13 = 0x6BC0;
    l_13 = ((uint16_t)65535U << (uint16_t)((uint8_t)(((-8) != ((g_6_l < ((((int32_t)((uint16_t)65534U - (uint16_t)g_11_l) % (int32_t)l_12) >= g_11_l) <= g_11_l)) != l_12)) != g_11_l) * (uint8_t)g_11_l));
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
