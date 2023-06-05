/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_553.c
 * Seed:      1410089023
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_8 = 0xC1574781;/* VOLATILE GLOBAL g_8 */
static int8_t g_13 = 0xFF;
static int32_t g_14 = (-4);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_8_l, int8_t g_13_l, int32_t g_14_l){
    g_8 = g_8_l;g_13 = g_13_l;g_14 = g_14_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_13 g_14
 * writes: g_14
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_8_l = 0xC1574781;
    int8_t g_13_l = 0xFF;
    int32_t g_14_l = (-4);
 /* block id: 0 */
    uint16_t l_2 = 65535U;
    uint16_t l_15 = 0x60ED;
    l_15 = ((l_2 <= ((int16_t)(-(int32_t)((int32_t)(g_8_l | (!(!(g_14_l = ((l_2 >= (((int8_t)(248U == g_13_l) >> (int8_t)g_13_l) & 1)) & 0x1023DCDF))))) / (int32_t)l_2)) + (int16_t)1)) && l_2);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_13_l, "g_13", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_14_l, "g_14", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
