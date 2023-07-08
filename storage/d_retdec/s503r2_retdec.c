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
int32_t set_var(int32_t g_5_l, char g_10_l, int16_t g_11_l, int16_t g_12_l, int16_t g_13_l, int16_t g_14_l, char g_26_l, char g_42_l, int16_t g_47_l, int32_t g_49_l, int32_t g_50_l, int16_t g_51_l, int16_t g_95_l, int32_t g_128_l, int16_t g_137_l, int16_t g_140_l, int16_t g_144_l, int32_t g_145_l, char g_150_l, int32_t g_156_l, int16_t g_158_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 604; // 0x2f9c
int32_t g2;

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
    return v1 + 0x4f93;
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
    char * v3 = (char *)(v1 + 0x4efb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s503r2.c
// Address range: 0x11a0 - 0x151f
// Line range:    316 - 345
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e68)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    char v4 = *(char *)(v2 + 0x4e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x4e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e65), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x4e70); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6a), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x4e72); // 0x12a8
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6f), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x4e74); // 0x12cb
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e74), v1);
    char v9 = *(char *)(v2 + 0x4e76); // 0x12f1
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e79), v1);
    char v10 = *(char *)(v2 + 0x4e77); // 0x1314
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7e), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x4e78); // 0x1337
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4ea0); // 0x135a
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4ea4); // 0x137c
    transparent_crc(v13, (char *)(v2 + 0x2e8d), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x4e7a); // 0x139e
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e92), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x4e7c); // 0x13c1
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e80); // 0x13e7
    transparent_crc(v16, (char *)(v2 + 0x2e9c), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x4ea8); // 0x1409
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea2), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x4e84); // 0x142c
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ea8), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x4e86); // 0x144f
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eae), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e88); // 0x1475
    transparent_crc(v20, (char *)(v2 + 0x2eb4), v1);
    unsigned char v21 = *(char *)(v2 + 0x4e8c); // 0x1497
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2eba), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4e90); // 0x14ba
    transparent_crc(v22, (char *)(v2 + 0x2ec0), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x4e94); // 0x14dc
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e98), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1520 - 0x1525
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1520
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1530 - 0x15d8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15aa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1571
        while (v1 != 0) {
            // 0x1577
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15b5
        int32_t v5; // 0x1530
        *(int32_t *)(v5 + 0x4b1d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s503r2.c
// Address range: 0x15e0 - 0x2fa5
// Line range:    58 - 309
int32_t func_1(void) {
    // 0x2f97
    set_var(0xc170cd5, 0, 0x5697, -0x7508, -25, 4, 0, 1, 5, 0, 0, -7, -0x7651, -0x8c5b41, 0, -9, 2, 1, -35, -0x45ed2614, -10);
    return -0x1ffa;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fb0 - 0x300f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2fb0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2fb0
    if (v1 != 0) {
        // 0x2fe4
        printf((char *)(v1 + 0x10bc));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3010 - 0x3044
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3010
    int32_t v1; // 0x3010
    printf((char *)(v1 + 0x107f));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s503r2.c
// Address range: 0x3050 - 0x3180
// Line range:    48 - 50
int32_t set_var(int32_t g_5_l, char g_10_l, int16_t g_11_l, int16_t g_12_l, int16_t g_13_l, int16_t g_14_l, char g_26_l, char g_42_l, int16_t g_47_l, int32_t g_49_l, int32_t g_50_l, int16_t g_51_l, int16_t g_95_l, int32_t g_128_l, int16_t g_137_l, int16_t g_140_l, int16_t g_144_l, int32_t g_145_l, char g_150_l, int32_t g_156_l, int16_t g_158_l) {
    // 0x3050
    int32_t v1; // 0x3050
    *(int32_t *)(v1 + (int32_t)&g1 + 32) = (int32_t)g_10_l;
    *(char *)(v1 + (int32_t)&g1 + 36) = (char)g_11_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 38) = g_12_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 40) = g_13_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 42) = g_14_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 44) = (int16_t)g_26_l;
    *(char *)(v1 + (int32_t)&g1 + 46) = g_42_l;
    *(char *)(v1 + (int32_t)&g1 + 47) = (char)g_47_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 48) = (int16_t)g_49_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 88) = g_50_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 92) = (int32_t)g_51_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 50) = g_95_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 52) = (int16_t)g_128_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 56) = (int32_t)g_137_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 96) = g_140_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 60) = g_144_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 62) = (int16_t)g_145_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 64) = (int32_t)g_150_l;
    *(char *)(v1 + (int32_t)&g1 + 68) = (char)g_156_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 72) = (int32_t)g_158_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3180 - 0x3200
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3180
    int32_t v1; // 0x3180
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3200 - 0x3244
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3200
    int32_t v1; // 0x3200
    int32_t * v2 = (int32_t *)(v1 + 0x2e3b); // 0x3213
    uint32_t v3 = *v2; // 0x3213
    char v4; // 0x3200
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2e4f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3244 - 0x325c
int32_t _fini(void) {
    // 0x3244
    int32_t v1; // 0x3244
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

