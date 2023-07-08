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
int32_t set_var(int32_t g_2_l, int16_t g_26_l, int16_t g_44_l, int32_t g_46_l, int32_t g_48_l, int32_t g_50_l, int32_t g_51_l, int32_t g_66_l, int32_t g_75_l, int16_t g_95_l, int32_t g_96_l, int32_t g_99_l, char g_100_l, int16_t g_154_l, int16_t g_165_l, int32_t g_167_l, int16_t g_168_l, char g_172_l, int32_t g_175_l, int16_t g_203_l, int32_t g_209_l, int32_t g_210_l, char g_213_l, int16_t g_214_l, int32_t g_234_l, int32_t g_254_l);
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
    return v1 + 0x3fb3;
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
    char * v3 = (char *)(v1 + 0x3f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s579r2.c
// Address range: 0x11a0 - 0x15e0
// Line range:    246 - 281
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e7c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3ec0); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e78); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e7c); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e79), v1);
    transparent_crc(0x23142ace, (char *)(v2 + 0x1e7e), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e80); // 0x132a
    transparent_crc(v10, (char *)(v2 + 0x1e83), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x134c
    transparent_crc(v11, (char *)(v2 + 0x1e88), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x3ec2); // 0x136e
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8d), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e88); // 0x1391
    transparent_crc(v13, (char *)(v2 + 0x1e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e8c); // 0x13b3
    transparent_crc(v14, (char *)(v2 + 0x1e97), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e90); // 0x13d5
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9c), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e92); // 0x13fa
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea2), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x3ec4); // 0x141d
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea8), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e94); // 0x1443
    transparent_crc(v18, (char *)(v2 + 0x1eae), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x3e98); // 0x1465
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb4), v1);
    unsigned char v20 = *(char *)(v2 + 0x3ec6); // 0x1488
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eba), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e9c); // 0x14ad
    transparent_crc(v21, (char *)(v2 + 0x1ec0), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x3ea0); // 0x14cf
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec6), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3ea4); // 0x14f2
    transparent_crc(v23, (char *)(v2 + 0x1ecc), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x3ea8); // 0x1514
    transparent_crc(v24, (char *)(v2 + 0x1ed2), v1);
    char v25 = *(char *)(v2 + 0x3eac); // 0x1536
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ed8), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x3eae); // 0x1559
    transparent_crc((int32_t)v26, (char *)(v2 + 0x1ede), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x3eb0); // 0x157c
    transparent_crc(v27, (char *)(v2 + 0x1ee4), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x3eb4); // 0x159e
    transparent_crc(v28, (char *)(v2 + 0x1eea), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15e0 - 0x15e5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15f0 - 0x1698
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x166a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1631
        while (v1 != 0) {
            // 0x1637
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1675
        int32_t v5; // 0x15f0
        *(int32_t *)(v5 + 0x3a79 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s579r2.c
// Address range: 0x16a0 - 0x2c16
// Line range:    64 - 239
int16_t func_1(void) {
    int32_t v1 = 0; // 0x2653
    int32_t v2 = -1;
    int16_t v3 = -3413; // 0x1891
    v3 |= (int16_t)v1 & -2;
    int32_t v4 = 0; // 0x194b
    int32_t v5 = -10 & (int32_t)(v3 / 2 ^ v3); // 0x18d0
    v4++;
    int32_t v6 = v5; // 0x18a0
    while (v4 != 23) {
        // 0x18a6
        v5 = v6 & (int32_t)(v3 / 2 ^ v3);
        v4++;
        v6 = v5;
    }
    // 0x1964
    v2 -= 23;
    v1++;
    while (v1 != 16 && v5 == 0) {
        // 0x17be
        v3 |= (int16_t)v1 & -2;
        v4 = 0;
        v5 = -10 & (int32_t)(v3 / 2 ^ v3);
        v4++;
        v6 = v5;
        while (v4 != 23) {
            // 0x18a6
            v5 = v6 & (int32_t)(v3 / 2 ^ v3);
            v4++;
            v6 = v5;
        }
        // 0x1964
        v2 -= 23;
        v1++;
    }
    // 0x275d
    set_var(3409, v3, 0, v5, -0x2770, 0, v2, 1, 0x3396ac63, 0, 0x17e4cdb7, 6, -127, 0x7814, 0, -0x62694289, -0x722b, 0, -0x6c124e57, -0x1316, -0x4db0cba7, 0x6490b889, 3, 6, 1, -9);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c20 - 0x2c7f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2c20
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2c20
    if (v1 != 0) {
        // 0x2c54
        printf((char *)(v1 + 1136));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c80 - 0x2cb4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c80
    int32_t v1; // 0x2c80
    printf((char *)(v1 + 1075));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s579r2.c
// Address range: 0x2cc0 - 0x2e23
// Line range:    54 - 56
int32_t set_var(int32_t g_2_l, int16_t g_26_l, int16_t g_44_l, int32_t g_46_l, int32_t g_48_l, int32_t g_50_l, int32_t g_51_l, int32_t g_66_l, int32_t g_75_l, int16_t g_95_l, int32_t g_96_l, int32_t g_99_l, char g_100_l, int16_t g_154_l, int16_t g_165_l, int32_t g_167_l, int16_t g_168_l, char g_172_l, int32_t g_175_l, int16_t g_203_l, int32_t g_209_l, int32_t g_210_l, char g_213_l, int16_t g_214_l, int32_t g_234_l, int32_t g_254_l) {
    // 0x2cc0
    int32_t v1; // 0x2cc0
    *(int32_t *)(v1 + 0x234c) = (int32_t)g_26_l;
    *(int16_t *)(v1 + 0x2350) = g_44_l;
    *(int16_t *)(v1 + 0x23a4) = (int16_t)g_46_l;
    *(int32_t *)(v1 + 0x2354) = g_48_l;
    *(int32_t *)(v1 + 0x2358) = g_50_l;
    *(int32_t *)(v1 + 0x235c) = g_51_l;
    *(int32_t *)(v1 + 0x2360) = g_66_l;
    *(int32_t *)(v1 + 0x2364) = g_75_l;
    *(int32_t *)(v1 + 0x2368) = (int32_t)g_95_l;
    *(int16_t *)(v1 + 0x23a6) = (int16_t)g_96_l;
    *(int32_t *)(v1 + 0x236c) = g_99_l;
    *(int32_t *)(v1 + 0x2370) = (int32_t)g_100_l;
    *(char *)(v1 + 0x2374) = (char)g_154_l;
    *(int16_t *)(v1 + 0x2376) = g_165_l;
    *(int16_t *)(v1 + 0x23a8) = (int16_t)g_167_l;
    *(int32_t *)(v1 + 0x2378) = (int32_t)g_168_l;
    *(int16_t *)(v1 + 0x237c) = (int16_t)g_172_l;
    *(char *)(v1 + 0x23aa) = (char)g_175_l;
    *(int32_t *)(v1 + 0x2380) = (int32_t)g_203_l;
    *(int16_t *)(v1 + 0x2384) = (int16_t)g_209_l;
    *(int32_t *)(v1 + 0x2388) = g_210_l;
    *(int32_t *)(v1 + 0x238c) = (int32_t)g_213_l;
    *(char *)(v1 + 0x2390) = (char)g_214_l;
    *(int16_t *)(v1 + 0x2392) = (int16_t)g_234_l;
    *(int32_t *)(v1 + 0x2394) = g_254_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e30 - 0x2eb0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2e30
    int32_t v1; // 0x2e30
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2eb0 - 0x2ef4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2eb0
    int32_t v1; // 0x2eb0
    int32_t * v2 = (int32_t *)(v1 + 0x21ab); // 0x2ec3
    uint32_t v3 = *v2; // 0x2ec3
    char v4; // 0x2eb0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x21bb + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2ef4 - 0x2f0c
int32_t _fini(void) {
    // 0x2ef4
    int32_t v1; // 0x2ef4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

