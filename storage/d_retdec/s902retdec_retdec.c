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
int32_t set_var(char g_2_l, int32_t g_4_l, char g_6_l, char g_19_l, int16_t g_27_l, int32_t g_35_l, int16_t g_37_l, int16_t g_38_l, int32_t g_39_l, int16_t g_80_l, char g_90_l, int32_t g_124_l, char g_132_l, int32_t g_165_l, int16_t g_182_l, int16_t g_183_l, int16_t g_220_l, int16_t g_238_l, int32_t g_246_l, int16_t g_247_l, int32_t g_254_l, int32_t g_273_l, int32_t g_340_l, int16_t g_341_l, int32_t g_452_l, int16_t g_462_l, char g_464_l, int32_t g_465_l, char g_468_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x7438
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x5fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x5f68); // 0x1090
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
    return v1 + 0x5faf;
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
    char * v3 = (char *)(v1 + 0x5f17); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s902retdec.c
// Address range: 0x11a0 - 0x1635
// Line range:    407 - 444
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3edc)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x5e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x3e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x5e6c); // 0x123f
    transparent_crc(v4, (char *)(v2 + 0x3e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x5e70); // 0x1261
    transparent_crc((int32_t)v5, (char *)(v2 + 0x3e64), v1);
    char v6 = *(char *)(v2 + 0x5e71); // 0x1284
    transparent_crc((int32_t)v6, (char *)(v2 + 0x3e68), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x5e72); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x3e6d), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x5e74); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x3e72), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x5e78); // 0x12ec
    transparent_crc((int32_t)v9, (char *)(v2 + 0x3e77), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x5e7a); // 0x1312
    transparent_crc((int32_t)v10, (char *)(v2 + 0x3e7c), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x5ebc); // 0x1335
    transparent_crc(v11, (char *)(v2 + 0x3e81), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x5e7c); // 0x1357
    transparent_crc((int32_t)v12, (char *)(v2 + 0x3e86), v1);
    unsigned char v13 = *(char *)(v2 + 0x5e7e); // 0x137a
    transparent_crc((int32_t)v13, (char *)(v2 + 0x3e8b), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x5e80); // 0x139f
    transparent_crc(v14, (char *)(v2 + 0x3e90), v1);
    char v15 = *(char *)(v2 + 0x5e84); // 0x13c1
    transparent_crc((int32_t)v15, (char *)(v2 + 0x3e96), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x5e88); // 0x13e4
    transparent_crc(v16, (char *)(v2 + 0x3e9c), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x5e8c); // 0x1406
    transparent_crc((int32_t)v17, (char *)(v2 + 0x3ea2), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x5e8e); // 0x142c
    transparent_crc((int32_t)v18, (char *)(v2 + 0x3ea8), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x5e90); // 0x144f
    transparent_crc((int32_t)v19, (char *)(v2 + 0x3eae), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x5e92); // 0x1472
    transparent_crc((int32_t)v20, (char *)(v2 + 0x3eb4), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x5e94); // 0x1495
    transparent_crc(v21, (char *)(v2 + 0x3eba), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x5e98); // 0x14b7
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ec0), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x5e9c); // 0x14da
    transparent_crc(v23, (char *)(v2 + 0x3ec6), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x5ea0); // 0x14fc
    transparent_crc(v24, (char *)(v2 + 0x3ecc), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5ea4); // 0x151e
    transparent_crc(v25, (char *)(v2 + 0x3ed2), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x5ec0); // 0x1540
    transparent_crc((int32_t)v26, (char *)(v2 + 0x3ed8), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x5ea8); // 0x1566
    transparent_crc(v27, (char *)(v2 + 0x3ede), v1);
    int16_t v28 = *(int16_t *)(v2 + 0x5eac); // 0x1588
    transparent_crc((int32_t)v28, (char *)(v2 + 0x3ee4), v1);
    char v29 = *(char *)(v2 + 0x5eae); // 0x15ab
    transparent_crc((int32_t)v29, (char *)(v2 + 0x3eea), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x5eb0); // 0x15ce
    transparent_crc(v30, (char *)(v2 + 0x3ef0), v1);
    unsigned char v31 = *(char *)(v2 + 0x5ec2); // 0x15f0
    transparent_crc((int32_t)v31, (char *)(v2 + 0x3ef6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5eb4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1640 - 0x1645
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1640
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1650 - 0x16f8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x16ca
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1691
        while (v1 != 0) {
            // 0x1697
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16d5
        int32_t v5; // 0x1650
        *(int32_t *)(v5 + 0x5a15 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s902retdec.c
// Address range: 0x1700 - 0x3f90
// Line range:    70 - 400
char func_1(void) {
    // 0x1700
    set_var(-101, -1, -51, 4, 0x6bd7, -0x1b68295b, -6, -6, 0, -1, 40, -0x284e456c, -2, -0x3a721d04, (int16_t)&g1, -1091, -0x1c33, 6, -0x10fae651, -0x454a, -0x6ed6a65c, 6, 0x5824aa6d, 0, -0x387a1a88, -1, 23, 1, 0);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3f90 - 0x3fef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3f90
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3f90
    if (v1 != 0) {
        // 0x3fc4
        printf((char *)(v1 + 0x110c));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3ff0 - 0x4024
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3ff0
    int32_t v1; // 0x3ff0
    printf((char *)(v1 + 0x10cf));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s902retdec.c
// Address range: 0x4030 - 0x41c0
// Line range:    60 - 62
int32_t set_var(char g_2_l, int32_t g_4_l, char g_6_l, char g_19_l, int16_t g_27_l, int32_t g_35_l, int16_t g_37_l, int16_t g_38_l, int32_t g_39_l, int16_t g_80_l, char g_90_l, int32_t g_124_l, char g_132_l, int32_t g_165_l, int16_t g_182_l, int16_t g_183_l, int16_t g_220_l, int16_t g_238_l, int32_t g_246_l, int16_t g_247_l, int32_t g_254_l, int32_t g_273_l, int32_t g_340_l, int16_t g_341_l, int32_t g_452_l, int16_t g_462_l, char g_464_l, int32_t g_465_l, char g_468_l) {
    // 0x4030
    int32_t v1; // 0x4030
    *(char *)(v1 + 0x2fdc) = (char)g_4_l;
    *(int32_t *)(v1 + 0x2fe0) = (int32_t)g_6_l;
    *(char *)(v1 + 0x2fe4) = g_19_l;
    *(char *)(v1 + 0x2fe5) = (char)g_27_l;
    *(int16_t *)(v1 + 0x2fe6) = (int16_t)g_35_l;
    *(int32_t *)(v1 + 0x2fe8) = (int32_t)g_37_l;
    *(int16_t *)(v1 + 0x2fec) = g_38_l;
    *(int16_t *)(v1 + 0x2fee) = (int16_t)g_39_l;
    *(int32_t *)(v1 + 0x3030) = (int32_t)g_80_l;
    *(int16_t *)(v1 + 0x2ff0) = (int16_t)g_90_l;
    *(char *)(v1 + 0x2ff2) = (char)g_124_l;
    *(int32_t *)(v1 + 0x2ff4) = (int32_t)g_132_l;
    *(char *)(v1 + 0x2ff8) = (char)g_165_l;
    *(int32_t *)(v1 + 0x2ffc) = (int32_t)g_182_l;
    *(int16_t *)(v1 + 0x3000) = g_183_l;
    *(int16_t *)(v1 + 0x3002) = g_220_l;
    *(int16_t *)(v1 + 0x3004) = g_238_l;
    *(int16_t *)(v1 + 0x3006) = (int16_t)g_246_l;
    *(int32_t *)(v1 + 0x3008) = (int32_t)g_247_l;
    *(int16_t *)(v1 + 0x300c) = (int16_t)g_254_l;
    *(int32_t *)(v1 + 0x3010) = g_273_l;
    *(int32_t *)(v1 + 0x3014) = g_340_l;
    *(int32_t *)(v1 + 0x3018) = (int32_t)g_341_l;
    *(int16_t *)(v1 + 0x3034) = (int16_t)g_452_l;
    *(int32_t *)(v1 + 0x301c) = (int32_t)g_462_l;
    *(int16_t *)(v1 + 0x3020) = (int16_t)g_464_l;
    *(char *)(v1 + 0x3022) = (char)g_465_l;
    *(int32_t *)(v1 + 0x3024) = (int32_t)g_468_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x41c0 - 0x4240
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x41c0
    int32_t v1; // 0x41c0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4240 - 0x4284
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4240
    int32_t v1; // 0x4240
    int32_t * v2 = (int32_t *)(v1 + 0x2e17); // 0x4253
    uint32_t v3 = *v2; // 0x4253
    char v4; // 0x4240
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2e27 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x4284 - 0x429c
int32_t _fini(void) {
    // 0x4284
    int32_t v1; // 0x4284
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

