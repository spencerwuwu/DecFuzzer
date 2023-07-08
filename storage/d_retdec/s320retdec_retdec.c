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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_31_l, int32_t g_71_l, int32_t g_74_l, char g_79_l, char g_80_l, char g_83_l, int32_t g_84_l, char g_93_l, int32_t g_112_l, int32_t g_113_l, int16_t g_114_l, char g_180_l, int16_t g_201_l, int32_t g_210_l, int32_t g_223_l, int32_t g_288_l, int16_t g_289_l, int32_t g_290_l, int16_t g_291_l, char g_320_l);
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
    return v1 + 0x4fab;
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
    char * v3 = (char *)(v1 + 0x4f13); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s320retdec.c
// Address range: 0x11a0 - 0x1579
// Line range:    322 - 354
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2eb0)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4eb8); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x2e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e74); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x2e6c), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 0x2e71), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e7c); // 0x12e6
    transparent_crc(v9, (char *)(v2 + 0x2e76), v1);
    char v10 = *(char *)(v2 + 0x4e80); // 0x1308
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7b), v1);
    char v11 = *(char *)(v2 + 0x4ebc); // 0x132b
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e80), v1);
    char v12 = *(char *)(v2 + 0x4e81); // 0x134e
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e85), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e84); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x2e8a), v1);
    unsigned char v14 = *(char *)(v2 + 0x4e88); // 0x1395
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e8f), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e8c); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x2e94), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e90); // 0x13da
    transparent_crc(v16, (char *)(v2 + 0x2e9a), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x4e94); // 0x13fc
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea0), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e96); // 0x141f
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ea6), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x4e98); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eac), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4ec0); // 0x1465
    transparent_crc(v20, (char *)(v2 + 0x2eb2), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e9c); // 0x1487
    transparent_crc(v21, (char *)(v2 + 0x2eb8), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea0); // 0x14a9
    transparent_crc(v22, (char *)(v2 + 0x2ebe), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x4ea4); // 0x14cb
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec4), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4ea8); // 0x14f1
    transparent_crc(v24, (char *)(v2 + 0x2eca), v1);
    uint16_t v25 = *(int16_t *)(v2 + 0x4eac); // 0x1513
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ed0), v1);
    unsigned char v26 = *(char *)(v2 + 0x4eae); // 0x1536
    transparent_crc((int32_t)v26, (char *)(v2 + 0x2ed6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb0), v1);
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
        *(int32_t *)(v5 + 0x4ad5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s320retdec.c
// Address range: 0x1640 - 0x366e
// Line range:    61 - 315
int32_t func_1(void) {
    // 0x345b
    set_var(0, -0x10000, 1, 10, 0, 1, 0xeae3254, -1, 0, -111, -2, -2, 0x20850da4, 1, 1, 106, -0x1268, 0, -0x2a6fb5ee, -0x7bb0de41, -8, 1, -1, 83);
    return 0x20850da4;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3670 - 0x36cf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3670
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3670
    if (v1 != 0) {
        // 0x36a4
        printf((char *)(v1 + 2572));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x36d0 - 0x3704
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x36d0
    int32_t v1; // 0x36d0
    printf((char *)(v1 + 2511));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s320retdec.c
// Address range: 0x3710 - 0x384f
// Line range:    51 - 53
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_31_l, int32_t g_71_l, int32_t g_74_l, char g_79_l, char g_80_l, char g_83_l, int32_t g_84_l, char g_93_l, int32_t g_112_l, int32_t g_113_l, int16_t g_114_l, char g_180_l, int16_t g_201_l, int32_t g_210_l, int32_t g_223_l, int32_t g_288_l, int16_t g_289_l, int32_t g_290_l, int16_t g_291_l, char g_320_l) {
    // 0x3710
    int32_t v1; // 0x3710
    *(int32_t *)(v1 + 0x294c) = g_3_l;
    *(int32_t *)(v1 + 0x28fc) = g_4_l;
    *(int32_t *)(v1 + 0x2900) = g_5_l;
    *(int32_t *)(v1 + 0x2904) = g_31_l;
    *(int32_t *)(v1 + 0x2908) = g_71_l;
    *(int32_t *)(v1 + 0x290c) = g_74_l;
    *(int32_t *)(v1 + 0x2910) = (int32_t)g_79_l;
    *(char *)(v1 + 0x2914) = g_80_l;
    *(char *)(v1 + 0x2950) = g_83_l;
    *(char *)(v1 + 0x2915) = (char)g_84_l;
    *(int32_t *)(v1 + 0x2918) = (int32_t)g_93_l;
    *(char *)(v1 + 0x291c) = (char)g_112_l;
    *(int32_t *)(v1 + 0x2920) = g_113_l;
    *(int32_t *)(v1 + 0x2924) = (int32_t)g_114_l;
    *(int16_t *)(v1 + 0x2928) = (int16_t)g_180_l;
    *(char *)(v1 + 0x292a) = (char)g_201_l;
    *(int16_t *)(v1 + 0x292c) = (int16_t)g_210_l;
    *(int32_t *)(v1 + 0x2954) = g_223_l;
    *(int32_t *)(v1 + 0x2930) = g_288_l;
    *(int32_t *)(v1 + 0x2934) = (int32_t)g_289_l;
    *(int16_t *)(v1 + 0x2938) = (int16_t)g_290_l;
    *(int32_t *)(v1 + 0x293c) = (int32_t)g_291_l;
    *(int16_t *)(v1 + 0x2940) = (int16_t)g_320_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3850 - 0x38d0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3850
    int32_t v1; // 0x3850
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x38d0 - 0x3914
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x38d0
    int32_t v1; // 0x38d0
    int32_t * v2 = (int32_t *)(v1 + 0x2783); // 0x38e3
    uint32_t v3 = *v2; // 0x38e3
    char v4; // 0x38d0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2797 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3914 - 0x392c
int32_t _fini(void) {
    // 0x3914
    int32_t v1; // 0x3914
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

