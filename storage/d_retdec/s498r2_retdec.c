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
int32_t set_var(char g_2_l, int16_t g_3_l, int32_t g_20_l, int16_t g_21_l, int32_t g_24_l, char g_42_l, int32_t g_63_l, int32_t g_143_l, int32_t g_228_l);
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
    return v1 + 0x3f83;
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
    char * v3 = (char *)(v1 + 0x3eeb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s498r2.c
// Address range: 0x11a0 - 0x1375
// Line range:    190 - 207
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e6c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x3e6a); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e6c); // 0x1265
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x3e70); // 0x1287
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12aa
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    char v8 = *(char *)(v2 + 0x3e78); // 0x12cc
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e7c); // 0x12ef
    transparent_crc(v9, (char *)(v2 + 0x1e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e80); // 0x1311
    transparent_crc(v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x1333
    transparent_crc(v11, (char *)(v2 + 0x1e83), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e88), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1380 - 0x1385
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1380
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1390 - 0x1438
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x140a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x13d1
        while (v1 != 0) {
            // 0x13d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1415
        int32_t v5; // 0x1390
        *(int32_t *)(v5 + 0x3ca1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s498r2.c
// Address range: 0x1440 - 0x22c4
// Line range:    46 - 183
int32_t func_1(void) {
    // 0x22b6
    set_var(1, 1, 0x2eda8ed4, 1, 1, -93, 1, 0x6f9e293f, -0x398c6467);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x22d0 - 0x232f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x22d0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x22d0
    if (v1 != 0) {
        // 0x2304
        printf((char *)(v1 + 3417));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2330 - 0x2364
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2330
    int32_t v1; // 0x2330
    printf((char *)(v1 + 3356));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s498r2.c
// Address range: 0x2370 - 0x23f5
// Line range:    36 - 38
int32_t set_var(char g_2_l, int16_t g_3_l, int32_t g_20_l, int16_t g_21_l, int32_t g_24_l, char g_42_l, int32_t g_63_l, int32_t g_143_l, int32_t g_228_l) {
    // 0x2370
    int32_t v1; // 0x2370
    *(char *)(v1 + 0x2c9c) = (char)g_3_l;
    *(int16_t *)(v1 + 0x2c9e) = (int16_t)g_20_l;
    *(int32_t *)(v1 + 0x2ca0) = (int32_t)g_21_l;
    *(int16_t *)(v1 + 0x2ca4) = (int16_t)g_24_l;
    *(int32_t *)(v1 + 0x2ca8) = (int32_t)g_42_l;
    *(char *)(v1 + 0x2cac) = (char)g_63_l;
    *(int32_t *)(v1 + 0x2cb0) = g_143_l;
    *(int32_t *)(v1 + 0x2cb4) = g_228_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2400 - 0x2480
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2400
    int32_t v1; // 0x2400
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2480 - 0x24c4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2480
    int32_t v1; // 0x2480
    int32_t * v2 = (int32_t *)(v1 + 0x2bab); // 0x2493
    uint32_t v3 = *v2; // 0x2493
    char v4; // 0x2480
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2bb3 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x24c4 - 0x24dc
int32_t _fini(void) {
    // 0x24c4
    int32_t v1; // 0x24c4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

