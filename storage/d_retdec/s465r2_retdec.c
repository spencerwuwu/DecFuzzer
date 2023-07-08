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
int32_t set_var(int16_t g_7_l, int32_t g_13_l, int16_t g_20_l, int16_t g_21_l, int32_t g_22_l, int32_t g_23_l, int32_t g_25_l, int16_t g_46_l, char g_55_l, char g_60_l, int32_t g_77_l, char g_80_l, int32_t g_92_l, int16_t g_95_l, int32_t g_152_l, char g_164_l, char g_174_l, int32_t g_195_l, char g_288_l, int32_t g_289_l, char g_307_l, int16_t g_342_l, int32_t g_347_l, int16_t g_348_l, int32_t g_389_l, char g_421_l, int32_t g_423_l, char g_456_l, int32_t g_457_l, char g_458_l, int32_t g_585_l, int32_t g_644_l, int32_t g_652_l, int32_t g_653_l, char g_655_l, int32_t g_687_l, int32_t g_727_l, char g_765_l, int32_t g_766_l, int32_t g_934_l, int32_t g_951_l, char g_1023_l, char g_1042_l);
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
    return v1 + 0x8fdb;
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
    char * v3 = (char *)(v1 + 0x8f43); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465r2.c
// Address range: 0x11a0 - 0x181a
// Line range:    637 - 688
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x6ee7)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x8e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x6e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x8e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x6e60), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x8e70); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x6e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x8ee8); // 0x1285
    transparent_crc((int32_t)v6, (char *)(v2 + 0x6e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x8e74); // 0x12a8
    transparent_crc(v7, (char *)(v2 + 0x6e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x8e78); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x6e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x8eec); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x6e79), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x8e7c); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x6e7e), v1);
    unsigned char v11 = *(char *)(v2 + 0x8e7e); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x6e83), v1);
    char v12 = *(char *)(v2 + 0x8e7f); // 0x1354
    transparent_crc((int32_t)v12, (char *)(v2 + 0x6e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x8ef0); // 0x1377
    transparent_crc(v13, (char *)(v2 + 0x6e8d), v1);
    unsigned char v14 = *(char *)(v2 + 0x8e80); // 0x1399
    transparent_crc((int32_t)v14, (char *)(v2 + 0x6e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x8e84); // 0x13be
    transparent_crc(v15, (char *)(v2 + 0x6e97), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x8e88); // 0x13e0
    transparent_crc((int32_t)v16, (char *)(v2 + 0x6e9c), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x8e8c); // 0x1406
    transparent_crc(v17, (char *)(v2 + 0x6ea1), v1);
    unsigned char v18 = *(char *)(v2 + 0x8e90); // 0x1428
    transparent_crc((int32_t)v18, (char *)(v2 + 0x6ea7), v1);
    char v19 = *(char *)(v2 + 0x8e91); // 0x144d
    transparent_crc((int32_t)v19, (char *)(v2 + 0x6ead), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x8e94); // 0x1470
    transparent_crc(v20, (char *)(v2 + 0x6eb3), v1);
    char v21 = *(char *)(v2 + 0x8e98); // 0x1492
    transparent_crc((int32_t)v21, (char *)(v2 + 0x6eb9), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x8e9c); // 0x14b5
    transparent_crc(v22, (char *)(v2 + 0x6ebf), v1);
    unsigned char v23 = *(char *)(v2 + 0x8ea0); // 0x14d7
    transparent_crc((int32_t)v23, (char *)(v2 + 0x6ec5), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x8ea2); // 0x14fc
    transparent_crc((int32_t)v24, (char *)(v2 + 0x6ecb), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x8ea4); // 0x151f
    transparent_crc(v25, (char *)(v2 + 0x6ed1), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x8ea8); // 0x1541
    transparent_crc((int32_t)v26, (char *)(v2 + 0x6ed7), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x8ef4); // 0x1567
    transparent_crc(v27, (char *)(v2 + 0x6edd), v1);
    unsigned char v28 = *(char *)(v2 + 0x8eaa); // 0x1589
    transparent_crc((int32_t)v28, (char *)(v2 + 0x6ee3), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x8eac); // 0x15ac
    transparent_crc(v29, (char *)(v2 + 0x6ee9), v1);
    char v30 = *(char *)(v2 + 0x8ef8); // 0x15ce
    transparent_crc((int32_t)v30, (char *)(v2 + 0x6eef), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x8eb0); // 0x15f1
    transparent_crc(v31, (char *)(v2 + 0x6ef5), v1);
    unsigned char v32 = *(char *)(v2 + 0x8eb4); // 0x1613
    transparent_crc((int32_t)v32, (char *)(v2 + 0x6efb), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x8eb8); // 0x1636
    transparent_crc(v33, (char *)(v2 + 0x6f01), v1);
    int32_t v34 = *(int32_t *)(v2 + 0x8ebc); // 0x1658
    transparent_crc(v34, (char *)(v2 + 0x6f07), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x8ec0); // 0x167a
    transparent_crc(v35, (char *)(v2 + 0x6f0d), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x8ec4); // 0x169c
    transparent_crc(v36, (char *)(v2 + 0x6f13), v1);
    unsigned char v37 = *(char *)(v2 + 0x8ec8); // 0x16be
    transparent_crc((int32_t)v37, (char *)(v2 + 0x6f19), v1);
    int32_t v38 = *(int32_t *)(v2 + 0x8efc); // 0x16e3
    transparent_crc(v38, (char *)(v2 + 0x6f1f), v1);
    int32_t v39 = *(int32_t *)(v2 + 0x8ecc); // 0x1705
    transparent_crc(v39, (char *)(v2 + 0x6f25), v1);
    char v40 = *(char *)(v2 + 0x8ed0); // 0x1727
    transparent_crc((int32_t)v40, (char *)(v2 + 0x6f2b), v1);
    int32_t v41 = *(int32_t *)(v2 + 0x8ed4); // 0x174c
    transparent_crc(v41, (char *)(v2 + 0x6f31), v1);
    int32_t v42 = *(int32_t *)(v2 + 0x8ed8); // 0x176e
    transparent_crc(v42, (char *)(v2 + 0x6f37), v1);
    int32_t v43 = *(int32_t *)(v2 + 0x8f00); // 0x1790
    transparent_crc(v43, (char *)(v2 + 0x6f3d), v1);
    unsigned char v44 = *(char *)(v2 + 0x8edc); // 0x17b2
    transparent_crc((int32_t)v44, (char *)(v2 + 0x6f43), v1);
    unsigned char v45 = *(char *)(v2 + 0x8edd); // 0x17d7
    transparent_crc((int32_t)v45, (char *)(v2 + 0x6f4a), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x8ee0), v1);
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
        *(int32_t *)(v5 + 0x8875 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465r2.c
// Address range: 0x18e0 - 0x6e06
// Line range:    80 - 630
int32_t func_1(void) {
    // 0x18e0
    set_var(-2, -10, 0x4aee, 0, -1, 0x1d77f173, 0, 3925, 67, -105, 0, -108, -0x313e2044, -7, -3, -20, -122, 1, -97, 5, -60, -1, -0x36b9fe1f, -0x2f1b, 0, -24, -0x23120c21, 0, -2, 64, 0x6916e97d, 7, 1, 1, 75, 0, -1, 4, -1, -4, 0, 38, -1);
    return -0xcd55510;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6e10 - 0x6e6f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x6e10
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x6e10
    if (v1 != 0) {
        // 0x6e44
        printf((char *)(v1 + 0x12e1));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x6e70 - 0x6ea4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x6e70
    int32_t v1; // 0x6e70
    printf((char *)(v1 + 0x12a4));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465r2.c
// Address range: 0x6eb0 - 0x712a
// Line range:    70 - 72
int32_t set_var(int16_t g_7_l, int32_t g_13_l, int16_t g_20_l, int16_t g_21_l, int32_t g_22_l, int32_t g_23_l, int32_t g_25_l, int16_t g_46_l, char g_55_l, char g_60_l, int32_t g_77_l, char g_80_l, int32_t g_92_l, int16_t g_95_l, int32_t g_152_l, char g_164_l, char g_174_l, int32_t g_195_l, char g_288_l, int32_t g_289_l, char g_307_l, int16_t g_342_l, int32_t g_347_l, int16_t g_348_l, int32_t g_389_l, char g_421_l, int32_t g_423_l, char g_456_l, int32_t g_457_l, char g_458_l, int32_t g_585_l, int32_t g_644_l, int32_t g_652_l, int32_t g_653_l, char g_655_l, int32_t g_687_l, int32_t g_727_l, char g_765_l, int32_t g_766_l, int32_t g_934_l, int32_t g_951_l, char g_1023_l, char g_1042_l) {
    // 0x6eb0
    int32_t v1; // 0x6eb0
    *(int16_t *)(v1 + 0x315c) = (int16_t)g_13_l;
    *(int32_t *)(v1 + 0x3160) = (int32_t)g_20_l;
    *(int16_t *)(v1 + 0x3164) = g_21_l;
    *(int16_t *)(v1 + 0x31dc) = (int16_t)g_22_l;
    *(int32_t *)(v1 + 0x3168) = g_23_l;
    *(int32_t *)(v1 + 0x316c) = g_25_l;
    *(int32_t *)(v1 + 0x31e0) = (int32_t)g_46_l;
    *(int16_t *)(v1 + 0x3170) = (int16_t)g_55_l;
    *(char *)(v1 + 0x3172) = g_60_l;
    *(char *)(v1 + 0x3173) = (char)g_77_l;
    *(int32_t *)(v1 + 0x31e4) = (int32_t)g_80_l;
    *(char *)(v1 + 0x3174) = (char)g_92_l;
    *(int32_t *)(v1 + 0x3178) = (int32_t)g_95_l;
    *(int16_t *)(v1 + 0x317c) = (int16_t)g_152_l;
    *(int32_t *)(v1 + 0x3180) = (int32_t)g_164_l;
    *(char *)(v1 + 0x3184) = g_174_l;
    *(char *)(v1 + 0x3185) = (char)g_195_l;
    *(int32_t *)(v1 + 0x3188) = (int32_t)g_288_l;
    *(char *)(v1 + 0x318c) = (char)g_289_l;
    *(int32_t *)(v1 + 0x3190) = (int32_t)g_307_l;
    *(char *)(v1 + 0x3194) = (char)g_342_l;
    *(int16_t *)(v1 + 0x3196) = (int16_t)g_347_l;
    *(int32_t *)(v1 + 0x3198) = (int32_t)g_348_l;
    *(int16_t *)(v1 + 0x319c) = (int16_t)g_389_l;
    *(int32_t *)(v1 + 0x31e8) = (int32_t)g_421_l;
    *(char *)(v1 + 0x319e) = (char)g_423_l;
    *(int32_t *)(v1 + 0x31a0) = (int32_t)g_456_l;
    *(char *)(v1 + 0x31ec) = (char)g_457_l;
    *(int32_t *)(v1 + 0x31a4) = (int32_t)g_458_l;
    *(char *)(v1 + 0x31a8) = (char)g_585_l;
    *(int32_t *)(v1 + 0x31ac) = g_644_l;
    *(int32_t *)(v1 + 0x31b0) = g_652_l;
    *(int32_t *)(v1 + 0x31b4) = g_653_l;
    *(int32_t *)(v1 + 0x31b8) = (int32_t)g_655_l;
    *(char *)(v1 + 0x31bc) = (char)g_687_l;
    *(int32_t *)(v1 + 0x31f0) = g_727_l;
    *(int32_t *)(v1 + 0x31c0) = (int32_t)g_765_l;
    *(char *)(v1 + 0x31c4) = (char)g_766_l;
    *(int32_t *)(v1 + 0x31c8) = g_934_l;
    *(int32_t *)(v1 + 0x31cc) = g_951_l;
    *(int32_t *)(v1 + 0x31f4) = (int32_t)g_1023_l;
    *(char *)(v1 + 0x31d0) = g_1042_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7130 - 0x71b0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x7130
    int32_t v1; // 0x7130
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x71b0 - 0x71f4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x71b0
    int32_t v1; // 0x71b0
    int32_t * v2 = (int32_t *)(v1 + 0x2ed3); // 0x71c3
    uint32_t v3 = *v2; // 0x71c3
    char v4; // 0x71b0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2ef7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x71f4 - 0x720c
int32_t _fini(void) {
    // 0x71f4
    int32_t v1; // 0x71f4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

