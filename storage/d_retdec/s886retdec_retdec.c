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
int32_t set_var(int16_t g_2_l, int32_t g_25_l, int32_t g_73_l, int32_t g_75_l, int32_t g_76_l, char g_111_l, int16_t g_157_l, int16_t g_201_l, int32_t g_213_l, int32_t g_246_l, int16_t g_280_l, char g_325_l, int32_t g_326_l, int16_t g_329_l, int16_t g_360_l, char g_390_l, int16_t g_509_l);
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
    return v1 + 0x3f97;
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
    char * v3 = (char *)(v1 + 0x3eff); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s886retdec.c
// Address range: 0x11a0 - 0x1489
// Line range:    385 - 410
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e84)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3e7c); // 0x12c5
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e7e); // 0x12e8
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e7a), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e80); // 0x130b
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e80), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x132e
    transparent_crc(v11, (char *)(v2 + 0x1e86), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e88); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x1e8c), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x3e8c); // 0x1372
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e92), v1);
    char v14 = *(char *)(v2 + 0x3e8e); // 0x1395
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e98), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e90); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x1e9e), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3ea4); // 0x13da
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea4), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x3e94); // 0x1400
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1eaa), v1);
    unsigned char v18 = *(char *)(v2 + 0x3e96); // 0x1423
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eb0), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3e98); // 0x1446
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e9c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1490 - 0x1495
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1490
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14a0 - 0x1548
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x151a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14e1
        while (v1 != 0) {
            // 0x14e7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1525
        int32_t v5; // 0x14a0
        *(int32_t *)(v5 + 0x3ba9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s886retdec.c
// Address range: 0x1550 - 0x2916
// Line range:    58 - 378
int32_t func_1(void) {
    // 0x1550
    set_var(-1, -0x2e0f2044, -0x220b0ca3, -8, -1, 108, 0x60c0, -0x363b, 0x6997c529, 6, -0x1883, -1, 0x60f8d79e, 0, 0x2d03, -8, 6);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2920 - 0x297f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2920
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2920
    if (v1 != 0) {
        // 0x2954
        printf((char *)(v1 + 1852));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2980 - 0x29b4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2980
    int32_t v1; // 0x2980
    printf((char *)(v1 + 1791));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s886retdec.c
// Address range: 0x29c0 - 0x2ab4
// Line range:    48 - 50
int32_t set_var(int16_t g_2_l, int32_t g_25_l, int32_t g_73_l, int32_t g_75_l, int32_t g_76_l, char g_111_l, int16_t g_157_l, int16_t g_201_l, int32_t g_213_l, int32_t g_246_l, int16_t g_280_l, char g_325_l, int32_t g_326_l, int16_t g_329_l, int16_t g_360_l, char g_390_l, int16_t g_509_l) {
    // 0x29c0
    int32_t v1; // 0x29c0
    *(int16_t *)(v1 + 0x264c) = (int16_t)g_25_l;
    *(int32_t *)(v1 + 0x2650) = g_73_l;
    *(int32_t *)(v1 + 0x2654) = g_75_l;
    *(int32_t *)(v1 + 0x2658) = g_76_l;
    *(int32_t *)(v1 + 0x265c) = (int32_t)g_111_l;
    *(char *)(v1 + 0x2660) = (char)g_157_l;
    *(int16_t *)(v1 + 0x2662) = g_201_l;
    *(int16_t *)(v1 + 0x2664) = (int16_t)g_213_l;
    *(int32_t *)(v1 + 0x2668) = g_246_l;
    *(int32_t *)(v1 + 0x266c) = (int32_t)g_280_l;
    *(int16_t *)(v1 + 0x2670) = (int16_t)g_325_l;
    *(char *)(v1 + 0x2672) = (char)g_326_l;
    *(int32_t *)(v1 + 0x2674) = (int32_t)g_329_l;
    *(int16_t *)(v1 + 0x2688) = g_360_l;
    *(int16_t *)(v1 + 0x2678) = (int16_t)g_390_l;
    *(char *)(v1 + 0x267a) = (char)g_509_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ac0 - 0x2b40
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2ac0
    int32_t v1; // 0x2ac0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b40 - 0x2b84
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2b40
    int32_t v1; // 0x2b40
    int32_t * v2 = (int32_t *)(v1 + 0x24ff); // 0x2b53
    uint32_t v3 = *v2; // 0x2b53
    char v4; // 0x2b40
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x250b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2b84 - 0x2b9c
int32_t _fini(void) {
    // 0x2b84
    int32_t v1; // 0x2b84
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

