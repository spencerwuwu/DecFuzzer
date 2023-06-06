/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1254.c
 * Seed:      1666155024
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint16_t g_3_l, int32_t g_8_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint16_t g_3 = 65535U;
int32_t g_8 = 0xF29ACD40;
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_8
 * writes: g_3 g_8
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint16_t g_3_l = 65535U;
int32_t g_8_l = 0xF29ACD40;
 /* block id: 0 */
    int32_t l_2 = 0x90DA1152;
    int32_t l_9 = 0x218E9934;
    g_3_l++;
    g_8_l &= (((((((0xCC < ((uint8_t)g_3_l / (uint8_t)l_2)) >= (l_2 == l_2)) , g_3_l) > l_2) || 0x02) != 0xD0A7084B) ^ 65535U);
    l_9 |= g_3_l;
    return set_var(g_3_l, g_8_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
