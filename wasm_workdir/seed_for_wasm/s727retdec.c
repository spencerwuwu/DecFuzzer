/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_959.c
 * Seed:      3554917441
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0;/* VOLATILE GLOBAL g_2 */
static volatile int8_t g_4 = 0x1D;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0x137B1891;
static uint16_t g_6 = 0x836C;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_2_l, int8_t g_4_l, int32_t g_5_l, uint16_t g_6_l){
    g_2 = g_2_l;g_4 = g_4_l;g_5 = g_5_l;g_6 = g_6_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_6
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int32_t g_2_l = 0;
    int8_t g_4_l = 0x1D;
    int32_t g_5_l = 0x137B1891;
    uint16_t g_6_l = 0x836C;
 /* block id: 0 */
    int16_t l_3 = (-1);
    uint32_t l_9 = 0x4B283066;
    g_6_l++;
    l_9 = l_3;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    