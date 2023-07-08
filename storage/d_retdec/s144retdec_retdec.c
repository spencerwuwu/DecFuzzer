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
int32_t set_var(int32_t g_2_l, int32_t g_6_l, int16_t g_22_l, int16_t g_23_l, int32_t g_46_l, char g_61_l, int16_t g_62_l, char g_112_l, int32_t g_141_l, int32_t g_142_l, char g_160_l, char g_161_l, int32_t g_165_l, char g_166_l, char g_167_l, int32_t g_169_l, char g_170_l, char g_171_l, int32_t g_197_l, int32_t g_199_l, int32_t g_272_l, int32_t g_289_l, int16_t g_290_l, int32_t g_291_l, int32_t g_336_l, int32_t g_414_l, char g_439_l, char g_464_l, char g_465_l, char g_466_l, int16_t g_495_l, char g_496_l, int32_t g_497_l, int32_t g_539_l, int16_t g_542_l, int32_t g_585_l, char g_593_l, int32_t g_594_l, char g_610_l, int32_t g_611_l, int32_t g_612_l, int32_t g_613_l, int16_t g_616_l);
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
    return v1 + 0x3fe7;
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
    char * v3 = (char *)(v1 + 0x3f4f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s144retdec.c
// Address range: 0x11a0 - 0x1813
// Line range:    482 - 533
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1f41)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3ef4); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e6c); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e64), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e6e); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e70); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    unsigned char v8 = *(char *)(v2 + 0x3e74); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e73), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e76); // 0x12e9
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e78), v1);
    unsigned char v10 = *(char *)(v2 + 0x3e78); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e7c); // 0x1331
    transparent_crc(v11, (char *)(v2 + 0x1e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e80); // 0x1353
    transparent_crc(v12, (char *)(v2 + 0x1e89), v1);
    char v13 = *(char *)(v2 + 0x3e84); // 0x1375
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8f), v1);
    char v14 = *(char *)(v2 + 0x3e85); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e95), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e88); // 0x13bd
    transparent_crc(v15, (char *)(v2 + 0x1e9b), v1);
    char v16 = *(char *)(v2 + 0x3ef8); // 0x13df
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea1), v1);
    char v17 = *(char *)(v2 + 0x3e8c); // 0x1402
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea7), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e90); // 0x1425
    transparent_crc(v18, (char *)(v2 + 0x1ead), v1);
    char v19 = *(char *)(v2 + 0x3e94); // 0x1447
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb3), v1);
    unsigned char v20 = *(char *)(v2 + 0x3e95); // 0x146a
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb9), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e98); // 0x148d
    transparent_crc(v21, (char *)(v2 + 0x1ebf), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3e9c); // 0x14af
    transparent_crc(v22, (char *)(v2 + 0x1ec5), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3ea0); // 0x14d1
    transparent_crc(v23, (char *)(v2 + 0x1ecb), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x3ea4); // 0x14f3
    transparent_crc(v24, (char *)(v2 + 0x1ed1), v1);
    int16_t v25 = *(int16_t *)(v2 + 0x3ea8); // 0x1515
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ed7), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x3eac); // 0x1538
    transparent_crc(v26, (char *)(v2 + 0x1edd), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x3eb0); // 0x155a
    transparent_crc(v27, (char *)(v2 + 0x1ee3), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x3eb4); // 0x157c
    transparent_crc(v28, (char *)(v2 + 0x1ee9), v1);
    unsigned char v29 = *(char *)(v2 + 0x3eb8); // 0x159e
    transparent_crc((int32_t)v29, (char *)(v2 + 0x1eef), v1);
    char v30 = *(char *)(v2 + 0x3eb9); // 0x15c3
    transparent_crc((int32_t)v30, (char *)(v2 + 0x1ef5), v1);
    char v31 = *(char *)(v2 + 0x3eba); // 0x15e6
    transparent_crc((int32_t)v31, (char *)(v2 + 0x1efb), v1);
    unsigned char v32 = *(char *)(v2 + 0x3ebb); // 0x1609
    transparent_crc((int32_t)v32, (char *)(v2 + 0x1f01), v1);
    int16_t v33 = *(int16_t *)(v2 + 0x3ebc); // 0x162e
    transparent_crc((int32_t)v33, (char *)(v2 + 0x1f07), v1);
    char v34 = *(char *)(v2 + 0x3ebe); // 0x1654
    transparent_crc((int32_t)v34, (char *)(v2 + 0x1f0d), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x3ec0); // 0x1677
    transparent_crc(v35, (char *)(v2 + 0x1f13), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x3ec4); // 0x1699
    transparent_crc(v36, (char *)(v2 + 0x1f19), v1);
    uint16_t v37 = *(int16_t *)(v2 + 0x3ec8); // 0x16bb
    transparent_crc((int32_t)v37, (char *)(v2 + 0x1f1f), v1);
    int32_t v38 = *(int32_t *)(v2 + 0x3ecc); // 0x16de
    transparent_crc(v38, (char *)(v2 + 0x1f25), v1);
    char v39 = *(char *)(v2 + 0x3ed0); // 0x1700
    transparent_crc((int32_t)v39, (char *)(v2 + 0x1f2b), v1);
    int32_t v40 = *(int32_t *)(v2 + 0x3ed4); // 0x1723
    transparent_crc(v40, (char *)(v2 + 0x1f31), v1);
    char v41 = *(char *)(v2 + 0x3ed8); // 0x1745
    transparent_crc((int32_t)v41, (char *)(v2 + 0x1f37), v1);
    int32_t v42 = *(int32_t *)(v2 + 0x3edc); // 0x176a
    transparent_crc(v42, (char *)(v2 + 0x1f3d), v1);
    int32_t v43 = *(int32_t *)(v2 + 0x3ee0); // 0x178c
    transparent_crc(v43, (char *)(v2 + 0x1f43), v1);
    int32_t v44 = *(int32_t *)(v2 + 0x3ee4); // 0x17ae
    transparent_crc(v44, (char *)(v2 + 0x1f49), v1);
    uint16_t v45 = *(int16_t *)(v2 + 0x3ee8); // 0x17d0
    transparent_crc((int32_t)v45, (char *)(v2 + 0x1f4f), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eec), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1820 - 0x1825
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1820
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1830 - 0x18d8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x18aa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1871
        while (v1 != 0) {
            // 0x1877
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x18b5
        int32_t v5; // 0x1830
        *(int32_t *)(v5 + 0x386d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s144retdec.c
// Address range: 0x18e0 - 0x26a3
// Line range:    80 - 475
int32_t func_1(void) {
    // 0x18e0
    set_var(-0x7da185a, 248, 0, -0x3994, 0, 0, 0, -7, -0x60f5e8b1, -8, 100, 1, 0x2228373b, 0, 63, 7, 85, 120, 0x7402c094, 0x7c5b9951, 1, 0x4404513e, -2892, 0x782e8e32, -1, 3, 3, 1, 72, 79, -0x2370, -7, -0x35b1661e, -1, 2, 6, 1, 7, -3, 0x58ef8428, -5, -0x2dcf18e4, 0x7b7a);
    return -0x7da185a;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x26b0 - 0x270f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x26b0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x26b0
    if (v1 != 0) {
        // 0x26e4
        printf((char *)(v1 + 2629));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2710 - 0x2744
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2710
    int32_t v1; // 0x2710
    printf((char *)(v1 + 2568));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s144retdec.c
// Address range: 0x2750 - 0x29ca
// Line range:    70 - 72
int32_t set_var(int32_t g_2_l, int32_t g_6_l, int16_t g_22_l, int16_t g_23_l, int32_t g_46_l, char g_61_l, int16_t g_62_l, char g_112_l, int32_t g_141_l, int32_t g_142_l, char g_160_l, char g_161_l, int32_t g_165_l, char g_166_l, char g_167_l, int32_t g_169_l, char g_170_l, char g_171_l, int32_t g_197_l, int32_t g_199_l, int32_t g_272_l, int32_t g_289_l, int16_t g_290_l, int32_t g_291_l, int32_t g_336_l, int32_t g_414_l, char g_439_l, char g_464_l, char g_465_l, char g_466_l, int16_t g_495_l, char g_496_l, int32_t g_497_l, int32_t g_539_l, int16_t g_542_l, int32_t g_585_l, char g_593_l, int32_t g_594_l, char g_610_l, int32_t g_611_l, int32_t g_612_l, int32_t g_613_l, int16_t g_616_l) {
    // 0x2750
    int32_t v1; // 0x2750
    *(int32_t *)(v1 + 0x28bc) = g_6_l;
    *(int32_t *)(v1 + 0x2948) = (int32_t)g_22_l;
    *(int16_t *)(v1 + 0x28c0) = g_23_l;
    *(int16_t *)(v1 + 0x28c2) = (int16_t)g_46_l;
    *(int32_t *)(v1 + 0x28c4) = (int32_t)g_61_l;
    *(char *)(v1 + 0x28c8) = (char)g_62_l;
    *(int16_t *)(v1 + 0x28ca) = (int16_t)g_112_l;
    *(char *)(v1 + 0x28cc) = (char)g_141_l;
    *(int32_t *)(v1 + 0x28d0) = g_142_l;
    *(int32_t *)(v1 + 0x28d4) = (int32_t)g_160_l;
    *(char *)(v1 + 0x28d8) = g_161_l;
    *(char *)(v1 + 0x28d9) = (char)g_165_l;
    *(int32_t *)(v1 + 0x28dc) = (int32_t)g_166_l;
    *(char *)(v1 + 0x294c) = g_167_l;
    *(char *)(v1 + 0x28e0) = (char)g_169_l;
    *(int32_t *)(v1 + 0x28e4) = (int32_t)g_170_l;
    *(char *)(v1 + 0x28e8) = g_171_l;
    *(char *)(v1 + 0x28e9) = (char)g_197_l;
    *(int32_t *)(v1 + 0x28ec) = g_199_l;
    *(int32_t *)(v1 + 0x28f0) = g_272_l;
    *(int32_t *)(v1 + 0x28f4) = g_289_l;
    *(int32_t *)(v1 + 0x28f8) = (int32_t)g_290_l;
    *(int16_t *)(v1 + 0x28fc) = (int16_t)g_291_l;
    *(int32_t *)(v1 + 0x2900) = g_336_l;
    *(int32_t *)(v1 + 0x2904) = g_414_l;
    *(int32_t *)(v1 + 0x2908) = (int32_t)g_439_l;
    *(char *)(v1 + 0x290c) = g_464_l;
    *(char *)(v1 + 0x290d) = g_465_l;
    *(char *)(v1 + 0x290e) = g_466_l;
    *(char *)(v1 + 0x290f) = (char)g_495_l;
    *(int16_t *)(v1 + 0x2910) = (int16_t)g_496_l;
    *(char *)(v1 + 0x2912) = (char)g_497_l;
    *(int32_t *)(v1 + 0x2914) = g_539_l;
    *(int32_t *)(v1 + 0x2918) = (int32_t)g_542_l;
    *(int16_t *)(v1 + 0x291c) = (int16_t)g_585_l;
    *(int32_t *)(v1 + 0x2920) = (int32_t)g_593_l;
    *(char *)(v1 + 0x2924) = (char)g_594_l;
    *(int32_t *)(v1 + 0x2928) = (int32_t)g_610_l;
    *(char *)(v1 + 0x292c) = (char)g_611_l;
    *(int32_t *)(v1 + 0x2930) = g_612_l;
    *(int32_t *)(v1 + 0x2934) = g_613_l;
    *(int32_t *)(v1 + 0x2938) = (int32_t)g_616_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29d0 - 0x2a50
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x29d0
    int32_t v1; // 0x29d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a50 - 0x2a94
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2a50
    int32_t v1; // 0x2a50
    int32_t * v2 = (int32_t *)(v1 + 0x263f); // 0x2a63
    uint32_t v3 = *v2; // 0x2a63
    char v4; // 0x2a50
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x264f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2a94 - 0x2aac
int32_t _fini(void) {
    // 0x2a94
    int32_t v1; // 0x2a94
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

