//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_20_l, int16_t g_21_l, char g_25_l, char g_49_l, char g_58_l, int32_t g_65_l, int32_t g_78_l, int32_t g_79_l, int32_t g_80_l, int32_t g_82_l, char g_135_l, int32_t g_162_l, int16_t g_163_l, int32_t g_164_l, int32_t g_165_l, int32_t g_166_l, int32_t g_204_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302r2.c
// Address range: 0x11a0 - 0x14e9
// Line range:    197 - 225
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e70)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3eac); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    char v6 = *(char *)(v2 + 0x3eb0); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e68), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x3e70); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6d), v1);
    char v8 = *(char *)(v2 + 0x3e72); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e72), v1);
    unsigned char v9 = *(char *)(v2 + 0x3eb1); // 0x12e9
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e77), v1);
    char v10 = *(char *)(v2 + 0x3e73); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7c), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e74); // 0x132f
    transparent_crc(v11, (char *)(v2 + 0x1e81), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e78); // 0x1351
    transparent_crc(v12, (char *)(v2 + 0x1e86), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e7c); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x1e8b), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e80); // 0x1395
    transparent_crc(v14, (char *)(v2 + 0x1e90), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e84); // 0x13b7
    transparent_crc(v15, (char *)(v2 + 0x1e95), v1);
    unsigned char v16 = *(char *)(v2 + 0x3e88); // 0x13d9
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9a), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e8c); // 0x13fc
    transparent_crc(v17, (char *)(v2 + 0x1ea0), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x3e90); // 0x141e
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1ea6), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3e94); // 0x1441
    transparent_crc(v19, (char *)(v2 + 0x1eac), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e98); // 0x1463
    transparent_crc(v20, (char *)(v2 + 0x1eb2), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e9c); // 0x1485
    transparent_crc(v21, (char *)(v2 + 0x1eb8), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3ea0); // 0x14a7
    transparent_crc(v22, (char *)(v2 + 0x1ebe), v1);
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
        *(int32_t *)(v5 + 0x3b55 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302r2.c
// Address range: 0x15b0 - 0x2252
// Line range:    57 - 190
char func_1(void) {
    int32_t v1 = -12; // 0x1fa4
    bool v2 = false; // 0x15b0
    int32_t v3 = -0x42fce971; // 0x1f9b
    int32_t v4 = -0x1df90914;
    char v5 = 0; // 0x17ad
    int32_t v6 = 0;
    char v7 = 0; // 0x199f
    v5++;
    v4 += 27;
    char v8 = 0; // 0x1934
    char v9 = 0; // 0x1934
    char v10; // 0x15b0
    int32_t v11; // 0x15b0
    char v12; // 0x15b0
    while (v2) {
        // 0x199b
        v12 = v7;
        v7 = v12 + 6;
        v11 = v4;
        v10 = v5;
        v8 = v12;
        v9 = v7;
        if (v7 > 19) {
            // break -> 0x19af
            break;
        }
        v5 = v10 + 1;
        v4 = v11 + 27;
        v8 = 0;
        v9 = 0;
    }
    int32_t v13 = v6 - 1; // 0x1770
    while (v6 >= -8) {
        // 0x1784
        v6 = v13;
        v7 = 0;
        v5++;
        v4 += 27;
        v8 = 0;
        v9 = 0;
        while (v2) {
            // 0x199b
            v12 = v7;
            v7 = v12 + 6;
            v11 = v4;
            v10 = v5;
            v8 = v12;
            v9 = v7;
            if (v7 > 19) {
                // break -> 0x19af
                break;
            }
            v5 = v10 + 1;
            v4 = v11 + 27;
            v8 = 0;
            v9 = 0;
        }
        // 0x19af
        v13 = v6 - 1;
    }
    // 0x19bd
    v3 ^= (int32_t)(v5 & -5);
    v1++;
    v2 = true;
    while (v1 != 17) {
        // 0x1679
        v6 = 0;
        v7 = 0;
        v5++;
        v4 += 27;
        v8 = 0;
        v9 = 0;
        while (v2) {
            // 0x199b
            v12 = v7;
            v7 = v12 + 6;
            v11 = v4;
            v10 = v5;
            v8 = v12;
            v9 = v7;
            if (v7 > 19) {
                // break -> 0x19af
                break;
            }
            v5 = v10 + 1;
            v4 = v11 + 27;
            v8 = 0;
            v9 = 0;
        }
        // 0x19af
        v13 = v6 - 1;
        while (v6 >= -8) {
            // 0x1784
            v6 = v13;
            v7 = 0;
            v5++;
            v4 += 27;
            v8 = 0;
            v9 = 0;
            while (v2) {
                // 0x199b
                v12 = v7;
                v7 = v12 + 6;
                v11 = v4;
                v10 = v5;
                v8 = v12;
                v9 = v7;
                if (v7 > 19) {
                    // break -> 0x19af
                    break;
                }
                v5 = v10 + 1;
                v4 = v11 + 27;
                v8 = 0;
                v9 = 0;
            }
            // 0x19af
            v13 = v6 - 1;
        }
        // 0x19bd
        v3 ^= (int32_t)(v5 & -5);
        v1++;
        v2 = true;
    }
    char v14 = -24 - v8; // 0x1886
    int32_t v15 = v14; // 0x1fbe
    set_var(0, 1, 0x699a, 2 * (char)((0xffbc - v15 & v15) < 0), 0x331d, v9, v5, v14, v4, -1, v3, -6, -10, 59, 1, -1, 0, -0x745ce89d, -0x49caa2d9, 0x2f9622ff);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2260 - 0x22bf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2260
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2260
    if (v1 != 0) {
        // 0x2294
        printf((char *)(v1 + 3588));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x22c0 - 0x22f4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x22c0
    int32_t v1; // 0x22c0
    printf((char *)(v1 + 3527));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s302r2.c
// Address range: 0x2300 - 0x2409
// Line range:    47 - 49
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_20_l, int16_t g_21_l, char g_25_l, char g_49_l, char g_58_l, int32_t g_65_l, int32_t g_78_l, int32_t g_79_l, int32_t g_80_l, int32_t g_82_l, char g_135_l, int32_t g_162_l, int16_t g_163_l, int32_t g_164_l, int32_t g_165_l, int32_t g_166_l, int32_t g_204_l) {
    // 0x2300
    int32_t v1; // 0x2300
    *(int32_t *)(v1 + 0x2d50) = g_3_l;
    *(int32_t *)(v1 + 0x2d0c) = g_4_l;
    *(int32_t *)(v1 + 0x2d10) = (int32_t)g_20_l;
    *(char *)(v1 + 0x2d54) = (char)g_21_l;
    *(int16_t *)(v1 + 0x2d14) = (int16_t)g_25_l;
    *(char *)(v1 + 0x2d16) = g_49_l;
    *(char *)(v1 + 0x2d55) = g_58_l;
    *(char *)(v1 + 0x2d17) = (char)g_65_l;
    *(int32_t *)(v1 + 0x2d18) = g_78_l;
    *(int32_t *)(v1 + 0x2d1c) = g_79_l;
    *(int32_t *)(v1 + 0x2d20) = g_80_l;
    *(int32_t *)(v1 + 0x2d24) = g_82_l;
    *(int32_t *)(v1 + 0x2d28) = (int32_t)g_135_l;
    *(char *)(v1 + 0x2d2c) = (char)g_162_l;
    *(int32_t *)(v1 + 0x2d30) = (int32_t)g_163_l;
    *(int16_t *)(v1 + 0x2d34) = (int16_t)g_164_l;
    *(int32_t *)(v1 + 0x2d38) = g_165_l;
    *(int32_t *)(v1 + 0x2d3c) = g_166_l;
    *(int32_t *)(v1 + 0x2d40) = g_204_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2410 - 0x2490
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2410
    int32_t v1; // 0x2410
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2490 - 0x24d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2490
    int32_t v1; // 0x2490
    int32_t * v2 = (int32_t *)(v1 + 0x2bb7); // 0x24a3
    uint32_t v3 = *v2; // 0x24a3
    char v4; // 0x2490
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2bc7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x24d4 - 0x24ec
int32_t _fini(void) {
    // 0x24d4
    int32_t v1; // 0x24d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22
