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
int32_t set_var(int16_t g_5_l, char g_6_l, int32_t g_12_l, int32_t g_13_l, int16_t g_34_l, char g_37_l, int32_t g_40_l, char g_44_l, int16_t g_68_l, int16_t g_73_l, int32_t g_75_l, char g_135_l, int32_t g_164_l, int32_t g_167_l, char g_208_l, int16_t g_217_l, char g_254_l, char g_359_l, char g_380_l, int32_t g_394_l, int32_t g_395_l, int32_t g_396_l, int16_t g_398_l, char g_433_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0x6362; // 0x324
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
    return v1 + 0x4fa7;
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
    char * v3 = (char *)(v1 + 0x4f0f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s906retdec.c
// Address range: 0x11a0 - 0x15ca
// Line range:    332 - 366
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e80)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    char v4 = *(char *)(v2 + 0x4e6a); // 0x1240
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x1263
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1285
    transparent_crc(v6, (char *)(v2 + 0x2e69), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x4eb4); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6e), v1);
    char v8 = *(char *)(v2 + 0x4e74); // 0x12ca
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12ed
    transparent_crc(v9, (char *)(v2 + 0x2e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2f1c); // 0x130f
    transparent_crc(v10, (char *)(v2 + 0x2e7d), v1);
    unsigned char v11 = *(char *)(v2 + 0x4e7c); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e82), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x4e7e); // 0x1356
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e87), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x4e80); // 0x1379
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e84); // 0x139f
    transparent_crc(v14, (char *)(v2 + 0x2e91), v1);
    char v15 = *(char *)(v2 + 0x4e88); // 0x13c1
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e96), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e8c); // 0x13e4
    transparent_crc(v16, (char *)(v2 + 0x2e9c), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e90); // 0x1406
    transparent_crc(v17, (char *)(v2 + 0x2ea2), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e94); // 0x1428
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ea8), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x4e96); // 0x144b
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eae), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e98); // 0x146e
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb4), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x2f20); // 0x1491
    transparent_crc(v21, (char *)(v2 + 0x2eba), v1);
    unsigned char v22 = *(char *)(v2 + 0x4e99); // 0x14b3
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec0), v1);
    unsigned char v23 = *(char *)(v2 + 0x4e9a); // 0x14d6
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec6), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4e9c); // 0x14fb
    transparent_crc(v24, (char *)(v2 + 0x2ecc), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ea0); // 0x151d
    transparent_crc(v25, (char *)(v2 + 0x2ed2), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4ea4); // 0x153f
    transparent_crc(v26, (char *)(v2 + 0x2ed8), v1);
    uint16_t v27 = *(int16_t *)(v2 + 0x4eb6); // 0x1561
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ede), v1);
    char v28 = *(char *)(v2 + 0x4ea8); // 0x1587
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2ee4), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15d0 - 0x15d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15e0 - 0x1688
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x165a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1621
        while (v1 != 0) {
            // 0x1627
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1665
        int32_t v5; // 0x15e0
        *(int32_t *)(v5 + 0x4a79 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s906retdec.c
// Address range: 0x1690 - 0x34d8
// Line range:    67 - 325
int32_t func_1(void) {
    int32_t result; // 0x1690
    if ((int32_t)((int64_t)(0x100000000 * (int64_t)(((int32_t)(uint16_t)(int16_t)&g1 & 255) >> 31) | (int64_t)(uint32_t)((int32_t)(uint16_t)(int16_t)&g1 & 255)) % 102) == 0) {
        // 0x1924
        set_var((int16_t)&g1, -9, 0x4320e32c, -0x5512949b, 0, 1, -6, 1, -7, -10, -0x2a55fbfc, -78, 7, -0x13d5ad3, 1, 1, -17, -4, 95, -6, -1, 0x7fcd342, 0, -1);
        result = (int32_t)(0x10000 * (int32_t)(int16_t)&g1) >> 16;
    } else {
        // 0x2feb
        set_var((int16_t)&g1, 0, 510, 85, 59, 7, -252, 1, -369, -10, -0x2a55fbfc, -78, -1, -0x21fffef7, -1, -0x77b7, -1, -4, 32, -6, -1, 0x7fcd342, 0, -1);
        result = -252;
    }
    // 0x34ca
    return result;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x34e0 - 0x353f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x34e0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x34e0
    if (v1 != 0) {
        // 0x3514
        printf((char *)(v1 + 2986));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3540 - 0x3574
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3540
    int32_t v1; // 0x3540
    printf((char *)(v1 + 2925));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s906retdec.c
// Address range: 0x3580 - 0x36c5
// Line range:    57 - 59
int32_t set_var(int16_t g_5_l, char g_6_l, int32_t g_12_l, int32_t g_13_l, int16_t g_34_l, char g_37_l, int32_t g_40_l, char g_44_l, int16_t g_68_l, int16_t g_73_l, int32_t g_75_l, char g_135_l, int32_t g_164_l, int32_t g_167_l, char g_208_l, int16_t g_217_l, char g_254_l, char g_359_l, char g_380_l, int32_t g_394_l, int32_t g_395_l, int32_t g_396_l, int16_t g_398_l, char g_433_l) {
    // 0x3580
    int32_t v1; // 0x3580
    *(int16_t *)(v1 + 0x2a8c) = (int16_t)g_6_l;
    *(char *)(v1 + 0x2a8e) = (char)g_12_l;
    *(int32_t *)(v1 + 0x2a90) = g_13_l;
    *(int32_t *)(v1 + 0x2a94) = (int32_t)g_34_l;
    *(int16_t *)(v1 + 0x2ad8) = (int16_t)g_37_l;
    *(char *)(v1 + 0x2a98) = (char)g_40_l;
    *(int32_t *)(v1 + 0x2a9c) = (int32_t)g_44_l;
    *(char *)(v1 + 0x2aa0) = (char)g_68_l;
    *(int16_t *)(v1 + 0x2aa2) = g_73_l;
    *(int16_t *)(v1 + 0x2aa4) = (int16_t)g_75_l;
    *(int32_t *)(v1 + 0x2aa8) = (int32_t)g_135_l;
    *(char *)(v1 + 0x2aac) = (char)g_164_l;
    *(int32_t *)(v1 + 0x2ab0) = g_167_l;
    *(int32_t *)(v1 + 0x2ab4) = (int32_t)g_208_l;
    *(char *)(v1 + 0x2ab8) = (char)g_217_l;
    *(int16_t *)(v1 + 0x2aba) = (int16_t)g_254_l;
    *(char *)(v1 + 0x2abc) = g_359_l;
    *(char *)(v1 + 0x2abd) = g_380_l;
    *(char *)(v1 + 0x2abe) = (char)g_394_l;
    *(int32_t *)(v1 + 0x2ac0) = g_395_l;
    *(int32_t *)(v1 + 0x2ac4) = g_396_l;
    *(int32_t *)(v1 + 0x2ac8) = (int32_t)g_398_l;
    *(int16_t *)(v1 + 0x2ada) = (int16_t)g_433_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x36d0 - 0x3750
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x36d0
    int32_t v1; // 0x36d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3750 - 0x3794
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3750
    int32_t v1; // 0x3750
    int32_t * v2 = (int32_t *)(v1 + 0x28ff); // 0x3763
    uint32_t v3 = *v2; // 0x3763
    char v4; // 0x3750
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x290b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3794 - 0x37ac
int32_t _fini(void) {
    // 0x3794
    int32_t v1; // 0x3794
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

