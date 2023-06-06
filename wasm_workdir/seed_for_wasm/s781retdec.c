/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1144.c
 * Seed:      2595420365
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int8_t g_4_l, uint32_t g_6_l, int32_t g_7_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int8_t g_4 = 0x0F;/* VOLATILE GLOBAL g_4 */
uint32_t g_6 = 0x4210E164;
int32_t g_7 = (-6);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_6 g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int8_t g_4_l = 0x0F;
    uint32_t g_6_l = 0x4210E164;
    int32_t g_7_l = (-6);
 /* block id: 0 */
    int32_t l_5 = 1;
    int32_t l_11 = (-4);
    g_7_l = ((int8_t)((0x0B ^ g_4_l) ^ (l_5 && (l_5 ^= (g_6_l = 0U)))) * (int8_t)1);
    for (g_7_l = 0; (g_7_l <= 18); g_7_l += 9)
    { /* block id: 6 */
        uint32_t l_10 = 0x64896E6A;
        l_10 = 4;
        if (g_7_l)
            continue;
        return set_var(g_4_l, g_6_l, g_7_l, &crc32_context, crc32_tab);
    }
    return set_var(g_4_l, g_6_l, g_7_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
