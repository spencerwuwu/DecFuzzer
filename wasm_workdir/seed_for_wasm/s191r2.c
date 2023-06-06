/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1613.c
 * Seed:      3225506949
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_2_l, int32_t g_5_l, int16_t g_10_l, int16_t g_11_l, uint8_t g_12_l, uint16_t g_15_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint8_t g_2 = 253U;/* VOLATILE GLOBAL g_2 */
int32_t g_5 = 0xDBA33992;
int16_t g_10 = (-1);
int16_t g_11 = 0x62DA;
volatile uint8_t g_12 = 253U;/* VOLATILE GLOBAL g_12 */
uint16_t g_15 = 0x26F3;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    transparent_crc(g_12, "g_12", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_12 g_15 g_11
 * writes: g_10 g_12 g_15
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint8_t g_2_l = 253U;
int32_t g_5_l = 0xDBA33992;
int16_t g_10_l = (-1);
int16_t g_11_l = 0x62DA;
uint8_t g_12_l = 253U;
uint16_t g_15_l = 0x26F3;
 /* block id: 0 */
    uint8_t l_8 = 0xBD;
    int32_t l_9 = 0xE53E58BF;
    g_10_l = (g_2_l , ((uint8_t)g_2_l * (uint8_t)(g_5_l >= (l_9 ^= (((uint8_t)0x27 >> (uint8_t)3) || l_8)))));
    ++g_12_l;
    ++g_15_l;
    l_9 = (g_11_l || g_12_l);
    return set_var(g_2_l, g_5_l, g_10_l, g_11_l, g_12_l, g_15_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
