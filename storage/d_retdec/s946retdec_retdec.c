//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __x86_get_pc_thunk_bx(int32_t a1);
int32_t __x86_get_pc_thunk_dx(int32_t a1);
int32_t _fini(void);
int32_t _init(void);
int32_t _start(int32_t a1);
void crc32_8bytes(int32_t val);
void crc32_byte(char b);
void crc32_gentab(void);
int32_t func_1(void);
int32_t function_1040(char * s1, char * s2);
int32_t function_1050(int32_t main2, int32_t argc, char ** ubp_av, void (*init)(), void (*fini)(), void (*rtld_fini)());
int32_t function_1060(char * format, ...);
int32_t function_109c(int32_t a1);
int32_t function_10b0(void);
int32_t function_10f0(void);
int32_t function_1140(void);
int32_t function_1190(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int16_t g_3_l, int32_t g_16_l, int32_t g_39_l, int16_t g_40_l, int32_t g_45_l, int32_t g_60_l, int32_t g_64_l, char g_75_l, int16_t g_80_l, char g_96_l, int16_t g_108_l, int32_t g_110_l, char g_120_l, int32_t g_145_l, int32_t g_148_l, int32_t g_150_l, int16_t g_151_l, char g_152_l, int32_t g_239_l, int16_t g_240_l, int16_t g_242_l, int16_t g_246_l, char g_249_l, int32_t g_250_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x1fe8; // 0x28cc
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x3fdb);
}

// Address range: 0x1040 - 0x1046
int32_t function_1040(char * s1, char * s2) {
    // 0x1040
    return strcmp(s1, s2);
}

// Address range: 0x1050 - 0x1056
int32_t function_1050(int32_t main2, int32_t argc, char ** ubp_av, void (*init)(), void (*fini)(), void (*rtld_fini)()) {
    // 0x1050
    return __libc_start_main(main2, argc, ubp_av, init, fini, rtld_fini);
}

// Address range: 0x1060 - 0x1066
int32_t function_1060(char * format, ...) {
    // 0x1060
    return printf(format);
}

// Address range: 0x1070 - 0x109c
int32_t _start(int32_t a1) {
    // 0x1070
    int32_t v1; // 0x1070
    function_109c(v1);
    int32_t v2 = *(int32_t *)(v1 + 0x3f68); // 0x1090
    int32_t v3; // 0x1070
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g2);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x109c - 0x10a0
int32_t function_109c(int32_t a1) {
    // 0x109c
    int32_t result; // 0x109c
    return result;
}

// Address range: 0x10a0 - 0x10a4
int32_t __x86_get_pc_thunk_bx(int32_t a1) {
    // 0x10a0
    int32_t result; // 0x10a0
    return result;
}

// Address range: 0x10b0 - 0x10e9
int32_t function_10b0(void) {
    // 0x10b0
    __x86_get_pc_thunk_dx((int32_t)&g2);
    int32_t v1; // 0x10b0
    return v1 + 0x3fa7;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g2);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x3f0f); // 0x1156
    int32_t result = v2; // 0x115d
    if (*v3 == 0) {
        // 0x115f
        result = function_10b0();
        *v3 = 1;
    }
    // 0x1187
    return result;
}

// Address range: 0x1190 - 0x1199
int32_t function_1190(void) {
    // 0x1190
    return function_10f0();
}

