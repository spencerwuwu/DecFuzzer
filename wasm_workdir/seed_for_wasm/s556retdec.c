/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_899.c
 * Seed:      444601943
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint32_t g_10_l, int32_t g_11_l, uint16_t g_12_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint32_t g_10 = 0xCBCEF054;/* VOLATILE GLOBAL g_10 */
int32_t g_11 = 8;
uint16_t g_12 = 0x3E38;
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    transparent_crc(g_11, "g_11", 0, crc32_context, crc32_tab);
    transparent_crc(g_12, "g_12", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_12 g_11
 * writes: g_12
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint32_t g_10_l = 0xCBCEF054;
    int32_t g_11_l = 8;
    uint16_t g_12_l = 0x3E38;
 /* block id: 0 */
    const uint32_t l_8 = 0U;
    int32_t l_17 = 0x456E348C;
    uint16_t l_18 = 1U;
    int32_t l_19 = 0xAE28DE63;
    int32_t l_20 = 0;
    int32_t l_21 = 1;
    l_21 = ((int16_t)((uint16_t)((uint8_t)(l_8 || (((l_20 = ((l_19 = (~((((g_10_l <= (--g_12_l)) >= l_8) , (((l_17 &= ((int16_t)0 >> (int16_t)8)) , 0x37) && l_18)) && g_12_l))) > g_11_l)) , 0x7847) & 65535U)) % (uint8_t)9) >> (uint16_t)g_11_l) / (int16_t)l_8);
    return set_var(g_10_l, g_11_l, g_12_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
