/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_105.c
 * Seed:      3568758478
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static uint32_t set_var(int32_t g_2_l, uint32_t g_6_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = (-8);
uint32_t g_6 = 1U;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_6, "g_6", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_6
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = (-8);
    uint32_t g_6_l = 1U;
 /* block id: 0 */
    int32_t l_7 = 1;
    for (g_2_l = 15; (g_2_l < (-29)); g_2_l--)
    { /* block id: 3 */
        int16_t l_5 = 0x6318;
        g_6_l = l_5;
        if (l_5)
            continue;
    }
    return set_var(g_2_l, g_6_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
