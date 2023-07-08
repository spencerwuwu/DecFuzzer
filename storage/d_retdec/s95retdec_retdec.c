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
int32_t set_var(int32_t g_26_l, int32_t g_27_l, int32_t g_42_l, int32_t g_67_l, int32_t g_81_l, int16_t g_83_l, int32_t g_84_l, int32_t g_92_l, int32_t g_103_l, int16_t g_106_l, int32_t g_135_l, int16_t g_212_l, int32_t g_251_l, int16_t g_266_l, int16_t g_267_l, char g_268_l, int32_t g_270_l, int16_t g_322_l, int32_t g_332_l, int32_t g_338_l, int32_t g_363_l, int16_t g_364_l, char g_365_l, int16_t g_366_l, int32_t g_395_l, int32_t g_397_l, int16_t g_399_l, char g_418_l, char g_420_l, int16_t g_472_l, int16_t g_475_l, int32_t g_525_l, int16_t g_541_l, int32_t g_562_l, int16_t g_577_l, int32_t g_585_l, int32_t g_586_l, int16_t g_587_l, int16_t g_603_l, char g_611_l, int32_t g_620_l, int16_t g_623_l, int16_t g_657_l, char g_688_l, char g_740_l, int16_t g_785_l, int32_t g_810_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0xf06d47d; // 0x26ac
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x8fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x8f68); // 0x1090
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
    return v1 + 0x8ff3;
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
    char * v3 = (char *)(v1 + 0x8f5b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s95retdec.c
// Address range: 0x11a0 - 0x18a5
// Line range:    604 - 659
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x6f42)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x8f00); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x6e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x8e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x6e61), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x8e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x6e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x8e70); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x6e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x8e74); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x6e70), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x8e78); // 0x12c4
    transparent_crc((int32_t)v8, (char *)(v2 + 0x6e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x8f04); // 0x12e7
    transparent_crc(v9, (char *)(v2 + 0x6e7a), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x8e7c); // 0x1309
    transparent_crc(v10, (char *)(v2 + 0x6e7f), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x8e80); // 0x132b
    transparent_crc(v11, (char *)(v2 + 0x6e84), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x8e84); // 0x134d
    transparent_crc((int32_t)v12, (char *)(v2 + 0x6e8a), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x8e88); // 0x1370
    transparent_crc(v13, (char *)(v2 + 0x6e90), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x8e8c); // 0x1392
    transparent_crc((int32_t)v14, (char *)(v2 + 0x6e96), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x8e90); // 0x13b5
    transparent_crc(v15, (char *)(v2 + 0x6e9c), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x8e94); // 0x13d7
    transparent_crc((int32_t)v16, (char *)(v2 + 0x6ea2), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x8e96); // 0x13fa
    transparent_crc((int32_t)v17, (char *)(v2 + 0x6ea8), v1);
    char v18 = *(char *)(v2 + 0x8e98); // 0x1420
    transparent_crc((int32_t)v18, (char *)(v2 + 0x6eae), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x8e9c); // 0x1443
    transparent_crc(v19, (char *)(v2 + 0x6eb4), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x8ea0); // 0x1465
    transparent_crc((int32_t)v20, (char *)(v2 + 0x6eba), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x8ea4); // 0x1488
    transparent_crc(v21, (char *)(v2 + 0x6ec0), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x8ea8); // 0x14aa
    transparent_crc(v22, (char *)(v2 + 0x6ec6), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x8eac); // 0x14cc
    transparent_crc(v23, (char *)(v2 + 0x6ecc), v1);
    int16_t v24 = *(int16_t *)(v2 + 0x8eb0); // 0x14ee
    transparent_crc((int32_t)v24, (char *)(v2 + 0x6ed2), v1);
    char v25 = *(char *)(v2 + 0x8eb2); // 0x1514
    transparent_crc((int32_t)v25, (char *)(v2 + 0x6ed8), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x8eb4); // 0x1539
    transparent_crc((int32_t)v26, (char *)(v2 + 0x6ede), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x8eb8); // 0x155c
    transparent_crc(v27, (char *)(v2 + 0x6ee4), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x8ebc); // 0x157e
    transparent_crc(v28, (char *)(v2 + 0x6eea), v1);
    uint16_t v29 = *(int16_t *)(v2 + 0x8ec0); // 0x15a0
    transparent_crc((int32_t)v29, (char *)(v2 + 0x6ef0), v1);
    char v30 = *(char *)(v2 + 0x8ec2); // 0x15c3
    transparent_crc((int32_t)v30, (char *)(v2 + 0x6ef6), v1);
    unsigned char v31 = *(char *)(v2 + 0x8ec3); // 0x15e6
    transparent_crc((int32_t)v31, (char *)(v2 + 0x6efc), v1);
    uint16_t v32 = *(int16_t *)(v2 + 0x8ec4); // 0x160b
    transparent_crc((int32_t)v32, (char *)(v2 + 0x6f02), v1);
    uint16_t v33 = *(int16_t *)(v2 + 0x8f08); // 0x162e
    transparent_crc((int32_t)v33, (char *)(v2 + 0x6f08), v1);
    int32_t v34 = *(int32_t *)(v2 + 0x8ec8); // 0x1651
    transparent_crc(v34, (char *)(v2 + 0x6f0e), v1);
    uint16_t v35 = *(int16_t *)(v2 + 0x8ecc); // 0x1673
    transparent_crc((int32_t)v35, (char *)(v2 + 0x6f14), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x8ed0); // 0x1696
    transparent_crc(v36, (char *)(v2 + 0x6f1a), v1);
    uint16_t v37 = *(int16_t *)(v2 + 0x8ed4); // 0x16b8
    transparent_crc((int32_t)v37, (char *)(v2 + 0x6f20), v1);
    int32_t v38 = *(int32_t *)(v2 + 0x8ed8); // 0x16db
    transparent_crc(v38, (char *)(v2 + 0x6f26), v1);
    int32_t v39 = *(int32_t *)(v2 + 0x8edc); // 0x16fd
    transparent_crc(v39, (char *)(v2 + 0x6f2c), v1);
    int16_t v40 = *(int16_t *)(v2 + 0x8ee0); // 0x171f
    transparent_crc((int32_t)v40, (char *)(v2 + 0x6f32), v1);
    int16_t v41 = *(int16_t *)(v2 + 0x8ee2); // 0x1745
    transparent_crc((int32_t)v41, (char *)(v2 + 0x6f38), v1);
    char v42 = *(char *)(v2 + 0x8ee4); // 0x1768
    transparent_crc((int32_t)v42, (char *)(v2 + 0x6f3e), v1);
    int32_t v43 = *(int32_t *)(v2 + 0x8ee8); // 0x178d
    transparent_crc(v43, (char *)(v2 + 0x6f44), v1);
    int16_t v44 = *(int16_t *)(v2 + 0x8eec); // 0x17af
    transparent_crc((int32_t)v44, (char *)(v2 + 0x6f4a), v1);
    uint16_t v45 = *(int16_t *)(v2 + 0x8eee); // 0x17d2
    transparent_crc((int32_t)v45, (char *)(v2 + 0x6f50), v1);
    unsigned char v46 = *(char *)(v2 + 0x8ef0); // 0x17f5
    transparent_crc((int32_t)v46, (char *)(v2 + 0x6f56), v1);
    unsigned char v47 = *(char *)(v2 + 0x8ef1); // 0x181a
    transparent_crc((int32_t)v47, (char *)(v2 + 0x6f5c), v1);
    uint16_t v48 = *(int16_t *)(v2 + 0x8ef2); // 0x183d
    transparent_crc((int32_t)v48, (char *)(v2 + 0x6f62), v1);
    int32_t v49 = *(int32_t *)(v2 + 0x8ef4); // 0x1863
    transparent_crc(v49, (char *)(v2 + 0x6f68), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x8ef8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x18b0 - 0x18b5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x18b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x18c0 - 0x1968
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x193a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1901
        while (v1 != 0) {
            // 0x1907
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1945
        int32_t v5; // 0x18c0
        *(int32_t *)(v5 + 0x87ed + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s95retdec.c
// Address range: 0x1970 - 0x789b
// Line range:    84 - 597
int32_t func_1(void) {
    // 0x1970
    set_var(0, 4, 0x2b9cbadb, 0xf1b6398, 0x7f4763cd, -1, 0, 0x22f2c889, -1, -0x42e7, 0x4abd, -0x4f56, -1, -0x1079, 0x3e09, 52, -0x585c1ba2, -0x7129, -1, 14, 1, -0x5b1b, 26, -0x51a3, -0x79fe242, 0x7095, 0x7095, 8, 118, -1, 0, -0x630dfef9, -0x654e, 0x55108cfc, -1, 0x1fffc, 0x56aa0b4a, -0x522c, -7, -1, 0x4d5020aa, 1, -0x1971, -118, -3, 0x17a3, 0x3fe5b699);
    return -0x5b1b;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x78a0 - 0x78ff
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x78a0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x78a0
    if (v1 != 0) {
        // 0x78d4
        printf((char *)(v1 + 2158));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x7900 - 0x7934
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x7900
    int32_t v1; // 0x7900
    printf((char *)(v1 + 2097));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s95retdec.c
// Address range: 0x7940 - 0x7c23
// Line range:    74 - 76
int32_t set_var(int32_t g_26_l, int32_t g_27_l, int32_t g_42_l, int32_t g_67_l, int32_t g_81_l, int16_t g_83_l, int32_t g_84_l, int32_t g_92_l, int32_t g_103_l, int16_t g_106_l, int32_t g_135_l, int16_t g_212_l, int32_t g_251_l, int16_t g_266_l, int16_t g_267_l, char g_268_l, int32_t g_270_l, int16_t g_322_l, int32_t g_332_l, int32_t g_338_l, int32_t g_363_l, int16_t g_364_l, char g_365_l, int16_t g_366_l, int32_t g_395_l, int32_t g_397_l, int16_t g_399_l, char g_418_l, char g_420_l, int16_t g_472_l, int16_t g_475_l, int32_t g_525_l, int16_t g_541_l, int32_t g_562_l, int16_t g_577_l, int32_t g_585_l, int32_t g_586_l, int16_t g_587_l, int16_t g_603_l, char g_611_l, int32_t g_620_l, int16_t g_623_l, int16_t g_657_l, char g_688_l, char g_740_l, int16_t g_785_l, int32_t g_810_l) {
    // 0x7940
    int32_t v1; // 0x7940
    *(int32_t *)(v1 + (int32_t)&g1 + 184) = g_27_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 32) = g_42_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 36) = g_67_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 40) = g_81_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 44) = (int32_t)g_83_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 48) = (int16_t)g_84_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 188) = g_92_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 52) = g_103_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 56) = (int32_t)g_106_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 60) = (int16_t)g_135_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 64) = (int32_t)g_212_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 68) = (int16_t)g_251_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 72) = (int32_t)g_266_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 76) = g_267_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 78) = (int16_t)g_268_l;
    *(char *)(v1 + (int32_t)&g1 + 80) = (char)g_270_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 84) = (int32_t)g_322_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 88) = (int16_t)g_332_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 92) = g_338_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 96) = g_363_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 100) = (int32_t)g_364_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 104) = (int16_t)g_365_l;
    *(char *)(v1 + (int32_t)&g1 + 106) = (char)g_366_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 108) = (int16_t)g_395_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 112) = g_397_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 116) = (int32_t)g_399_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 120) = (int16_t)g_418_l;
    *(char *)(v1 + (int32_t)&g1 + 122) = g_420_l;
    *(char *)(v1 + (int32_t)&g1 + 123) = (char)g_472_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 124) = g_475_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 192) = (int16_t)g_525_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 128) = (int32_t)g_541_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 132) = (int16_t)g_562_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 136) = (int32_t)g_577_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 140) = (int16_t)g_585_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 144) = g_586_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 148) = (int32_t)g_587_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 152) = g_603_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 154) = (int16_t)g_611_l;
    *(char *)(v1 + (int32_t)&g1 + 156) = (char)g_620_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 160) = (int32_t)g_623_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 164) = g_657_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 166) = (int16_t)g_688_l;
    *(char *)(v1 + (int32_t)&g1 + 168) = g_740_l;
    *(char *)(v1 + (int32_t)&g1 + 169) = (char)g_785_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 170) = (int16_t)g_810_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7c30 - 0x7cb0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x7c30
    int32_t v1; // 0x7c30
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7cb0 - 0x7cf4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x7cb0
    int32_t v1; // 0x7cb0
    int32_t * v2 = (int32_t *)(v1 + 0x23eb); // 0x7cc3
    uint32_t v3 = *v2; // 0x7cc3
    char v4; // 0x7cb0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x23ff + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x7cf4 - 0x7d0c
int32_t _fini(void) {
    // 0x7cf4
    int32_t v1; // 0x7cf4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

