/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1483.c
 * Seed:      1513530216
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_4 = 8;
static uint32_t g_15 = 0x73EE7637;
static uint32_t g_25 = 0x336AE3D4;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int8_t g_4_l, uint32_t g_15_l, uint32_t g_25_l){
    g_4 = g_4_l;g_15 = g_15_l;g_25 = g_25_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_15 g_25
 * writes: g_15 g_25
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
int8_t g_4_l = 8;
uint32_t g_15_l = 0x73EE7637;
uint32_t g_25_l = 0x336AE3D4;
 /* block id: 0 */
    uint32_t l_13 = 0x1D26EC17;
    int32_t l_14 = 0xA55F07C7;
    g_15_l = (l_14 = (((int16_t)g_4_l + (int16_t)(((uint32_t)((uint8_t)((((uint16_t)(g_4_l ^ g_4_l) >> (uint16_t)10) , (((int16_t)(-9) + (int16_t)l_13) != l_13)) , l_13) - (uint8_t)1U) % (uint32_t)4294967290U) <= l_13)) , 0xC5440874));
    g_25_l ^= (g_15_l || ((int16_t)(l_14 = (((int16_t)((int16_t)((g_15_l == ((-(uint32_t)((int16_t)(g_15_l < (g_15_l | l_14)) >> (int16_t)10)) , g_15_l)) | 6U) << (int16_t)g_15_l) * (int16_t)65529U) , l_14)) / (int16_t)l_13));
    transparent_crc(g_4_l, "g_4", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_15_l, "g_15", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_25_l, "g_25", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
