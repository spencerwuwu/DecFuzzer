/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1230.c
 * Seed:      3448197875
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_4 = 0x6B;/* VOLATILE GLOBAL g_4 */
static uint32_t g_9 = 9U;
static uint32_t g_11 = 0x2C5EB200;
static int8_t g_12 = (-1);
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint8_t g_4_l, uint32_t g_9_l, uint32_t g_11_l, int8_t g_12_l){
    g_4 = g_4_l;g_9 = g_9_l;g_11 = g_11_l;g_12 = g_12_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_9
 * writes: g_11 g_12
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_4_l = 0x6B;
    uint32_t g_9_l = 9U;
    uint32_t g_11_l = 0x2C5EB200;
    int8_t g_12_l = (-1);
 /* block id: 0 */
    uint16_t l_10 = 0U;
    g_12_l = ((int16_t)(g_11_l = (g_4_l | (((int8_t)(g_9_l > (l_10 == l_10)) * (int8_t)0xF0) > 0))) << (int16_t)g_9_l);
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_11_l, "g_11", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_12_l, "g_12", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
