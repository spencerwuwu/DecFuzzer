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
int32_t set_var(int16_t g_11_l, char g_14_l, int16_t g_17_l, int16_t g_18_l, char g_19_l, char g_20_l, char g_21_l, int32_t g_23_l, int16_t g_38_l, int32_t g_47_l, char g_48_l, int32_t g_49_l);
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
    return *(int32_t *)(v1 + 0x2fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x2f68); // 0x1090
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
    return v1 + 0x2f83;
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
    char * v3 = (char *)(v1 + 0x2eeb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s826retdec.c
// Address range: 0x11a0 - 0x13df
// Line range:    114 - 134
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3679)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x2e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 3676), v1);
    unsigned char v4 = *(char *)(v2 + 0x2e6a); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 3681), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x2e6c); // 0x1260
    transparent_crc((int32_t)v5, (char *)(v2 + 3686), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x2e6e); // 0x1283
    transparent_crc((int32_t)v6, (char *)(v2 + 3691), v1);
    char v7 = *(char *)(v2 + 0x2e70); // 0x12a6
    transparent_crc((int32_t)v7, (char *)(v2 + 3696), v1);
    char v8 = *(char *)(v2 + 0x2e71); // 0x12cb
    transparent_crc((int32_t)v8, (char *)(v2 + 3701), v1);
    char v9 = *(char *)(v2 + 0x2e72); // 0x12ee
    transparent_crc((int32_t)v9, (char *)(v2 + 3706), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2e74); // 0x1313
    transparent_crc(v10, (char *)(v2 + 3711), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x2e78); // 0x1335
    transparent_crc((int32_t)v11, (char *)(v2 + 3716), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x2e7c); // 0x1358
    transparent_crc(v12, (char *)(v2 + 3721), v1);
    unsigned char v13 = *(char *)(v2 + 0x2e80); // 0x137a
    transparent_crc((int32_t)v13, (char *)(v2 + 3726), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x2e84); // 0x139d
    transparent_crc(v14, (char *)(v2 + 3731), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e88), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13e0 - 0x13e5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13f0 - 0x1498
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x146a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1431
        while (v1 != 0) {
            // 0x1437
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1475
        int32_t v5; // 0x13f0
        *(int32_t *)(v5 + 0x2c41 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s826retdec.c
// Address range: 0x14a0 - 0x19eb
// Line range:    49 - 107
int32_t func_1(void) {
    // 0x14a0
    set_var(-0x741f, 0, 0, -0x7fc7, -1, 1, -10, 0x2bb2c592, 1, 0x5a5285b5, 18, 1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x19f0 - 0x1a4f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x19f0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x19f0
    if (v1 != 0) {
        // 0x1a24
        printf((char *)(v1 + 1608));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1a50 - 0x1a84
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1a50
    int32_t v1; // 0x1a50
    printf((char *)(v1 + 1547));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s826retdec.c
// Address range: 0x1a90 - 0x1b3f
// Line range:    39 - 41
int32_t set_var(int16_t g_11_l, char g_14_l, int16_t g_17_l, int16_t g_18_l, char g_19_l, char g_20_l, char g_21_l, int32_t g_23_l, int16_t g_38_l, int32_t g_47_l, char g_48_l, int32_t g_49_l) {
    // 0x1a90
    int32_t v1; // 0x1a90
    *(int16_t *)(v1 + 0x257c) = (int16_t)g_14_l;
    *(char *)(v1 + 0x257e) = (char)g_17_l;
    *(int16_t *)(v1 + 0x2580) = g_18_l;
    *(int16_t *)(v1 + 0x2582) = (int16_t)g_19_l;
    *(char *)(v1 + 0x2584) = g_20_l;
    *(char *)(v1 + 0x2585) = g_21_l;
    *(char *)(v1 + 0x2586) = (char)g_23_l;
    *(int32_t *)(v1 + 0x2588) = (int32_t)g_38_l;
    *(int16_t *)(v1 + 0x258c) = (int16_t)g_47_l;
    *(int32_t *)(v1 + 0x2590) = (int32_t)g_48_l;
    *(char *)(v1 + 0x2594) = (char)g_49_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1b40 - 0x1bc0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1b40
    int32_t v1; // 0x1b40
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1bc0 - 0x1c04
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1bc0
    int32_t v1; // 0x1bc0
    int32_t * v2 = (int32_t *)(v1 + 0x246b); // 0x1bd3
    uint32_t v3 = *v2; // 0x1bd3
    char v4; // 0x1bc0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2473 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x1c04 - 0x1c1c
int32_t _fini(void) {
    // 0x1c04
    int32_t v1; // 0x1c04
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

