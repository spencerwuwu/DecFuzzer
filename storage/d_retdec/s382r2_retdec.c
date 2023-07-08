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
int32_t set_var(int32_t g_3_l, int32_t g_12_l, int32_t g_24_l, int32_t g_26_l, int32_t g_28_l, int32_t g_29_l, char g_44_l, char g_53_l, int32_t g_66_l, int32_t g_105_l, char g_109_l, char g_119_l, char g_134_l, int16_t g_135_l, int16_t g_171_l, int32_t g_172_l, int32_t g_261_l, int16_t g_338_l, int16_t g_362_l, int16_t g_368_l, int32_t g_386_l, int32_t g_396_l, int16_t g_461_l, char g_462_l, int32_t g_463_l, int16_t g_494_l, int32_t g_495_l, int16_t g_496_l, int32_t g_596_l, char g_621_l, int16_t g_694_l, char g_695_l, int16_t g_696_l, int32_t g_697_l, int16_t g_698_l, int32_t g_776_l, char g_777_l, int32_t g_779_l, int32_t g_791_l, int32_t g_843_l, int32_t g_844_l, int32_t g_846_l, int16_t g_847_l, int16_t g_848_l, char g_849_l, int16_t g_912_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 87; // 0x1236
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x7fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x7f68); // 0x1090
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
    return v1 + 0x7fdb;
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
    char * v3 = (char *)(v1 + 0x7f43); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s382r2.c
