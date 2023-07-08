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
int16_t func_1(void);
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
int32_t set_var(int16_t g_10_l, int32_t g_11_l, char g_12_l, int32_t g_15_l, int32_t g_42_l, int32_t g_43_l, int32_t g_48_l, char g_74_l, int16_t g_80_l, int16_t g_87_l, int16_t g_116_l, int32_t g_117_l, int16_t g_118_l, int16_t g_133_l, int32_t g_134_l, char g_154_l, char g_180_l, int32_t g_193_l, int32_t g_195_l, int32_t g_198_l);
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
    return v1 + 0x3f9f;
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
    char * v3 = (char *)(v1 + 0x3f07); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s429retdec.c
// Address range: 0x11a0 - 0x14ef
// Line range:    198 - 226
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e64)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e61), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e70); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    unsigned char v10 = *(char *)(v2 + 0x3e84); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e86); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e84), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e88); // 0x1350
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e89), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e8a); // 0x1373
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3eac); // 0x1396
    transparent_crc(v14, (char *)(v2 + 0x1e94), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x3e8c); // 0x13b8
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9a), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e8e); // 0x13de
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e90); // 0x1401
    transparent_crc(v17, (char *)(v2 + 0x1ea6), v1);
    char v18 = *(char *)(v2 + 0x3e94); // 0x1423
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eac), v1);
    char v19 = *(char *)(v2 + 0x3e95); // 0x1446
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb2), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e98); // 0x1469
    transparent_crc(v20, (char *)(v2 + 0x1eb8), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e9c); // 0x148b
    transparent_crc(v21, (char *)(v2 + 0x1ebe), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3ea0); // 0x14ad
    transparent_crc(v22, (char *)(v2 + 0x1ec4), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14f0 - 0x14f5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1500 - 0x15a8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x157a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1541
        while (v1 != 0) {
            // 0x1547
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1585
        int32_t v5; // 0x1500
        *(int32_t *)(v5 + 0x3b51 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s429retdec.c
// Address range: 0x15b0 - 0x258b
// Line range:    57 - 191
int16_t func_1(void) {
    // 0x15b0
    set_var(-0x494f, -0x1fcc3ddb, 18, 183, 1, 1, 44, -29, 0x57c2, 3, 2291, 0, 0x5964, 3, -1, 3, -7, -1, 0x1c0a70e4, -0x7b6a5d8c);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2590 - 0x25ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2590
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2590
    if (v1 != 0) {
        // 0x25c4
        printf((char *)(v1 + 2778));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x25f0 - 0x2624
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x25f0
    int32_t v1; // 0x25f0
    printf((char *)(v1 + 2717));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s429retdec.c
// Address range: 0x2630 - 0x2745
// Line range:    47 - 49
int32_t set_var(int16_t g_10_l, int32_t g_11_l, char g_12_l, int32_t g_15_l, int32_t g_42_l, int32_t g_43_l, int32_t g_48_l, char g_74_l, int16_t g_80_l, int16_t g_87_l, int16_t g_116_l, int32_t g_117_l, int16_t g_118_l, int16_t g_133_l, int32_t g_134_l, char g_154_l, char g_180_l, int32_t g_193_l, int32_t g_195_l, int32_t g_198_l) {
    // 0x2630
    int32_t v1; // 0x2630
    *(int16_t *)(v1 + 0x29dc) = (int16_t)g_11_l;
    *(int32_t *)(v1 + 0x29e0) = (int32_t)g_12_l;
    *(char *)(v1 + 0x29e4) = (char)g_15_l;
    *(int32_t *)(v1 + 0x29e8) = g_42_l;
    *(int32_t *)(v1 + 0x29ec) = g_43_l;
    *(int32_t *)(v1 + 0x29f0) = g_48_l;
    *(int32_t *)(v1 + 0x29f4) = (int32_t)g_74_l;
    *(char *)(v1 + 0x29f8) = (char)g_80_l;
    *(int16_t *)(v1 + 0x29fa) = g_87_l;
    *(int16_t *)(v1 + 0x29fc) = g_116_l;
    *(int16_t *)(v1 + 0x29fe) = (int16_t)g_117_l;
    *(int32_t *)(v1 + 0x2a20) = (int32_t)g_118_l;
    *(int16_t *)(v1 + 0x2a00) = g_133_l;
    *(int16_t *)(v1 + 0x2a02) = (int16_t)g_134_l;
    *(int32_t *)(v1 + 0x2a04) = (int32_t)g_154_l;
    *(char *)(v1 + 0x2a08) = g_180_l;
    *(char *)(v1 + 0x2a09) = (char)g_193_l;
    *(int32_t *)(v1 + 0x2a0c) = g_195_l;
    *(int32_t *)(v1 + 0x2a10) = g_198_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2750 - 0x27d0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2750
    int32_t v1; // 0x2750
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27d0 - 0x2814
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x27d0
    int32_t v1; // 0x27d0
    int32_t * v2 = (int32_t *)(v1 + 0x2877); // 0x27e3
    uint32_t v3 = *v2; // 0x27e3
    char v4; // 0x27d0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2883 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2814 - 0x282c
int32_t _fini(void) {
    // 0x2814
    int32_t v1; // 0x2814
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

