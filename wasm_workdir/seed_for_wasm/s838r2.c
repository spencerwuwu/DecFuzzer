/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1322.c
 * Seed:      1021572309
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int32_t g_5_l, int16_t g_8_l, uint32_t g_10_l, int32_t g_11_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_5 = 0x86E52D8C;/* VOLATILE GLOBAL g_5 */
int16_t g_8 = 0xD416;
uint32_t g_10 = 0x3A92BD42;
int32_t g_11 = 0xB1647C2C;
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_10
 * writes: g_10 g_11 g_8
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_5_l = 0x86E52D8C;
    int16_t g_8_l = 0xD416;
    uint32_t g_10_l = 0x3A92BD42;
    int32_t g_11_l = 0xB1647C2C;
 /* block id: 0 */
    uint8_t l_12 = 0x9F;
    int32_t l_15 = 0xA1405524;
    int32_t l_16 = (-1);
    l_12 = ((g_11_l = ((((!((uint16_t)g_5_l << (uint16_t)4)) ^ (((int32_t)g_8_l % (int32_t)g_8_l) & (g_10_l = ((!g_8_l) <= 0xD8B9DBEA)))) > 0x7B79) < 0x71)) , 4);
    l_16 = ((l_15 = ((g_8_l ^= l_12) , (l_12 >= ((l_12 , ((int16_t)g_5_l * (int16_t)g_10_l)) != l_12)))) > 0xB16A);
    return set_var(g_5_l, g_8_l, g_10_l, g_11_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
