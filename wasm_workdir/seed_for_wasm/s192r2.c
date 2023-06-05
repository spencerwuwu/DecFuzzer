/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1614.c
 * Seed:      2931012823
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2 = 0x05C8;
static int16_t g_5 = 3;
static int16_t g_6 = 0x0693;
static volatile int8_t g_8 = 0x23;/* VOLATILE GLOBAL g_8 */
static uint32_t g_9 = 0x815CBCEF;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int16_t g_2_l, int16_t g_5_l, int16_t g_6_l, int8_t g_8_l, uint32_t g_9_l){
    g_2 = g_2_l;g_5 = g_5_l;g_6 = g_6_l;g_8 = g_8_l;g_9 = g_9_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9 g_6
 * writes: g_2 g_9
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int16_t g_2_l = 0x05C8;
int16_t g_5_l = 3;
int16_t g_6_l = 0x0693;
int8_t g_8_l = 0x23;
uint32_t g_9_l = 0x815CBCEF;
 /* block id: 0 */
    int32_t l_3 = 5;
    int32_t l_4 = 0x60B0CEAF;
    int32_t l_7 = (-7);
    g_2_l |= 0xB9F9B319;
    l_4 = l_3;
    g_9_l++;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_5_l, "g_5", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_8_l, "g_8", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_9_l, "g_9", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
