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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_13_l, int16_t g_14_l, int16_t g_23_l, int16_t g_43_l, char g_44_l, int32_t g_46_l, char g_47_l, int32_t g_48_l, char g_49_l, int32_t g_52_l, int32_t g_54_l, int32_t g_55_l, int16_t g_56_l, int16_t g_63_l, int32_t g_66_l, char g_76_l, int32_t g_83_l, int32_t g_84_l, int32_t g_164_l, int16_t g_167_l, int32_t g_168_l, int32_t g_176_l, int32_t g_178_l, int16_t g_180_l, int32_t g_201_l, int32_t g_249_l, int32_t g_253_l, int32_t g_264_l, int32_t g_274_l, int32_t g_275_l, int32_t g_279_l);
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
    return v1 + 0x3fcb;
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
    char * v3 = (char *)(v1 + 0x3f33); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x11a0 - 0x16cd
// Line range:    318 - 360
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eea)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    char v6 = *(char *)(v2 + 0x3e74); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e68), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3e76); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6d), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x3e78); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e72), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e7a); // 0x12e9
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e77), v1);
    char v10 = *(char *)(v2 + 0x3e7c); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7c), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x132f
    transparent_crc(v11, (char *)(v2 + 0x1e81), v1);
    char v12 = *(char *)(v2 + 0x3e84); // 0x1351
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e86), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e88); // 0x1374
    transparent_crc(v13, (char *)(v2 + 0x1e8b), v1);
    char v14 = *(char *)(v2 + 0x3e8c); // 0x1396
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e90), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3ed8); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 0x1e95), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e90); // 0x13db
    transparent_crc(v16, (char *)(v2 + 0x1e9a), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e94); // 0x13fd
    transparent_crc(v17, (char *)(v2 + 0x1e9f), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e98); // 0x141f
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1ea4), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3edc); // 0x1445
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1ea9), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3ee0); // 0x1468
    transparent_crc(v20, (char *)(v2 + 0x1eae), v1);
    unsigned char v21 = *(char *)(v2 + 0x3e9a); // 0x148a
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1eb3), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3ee4); // 0x14ad
    transparent_crc(v22, (char *)(v2 + 0x1eb8), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3e9c); // 0x14cf
    transparent_crc(v23, (char *)(v2 + 0x1ebd), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x3ea0); // 0x14f1
    transparent_crc(v24, (char *)(v2 + 0x1ec2), v1);
    int16_t v25 = *(int16_t *)(v2 + 0x3ea4); // 0x1513
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ec8), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x3ea8); // 0x1536
    transparent_crc(v26, (char *)(v2 + 0x1ece), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x3eac); // 0x1558
    transparent_crc(v27, (char *)(v2 + 0x1ed4), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x3eb0); // 0x157a
    transparent_crc(v28, (char *)(v2 + 0x1eda), v1);
    uint16_t v29 = *(int16_t *)(v2 + 0x3eb4); // 0x159c
    transparent_crc((int32_t)v29, (char *)(v2 + 0x1ee0), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x3eb8); // 0x15bf
    transparent_crc(v30, (char *)(v2 + 0x1ee6), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x3ebc); // 0x15e1
    transparent_crc(v31, (char *)(v2 + 0x1eec), v1);
    int32_t v32 = *(int32_t *)(v2 + 0x3ec0); // 0x1603
    transparent_crc(v32, (char *)(v2 + 0x1ef2), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x3ec4); // 0x1625
    transparent_crc(v33, (char *)(v2 + 0x1ef8), v1);
    int32_t v34 = *(int32_t *)(v2 + 0x3ec8); // 0x1647
    transparent_crc(v34, (char *)(v2 + 0x1efe), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x3ecc); // 0x1669
    transparent_crc(v35, (char *)(v2 + 0x1f04), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x3ee8); // 0x168b
    transparent_crc(v36, (char *)(v2 + 0x1f0a), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ed0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x16d0 - 0x16d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x16d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16e0 - 0x1788
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x175a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1721
        while (v1 != 0) {
            // 0x1727
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1765
        int32_t v5; // 0x16e0
        *(int32_t *)(v5 + 0x39ad + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x1790 - 0x2b90
// Line range:    71 - 311
int16_t func_1(void) {
    // 0x1790
    set_var(-9, 0, -0x381cda2, 94, -0x1f76, -1, 0x66da, 4, -0x154d22d4, -28, 0x5c6a8b5f, 20, 0, 9, 1, -0x5c30, 0, 0, 90, 0, -0xb3ffc6f, 0x6e04528, 0x6763, -0x56347ac1, 1, -0x381cda2, -1, 1, -0x3470abec, -1, 0, 6, 4, 0);
    return 0x6810;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b90 - 0x2bef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2b90
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2b90
    if (v1 != 0) {
        // 0x2bc4
        printf((char *)(v1 + 1312));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2bf0 - 0x2c24
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2bf0
    int32_t v1; // 0x2bf0
    printf((char *)(v1 + 1251));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s492r2.c
// Address range: 0x2c30 - 0x2e08
// Line range:    61 - 63
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_13_l, int16_t g_14_l, int16_t g_23_l, int16_t g_43_l, char g_44_l, int32_t g_46_l, char g_47_l, int32_t g_48_l, char g_49_l, int32_t g_52_l, int32_t g_54_l, int32_t g_55_l, int16_t g_56_l, int16_t g_63_l, int32_t g_66_l, char g_76_l, int32_t g_83_l, int32_t g_84_l, int32_t g_164_l, int16_t g_167_l, int32_t g_168_l, int32_t g_176_l, int32_t g_178_l, int16_t g_180_l, int32_t g_201_l, int32_t g_249_l, int32_t g_253_l, int32_t g_264_l, int32_t g_274_l, int32_t g_275_l, int32_t g_279_l) {
    // 0x2c30
    int32_t v1; // 0x2c30
    *(int32_t *)(v1 + 0x23dc) = g_3_l;
    *(int32_t *)(v1 + 0x23e0) = g_6_l;
    *(int32_t *)(v1 + 0x23e4) = (int32_t)g_13_l;
    *(char *)(v1 + 0x23e8) = (char)g_14_l;
    *(int16_t *)(v1 + 0x23ea) = g_23_l;
    *(int16_t *)(v1 + 0x23ec) = g_43_l;
    *(int16_t *)(v1 + 0x23ee) = (int16_t)g_44_l;
    *(char *)(v1 + 0x23f0) = (char)g_46_l;
    *(int32_t *)(v1 + 0x23f4) = (int32_t)g_47_l;
    *(char *)(v1 + 0x23f8) = (char)g_48_l;
    *(int32_t *)(v1 + 0x23fc) = (int32_t)g_49_l;
    *(char *)(v1 + 0x2400) = (char)g_52_l;
    *(int32_t *)(v1 + 0x244c) = g_54_l;
    *(int32_t *)(v1 + 0x2404) = g_55_l;
    *(int32_t *)(v1 + 0x2408) = (int32_t)g_56_l;
    *(int16_t *)(v1 + 0x240c) = g_63_l;
    *(int16_t *)(v1 + 0x2450) = (int16_t)g_66_l;
    *(int32_t *)(v1 + 0x2454) = (int32_t)g_76_l;
    *(char *)(v1 + 0x240e) = (char)g_83_l;
    *(int32_t *)(v1 + 0x2458) = g_84_l;
    *(int32_t *)(v1 + 0x2410) = g_164_l;
    *(int32_t *)(v1 + 0x2414) = (int32_t)g_167_l;
    *(int16_t *)(v1 + 0x2418) = (int16_t)g_168_l;
    *(int32_t *)(v1 + 0x241c) = g_176_l;
    *(int32_t *)(v1 + 0x2420) = g_178_l;
    *(int32_t *)(v1 + 0x2424) = (int32_t)g_180_l;
    *(int16_t *)(v1 + 0x2428) = (int16_t)g_201_l;
    *(int32_t *)(v1 + 0x242c) = g_249_l;
    *(int32_t *)(v1 + 0x2430) = g_253_l;
    *(int32_t *)(v1 + 0x2434) = g_264_l;
    *(int32_t *)(v1 + 0x2438) = g_274_l;
    *(int32_t *)(v1 + 0x243c) = g_275_l;
    *(int32_t *)(v1 + 0x2440) = g_279_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e10 - 0x2e90
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2e10
    int32_t v1; // 0x2e10
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e90 - 0x2ed4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2e90
    int32_t v1; // 0x2e90
    int32_t * v2 = (int32_t *)(v1 + 0x21e3); // 0x2ea3
    uint32_t v3 = *v2; // 0x2ea3
    char v4; // 0x2e90
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x21ff + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2ed4 - 0x2eec
int32_t _fini(void) {
    // 0x2ed4
    int32_t v1; // 0x2ed4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

