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
int32_t set_var(char g_13_l, char g_14_l, char g_15_l, char g_20_l, int32_t g_34_l, int16_t g_69_l, int32_t g_70_l, int16_t g_75_l, char g_77_l, int16_t g_96_l, int32_t g_101_l, int32_t g_124_l, char g_143_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, char g_209_l, char g_220_l, int32_t g_230_l, int32_t g_231_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280retdec.c
// Address range: 0x11a0 - 0x14fb
// Line range:    236 - 264
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e92)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e69); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e61), v1);
    char v5 = *(char *)(v2 + 0x3e6a); // 0x1262
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e66), v1);
    char v6 = *(char *)(v2 + 0x3e6b); // 0x1285
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e6c); // 0x12a8
    transparent_crc(v7, (char *)(v2 + 0x1e70), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x3e70); // 0x12ca
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e74); // 0x12ed
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3e78); // 0x130f
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e7a); // 0x1335
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e84), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e7c); // 0x135a
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e89), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e80); // 0x1380
    transparent_crc(v13, (char *)(v2 + 0x1e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e84); // 0x13a2
    transparent_crc(v14, (char *)(v2 + 0x1e94), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e88); // 0x13c4
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9a), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e8c); // 0x13e7
    transparent_crc(v16, (char *)(v2 + 0x1ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3ea4); // 0x1409
    transparent_crc(v17, (char *)(v2 + 0x1ea6), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e90); // 0x142b
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eac), v1);
    unsigned char v19 = *(char *)(v2 + 0x3e92); // 0x1451
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb2), v1);
    char v20 = *(char *)(v2 + 0x3e93); // 0x1474
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb8), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e94); // 0x1497
    transparent_crc(v21, (char *)(v2 + 0x1ebe), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3e98); // 0x14b9
    transparent_crc(v22, (char *)(v2 + 0x1ec4), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e9c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1500 - 0x1505
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1500
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1510 - 0x15b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x158a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1551
        while (v1 != 0) {
            // 0x1557
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1595
        int32_t v5; // 0x1510
        *(int32_t *)(v5 + 0x3b39 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280retdec.c
// Address range: 0x15c0 - 0x255c
// Line range:    57 - 228
char func_1(void) {
    // 0x15c0
    set_var(120, -1, 0, 0, 0, 1, 0, 1, -1, -1, -1, -0x605fd185, -9, -3, 0, -0x4934, 7, 89, -0x77356680, 0x40c7b233);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2560 - 0x25bf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2560
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2560
    if (v1 != 0) {
        // 0x2594
        printf((char *)(v1 + 2826));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x25c0 - 0x25f4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x25c0
    int32_t v1; // 0x25c0
    printf((char *)(v1 + 2765));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s280retdec.c
// Address range: 0x2600 - 0x270f
// Line range:    47 - 49
int32_t set_var(char g_13_l, char g_14_l, char g_15_l, char g_20_l, int32_t g_34_l, int16_t g_69_l, int32_t g_70_l, int16_t g_75_l, char g_77_l, int16_t g_96_l, int32_t g_101_l, int32_t g_124_l, char g_143_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, char g_209_l, char g_220_l, int32_t g_230_l, int32_t g_231_l) {
    // 0x2600
    int32_t v1; // 0x2600
    *(char *)(v1 + 0x2a0c) = g_14_l;
    *(char *)(v1 + 0x2a0d) = g_15_l;
    *(char *)(v1 + 0x2a0e) = g_20_l;
    *(char *)(v1 + 0x2a0f) = (char)g_34_l;
    *(int32_t *)(v1 + 0x2a10) = (int32_t)g_69_l;
    *(int16_t *)(v1 + 0x2a14) = (int16_t)g_70_l;
    *(int32_t *)(v1 + 0x2a18) = (int32_t)g_75_l;
    *(int16_t *)(v1 + 0x2a1c) = (int16_t)g_77_l;
    *(char *)(v1 + 0x2a1e) = (char)g_96_l;
    *(int16_t *)(v1 + 0x2a20) = (int16_t)g_101_l;
    *(int32_t *)(v1 + 0x2a24) = g_124_l;
    *(int32_t *)(v1 + 0x2a28) = (int32_t)g_143_l;
    *(char *)(v1 + 0x2a2c) = (char)g_179_l;
    *(int32_t *)(v1 + 0x2a30) = g_180_l;
    *(int32_t *)(v1 + 0x2a48) = (int32_t)g_181_l;
    *(int16_t *)(v1 + 0x2a34) = (int16_t)g_209_l;
    *(char *)(v1 + 0x2a36) = g_220_l;
    *(char *)(v1 + 0x2a37) = (char)g_230_l;
    *(int32_t *)(v1 + 0x2a38) = g_231_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2710 - 0x2790
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2710
    int32_t v1; // 0x2710
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2790 - 0x27d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2790
    int32_t v1; // 0x2790
    int32_t * v2 = (int32_t *)(v1 + 0x28af); // 0x27a3
    uint32_t v3 = *v2; // 0x27a3
    char v4; // 0x2790
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x28bb + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x27d4 - 0x27ec
int32_t _fini(void) {
    // 0x27d4
    int32_t v1; // 0x27d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

