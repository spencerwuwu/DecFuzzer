/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_35.c
 * Seed:      494588175
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_9 = 0U;
/* --- FORWARD DECLARATIONS --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static int set_var(uint8_t g_9_l){
    g_9 = g_9_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint8_t g_9_l = 0U;
 /* block id: 0 */
    const uint16_t l_8 = 65533U;
    int32_t l_16 = (-1);
    uint8_t l_17 = 0x54;
    int32_t l_18 = 1;
    l_18 ^= ((int16_t)((uint16_t)((uint8_t)l_8 + (uint8_t)g_9_l) % (uint16_t)(g_9_l , ((int32_t)((uint16_t)(((uint16_t)(l_16 = 0x925E) * (uint16_t)l_8) < l_17) - (uint16_t)g_9_l) / (int32_t)g_9_l))) << (int16_t)10);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
