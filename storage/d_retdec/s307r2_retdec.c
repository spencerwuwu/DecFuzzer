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
int32_t set_var(int32_t g_7_l, int16_t g_8_l, char g_13_l, int16_t g_21_l, char g_22_l, int32_t g_23_l, int32_t g_24_l, int32_t g_29_l, char g_56_l, int32_t g_59_l, int32_t g_60_l, int32_t g_61_l, char g_71_l, int32_t g_120_l, char g_121_l, int16_t g_133_l, int32_t g_178_l, char g_183_l, int16_t g_184_l, char g_197_l, int16_t g_199_l, int32_t g_224_l, int32_t g_243_l, int16_t g_247_l, char g_253_l, int32_t g_289_l, int32_t g_339_l, int32_t g_340_l, int32_t g_389_l, char g_429_l);
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
    return *(int32_t *)(v1 + 0x5fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x5f68); // 0x1090
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
    return v1 + 0x5faf;
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
    char * v3 = (char *)(v1 + 0x5f17); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s307r2.c
// Address range: 0x11a0 - 0x164e
// Line range:    389 - 427
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3ea5)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x5ebc); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x3e5c), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x5e68); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x3e60), v1);
    char v5 = *(char *)(v2 + 0x5e6a); // 0x1262
    transparent_crc((int32_t)v5, (char *)(v2 + 0x3e64), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x5e6c); // 0x1285
    transparent_crc((int32_t)v6, (char *)(v2 + 0x3e69), v1);
    char v7 = *(char *)(v2 + 0x5e6e); // 0x12a8
    transparent_crc((int32_t)v7, (char *)(v2 + 0x3e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x5e70); // 0x12cb
    transparent_crc(v8, (char *)(v2 + 0x3e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x5e74); // 0x12ed
    transparent_crc(v9, (char *)(v2 + 0x3e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x5e78); // 0x130f
    transparent_crc(v10, (char *)(v2 + 0x3e7d), v1);
    char v11 = *(char *)(v2 + 0x5e7c); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x5ec0); // 0x1354
    transparent_crc(v12, (char *)(v2 + 0x3e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x5e80); // 0x1376
    transparent_crc(v13, (char *)(v2 + 0x3e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x5e84); // 0x1398
    transparent_crc(v14, (char *)(v2 + 0x3e91), v1);
    unsigned char v15 = *(char *)(v2 + 0x5e88); // 0x13ba
    transparent_crc((int32_t)v15, (char *)(v2 + 0x3e96), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x5ec4); // 0x13dd
    transparent_crc(v16, (char *)(v2 + 0x3e9b), v1);
    unsigned char v17 = *(char *)(v2 + 0x5e89); // 0x13ff
    transparent_crc((int32_t)v17, (char *)(v2 + 0x3ea1), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x5e8a); // 0x1422
    transparent_crc((int32_t)v18, (char *)(v2 + 0x3ea7), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x5e8c); // 0x1445
    transparent_crc(v19, (char *)(v2 + 0x3ead), v1);
    char v20 = *(char *)(v2 + 0x5e90); // 0x1467
    transparent_crc((int32_t)v20, (char *)(v2 + 0x3eb3), v1);
    uint16_t v21 = *(int16_t *)(v2 + 0x5e92); // 0x148a
    transparent_crc((int32_t)v21, (char *)(v2 + 0x3eb9), v1);
    unsigned char v22 = *(char *)(v2 + 0x5e94); // 0x14b0
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ebf), v1);
    uint16_t v23 = *(int16_t *)(v2 + 0x5e96); // 0x14d3
    transparent_crc((int32_t)v23, (char *)(v2 + 0x3ec5), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x5e98); // 0x14f6
    transparent_crc(v24, (char *)(v2 + 0x3ecb), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5e9c); // 0x1518
    transparent_crc(v25, (char *)(v2 + 0x3ed1), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x5ea0); // 0x153a
    transparent_crc((int32_t)v26, (char *)(v2 + 0x3ed7), v1);
    char v27 = *(char *)(v2 + 0x5ea2); // 0x1560
    transparent_crc((int32_t)v27, (char *)(v2 + 0x3edd), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x5ea4); // 0x1583
    transparent_crc(v28, (char *)(v2 + 0x3ee3), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x5ea8); // 0x15a5
    transparent_crc(v29, (char *)(v2 + 0x3ee9), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x5eac); // 0x15c7
    transparent_crc(v30, (char *)(v2 + 0x3eef), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x5ec8); // 0x15e9
    transparent_crc(v31, (char *)(v2 + 0x3ef5), v1);
    unsigned char v32 = *(char *)(v2 + 0x5eb0); // 0x160b
    transparent_crc((int32_t)v32, (char *)(v2 + 0x3efb), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5eb4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1650 - 0x1655
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1650
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1660 - 0x1708
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x16da
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16a1
        while (v1 != 0) {
            // 0x16a7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16e5
        int32_t v5; // 0x1660
        *(int32_t *)(v5 + 0x5a0d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s307r2.c
// Address range: 0x1710 - 0x43cb
// Line range:    67 - 382
int16_t func_1(void) {
    // 0x1710
    set_var(0, -0x33db, -1, -0x1057, -24, -0x1c2381, -0x1deae962, 0x6b5b3847, 0, 0, 0x6c8ecdcc, -0x6ac8d58f, 6, 0, -1, -0x3fe5, 1, 7, -486, -107, 1, 1, 0x317c6a24, -0x12ff, -43, 1, -1, 0x45d53b16, 0, 50);
    return 0x6725;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x43d0 - 0x442f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x43d0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x43d0
    if (v1 != 0) {
        // 0x4404
        printf((char *)(v1 + 3281));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4430 - 0x4464
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4430
    int32_t v1; // 0x4430
    printf((char *)(v1 + 3220));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s307r2.c
// Address range: 0x4470 - 0x45fd
// Line range:    57 - 59
int32_t set_var(int32_t g_7_l, int16_t g_8_l, char g_13_l, int16_t g_21_l, char g_22_l, int32_t g_23_l, int32_t g_24_l, int32_t g_29_l, char g_56_l, int32_t g_59_l, int32_t g_60_l, int32_t g_61_l, char g_71_l, int32_t g_120_l, char g_121_l, int16_t g_133_l, int32_t g_178_l, char g_183_l, int16_t g_184_l, char g_197_l, int16_t g_199_l, int32_t g_224_l, int32_t g_243_l, int16_t g_247_l, char g_253_l, int32_t g_289_l, int32_t g_339_l, int32_t g_340_l, int32_t g_389_l, char g_429_l) {
    // 0x4470
    int32_t v1; // 0x4470
    *(int32_t *)(v1 + 0x2bf0) = (int32_t)g_8_l;
    *(int16_t *)(v1 + 0x2b9c) = (int16_t)g_13_l;
    *(char *)(v1 + 0x2b9e) = (char)g_21_l;
    *(int16_t *)(v1 + 0x2ba0) = (int16_t)g_22_l;
    *(char *)(v1 + 0x2ba2) = (char)g_23_l;
    *(int32_t *)(v1 + 0x2ba4) = g_24_l;
    *(int32_t *)(v1 + 0x2ba8) = g_29_l;
    *(int32_t *)(v1 + 0x2bac) = (int32_t)g_56_l;
    *(char *)(v1 + 0x2bb0) = (char)g_59_l;
    *(int32_t *)(v1 + 0x2bf4) = g_60_l;
    *(int32_t *)(v1 + 0x2bb4) = g_61_l;
    *(int32_t *)(v1 + 0x2bb8) = (int32_t)g_71_l;
    *(char *)(v1 + 0x2bbc) = (char)g_120_l;
    *(int32_t *)(v1 + 0x2bf8) = (int32_t)g_121_l;
    *(char *)(v1 + 0x2bbd) = (char)g_133_l;
    *(int16_t *)(v1 + 0x2bbe) = (int16_t)g_178_l;
    *(int32_t *)(v1 + 0x2bc0) = (int32_t)g_183_l;
    *(char *)(v1 + 0x2bc4) = (char)g_184_l;
    *(int16_t *)(v1 + 0x2bc6) = (int16_t)g_197_l;
    *(char *)(v1 + 0x2bc8) = (char)g_199_l;
    *(int16_t *)(v1 + 0x2bca) = (int16_t)g_224_l;
    *(int32_t *)(v1 + 0x2bcc) = g_243_l;
    *(int32_t *)(v1 + 0x2bd0) = (int32_t)g_247_l;
    *(int16_t *)(v1 + 0x2bd4) = (int16_t)g_253_l;
    *(char *)(v1 + 0x2bd6) = (char)g_289_l;
    *(int32_t *)(v1 + 0x2bd8) = g_339_l;
    *(int32_t *)(v1 + 0x2bdc) = g_340_l;
    *(int32_t *)(v1 + 0x2be0) = g_389_l;
    *(int32_t *)(v1 + 0x2bfc) = (int32_t)g_429_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4600 - 0x4680
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x4600
    int32_t v1; // 0x4600
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4680 - 0x46c4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4680
    int32_t v1; // 0x4680
    int32_t * v2 = (int32_t *)(v1 + 0x29d7); // 0x4693
    uint32_t v3 = *v2; // 0x4693
    char v4; // 0x4680
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x29ef + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x46c4 - 0x46dc
int32_t _fini(void) {
    // 0x46c4
    int32_t v1; // 0x46c4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

