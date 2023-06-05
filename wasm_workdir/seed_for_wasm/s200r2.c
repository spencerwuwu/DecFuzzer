/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1623.c
 * Seed:      1131905689
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0x8261F9C2;/* VOLATILE GLOBAL g_2 */
static uint16_t g_5 = 0U;
static int32_t g_7 = (-2);
/* --- FORWARD DECLARATIONS --- */

static int set_var(int32_t g_2_l, uint16_t g_5_l, int32_t g_7_l){
    g_2 = g_2_l;g_5 = g_5_l;g_7 = g_7_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7
 * writes: g_5 g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int32_t g_2_l = 0x8261F9C2;
uint16_t g_5_l = 0U;
int32_t g_7_l = (-2);
 /* block id: 0 */
    int8_t l_3 = 0x29;
    int32_t l_4 = 0x6DF37D45;
    l_3 ^= g_2_l;
    if (l_3)
        goto lbl_6;
    l_4 = l_3;
lbl_6:
    l_4 ^= (g_5_l = g_2_l);
    g_7_l = 0x07E4FC22;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
