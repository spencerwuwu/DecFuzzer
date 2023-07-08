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
int32_t set_var(char g_6_l, int16_t g_7_l, int32_t g_17_l, int32_t g_22_l, char g_24_l, int32_t g_25_l, int16_t g_52_l, int16_t g_56_l, int16_t g_57_l, int32_t g_58_l, char g_74_l, int16_t g_107_l, char g_108_l, char g_118_l, char g_127_l, int16_t g_158_l, int32_t g_159_l, int32_t g_200_l, char g_203_l, int32_t g_204_l, int16_t g_222_l);
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
    return v1 + 0x4fa3;
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
    char * v3 = (char *)(v1 + 0x4f0b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s378r2.c
// Address range: 0x11a0 - 0x151d
// Line range:    250 - 279
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e5c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5e), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x4e6a); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e62), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x1262
    transparent_crc(v5, (char *)(v2 + 0x2e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1284
    transparent_crc(v6, (char *)(v2 + 0x2e6b), v1);
    char v7 = *(char *)(v2 + 0x4e74); // 0x12a6
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c9
    transparent_crc(v8, (char *)(v2 + 0x2e75), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x4e7c); // 0x12eb
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x4e7e); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7f), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x4e80); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e84), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e84); // 0x1357
    transparent_crc(v12, (char *)(v2 + 0x2e89), v1);
    char v13 = *(char *)(v2 + 0x4e88); // 0x1379
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8e), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x4e8a); // 0x139c
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e93), v1);
    unsigned char v15 = *(char *)(v2 + 0x4e8c); // 0x13bf
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e99), v1);
    char v16 = *(char *)(v2 + 0x4e8d); // 0x13e2
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2e9f), v1);
    char v17 = *(char *)(v2 + 0x4e8e); // 0x1405
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea5), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4e90); // 0x1428
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e94); // 0x144e
    transparent_crc(v19, (char *)(v2 + 0x2eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e98); // 0x1470
    transparent_crc(v20, (char *)(v2 + 0x2eb7), v1);
    char v21 = *(char *)(v2 + 0x4e9c); // 0x1492
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ebd), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea0); // 0x14b5
    transparent_crc(v22, (char *)(v2 + 0x2ec3), v1);
    uint16_t v23 = *(int16_t *)(v2 + 0x4ea4); // 0x14d7
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec9), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ea8), v1);
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
        *(int32_t *)(v5 + 0x4b21 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s378r2.c
// Address range: 0x15e0 - 0x2d6b
// Line range:    58 - 243
int32_t func_1(void) {
    // 0x15e0
    set_var(-35, 0, 0x53589fe5, -10, 1, -0xdc1b96e, 0x32e6, -0x5bcb, 7, 0x6770d28c, -99, -0x6a21, -1, 23, 2, -0x299f, 0x79692dff, 1, 1, 0x74cfe09a, -1);
    return 0x4692;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2d70 - 0x2dcf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2d70
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2d70
    if (v1 != 0) {
        // 0x2da4
        printf((char *)(v1 + 0x12ff));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2dd0 - 0x2e04
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2dd0
    int32_t v1; // 0x2dd0
    printf((char *)(v1 + 0x12c2));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s378r2.c
// Address range: 0x2e10 - 0x2f34
// Line range:    48 - 50
int32_t set_var(char g_6_l, int16_t g_7_l, int32_t g_17_l, int32_t g_22_l, char g_24_l, int32_t g_25_l, int16_t g_52_l, int16_t g_56_l, int16_t g_57_l, int32_t g_58_l, char g_74_l, int16_t g_107_l, char g_108_l, char g_118_l, char g_127_l, int16_t g_158_l, int32_t g_159_l, int32_t g_200_l, char g_203_l, int32_t g_204_l, int16_t g_222_l) {
    // 0x2e10
    int32_t v1; // 0x2e10
    *(char *)(v1 + 0x31fc) = (char)g_7_l;
    *(int16_t *)(v1 + 0x31fe) = (int16_t)g_17_l;
    *(int32_t *)(v1 + 0x3200) = g_22_l;
    *(int32_t *)(v1 + 0x3204) = (int32_t)g_24_l;
    *(char *)(v1 + 0x3208) = (char)g_25_l;
    *(int32_t *)(v1 + 0x320c) = (int32_t)g_52_l;
    *(int16_t *)(v1 + 0x3210) = g_56_l;
    *(int16_t *)(v1 + 0x3212) = g_57_l;
    *(int16_t *)(v1 + 0x3214) = (int16_t)g_58_l;
    *(int32_t *)(v1 + 0x3218) = (int32_t)g_74_l;
    *(char *)(v1 + 0x321c) = (char)g_107_l;
    *(int16_t *)(v1 + 0x321e) = (int16_t)g_108_l;
    *(char *)(v1 + 0x3220) = g_118_l;
    *(char *)(v1 + 0x3221) = g_127_l;
    *(char *)(v1 + 0x3222) = (char)g_158_l;
    *(int16_t *)(v1 + 0x3224) = (int16_t)g_159_l;
    *(int32_t *)(v1 + 0x3228) = g_200_l;
    *(int32_t *)(v1 + 0x322c) = (int32_t)g_203_l;
    *(char *)(v1 + 0x3230) = (char)g_204_l;
    *(int32_t *)(v1 + 0x3234) = (int32_t)g_222_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2f40 - 0x2fc0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2f40
    int32_t v1; // 0x2f40
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fc0 - 0x3004
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2fc0
    int32_t v1; // 0x2fc0
    int32_t * v2 = (int32_t *)(v1 + 0x308b); // 0x2fd3
    uint32_t v3 = *v2; // 0x2fd3
    char v4; // 0x2fc0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x3093 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3004 - 0x301c
int32_t _fini(void) {
    // 0x3004
    int32_t v1; // 0x3004
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

