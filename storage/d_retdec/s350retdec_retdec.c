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
int32_t set_var(char g_9_l, char g_10_l, char g_12_l, int32_t g_27_l, int32_t g_29_l, int16_t g_30_l, int32_t g_34_l, int16_t g_117_l, int32_t g_119_l, int32_t g_122_l, int32_t g_125_l, char g_135_l, int32_t g_147_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 96; // 0x3088
int32_t g2 = 20; // 0x30e8
int32_t g3;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x3f8b;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x3ef3); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s350retdec.c
// Address range: 0x11a0 - 0x13fd
// Line range:    149 - 170
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e5c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5e), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e69); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e62), v1);
    char v5 = *(char *)(v2 + 0x3e6a); // 0x1260
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e67), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e6c); // 0x1283
    transparent_crc(v6, (char *)(v2 + 0x1e6c), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e70); // 0x12a5
    transparent_crc(v7, (char *)(v2 + 0x1e71), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x3e74); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e76), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e78); // 0x12ed
    transparent_crc(v9, (char *)(v2 + 0x1e7b), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e98); // 0x130f
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e80), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e7c); // 0x1332
    transparent_crc(v11, (char *)(v2 + 0x1e86), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e80); // 0x1354
    transparent_crc(v12, (char *)(v2 + 0x1e8c), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e84); // 0x1376
    transparent_crc(v13, (char *)(v2 + 0x1e92), v1);
    char v14 = *(char *)(v2 + 0x3e88); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e98), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e8c); // 0x13bb
    transparent_crc(v15, (char *)(v2 + 0x1e9e), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e90), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1400 - 0x1405
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1400
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1410 - 0x14b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x148a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1451
        while (v1 != 0) {
            // 0x1457
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1495
        int32_t v5; // 0x1410
        *(int32_t *)(v5 + 0x3c2d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s350retdec.c
// Address range: 0x14c0 - 0x1ef2
// Line range:    50 - 142
int32_t func_1(void) {
    // 0x1e05
    set_var(-4, 1, -1, 87, -0x80000000, 1, -9, 0, 0x1a35a1ef, -4, 0x1e9d581d, -1, -1);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f00 - 0x1f5f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f00
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1f00
    if (v1 != 0) {
        // 0x1f34
        printf((char *)(v1 + (int32_t)&g2 - 0x1fa4));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1f60 - 0x1f94
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1f60
    int32_t v1; // 0x1f60
    printf((char *)(v1 + (int32_t)&g1 - 0x1f81));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s350retdec.c
// Address range: 0x1fa0 - 0x2055
// Line range:    40 - 42
int32_t set_var(char g_9_l, char g_10_l, char g_12_l, int32_t g_27_l, int32_t g_29_l, int16_t g_30_l, int32_t g_34_l, int16_t g_117_l, int32_t g_119_l, int32_t g_122_l, int32_t g_125_l, char g_135_l, int32_t g_147_l) {
    // 0x1fa0
    int32_t v1; // 0x1fa0
    *(char *)(v1 + (int32_t)"147" + 32) = g_10_l;
    *(char *)(v1 + (int32_t)"147" + 33) = g_12_l;
    *(char *)(v1 + (int32_t)"147" + 34) = (char)g_27_l;
    *(int32_t *)(v1 + (int32_t)"147" + 36) = g_29_l;
    *(int32_t *)(v1 + (int32_t)"147" + 40) = (int32_t)g_30_l;
    *(int16_t *)(v1 + (int32_t)"147" + 44) = (int16_t)g_34_l;
    *(int32_t *)(v1 + (int32_t)"147" + 48) = (int32_t)g_117_l;
    *(int16_t *)(v1 + (int32_t)"147" + 80) = (int16_t)g_119_l;
    *(int32_t *)(v1 + (int32_t)"147" + 52) = g_122_l;
    *(int32_t *)(v1 + (int32_t)"147" + 56) = g_125_l;
    *(int32_t *)(v1 + (int32_t)"147" + 60) = (int32_t)g_135_l;
    *(char *)(v1 + (int32_t)"147" + 64) = (char)g_147_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2060 - 0x20e0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2060
    int32_t v1; // 0x2060
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20e0 - 0x2124
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x20e0
    int32_t v1; // 0x20e0
    int32_t * v2 = (int32_t *)(v1 + 0x2f53); // 0x20f3
    uint32_t v3 = *v2; // 0x20f3
    char v4; // 0x20e0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f5f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2124 - 0x213c
int32_t _fini(void) {
    // 0x2124
    int32_t v1; // 0x2124
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

