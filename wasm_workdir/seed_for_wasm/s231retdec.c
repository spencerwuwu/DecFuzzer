/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1763.c
 * Seed:      2353413438
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_7 = 0x8D;/* VOLATILE GLOBAL g_7 */
static volatile uint8_t g_8 = 0x85;/* VOLATILE GLOBAL g_8 */
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_7_l, uint8_t g_8_l){
    g_7 = g_7_l;g_8 = g_8_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_7
 * writes: g_8
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int8_t g_7_l = 0x8D;
    uint8_t g_8_l = 0x85;
 /* block id: 0 */
    int32_t l_2 = (-1);
    int32_t l_3 = 0xCD453606;
    int32_t l_4 = 0x473EB905;
    int32_t l_5 = (-1);
    int32_t l_6 = 1;
    --g_8_l;
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
