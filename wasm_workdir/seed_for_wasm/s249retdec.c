/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1856.c
 * Seed:      3124151112
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_4_l, uint8_t g_8_l, int16_t g_9_l, uint32_t g_10_l, uint32_t *crc32_context, uint32_t *crc32_tab){
uint8_t g_4 = 248U;
uint8_t g_8 = 0x40;
volatile int16_t g_9 = (-1);/* VOLATILE GLOBAL g_9 */
volatile uint32_t g_10 = 0x890C5440;/* VOLATILE GLOBAL g_10 */
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_9, "g_9", 0, crc32_context, crc32_tab);
    transparent_crc(g_10, "g_10", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_10 g_9
 * writes: g_8 g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    uint8_t g_4_l = 248U;
    uint8_t g_8_l = 0x40;
    int16_t g_9_l = (-1);
    uint32_t g_10_l = 0x890C5440;
 /* block id: 0 */
    int32_t l_2 = 1;
    uint8_t l_7 = 0x5C;
    g_8_l = (l_2 >= (((!g_4_l) >= ((g_4_l != ((uint16_t)g_4_l << (uint16_t)l_2)) < l_7)) , g_4_l));
    ++g_10_l;
    return set_var(g_4_l, g_8_l, g_9_l, g_10_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