// Address range: 0x1199 - 0x119d
int32_t __x86_get_pc_thunk_dx(int32_t a1) {
    // 0x1199
    int32_t result; // 0x1199
    return result;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s946retdec.c
// Address range: 0x11a0 - 0x157b
// Line range:    233 - 265
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eb5)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e79), v1);
    char v10 = *(char *)(v2 + 0x3e84); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x3e86); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e88); // 0x1350
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x3e8a); // 0x1373
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e8c); // 0x1396
    transparent_crc(v14, (char *)(v2 + 0x1e93), v1);
    char v15 = *(char *)(v2 + 0x3eb4); // 0x13b8
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e90); // 0x13db
    transparent_crc(v16, (char *)(v2 + 0x1e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e94); // 0x13fd
    transparent_crc(v17, (char *)(v2 + 0x1ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x141f
    transparent_crc(v18, (char *)(v2 + 0x1eab), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x3e9c); // 0x1441
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb1), v1);
    unsigned char v20 = *(char *)(v2 + 0x3e9e); // 0x1464
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3eb8); // 0x1489
    transparent_crc(v21, (char *)(v2 + 0x1ebd), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x3ea0); // 0x14ab
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec3), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x3ea2); // 0x14ce
    transparent_crc((int32_t)v23, (char *)(v2 + 0x1ec9), v1);
    int16_t v24 = *(int16_t *)(v2 + 0x3ebc); // 0x14f1
    transparent_crc((int32_t)v24, (char *)(v2 + 0x1ecf), v1);
    char v25 = *(char *)(v2 + 0x3ea4); // 0x1514
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ed5), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x3ea8); // 0x1539
    transparent_crc(v26, (char *)(v2 + 0x1edb), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1580 - 0x1585
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1580
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1590 - 0x1638
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x160a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x15d1
        while (v1 != 0) {
            // 0x15d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1615
        int32_t v5; // 0x1590
        *(int32_t *)(v5 + 0x3ad1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s946retdec.c
// Address range: 0x1640 - 0x2674
// Line range:    65 - 225
int32_t func_1(void) {
    // 0x1aef
    set_var(0, 0x4981c586, -1, -5, 7, -0x82e2bf0, -0x32e68f72, 64, 0, 102, -0x762d, 2, 0, -1, -0x30c8, 1, 0x3379, 1, -0x30c8, 0x4189, 0x1f69, 0, 100, -8);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2680 - 0x26df
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2680
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2680
    if (v1 != 0) {
        // 0x26b4
        printf((char *)(v1 + 2561));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x26e0 - 0x2714
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x26e0
    int32_t v1; // 0x26e0
    printf((char *)(v1 + 2500));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s946retdec.c
// Address range: 0x2720 - 0x286b
// Line range:    55 - 57
int32_t set_var(int16_t g_3_l, int32_t g_16_l, int32_t g_39_l, int16_t g_40_l, int32_t g_45_l, int32_t g_60_l, int32_t g_64_l, char g_75_l, int16_t g_80_l, char g_96_l, int16_t g_108_l, int32_t g_110_l, char g_120_l, int32_t g_145_l, int32_t g_148_l, int32_t g_150_l, int16_t g_151_l, char g_152_l, int32_t g_239_l, int16_t g_240_l, int16_t g_242_l, int16_t g_246_l, char g_249_l, int32_t g_250_l) {
    // 0x2720
    int32_t v1; // 0x2720
    *(int16_t *)(v1 + (int32_t)&g1 + 32) = (int16_t)g_16_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 36) = g_39_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 40) = (int32_t)g_40_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 44) = (int16_t)g_45_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 48) = g_60_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 52) = g_64_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 56) = (int32_t)g_75_l;
    *(char *)(v1 + (int32_t)&g1 + 60) = (char)g_80_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 62) = (int16_t)g_96_l;
    *(char *)(v1 + (int32_t)&g1 + 64) = (char)g_108_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 66) = (int16_t)g_110_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 68) = (int32_t)g_120_l;
    *(char *)(v1 + (int32_t)&g1 + 108) = (char)g_145_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 72) = g_148_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 76) = g_150_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 80) = (int32_t)g_151_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 84) = (int16_t)g_152_l;
    *(char *)(v1 + (int32_t)&g1 + 86) = (char)g_239_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 112) = (int32_t)g_240_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 88) = g_242_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 90) = g_246_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 116) = (int16_t)g_249_l;
    *(char *)(v1 + (int32_t)&g1 + 92) = (char)g_250_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2870 - 0x28f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2870
    int32_t v1; // 0x2870
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28f0 - 0x2934
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x28f0
    int32_t v1; // 0x28f0
    int32_t * v2 = (int32_t *)(v1 + 0x275f); // 0x2903
    uint32_t v3 = *v2; // 0x2903
    char v4; // 0x28f0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2773 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2934 - 0x294c
int32_t _fini(void) {
    // 0x2934
    int32_t v1; // 0x2934
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

