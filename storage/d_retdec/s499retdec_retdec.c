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
int32_t set_var(int16_t g_9_l, char g_11_l, int32_t g_32_l, int32_t g_41_l, int32_t g_46_l, int32_t g_60_l, int16_t g_62_l, int32_t g_85_l, int32_t g_90_l, int32_t g_96_l, int32_t g_101_l, int16_t g_109_l, int32_t g_134_l, int16_t g_135_l, int32_t g_138_l, int32_t g_139_l, int16_t g_142_l, char g_143_l, char g_144_l, int32_t g_149_l);
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
    return v1 + 0x3fa3;
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
    char * v3 = (char *)(v1 + 0x3f0b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s499retdec.c
// Address range: 0x11a0 - 0x14f4
// Line range:    168 - 196
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e91)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e6a); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e6c); // 0x1260
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3eb0); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e78); // 0x12e8
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e7c); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x1e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x1e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e84); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e88); // 0x1371
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e8c); // 0x1393
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e93), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e90); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 0x1e99), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e94); // 0x13db
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e98); // 0x13fe
    transparent_crc(v17, (char *)(v2 + 0x1ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e9c); // 0x1420
    transparent_crc(v18, (char *)(v2 + 0x1eab), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x3ea0); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb1), v1);
    char v20 = *(char *)(v2 + 0x3ea2); // 0x1468
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb7), v1);
    unsigned char v21 = *(char *)(v2 + 0x3ea3); // 0x148d
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1ebd), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3ea4); // 0x14b2
    transparent_crc(v22, (char *)(v2 + 0x1ec3), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea8), v1);
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
        *(int32_t *)(v5 + 0x3b45 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s499retdec.c
// Address range: 0x15c0 - 0x2179
// Line range:    57 - 161
char func_1(void) {
    // 0x1ff9
    set_var(1, -61, -1, -0xcdc19d7, 0x393632ca, 0, -0x3d21, -0x4fac557, 1, 5, 0x34a2d56a, 0x79f7, -0x77969494, 2364, 0x5044ef07, -0x3ddfd46c, -3, -124, -1, -0x28f97fd6);
    return 29;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2180 - 0x21df
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2180
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2180
    if (v1 != 0) {
        // 0x21b4
        printf((char *)(v1 + 3817));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x21e0 - 0x2214
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x21e0
    int32_t v1; // 0x21e0
    printf((char *)(v1 + 3756));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s499retdec.c
// Address range: 0x2220 - 0x2332
// Line range:    47 - 49
int32_t set_var(int16_t g_9_l, char g_11_l, int32_t g_32_l, int32_t g_41_l, int32_t g_46_l, int32_t g_60_l, int16_t g_62_l, int32_t g_85_l, int32_t g_90_l, int32_t g_96_l, int32_t g_101_l, int16_t g_109_l, int32_t g_134_l, int16_t g_135_l, int32_t g_138_l, int32_t g_139_l, int16_t g_142_l, char g_143_l, char g_144_l, int32_t g_149_l) {
    // 0x2220
    int32_t v1; // 0x2220
    *(int16_t *)(v1 + 0x2dec) = (int16_t)g_11_l;
    *(char *)(v1 + 0x2dee) = (char)g_32_l;
    *(int32_t *)(v1 + 0x2df0) = g_41_l;
    *(int32_t *)(v1 + 0x2df4) = g_46_l;
    *(int32_t *)(v1 + 0x2df8) = g_60_l;
    *(int32_t *)(v1 + 0x2e34) = (int32_t)g_62_l;
    *(int16_t *)(v1 + 0x2dfc) = (int16_t)g_85_l;
    *(int32_t *)(v1 + 0x2e00) = g_90_l;
    *(int32_t *)(v1 + 0x2e04) = g_96_l;
    *(int32_t *)(v1 + 0x2e08) = g_101_l;
    *(int32_t *)(v1 + 0x2e0c) = (int32_t)g_109_l;
    *(int16_t *)(v1 + 0x2e10) = (int16_t)g_134_l;
    *(int32_t *)(v1 + 0x2e14) = (int32_t)g_135_l;
    *(int16_t *)(v1 + 0x2e18) = (int16_t)g_138_l;
    *(int32_t *)(v1 + 0x2e1c) = g_139_l;
    *(int32_t *)(v1 + 0x2e20) = (int32_t)g_142_l;
    *(int16_t *)(v1 + 0x2e24) = (int16_t)g_143_l;
    *(char *)(v1 + 0x2e26) = g_144_l;
    *(char *)(v1 + 0x2e27) = (char)g_149_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2340 - 0x23c0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2340
    int32_t v1; // 0x2340
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23c0 - 0x2404
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x23c0
    int32_t v1; // 0x23c0
    int32_t * v2 = (int32_t *)(v1 + 0x2c8b); // 0x23d3
    uint32_t v3 = *v2; // 0x23d3
    char v4; // 0x23c0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2c97 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2404 - 0x241c
int32_t _fini(void) {
    // 0x2404
    int32_t v1; // 0x2404
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

