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
int16_t func_1(void);
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
int32_t set_var(int16_t g_12_l, char g_39_l, int32_t g_40_l, int32_t g_41_l, char g_42_l, int32_t g_54_l, int16_t g_70_l, char g_71_l, char g_72_l, int32_t g_90_l, int32_t g_95_l, char g_100_l, int32_t g_101_l, int32_t g_110_l, char g_122_l, char g_167_l, int16_t g_180_l, int32_t g_204_l, int32_t g_210_l, int32_t g_215_l, char g_224_l, int32_t g_225_l, char g_239_l, int16_t g_265_l, char g_266_l, int32_t g_277_l, int32_t g_302_l, int32_t g_329_l);
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
    return v1 + 0x4fb3;
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
    char * v3 = (char *)(v1 + 0x4f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s316retdec.c
// Address range: 0x11a0 - 0x1671
// Line range:    320 - 359
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
    uint16_t v3 = *(int16_t *)(v2 + 0x2f3c); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x4e68); // 0x1240
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    char v5 = *(char *)(v2 + 0x4e6a); // 0x1263
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e6c); // 0x1286
    transparent_crc(v6, (char *)(v2 + 0x2e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e70); // 0x12a8
    transparent_crc(v7, (char *)(v2 + 0x2e6f), v1);
    char v8 = *(char *)(v2 + 0x4e74); // 0x12ca
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12ed
    transparent_crc(v9, (char *)(v2 + 0x2e79), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x4e7c); // 0x130f
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7e), v1);
    char v11 = *(char *)(v2 + 0x4e7e); // 0x1335
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e83), v1);
    unsigned char v12 = *(char *)(v2 + 0x4e7f); // 0x1358
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e80); // 0x137d
    transparent_crc(v13, (char *)(v2 + 0x2e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e84); // 0x139f
    transparent_crc(v14, (char *)(v2 + 0x2e92), v1);
    char v15 = *(char *)(v2 + 0x4e88); // 0x13c1
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e8c); // 0x13e4
    transparent_crc(v16, (char *)(v2 + 0x2e9d), v1);
    transparent_crc(254, (char *)(v2 + 0x2ea3), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e90); // 0x1426
    transparent_crc(v17, (char *)(v2 + 0x2ea9), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e94); // 0x1448
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eaf), v1);
    transparent_crc(-9, (char *)(v2 + 0x2eb5), v1);
    char v19 = *(char *)(v2 + 0x4e95); // 0x148d
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2ebb), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x4e96); // 0x14b2
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2ec1), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e98); // 0x14d5
    transparent_crc(v21, (char *)(v2 + 0x2ec7), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4e9c); // 0x14f7
    transparent_crc(v22, (char *)(v2 + 0x2ecd), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4ea0); // 0x1519
    transparent_crc(v23, (char *)(v2 + 0x2ed3), v1);
    char v24 = *(char *)(v2 + 0x4ea4); // 0x153b
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ed9), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ea8); // 0x155e
    transparent_crc(v25, (char *)(v2 + 0x2edf), v1);
    unsigned char v26 = *(char *)(v2 + 0x4eac); // 0x1580
    transparent_crc((int32_t)v26, (char *)(v2 + 0x2ee5), v1);
    int16_t v27 = *(int16_t *)(v2 + 0x4ec0); // 0x15a3
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2eeb), v1);
    unsigned char v28 = *(char *)(v2 + 0x4ead); // 0x15c6
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2ef1), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x4eb0); // 0x15eb
    transparent_crc(v29, (char *)(v2 + 0x2ef7), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x4ec4); // 0x160d
    transparent_crc(v30, (char *)(v2 + 0x2efd), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x4eb4); // 0x162f
    transparent_crc(v31, (char *)(v2 + 0x2f03), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb8), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1680 - 0x1685
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1680
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1690 - 0x1738
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x170a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16d1
        while (v1 != 0) {
            // 0x16d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1715
        int32_t v5; // 0x1690
        *(int32_t *)(v5 + 0x49d9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s316retdec.c
// Address range: 0x1740 - 0x33bc
// Line range:    68 - 313
int16_t func_1(void) {
    // 0x1740
    set_var(13, 0, -0x27942518, -6, 1, -2, 9, 0, -57, 0x6bca32d9, 0, 76, -0x78ca6bcf, 0, -29, -1, -77, 0x6d265171, 0x13cd0db1, -1, -77, 0x490424ae, 0, 0, -6, 0, 0, 0x1bb1884e);
    return 0x67b8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x33c0 - 0x341f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x33c0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x33c0
    if (v1 != 0) {
        // 0x33f4
        printf((char *)(v1 + 3305));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x3420 - 0x3454
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3420
    int32_t v1; // 0x3420
    printf((char *)(v1 + 3244));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s316retdec.c
// Address range: 0x3460 - 0x35cf
// Line range:    58 - 60
int32_t set_var(int16_t g_12_l, char g_39_l, int32_t g_40_l, int32_t g_41_l, char g_42_l, int32_t g_54_l, int16_t g_70_l, char g_71_l, char g_72_l, int32_t g_90_l, int32_t g_95_l, char g_100_l, int32_t g_101_l, int32_t g_110_l, char g_122_l, char g_167_l, int16_t g_180_l, int32_t g_204_l, int32_t g_210_l, int32_t g_215_l, char g_224_l, int32_t g_225_l, char g_239_l, int16_t g_265_l, char g_266_l, int32_t g_277_l, int32_t g_302_l, int32_t g_329_l) {
    // 0x3460
    int32_t v1; // 0x3460
    *(int16_t *)(v1 + 0x2bac) = (int16_t)g_39_l;
    *(char *)(v1 + 0x2bae) = (char)g_40_l;
    *(int32_t *)(v1 + 0x2bb0) = g_41_l;
    *(int32_t *)(v1 + 0x2bb4) = (int32_t)g_42_l;
    *(char *)(v1 + 0x2bb8) = (char)g_54_l;
    *(int32_t *)(v1 + 0x2bbc) = (int32_t)g_70_l;
    *(int16_t *)(v1 + 0x2bc0) = (int16_t)g_71_l;
    *(char *)(v1 + 0x2bc2) = g_72_l;
    *(char *)(v1 + 0x2bc3) = (char)g_90_l;
    *(int32_t *)(v1 + 0x2bc4) = g_95_l;
    *(int32_t *)(v1 + 0x2bc8) = (int32_t)g_100_l;
    *(char *)(v1 + 0x2bcc) = (char)g_101_l;
    *(int32_t *)(v1 + 0x2bd0) = g_110_l;
    *(int32_t *)(v1 + 0x2bd4) = (int32_t)g_122_l;
    *(char *)(v1 + 0x2bd8) = g_167_l;
    *(char *)(v1 + 0x2bd9) = (char)g_180_l;
    *(int16_t *)(v1 + 0x2bda) = (int16_t)g_204_l;
    *(int32_t *)(v1 + 0x2bdc) = g_210_l;
    *(int32_t *)(v1 + 0x2be0) = g_215_l;
    *(int32_t *)(v1 + 0x2be4) = (int32_t)g_224_l;
    *(char *)(v1 + 0x2be8) = (char)g_225_l;
    *(int32_t *)(v1 + 0x2bec) = (int32_t)g_239_l;
    *(char *)(v1 + 0x2bf0) = (char)g_265_l;
    *(int16_t *)(v1 + 0x2c04) = (int16_t)g_266_l;
    *(char *)(v1 + 0x2bf1) = (char)g_277_l;
    *(int32_t *)(v1 + 0x2bf4) = g_302_l;
    *(int32_t *)(v1 + 0x2c08) = g_329_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x35d0 - 0x3650
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x35d0
    int32_t v1; // 0x35d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3650 - 0x3694
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3650
    int32_t v1; // 0x3650
    int32_t * v2 = (int32_t *)(v1 + 0x2a0b); // 0x3663
    uint32_t v3 = *v2; // 0x3663
    char v4; // 0x3650
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2a1b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3694 - 0x36ac
int32_t _fini(void) {
    // 0x3694
    int32_t v1; // 0x3694
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

