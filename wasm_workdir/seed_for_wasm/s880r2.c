/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_81.c
 * Seed:      3918083055
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static uint32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_8_l, uint16_t g_15_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int32_t g_2 = 0xC75B57FD;/* VOLATILE GLOBAL g_2 */
volatile int32_t g_3 = 0x4B5F5C18;/* VOLATILE GLOBAL g_3 */
volatile int32_t g_4 = 0x06D44418;/* VOLATILE GLOBAL g_4 */
int32_t g_5 = 9;
int32_t g_8 = 1;
volatile uint16_t g_15 = 0x5F99;/* VOLATILE GLOBAL g_15 */
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_4, "g_4", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_8, "g_8", 0, crc32_context, crc32_tab);
    transparent_crc(g_15, "g_15", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_15 g_4 g_3
 * writes: g_5 g_8 g_15 g_4
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0xC75B57FD;
    int32_t g_3_l = 0x4B5F5C18;
    int32_t g_4_l = 0x06D44418;
    int32_t g_5_l = 9;
    int32_t g_8_l = 1;
    uint16_t g_15_l = 0x5F99;
 /* block id: 0 */
    int32_t l_22 = 0x817D1DC6;
    for (g_5_l = 14; (g_5_l > (-24)); --g_5_l)
    { /* block id: 3 */
        int32_t l_12 = 1;
        int32_t l_14 = 0;
        for (g_8_l = (-9); (g_8_l < (-1)); g_8_l += 1)
        { /* block id: 6 */
            int8_t l_11 = 0x59;
            int32_t l_13 = 0xABC106EC;
            int32_t l_24 = 0xDD8FB8CE;
            g_15_l++;
            g_4_l = g_4_l;
            l_24 |= ((int16_t)((g_4_l & (l_13 |= (g_8_l | (((int32_t)l_22 - (int32_t)(-(int16_t)(l_12 , (-1)))) || l_22)))) == 0xEEC8) - (int16_t)l_22);
        }
        if (l_14)
            continue;
    }
    return set_var(g_2_l, g_3_l, g_4_l, g_5_l, g_8_l, g_15_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
