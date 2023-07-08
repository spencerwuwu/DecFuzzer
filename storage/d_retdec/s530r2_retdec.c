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
int32_t set_var(int32_t g_2_l, int32_t g_29_l, int16_t g_45_l, char g_50_l, int32_t g_54_l, char g_62_l, int32_t g_74_l, char g_121_l, int32_t g_128_l, int16_t g_159_l, int32_t g_162_l, int16_t g_163_l, int32_t g_198_l, int32_t g_213_l, int32_t g_217_l, int32_t g_260_l, char g_261_l, int32_t g_266_l, int32_t g_278_l);
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
    return v1 + 0x3f9f;
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
    char * v3 = (char *)(v1 + 0x3f07); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x11a0 - 0x14c9
// Line range:    235 - 262
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e82)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    char v6 = *(char *)(v2 + 0x3e72); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a6
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    unsigned char v8 = *(char *)(v2 + 0x3eac); // 0x12c8
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e78); // 0x12eb
    transparent_crc(v9, (char *)(v2 + 0x1e79), v1);
    char v10 = *(char *)(v2 + 0x3e7c); // 0x130d
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x1330
    transparent_crc(v11, (char *)(v2 + 0x1e84), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x3eae); // 0x1352
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8a), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e84); // 0x1375
    transparent_crc(v13, (char *)(v2 + 0x1e90), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x3e88); // 0x1397
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e96), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e8c); // 0x13ba
    transparent_crc(v15, (char *)(v2 + 0x1e9c), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e90); // 0x13dc
    transparent_crc(v16, (char *)(v2 + 0x1ea2), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e94); // 0x13fe
    transparent_crc(v17, (char *)(v2 + 0x1ea8), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x1420
    transparent_crc(v18, (char *)(v2 + 0x1eae), v1);
    unsigned char v19 = *(char *)(v2 + 0x3e9c); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb4), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3eb0); // 0x1465
    transparent_crc(v20, (char *)(v2 + 0x1eba), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3ea0); // 0x1487
    transparent_crc(v21, (char *)(v2 + 0x1ec0), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14d0 - 0x14d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14e0 - 0x1588
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x155a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1521
        while (v1 != 0) {
            // 0x1527
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1565
        int32_t v5; // 0x14e0
        *(int32_t *)(v5 + 0x3b75 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x1590 - 0x2823
// Line range:    56 - 228
int16_t func_1(void) {
    // 0x1590
    set_var(-10, 0x72625aa9, -0x446f, 1, -0x1cf1a211, 0, -6, 9, 1, 0, 8, -4, -1, 1, 0x64da32a0, -0x6f86e1a4, -92, 0, -0x3047b0a9);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2830 - 0x288f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2830
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2830
    if (v1 != 0) {
        // 0x2864
        printf((char *)(v1 + 2102));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2890 - 0x28c4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2890
    int32_t v1; // 0x2890
    printf((char *)(v1 + 2041));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x28d0 - 0x29d0
// Line range:    46 - 48
int32_t set_var(int32_t g_2_l, int32_t g_29_l, int16_t g_45_l, char g_50_l, int32_t g_54_l, char g_62_l, int32_t g_74_l, char g_121_l, int32_t g_128_l, int16_t g_159_l, int32_t g_162_l, int16_t g_163_l, int32_t g_198_l, int32_t g_213_l, int32_t g_217_l, int32_t g_260_l, char g_261_l, int32_t g_266_l, int32_t g_278_l) {
    // 0x28d0
    int32_t v1; // 0x28d0
    *(int32_t *)(v1 + 0x273c) = g_29_l;
    *(int32_t *)(v1 + 0x2740) = (int32_t)g_45_l;
    *(int16_t *)(v1 + 0x2744) = (int16_t)g_50_l;
    *(char *)(v1 + 0x2746) = (char)g_54_l;
    *(int32_t *)(v1 + 0x2748) = (int32_t)g_62_l;
    *(char *)(v1 + 0x2780) = (char)g_74_l;
    *(int32_t *)(v1 + 0x274c) = (int32_t)g_121_l;
    *(char *)(v1 + 0x2750) = (char)g_128_l;
    *(int32_t *)(v1 + 0x2754) = (int32_t)g_159_l;
    *(int16_t *)(v1 + 0x2782) = (int16_t)g_162_l;
    *(int32_t *)(v1 + 0x2758) = (int32_t)g_163_l;
    *(int16_t *)(v1 + 0x275c) = (int16_t)g_198_l;
    *(int32_t *)(v1 + 0x2760) = g_213_l;
    *(int32_t *)(v1 + 0x2764) = g_217_l;
    *(int32_t *)(v1 + 0x2768) = g_260_l;
    *(int32_t *)(v1 + 0x276c) = (int32_t)g_261_l;
    *(char *)(v1 + 0x2770) = (char)g_266_l;
    *(int32_t *)(v1 + 0x2784) = g_278_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29d0 - 0x2a50
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x29d0
    int32_t v1; // 0x29d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a50 - 0x2a94
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2a50
    int32_t v1; // 0x2a50
    int32_t * v2 = (int32_t *)(v1 + 0x25f7); // 0x2a63
    uint32_t v3 = *v2; // 0x2a63
    char v4; // 0x2a50
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2607 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2a94 - 0x2aac
int32_t _fini(void) {
    // 0x2a94
    int32_t v1; // 0x2a94
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

