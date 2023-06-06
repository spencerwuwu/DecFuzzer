/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_76.c
 * Seed:      1667554869
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static void packed_printf(int d)
{
    printf("%d\n", d);
}
static uint32_t set_var(int32_t g_2_l, uint32_t g_5_l, uint16_t g_18_l, uint16_t g_23_l, int32_t g_27_l, uint32_t *crc32_context, uint32_t *crc32_tab){
int32_t g_2 = 0xC2E0CF57;
uint32_t g_5 = 2U;
volatile uint16_t g_18 = 65527U;/* VOLATILE GLOBAL g_18 */
uint16_t g_23 = 65531U;
int32_t g_27 = (-1);
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_5, "g_5", 0, crc32_context, crc32_tab);
    transparent_crc(g_18, "g_18", 0, crc32_context, crc32_tab);
    transparent_crc(g_23, "g_23", 0, crc32_context, crc32_tab);
    transparent_crc(g_27, "g_27", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_18 g_27 g_23
 * writes: g_2 g_5 g_18 g_23 g_27
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
    int32_t g_2_l = 0xC2E0CF57;
    uint32_t g_5_l = 2U;
    uint16_t g_18_l = 65527U;
    uint16_t g_23_l = 65531U;
    int32_t g_27_l = (-1);
 /* block id: 0 */
    int16_t l_10 = 0x5AF8;
    int32_t l_17 = 0x72BA29F5;
    int16_t l_31 = 0x2324;
    int32_t l_32 = 2;
    int8_t l_59 = 0x3D;
    for (g_2_l = (-22); (g_2_l < (-8)); g_2_l++)
    { /* block id: 3 */
        int32_t l_13 = 6;
        uint32_t l_30 = 0x1FE511BD;
        g_5_l = 7;
        l_10 = ((int8_t)(0x18 <= ((int8_t)0x35 >> (int8_t)0)) + (int8_t)(g_5_l , 0x03));
        if ((((int32_t)g_2_l % (int32_t)0x92BD42CA) ^ g_5_l))
        { /* block id: 6 */
            uint32_t l_14 = 0U;
            l_14++;
            g_18_l--;
            for (l_13 = 0; (l_13 <= (-20)); l_13--)
            { /* block id: 11 */
                uint32_t l_24 = 5U;
                g_23_l = l_14;
                ++l_24;
            }
        }
        else
        { /* block id: 15 */
            g_27_l |= g_5_l;
        }
        l_32 ^= (65535U >= ((((int16_t)(((l_13 != ((l_13 <= ((g_23_l && 4) == l_17)) & 0x9583)) || g_23_l) && l_30) >> (int16_t)g_23_l) <= l_31) ^ g_2_l));
    }
    for (g_23_l = 0; (g_23_l < 13); g_23_l += 7)
    { /* block id: 22 */
        int16_t l_37 = 2;
        int32_t l_47 = 8;
        int32_t l_60 = 0xC8977B40;
        for (l_17 = 0; (l_17 == (-9)); l_17--)
        { /* block id: 25 */
            if (l_37)
                break;
        }
        l_47 = ((~((int32_t)(((uint8_t)l_31 / (uint8_t)(g_23_l ^ (0x5C53 <= (((uint16_t)(((int8_t)0xAD >> (int8_t)5) | 0x38E2) + (uint16_t)0x4502) < g_23_l)))) | g_18_l) - (int32_t)0)) || 0);
        l_60 = ((int8_t)(((+((uint16_t)((uint16_t)l_37 % (uint16_t)g_5_l) * (uint16_t)((((uint16_t)((((((uint8_t)(0x37 ^ (((l_47 = (9U ^ 0x5C8F381C)) != g_2_l) || g_5_l)) << (uint8_t)7) < l_32) | g_2_l) || l_10) || l_37) + (uint16_t)g_2_l) , 7U) , l_59))) | l_17) && g_23_l) / (int8_t)g_18_l);
    }
    return set_var(g_2_l, g_5_l, g_18_l, g_23_l, g_27_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
