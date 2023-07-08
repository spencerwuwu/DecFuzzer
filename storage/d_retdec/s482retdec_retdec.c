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
char func_1(void);
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
int32_t set_var(int16_t g_11_l, char g_26_l, int32_t g_28_l, int32_t g_29_l, int32_t g_48_l, int32_t g_69_l, int32_t g_70_l, int32_t g_80_l, int16_t g_82_l, int32_t g_83_l, int32_t g_90_l, int32_t g_91_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x2fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x2f68); // 0x1090
    int32_t v3; // 0x1070
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g1);
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
    __x86_get_pc_thunk_dx((int32_t)&g1);
    int32_t v1; // 0x10b0
    return v1 + 0x2f8b;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g1);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x2ef3); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s482retdec.c
// Address range: 0x11a0 - 0x13f7
// Line range:    155 - 176
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3683)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 3792); // 0x121a
    transparent_crc(v3, (char *)(v2 + 3676), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x2e68); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 3680), v1);
    char v5 = *(char *)(v2 + 0x2e6a); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 3685), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x2e98); // 0x1282
    transparent_crc(v6, (char *)(v2 + 3690), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x2e6c); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 3695), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e70); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 3700), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x2e74); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 3705), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2e78); // 0x130a
    transparent_crc(v10, (char *)(v2 + 3710), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e7c); // 0x132c
    transparent_crc(v11, (char *)(v2 + 3715), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x2e80); // 0x134e
    transparent_crc((int32_t)v12, (char *)(v2 + 3720), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x2e84); // 0x1371
    transparent_crc(v13, (char *)(v2 + 3725), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x2e88); // 0x1393
    transparent_crc(v14, (char *)(v2 + 3730), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x2e8c); // 0x13b5
    transparent_crc(v15, (char *)(v2 + 3735), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e90), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1400 - 0x1405
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1400
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1410 - 0x14b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x148a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1451
        while (v1 != 0) {
            // 0x1457
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1495
        int32_t v5; // 0x1410
        *(int32_t *)(v5 + 0x2c2d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s482retdec.c
// Address range: 0x14c0 - 0x1a91
// Line range:    50 - 147
char func_1(void) {
    // 0x193a
    set_var(7, 1, 0, -0x6567bc9b, 0x392fb38a, 0x8915cc6, -0x6e599ad, -0x7f443f69, -2, 15, -0x5f8fbf34, 9);
    return -105;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1aa0 - 0x1aff
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1aa0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1aa0
    if (v1 != 0) {
        // 0x1ad4
        printf((char *)(v1 + 1436));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1b00 - 0x1b34
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1b00
    int32_t v1; // 0x1b00
    printf((char *)(v1 + 1375));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s482retdec.c
// Address range: 0x1b40 - 0x1be9
// Line range:    40 - 42
int32_t set_var(int16_t g_11_l, char g_26_l, int32_t g_28_l, int32_t g_29_l, int32_t g_48_l, int32_t g_69_l, int32_t g_70_l, int32_t g_80_l, int16_t g_82_l, int32_t g_83_l, int32_t g_90_l, int32_t g_91_l) {
    // 0x1b40
    int32_t v1; // 0x1b40
    *(int16_t *)(v1 + 0x24cc) = (int16_t)g_26_l;
    *(char *)(v1 + 0x24ce) = (char)g_28_l;
    *(int32_t *)(v1 + 0x24fc) = g_29_l;
    *(int32_t *)(v1 + 0x24d0) = g_48_l;
    *(int32_t *)(v1 + 0x24d4) = g_69_l;
    *(int32_t *)(v1 + 0x24d8) = g_70_l;
    *(int32_t *)(v1 + 0x24dc) = g_80_l;
    *(int32_t *)(v1 + 0x24e0) = (int32_t)g_82_l;
    *(int16_t *)(v1 + 0x24e4) = (int16_t)g_83_l;
    *(int32_t *)(v1 + 0x24e8) = g_90_l;
    *(int32_t *)(v1 + 0x24ec) = g_91_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1bf0 - 0x1c70
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1bf0
    int32_t v1; // 0x1bf0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c70 - 0x1cb4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1c70
    int32_t v1; // 0x1c70
    int32_t * v2 = (int32_t *)(v1 + 0x23c3); // 0x1c83
    uint32_t v3 = *v2; // 0x1c83
    char v4; // 0x1c70
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x23cf + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x1cb4 - 0x1ccc
int32_t _fini(void) {
    // 0x1cb4
    int32_t v1; // 0x1cb4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

