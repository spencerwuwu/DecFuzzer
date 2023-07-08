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
int32_t set_var(char g_6_l, char g_10_l, int32_t g_20_l, char g_21_l, int16_t g_22_l, int16_t g_58_l, int32_t g_62_l, int16_t g_74_l, int16_t g_75_l, int32_t g_77_l, int32_t g_88_l, int16_t g_90_l, int16_t g_100_l, int32_t g_111_l, int32_t g_112_l, int32_t g_134_l, char g_141_l, char g_143_l, int32_t g_152_l, int16_t g_162_l, int32_t g_163_l, int16_t g_164_l, int32_t g_165_l, int16_t g_166_l, char g_174_l, int32_t g_188_l, int32_t g_194_l, int32_t g_195_l, int16_t g_223_l, int32_t g_239_l, int16_t g_246_l, int32_t g_262_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x311c; // 0x2edb
int32_t g2 = 0x2edb; // 0x311c
int32_t g3;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x4fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x4f68); // 0x1090
    int32_t v3; // 0x1070
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x4fb7;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x4f1f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s407r2.c
// Address range: 0x11a0 - 0x1699
// Line range:    266 - 306
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ea1)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    char v4 = *(char *)(v2 + 0x4e69); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x1260
    transparent_crc(v5, (char *)(v2 + 0x2e65), v1);
    char v6 = *(char *)(v2 + 0x4e70); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6a), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x4ec4); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6f), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x4e72); // 0x12cd
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e74); // 0x12f0
    transparent_crc(v9, (char *)(v2 + 0x2e79), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x4ec6); // 0x1312
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7e), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x4ec8); // 0x1335
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4ecc); // 0x1358
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e78); // 0x137a
    transparent_crc(v13, (char *)(v2 + 0x2e8d), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x4e7c); // 0x139c
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e92), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x4e7e); // 0x13bf
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e80); // 0x13e2
    transparent_crc(v16, (char *)(v2 + 0x2e9d), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e84); // 0x1404
    transparent_crc(v17, (char *)(v2 + 0x2ea3), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4e88); // 0x1426
    transparent_crc(v18, (char *)(v2 + 0x2ea9), v1);
    char v19 = *(char *)(v2 + 0x4e8c); // 0x1448
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eaf), v1);
    char v20 = *(char *)(v2 + 0x4e8d); // 0x146b
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb5), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e90); // 0x148e
    transparent_crc(v21, (char *)(v2 + 0x2ebb), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x4e94); // 0x14b0
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec1), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4e98); // 0x14d3
    transparent_crc(v23, (char *)(v2 + 0x2ec7), v1);
    int16_t v24 = *(int16_t *)(v2 + 0x4e9c); // 0x14f5
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ecd), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ea0); // 0x151b
    transparent_crc(v25, (char *)(v2 + 0x2ed3), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x4ea4); // 0x153d
    transparent_crc((int32_t)v26, (char *)(v2 + 0x2ed9), v1);
    unsigned char v27 = *(char *)(v2 + 0x4ea6); // 0x1563
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2edf), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x4ea8); // 0x1586
    transparent_crc(v28, (char *)(v2 + 0x2ee5), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x4eac); // 0x15a8
    transparent_crc(v29, (char *)(v2 + 0x2eeb), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x4eb0); // 0x15ca
    transparent_crc(v30, (char *)(v2 + 0x2ef1), v1);
    int16_t v31 = *(int16_t *)(v2 + 0x4eb4); // 0x15ec
    transparent_crc((int32_t)v31, (char *)(v2 + 0x2ef7), v1);
    int32_t v32 = *(int32_t *)(v2 + 0x4ed0); // 0x160f
    transparent_crc(v32, (char *)(v2 + 0x2efd), v1);
    uint16_t v33 = *(int16_t *)(v2 + 0x4eb6); // 0x1631
    transparent_crc((int32_t)v33, (char *)(v2 + 0x2f03), v1);
    int32_t v34 = *(int32_t *)(v2 + 0x4eb8); // 0x1657
    transparent_crc(v34, (char *)(v2 + 0x2f09), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ebc), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x16a0 - 0x16a5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x16a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16b0 - 0x1758
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x172a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16f1
        while (v1 != 0) {
            // 0x16f7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1735
        int32_t v5; // 0x16b0
        *(int32_t *)(v5 + 0x49c5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s407r2.c
// Address range: 0x1760 - 0x2e26
// Line range:    69 - 259
char func_1(void) {
    // 0x2a41
    set_var(-14, 64, -0x7ebc7c99, 60, 1, 0x5cb2, 7, 1, 0, 0, 0x310705e7, -0x3596, 0x2416, -0x452d6bb, -1, 2, 106, 127, -0x755a4c6c, 1, 0x6e64ef7b, 0x2596, -0x64f5ae17, 1, -51, 0, 0, 0x3a99fbd2, -0x4f65, 0, 0x6ba3, -3);
    return 101;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e30 - 0x2e8f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2e30
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2e30
    if (v1 != 0) {
        // 0x2e64
        printf((char *)(v1 + 0x127f));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2e90 - 0x2ec4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2e90
    int32_t v1; // 0x2e90
    printf((char *)(v1 + 0x1242));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s407r2.c
// Address range: 0x2ed0 - 0x3090
// Line range:    59 - 61
int32_t set_var(char g_6_l, char g_10_l, int32_t g_20_l, char g_21_l, int16_t g_22_l, int16_t g_58_l, int32_t g_62_l, int16_t g_74_l, int16_t g_75_l, int32_t g_77_l, int32_t g_88_l, int16_t g_90_l, int16_t g_100_l, int32_t g_111_l, int32_t g_112_l, int32_t g_134_l, char g_141_l, char g_143_l, int32_t g_152_l, int16_t g_162_l, int32_t g_163_l, int16_t g_164_l, int32_t g_165_l, int16_t g_166_l, char g_174_l, int32_t g_188_l, int32_t g_194_l, int32_t g_195_l, int16_t g_223_l, int32_t g_239_l, int16_t g_246_l, int32_t g_262_l) {
    // 0x2ed0
    int32_t v1; // 0x2ed0
    *(char *)(v1 + (int32_t)&g2 + 32) = g_10_l;
    *(char *)(v1 + (int32_t)&g2 + 33) = (char)g_20_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 36) = (int32_t)g_21_l;
    *(char *)(v1 + (int32_t)&g2 + 40) = (char)g_22_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 124) = g_58_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 42) = (int16_t)g_62_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 44) = (int32_t)g_74_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 126) = g_75_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 128) = (int16_t)g_77_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 132) = g_88_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 48) = (int32_t)g_90_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 52) = g_100_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 54) = (int16_t)g_111_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 56) = g_112_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 60) = g_134_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 64) = (int32_t)g_141_l;
    *(char *)(v1 + (int32_t)&g2 + 68) = g_143_l;
    *(char *)(v1 + (int32_t)&g2 + 69) = (char)g_152_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 72) = (int32_t)g_162_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 76) = (int16_t)g_163_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 80) = (int32_t)g_164_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 84) = (int16_t)g_165_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 88) = (int32_t)g_166_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 92) = (int16_t)g_174_l;
    *(char *)(v1 + (int32_t)&g2 + 94) = (char)g_188_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 96) = g_194_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 100) = g_195_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 104) = (int32_t)g_223_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 108) = (int16_t)g_239_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 136) = (int32_t)g_246_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 110) = (int16_t)g_262_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3090 - 0x3110
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3090
    int32_t v1; // 0x3090
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3110 - 0x3154
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3110
    int32_t v1; // 0x3110
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 116); // 0x3123
    uint32_t v3 = *v2; // 0x3123
    char v4; // 0x3110
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 140 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x3144
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x3154 - 0x316c
int32_t _fini(void) {
    // 0x3154
    int32_t v1; // 0x3154
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

