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
int32_t set_var(char g_4_l, char g_10_l, char g_11_l, char g_12_l, char g_15_l, int32_t g_57_l, int32_t g_68_l, int16_t g_81_l, int16_t g_83_l, int16_t g_85_l, int32_t g_91_l, char g_122_l, char g_125_l, int32_t g_138_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s873r2.c
// Address range: 0x11a0 - 0x1424
// Line range:    201 - 223
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e68)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x3e90); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e68); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    char v5 = *(char *)(v2 + 0x3e69); // 0x1260
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e6a); // 0x1285
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    unsigned char v7 = *(char *)(v2 + 0x3e6b); // 0x12aa
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e6c); // 0x12cd
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e70); // 0x12ef
    transparent_crc(v9, (char *)(v2 + 0x1e79), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e74); // 0x1311
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e76); // 0x1334
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e78); // 0x1357
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e7c); // 0x137a
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    char v14 = *(char *)(v2 + 0x3e80); // 0x139c
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e92), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e81); // 0x13bf
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e98), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e84); // 0x13e2
    transparent_crc(v16, (char *)(v2 + 0x1e9e), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e88), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1430 - 0x1435
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1430
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1440 - 0x14e8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14ba
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1481
        while (v1 != 0) {
            // 0x1487
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x14c5
        int32_t v5; // 0x1440
        *(int32_t *)(v5 + 0x3bf5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s873r2.c
// Address range: 0x14f0 - 0x2160
// Line range:    55 - 194
int32_t func_1(void) {
    // 0x1bf7
    set_var(0, 49, -44, -42, 49, -0x57174775, 0x922b85a, 1, 0x29b2, -0x438a, 1, 116, 12, -3);
    return -3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2160 - 0x21bf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2160
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2160
    if (v1 != 0) {
        // 0x2194
        printf((char *)(v1 + 3812));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x21c0 - 0x21f4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x21c0
    int32_t v1; // 0x21c0
    printf((char *)(v1 + 3751));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s873r2.c
// Address range: 0x2200 - 0x22c4
// Line range:    45 - 47
int32_t set_var(char g_4_l, char g_10_l, char g_11_l, char g_12_l, char g_15_l, int32_t g_57_l, int32_t g_68_l, int16_t g_81_l, int16_t g_83_l, int16_t g_85_l, int32_t g_91_l, char g_122_l, char g_125_l, int32_t g_138_l) {
    // 0x2200
    int32_t v1; // 0x2200
    *(char *)(v1 + 0x2e34) = g_10_l;
    *(char *)(v1 + 0x2e0c) = g_11_l;
    *(char *)(v1 + 0x2e0d) = g_12_l;
    *(char *)(v1 + 0x2e0e) = g_15_l;
    *(char *)(v1 + 0x2e0f) = (char)g_57_l;
    *(int32_t *)(v1 + 0x2e10) = g_68_l;
    *(int32_t *)(v1 + 0x2e14) = (int32_t)g_81_l;
    *(int16_t *)(v1 + 0x2e18) = g_83_l;
    *(int16_t *)(v1 + 0x2e1a) = g_85_l;
    *(int16_t *)(v1 + 0x2e1c) = (int16_t)g_91_l;
    *(int32_t *)(v1 + 0x2e20) = (int32_t)g_122_l;
    *(char *)(v1 + 0x2e24) = g_125_l;
    *(char *)(v1 + 0x2e25) = (char)g_138_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x22d0 - 0x2350
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x22d0
    int32_t v1; // 0x22d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2350 - 0x2394
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2350
    int32_t v1; // 0x2350
    int32_t * v2 = (int32_t *)(v1 + 0x2cdb); // 0x2363
    uint32_t v3 = *v2; // 0x2363
    char v4; // 0x2350
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2ce7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2394 - 0x23ac
int32_t _fini(void) {
    // 0x2394
    int32_t v1; // 0x2394
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

