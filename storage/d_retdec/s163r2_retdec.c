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
int32_t set_var(int32_t g_7_l, char g_10_l, char g_19_l, int32_t g_23_l, int32_t g_26_l, int32_t g_44_l, int16_t g_48_l, int32_t g_51_l, char g_66_l, int32_t g_75_l, char g_97_l, int32_t g_98_l, int16_t g_110_l, int16_t g_118_l, char g_144_l, char g_157_l, int32_t g_163_l, int32_t g_175_l, int16_t g_224_l, int32_t g_238_l, int32_t g_239_l, int16_t g_241_l, int32_t g_245_l, int16_t g_246_l, int32_t g_414_l, int16_t g_425_l, int16_t g_428_l, int32_t g_505_l, int16_t g_506_l, int16_t g_520_l, char g_623_l, int32_t g_625_l, int32_t g_638_l, int32_t g_639_l, char g_668_l, int32_t g_672_l, int32_t g_719_l, char g_720_l, int32_t g_721_l, int32_t g_742_l, int32_t g_757_l, int16_t g_804_l, char g_807_l, char g_808_l, int32_t g_811_l);
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
    return v1 + 0x7fe7;
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
    char * v3 = (char *)(v1 + 0x7f4f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s163r2.c
// Address range: 0x11a0 - 0x187b
// Line range:    603 - 657
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x5f61)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x7e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x5e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x7e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x5e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x7e6d); // 0x1261
    transparent_crc((int32_t)v5, (char *)(v2 + 0x5e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x7e70); // 0x1284
    transparent_crc(v6, (char *)(v2 + 0x5e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x7e74); // 0x12a6
    transparent_crc(v7, (char *)(v2 + 0x5e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x7e78); // 0x12c8
    transparent_crc(v8, (char *)(v2 + 0x5e74), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x7e7c); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x5e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x7ef4); // 0x130d
    transparent_crc(v10, (char *)(v2 + 0x5e7e), v1);
    char v11 = *(char *)(v2 + 0x7e7e); // 0x132f
    transparent_crc((int32_t)v11, (char *)(v2 + 0x5e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x7ef8); // 0x1352
    transparent_crc(v12, (char *)(v2 + 0x5e88), v1);
    char v13 = *(char *)(v2 + 0x7efc); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 0x5e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x7e80); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x5e92), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x7e84); // 0x13b9
    transparent_crc((int32_t)v15, (char *)(v2 + 0x5e97), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x7e86); // 0x13dc
    transparent_crc((int32_t)v16, (char *)(v2 + 0x5e9d), v1);
    unsigned char v17 = *(char *)(v2 + 0x7e88); // 0x13ff
    transparent_crc((int32_t)v17, (char *)(v2 + 0x5ea3), v1);
    unsigned char v18 = *(char *)(v2 + 0x7e89); // 0x1422
    transparent_crc((int32_t)v18, (char *)(v2 + 0x5ea9), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x7e8c); // 0x1445
    transparent_crc(v19, (char *)(v2 + 0x5eaf), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x7e90); // 0x1467
    transparent_crc(v20, (char *)(v2 + 0x5eb5), v1);
    int16_t v21 = *(int16_t *)(v2 + 0x7e94); // 0x1489
    transparent_crc((int32_t)v21, (char *)(v2 + 0x5ebb), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x7e98); // 0x14ac
    transparent_crc(v22, (char *)(v2 + 0x5ec1), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x7e9c); // 0x14ce
    transparent_crc(v23, (char *)(v2 + 0x5ec7), v1);
    int16_t v24 = *(int16_t *)(v2 + 0x7ea0); // 0x14f0
    transparent_crc((int32_t)v24, (char *)(v2 + 0x5ecd), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x7ea4); // 0x1513
    transparent_crc(v25, (char *)(v2 + 0x5ed3), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x7ea8); // 0x1535
    transparent_crc((int32_t)v26, (char *)(v2 + 0x5ed9), v1);
    unsigned char v27 = *(char *)(v2 + 0x5f95); // 0x1558
    transparent_crc((int32_t)v27, (char *)(v2 + 0x5edf), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x7eac); // 0x157d
    transparent_crc(v28, (char *)(v2 + 0x5ee5), v1);
    int16_t v29 = *(int16_t *)(v2 + 0x7eb0); // 0x159f
    transparent_crc((int32_t)v29, (char *)(v2 + 0x5eeb), v1);
    uint16_t v30 = *(int16_t *)(v2 + 0x7eb2); // 0x15c2
    transparent_crc((int32_t)v30, (char *)(v2 + 0x5ef1), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x7eb4); // 0x15e8
    transparent_crc(v31, (char *)(v2 + 0x5ef7), v1);
    uint16_t v32 = *(int16_t *)(v2 + 0x7efe); // 0x160a
    transparent_crc((int32_t)v32, (char *)(v2 + 0x5efd), v1);
    int16_t v33 = *(int16_t *)(v2 + 0x7eb8); // 0x1630
    transparent_crc((int32_t)v33, (char *)(v2 + 0x5f03), v1);
    char v34 = *(char *)(v2 + 0x7eba); // 0x1653
    transparent_crc((int32_t)v34, (char *)(v2 + 0x5f09), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x7ebc); // 0x1676
    transparent_crc(v35, (char *)(v2 + 0x5f0f), v1);
    int32_t v36 = *(int32_t *)(v2 + 0x7ec0); // 0x1698
    transparent_crc(v36, (char *)(v2 + 0x5f15), v1);
    int32_t v37 = *(int32_t *)(v2 + 0x7ec4); // 0x16ba
    transparent_crc(v37, (char *)(v2 + 0x5f1b), v1);
    char v38 = *(char *)(v2 + 0x7ec8); // 0x16dc
    transparent_crc((int32_t)v38, (char *)(v2 + 0x5f21), v1);
    int32_t v39 = *(int32_t *)(v2 + 0x7ecc); // 0x16ff
    transparent_crc(v39, (char *)(v2 + 0x5f27), v1);
    int32_t v40 = *(int32_t *)(v2 + 0x7ed0); // 0x1721
    transparent_crc(v40, (char *)(v2 + 0x5f2d), v1);
    char v41 = *(char *)(v2 + 0x7ed4); // 0x1743
    transparent_crc((int32_t)v41, (char *)(v2 + 0x5f33), v1);
    int32_t v42 = *(int32_t *)(v2 + 0x7ed8); // 0x1768
    transparent_crc(v42, (char *)(v2 + 0x5f39), v1);
    int32_t v43 = *(int32_t *)(v2 + 0x7edc); // 0x178a
    transparent_crc(v43, (char *)(v2 + 0x5f3f), v1);
    int32_t v44 = *(int32_t *)(v2 + 0x7ee0); // 0x17ac
    transparent_crc(v44, (char *)(v2 + 0x5f45), v1);
    int16_t v45 = *(int16_t *)(v2 + 0x7ee4); // 0x17ce
    transparent_crc((int32_t)v45, (char *)(v2 + 0x5f4b), v1);
    char v46 = *(char *)(v2 + 0x7f00); // 0x17f1
    transparent_crc((int32_t)v46, (char *)(v2 + 0x5f51), v1);
    char v47 = *(char *)(v2 + 0x7ee6); // 0x1814
    transparent_crc((int32_t)v47, (char *)(v2 + 0x5f57), v1);
    int32_t v48 = *(int32_t *)(v2 + 0x7ee8); // 0x1839
    transparent_crc(v48, (char *)(v2 + 0x5f5d), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x7eec), v1);
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
        *(int32_t *)(v5 + 0x7815 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s163r2.c
// Address range: 0x1940 - 0x6433
// Line range:    83 - 596
int32_t func_1(void) {
    // 0x3b4e
    set_var(-1, -1, -2, -8, 0x2e26595a, 0x37e05af8, -5, 0, -1, 0, 0, -11, 672, -9, 1, -5, 246, -0x733dc252, 0x56f0, 0x4377b065, 0x2c7831f2, 1, 1, -0x5101, -0x7f20105, -2379, 0x5522, 0x268e1f56, 0, 1, -113, 0x147a8b92, -0x553e44, 0x70c34d30, 43, 1, 0x29f08c16, 47, 1, 0x24a4c455, 0x4feae600, -1, 0, 1, -0x3cb31c46);
    return 5;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6440 - 0x649f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x6440
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x6440
    if (v1 != 0) {
        // 0x6474
        printf((char *)(v1 + 3267));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x64a0 - 0x64d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x64a0
    int32_t v1; // 0x64a0
    printf((char *)(v1 + 3206));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s163r2.c
// Address range: 0x64e0 - 0x678a
// Line range:    73 - 75
int32_t set_var(int32_t g_7_l, char g_10_l, char g_19_l, int32_t g_23_l, int32_t g_26_l, int32_t g_44_l, int16_t g_48_l, int32_t g_51_l, char g_66_l, int32_t g_75_l, char g_97_l, int32_t g_98_l, int16_t g_110_l, int16_t g_118_l, char g_144_l, char g_157_l, int32_t g_163_l, int32_t g_175_l, int16_t g_224_l, int32_t g_238_l, int32_t g_239_l, int16_t g_241_l, int32_t g_245_l, int16_t g_246_l, int32_t g_414_l, int16_t g_425_l, int16_t g_428_l, int32_t g_505_l, int16_t g_506_l, int16_t g_520_l, char g_623_l, int32_t g_625_l, int32_t g_638_l, int32_t g_639_l, char g_668_l, int32_t g_672_l, int32_t g_719_l, char g_720_l, int32_t g_721_l, int32_t g_742_l, int32_t g_757_l, int16_t g_804_l, char g_807_l, char g_808_l, int32_t g_811_l) {
    // 0x64e0
    int32_t v1; // 0x64e0
    *(int32_t *)(v1 + 0x2b2c) = (int32_t)g_10_l;
    *(char *)(v1 + 0x2b30) = g_19_l;
    *(char *)(v1 + 0x2b31) = (char)g_23_l;
    *(int32_t *)(v1 + 0x2b34) = g_26_l;
    *(int32_t *)(v1 + 0x2b38) = g_44_l;
    *(int32_t *)(v1 + 0x2b3c) = (int32_t)g_48_l;
    *(int16_t *)(v1 + 0x2b40) = (int16_t)g_51_l;
    *(int32_t *)(v1 + 0x2bb8) = (int32_t)g_66_l;
    *(char *)(v1 + 0x2b42) = (char)g_75_l;
    *(int32_t *)(v1 + 0x2bbc) = (int32_t)g_97_l;
    *(char *)(v1 + 0x2bc0) = (char)g_98_l;
    *(int32_t *)(v1 + 0x2b44) = (int32_t)g_110_l;
    *(int16_t *)(v1 + 0x2b48) = g_118_l;
    *(int16_t *)(v1 + 0x2b4a) = (int16_t)g_144_l;
    *(char *)(v1 + 0x2b4c) = g_157_l;
    *(char *)(v1 + 0x2b4d) = (char)g_163_l;
    *(int32_t *)(v1 + 0x2b50) = g_175_l;
    *(int32_t *)(v1 + 0x2b54) = (int32_t)g_224_l;
    *(int16_t *)(v1 + 0x2b58) = (int16_t)g_238_l;
    *(int32_t *)(v1 + 0x2b5c) = g_239_l;
    *(int32_t *)(v1 + 0x2b60) = (int32_t)g_241_l;
    *(int16_t *)(v1 + 0x2b64) = (int16_t)g_245_l;
    *(int32_t *)(v1 + 0x2b68) = (int32_t)g_246_l;
    *(int16_t *)(v1 + 0x2b6c) = (int16_t)g_414_l;
    *(int32_t *)(v1 + 0x2b70) = (int32_t)g_425_l;
    *(int16_t *)(v1 + 0x2b74) = g_428_l;
    *(int16_t *)(v1 + 0x2b76) = (int16_t)g_505_l;
    *(int32_t *)(v1 + 0x2b78) = (int32_t)g_506_l;
    *(int16_t *)(v1 + 0x2bc2) = g_520_l;
    *(int16_t *)(v1 + 0x2b7c) = (int16_t)g_623_l;
    *(char *)(v1 + 0x2b7e) = (char)g_625_l;
    *(int32_t *)(v1 + 0x2b80) = g_638_l;
    *(int32_t *)(v1 + 0x2b84) = g_639_l;
    *(int32_t *)(v1 + 0x2b88) = (int32_t)g_668_l;
    *(char *)(v1 + 0x2b8c) = (char)g_672_l;
    *(int32_t *)(v1 + 0x2b90) = g_719_l;
    *(int32_t *)(v1 + 0x2b94) = (int32_t)g_720_l;
    *(char *)(v1 + 0x2b98) = (char)g_721_l;
    *(int32_t *)(v1 + 0x2b9c) = g_742_l;
    *(int32_t *)(v1 + 0x2ba0) = g_757_l;
    *(int32_t *)(v1 + 0x2ba4) = (int32_t)g_804_l;
    *(int16_t *)(v1 + 0x2ba8) = (int16_t)g_807_l;
    *(char *)(v1 + 0x2bc4) = g_808_l;
    *(char *)(v1 + 0x2baa) = (char)g_811_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6790 - 0x6810
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x6790
    int32_t v1; // 0x6790
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6810 - 0x6854
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x6810
    int32_t v1; // 0x6810
    int32_t * v2 = (int32_t *)(v1 + 0x287f); // 0x6823
    uint32_t v3 = *v2; // 0x6823
    char v4; // 0x6810
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2897 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x6854 - 0x686c
int32_t _fini(void) {
    // 0x6854
    int32_t v1; // 0x6854
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

