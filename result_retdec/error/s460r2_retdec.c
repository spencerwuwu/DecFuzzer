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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_17_l, int32_t g_27_l, int32_t g_33_l, int32_t g_40_l, int32_t g_43_l, int32_t g_48_l, int16_t g_56_l, int32_t g_83_l, char g_95_l, int32_t g_98_l, int16_t g_108_l, int32_t g_130_l, char g_209_l, int32_t g_211_l, int16_t g_212_l, char g_222_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

bool g1 = false; // 0x22e3
int32_t g2;

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
    return v1 + 0x3fab;
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
    char * v3 = (char *)(v1 + 0x3f13); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s460r2.c
// Address range: 0x11a0 - 0x14c7
// Line range:    204 - 231
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eb0)) == 0;
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
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x1e6d), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x1e72), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e7
    transparent_crc(v9, (char *)(v2 + 0x1e77), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x1309
    transparent_crc(v10, (char *)(v2 + 0x1e7c), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e88); // 0x132b
    transparent_crc(v11, (char *)(v2 + 0x1e81), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x3e8c); // 0x134d
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e86), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e90); // 0x1370
    transparent_crc(v13, (char *)(v2 + 0x1e8b), v1);
    unsigned char v14 = *(char *)(v2 + 0x3e94); // 0x1392
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e90), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e98); // 0x13b5
    transparent_crc(v15, (char *)(v2 + 0x1e95), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x3e9c); // 0x13d7
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9a), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3ea0); // 0x13fa
    transparent_crc(v17, (char *)(v2 + 0x1ea0), v1);
    char v18 = *(char *)(v2 + 0x3ea4); // 0x141c
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1ea6), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3ea8); // 0x143f
    transparent_crc(v19, (char *)(v2 + 0x1eac), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x3eac); // 0x1461
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb2), v1);
    unsigned char v21 = *(char *)(v2 + 0x3eae); // 0x1484
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1eb8), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eb0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14d0 - 0x14d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14e0 - 0x1588
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x155a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1521
        while (v1 != 0) {
            // 0x1527
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1565
        int32_t v5; // 0x14e0
        *(int32_t *)(v5 + 0x3b79 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s460r2.c
// Address range: 0x1590 - 0x21c3
// Line range:    56 - 196
char func_1(void) {
    int16_t v1 = -1603; // 0x187c
    int32_t v2 = 0; // 0x187c
    int16_t v3 = 1; // 0x187c
    int32_t v4 = 0; // 0x187c
    int32_t v5 = -2; // 0x187c
    int32_t v6 = 0; // 0x187c
    int32_t v7 = 6; // 0x187c
    int16_t v8 = -1603; // 0x187c
    if (&g1 >= NULL) {
        int32_t v9 = 0; // 0x1f27
        int16_t v10 = -11;
        int32_t v11 = 0;
        int16_t v12 = v10 - 1; // 0x1d4c
        while (v10 != -26) {
            // 0x1d45
            v10 = v12;
            v1 = 0;
            v11 = 1;
            v12 = v10 - 1;
        }
        // 0x1f24
        v9++;
        while (v9 != 28) {
            // 0x1d45
            v10 = -11;
            v12 = v10 - 1;
            while (v10 != -26) {
                // 0x1d45
                v10 = v12;
                v1 = 0;
                v11 = 1;
                v12 = v10 - 1;
            }
            // 0x1f24
            v9++;
        }
        // 0x1f37
        v2 -= 5;
        while (v2 != -20) {
            // 0x1867
            v3 = -26;
            v4 = v2;
            v5 = -0x5e8cce34;
            v6 = 0;
            v7 = 28;
            v8 = v1;
            if (&g1 < NULL) {
                goto lab_0x1fb2;
            }
            v9 = 0;
            v10 = -11;
            v11 = 0;
            v12 = v10 - 1;
            while (v10 != -26) {
                // 0x1d45
                v10 = v12;
                v1 = 0;
                v11 = 1;
                v12 = v10 - 1;
            }
            // 0x1f24
            v9++;
            while (v9 != 28) {
                // 0x1d45
                v10 = -11;
                v12 = v10 - 1;
                while (v10 != -26) {
                    // 0x1d45
                    v10 = v12;
                    v1 = 0;
                    v11 = 1;
                    v12 = v10 - 1;
                }
                // 0x1f24
                v9++;
            }
            // 0x1f37
            v2 -= 5;
        }
        // 0x1fb2
        v3 = -26;
        v4 = -20;
        v5 = -0x5e8cce34;
        v6 = v11 & 111;
        v7 = 28;
        v8 = v1;
    }
  lab_0x1fb2:
    // 0x1fb2
    set_var(v5, v4, v6, -2, 176, 8, -0x47a958a7, 0x122e7dfe, v7, v8, 1, -80, 176, v3, 1, 42, 0x1fe9e00, -2, -107);
    return 42;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x21d0 - 0x222f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x21d0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x21d0
    if (v1 != 0) {
        // 0x2204
        printf((char *)(v1 + 3726));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2230 - 0x2264
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2230
    int32_t v1; // 0x2230
    printf((char *)(v1 + 3665));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s460r2.c
// Address range: 0x2270 - 0x2370
// Line range:    46 - 48
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, char g_17_l, int32_t g_27_l, int32_t g_33_l, int32_t g_40_l, int32_t g_43_l, int32_t g_48_l, int16_t g_56_l, int32_t g_83_l, char g_95_l, int32_t g_98_l, int16_t g_108_l, int32_t g_130_l, char g_209_l, int32_t g_211_l, int16_t g_212_l, char g_222_l) {
    // 0x2270
    int32_t v1; // 0x2270
    *(int32_t *)(v1 + 0x2d9c) = g_3_l;
    *(int32_t *)(v1 + 0x2da0) = g_6_l;
    *(int32_t *)(v1 + 0x2da4) = (int32_t)g_17_l;
    *(char *)(v1 + 0x2da8) = (char)g_27_l;
    *(int32_t *)(v1 + 0x2dac) = g_33_l;
    *(int32_t *)(v1 + 0x2db0) = g_40_l;
    *(int32_t *)(v1 + 0x2db4) = g_43_l;
    *(int32_t *)(v1 + 0x2db8) = g_48_l;
    *(int32_t *)(v1 + 0x2dbc) = (int32_t)g_56_l;
    *(int16_t *)(v1 + 0x2dc0) = (int16_t)g_83_l;
    *(int32_t *)(v1 + 0x2dc4) = (int32_t)g_95_l;
    *(char *)(v1 + 0x2dc8) = (char)g_98_l;
    *(int32_t *)(v1 + 0x2dcc) = (int32_t)g_108_l;
    *(int16_t *)(v1 + 0x2dd0) = (int16_t)g_130_l;
    *(int32_t *)(v1 + 0x2dd4) = (int32_t)g_209_l;
    *(char *)(v1 + 0x2dd8) = (char)g_211_l;
    *(int32_t *)(v1 + 0x2ddc) = (int32_t)g_212_l;
    *(int16_t *)(v1 + 0x2de0) = (int16_t)g_222_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2370 - 0x23f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2370
    int32_t v1; // 0x2370
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23f0 - 0x2434
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x23f0
    int32_t v1; // 0x23f0
    int32_t * v2 = (int32_t *)(v1 + 0x2c63); // 0x2403
    uint32_t v3 = *v2; // 0x2403
    char v4; // 0x23f0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2c6b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2434 - 0x244c
int32_t _fini(void) {
    // 0x2434
    int32_t v1; // 0x2434
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