// Address range: 0x11a0 - 0x187f
// Line range:    621 - 675
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x5f04)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x7e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x5e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x7e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x5e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x7e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x5e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x7e74); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x5e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x7e78); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x5e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x7e7c); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 0x5e74), v1);
    unsigned char v9 = *(char *)(v2 + 0x7e80); // 0x12e6
    transparent_crc((int32_t)v9, (char *)(v2 + 0x5e79), v1);
    char v10 = *(char *)(v2 + 0x7e81); // 0x1309
    transparent_crc((int32_t)v10, (char *)(v2 + 0x5e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x7e84); // 0x132c
    transparent_crc(v11, (char *)(v2 + 0x5e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x7e88); // 0x134e
    transparent_crc(v12, (char *)(v2 + 0x5e88), v1);
    unsigned char v13 = *(char *)(v2 + 0x7e8c); // 0x1370
    transparent_crc((int32_t)v13, (char *)(v2 + 0x5e8e), v1);
    unsigned char v14 = *(char *)(v2 + 0x7e8d); // 0x1393
    transparent_crc((int32_t)v14, (char *)(v2 + 0x5e94), v1);
    unsigned char v15 = *(char *)(v2 + 0x7e8e); // 0x13b6
    transparent_crc((int32_t)v15, (char *)(v2 + 0x5e9a), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x7e90); // 0x13d9
    transparent_crc((int32_t)v16, (char *)(v2 + 0x5ea0), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x7e92); // 0x13fc
    transparent_crc((int32_t)v17, (char *)(v2 + 0x5ea6), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x7ee8); // 0x141f
    transparent_crc(v18, (char *)(v2 + 0x5eac), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x7e94); // 0x1441
    transparent_crc(v19, (char *)(v2 + 0x5eb2), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x7eec); // 0x1463
    transparent_crc((int32_t)v20, (char *)(v2 + 0x5eb8), v1);
    uint16_t v21 = *(int16_t *)(v2 + 0x7e98); // 0x1486
    transparent_crc((int32_t)v21, (char *)(v2 + 0x5ebe), v1);
    uint16_t v22 = *(int16_t *)(v2 + 0x7e9a); // 0x14a9
    transparent_crc((int32_t)v22, (char *)(v2 + 0x5ec4), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x7e9c); // 0x14cc
    transparent_crc(v23, (char *)(v2 + 0x5eca), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x7ea0); // 0x14ee
    transparent_crc(v24, (char *)(v2 + 0x5ed0), v1);
    int16_t v25 = *(int16_t *)(v2 + 0x7ea4); // 0x1510
    transparent_crc((int32_t)v25, (char *)(v2 + 0x5ed6), v1);
    char v26 = *(char *)(v2 + 0x7ea6); // 0x1533
    transparent_crc((int32_t)v26, (char *)(v2 + 0x5edc), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x7ea8); // 0x1556
    transparent_crc(v27, (char *)(v2 + 0x5ee2), v1);
    int16_t v28 = *(int16_t *)(v2 + 0x7eee); // 0x1578
    transparent_crc((int32_t)v28, (char *)(v2 + 0x5ee8), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x7eac); // 0x159e
    transparent_crc(v29, (char *)(v2 + 0x5eee), v1);
    uint16_t v30 = *(int16_t *)(v2 + 0x7eb0); // 0x15c0
    transparent_crc((int32_t)v30, (char *)(v2 + 0x5ef4), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x7eb4); // 0x15e6
    transparent_crc(v31, (char *)(v2 + 0x5efa), v1);
    unsigned char v32 = *(char *)(v2 + 0x7eb8); // 0x1608
    transparent_crc((int32_t)v32, (char *)(v2 + 0x5f00), v1);
    int16_t v33 = *(int16_t *)(v2 + 0x7eba); // 0x162b
    transparent_crc((int32_t)v33, (char *)(v2 + 0x5f06), v1);
    char v34 = *(char *)(v2 + 0x7ebc); // 0x1651
    transparent_crc((int32_t)v34, (char *)(v2 + 0x5f0c), v1);
    int16_t v35 = *(int16_t *)(v2 + 0x7ebe); // 0x1674
    transparent_crc((int32_t)v35, (char *)(v2 + 0x5f12), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x7ec0); // 0x169a
    transparent_crc(v36, (char *)(v2 + 0x5f18), v1);
    uint16_t v37 = *(int16_t *)(v2 + 0x7ec4); // 0x16bc
    transparent_crc((int32_t)v37, (char *)(v2 + 0x5f1e), v1);
    int32_t v38 = *(int32_t *)(v2 + 0x7ef0); // 0x16df
    transparent_crc(v38, (char *)(v2 + 0x5f24), v1);
    char v39 = *(char *)(v2 + 0x7ec6); // 0x1701
    transparent_crc((int32_t)v39, (char *)(v2 + 0x5f2a), v1);
    int32_t v40 = *(int32_t *)(v2 + 0x7ec8); // 0x1724
    transparent_crc(v40, (char *)(v2 + 0x5f30), v1);
    int32_t v41 = *(int32_t *)(v2 + 0x7ecc); // 0x1746
    transparent_crc(v41, (char *)(v2 + 0x5f36), v1);
    int32_t v42 = *(int32_t *)(v2 + 0x7ed0); // 0x1768
    transparent_crc(v42, (char *)(v2 + 0x5f3c), v1);
    int32_t v43 = *(int32_t *)(v2 + 0x7ef4); // 0x178a
    transparent_crc(v43, (char *)(v2 + 0x5f42), v1);
    int32_t v44 = *(int32_t *)(v2 + 0x7ed4); // 0x17ac
    transparent_crc(v44, (char *)(v2 + 0x5f48), v1);
    int16_t v45 = *(int16_t *)(v2 + 0x7ed8); // 0x17ce
    transparent_crc((int32_t)v45, (char *)(v2 + 0x5f4e), v1);
    int16_t v46 = *(int16_t *)(v2 + 0x7eda); // 0x17f1
    transparent_crc((int32_t)v46, (char *)(v2 + 0x5f54), v1);
    unsigned char v47 = *(char *)(v2 + 0x7edc); // 0x1814
    transparent_crc((int32_t)v47, (char *)(v2 + 0x5f5a), v1);
    uint16_t v48 = *(int16_t *)(v2 + 0x7ede); // 0x1839
    transparent_crc((int32_t)v48, (char *)(v2 + 0x5f60), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x7ee0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1880 - 0x1885
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1880
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1890 - 0x1938
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x190a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x18d1
        while (v1 != 0) {
            // 0x18d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1915
        int32_t v5; // 0x1890
        *(int32_t *)(v5 + 0x7809 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s382r2.c
// Address range: 0x1940 - 0x693f
// Line range:    83 - 614
int16_t func_1(void) {
    // 0x1940
    set_var(0x21b80082, 0, 0x64bda99d, -0xc4286e1, 8, 0x5e0c0a11, -16, 40, 0x50fade0f, -0x43033d1f, -88, 4, -38, -0x3740, -1, 0, -0x1911e9b8, 0, (int16_t)&g1, -10, -0x3fcf8830, 0x1c6b790a, 105, -1, 1, 0, 4, 4, 0x49ddb1e6, -9, 1, -55, 0x3185, 0x6476e008, 1, 0, -4, -0x7c52a939, -0x59ff865c, -10, 0, -1, -0x44fb, -4, -101, 0x565c);
    return -0x2d74;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6940 - 0x699f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x6940
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x6940
    if (v1 != 0) {
        // 0x6974
        printf((char *)(v1 + 1990));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x69a0 - 0x69d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x69a0
    int32_t v1; // 0x69a0
    printf((char *)(v1 + 1929));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s382r2.c
// Address range: 0x69e0 - 0x6ca5
// Line range:    73 - 75
int32_t set_var(int32_t g_3_l, int32_t g_12_l, int32_t g_24_l, int32_t g_26_l, int32_t g_28_l, int32_t g_29_l, char g_44_l, char g_53_l, int32_t g_66_l, int32_t g_105_l, char g_109_l, char g_119_l, char g_134_l, int16_t g_135_l, int16_t g_171_l, int32_t g_172_l, int32_t g_261_l, int16_t g_338_l, int16_t g_362_l, int16_t g_368_l, int32_t g_386_l, int32_t g_396_l, int16_t g_461_l, char g_462_l, int32_t g_463_l, int16_t g_494_l, int32_t g_495_l, int16_t g_496_l, int32_t g_596_l, char g_621_l, int16_t g_694_l, char g_695_l, int16_t g_696_l, int32_t g_697_l, int16_t g_698_l, int32_t g_776_l, char g_777_l, int32_t g_779_l, int32_t g_791_l, int32_t g_843_l, int32_t g_844_l, int32_t g_846_l, int16_t g_847_l, int16_t g_848_l, char g_849_l, int16_t g_912_l) {
    // 0x69e0
    int32_t v1; // 0x69e0
    *(int32_t *)(v1 + 0x262c) = g_12_l;
    *(int32_t *)(v1 + 0x2630) = g_24_l;
    *(int32_t *)(v1 + 0x2634) = g_26_l;
    *(int32_t *)(v1 + 0x2638) = g_28_l;
    *(int32_t *)(v1 + 0x263c) = g_29_l;
    *(int32_t *)(v1 + 0x2640) = (int32_t)g_44_l;
    *(char *)(v1 + 0x2644) = g_53_l;
    *(char *)(v1 + 0x2645) = (char)g_66_l;
    *(int32_t *)(v1 + 0x2648) = g_105_l;
    *(int32_t *)(v1 + 0x264c) = (int32_t)g_109_l;
    *(char *)(v1 + 0x2650) = g_119_l;
    *(char *)(v1 + 0x2651) = g_134_l;
    *(char *)(v1 + 0x2652) = (char)g_135_l;
    *(int16_t *)(v1 + 0x2654) = g_171_l;
    *(int16_t *)(v1 + 0x2656) = (int16_t)g_172_l;
    *(int32_t *)(v1 + 0x26ac) = g_261_l;
    *(int32_t *)(v1 + 0x2658) = (int32_t)g_338_l;
    *(int16_t *)(v1 + 0x26b0) = g_362_l;
    *(int16_t *)(v1 + 0x265c) = g_368_l;
    *(int16_t *)(v1 + 0x265e) = (int16_t)g_386_l;
    *(int32_t *)(v1 + 0x2660) = g_396_l;
    *(int32_t *)(v1 + 0x2664) = (int32_t)g_461_l;
    *(int16_t *)(v1 + 0x2668) = (int16_t)g_462_l;
    *(char *)(v1 + 0x266a) = (char)g_463_l;
    *(int32_t *)(v1 + 0x266c) = (int32_t)g_494_l;
    *(int16_t *)(v1 + 0x26b2) = (int16_t)g_495_l;
    *(int32_t *)(v1 + 0x2670) = (int32_t)g_496_l;
    *(int16_t *)(v1 + 0x2674) = (int16_t)g_596_l;
    *(int32_t *)(v1 + 0x2678) = (int32_t)g_621_l;
    *(char *)(v1 + 0x267c) = (char)g_694_l;
    *(int16_t *)(v1 + 0x267e) = (int16_t)g_695_l;
    *(char *)(v1 + 0x2680) = (char)g_696_l;
    *(int16_t *)(v1 + 0x2682) = (int16_t)g_697_l;
    *(int32_t *)(v1 + 0x2684) = (int32_t)g_698_l;
    *(int16_t *)(v1 + 0x2688) = (int16_t)g_776_l;
    *(int32_t *)(v1 + 0x26b4) = (int32_t)g_777_l;
    *(char *)(v1 + 0x268a) = (char)g_779_l;
    *(int32_t *)(v1 + 0x268c) = g_791_l;
    *(int32_t *)(v1 + 0x2690) = g_843_l;
    *(int32_t *)(v1 + 0x2694) = g_844_l;
    *(int32_t *)(v1 + 0x26b8) = g_846_l;
    *(int32_t *)(v1 + 0x2698) = (int32_t)g_847_l;
    *(int16_t *)(v1 + 0x269c) = g_848_l;
    *(int16_t *)(v1 + 0x269e) = (int16_t)g_849_l;
    *(char *)(v1 + 0x26a0) = (char)g_912_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6cb0 - 0x6d30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x6cb0
    int32_t v1; // 0x6cb0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6d30 - 0x6d74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x6d30
    int32_t v1; // 0x6d30
    int32_t * v2 = (int32_t *)(v1 + 0x2353); // 0x6d43
    uint32_t v3 = *v2; // 0x6d43
    char v4; // 0x6d30
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x236b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x6d74 - 0x6d8c
int32_t _fini(void) {
    // 0x6d74
    int32_t v1; // 0x6d74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

