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
int32_t set_var(int16_t g_2_l, int32_t g_14_l, int32_t g_24_l, int16_t g_49_l, int32_t g_53_l, char g_54_l, int16_t g_55_l, int32_t g_68_l, int32_t g_84_l, int32_t g_86_l, char g_111_l, int16_t g_130_l, int32_t g_143_l, int16_t g_195_l, char g_208_l, int16_t g_210_l, int16_t g_234_l, int32_t g_235_l, int32_t g_248_l, char g_249_l, char g_256_l, int32_t g_260_l, char g_263_l, int16_t g_264_l, int32_t g_267_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0x16b6; // 0x1596
char g2 = -1; // 0x4f2a
int32_t g3;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x3fab;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s470r2.c
// Address range: 0x11a0 - 0x15a2
// Line range:    234 - 267
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e91)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x1240
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x1262
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x3e74); // 0x1284
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a7
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3e7c); // 0x12c9
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e7e); // 0x12ee
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3eb8); // 0x1314
    transparent_crc(v10, (char *)(v2 + 0x1e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x1336
    transparent_crc(v11, (char *)(v2 + 0x1e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e84); // 0x1358
    transparent_crc(v12, (char *)(v2 + 0x1e88), v1);
    unsigned char v13 = *(char *)(v2 + 0x3e88); // 0x137a
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8d), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x3e8a); // 0x139d
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e93), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e8c); // 0x13c0
    transparent_crc(v15, (char *)(v2 + 0x1e99), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x3e90); // 0x13e2
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9f), v1);
    unsigned char v17 = *(char *)(v2 + 0x3e92); // 0x1405
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea5), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e94); // 0x1428
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eab), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3e96); // 0x144b
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e98); // 0x146e
    transparent_crc(v20, (char *)(v2 + 0x1eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e9c); // 0x1490
    transparent_crc(v21, (char *)(v2 + 0x1ebd), v1);
    unsigned char v22 = *(char *)(v2 + 0x3ea0); // 0x14b2
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec3), v1);
    char v23 = *(char *)(v2 + 0x3ea1); // 0x14d5
    transparent_crc((int32_t)v23, (char *)(v2 + 0x1ec9), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x3ea4); // 0x14f8
    transparent_crc(v24, (char *)(v2 + 0x1ecf), v1);
    char v25 = *(char *)(v2 + 0x3ea8); // 0x151a
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ed5), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x3eaa); // 0x153d
    transparent_crc((int32_t)v26, (char *)(v2 + 0x1edb), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x3eac); // 0x1560
    transparent_crc(v27, (char *)(v2 + 0x1ee1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eb0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15b0 - 0x15b5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15c0 - 0x1668
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x163a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1601
        while (v1 != 0) {
            // 0x1607
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1645
        int32_t v5; // 0x15c0
        *(int32_t *)(v5 + 0x3a9d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s470r2.c
// Address range: 0x1670 - 0x2be7
// Line range:    62 - 227
int32_t func_1(void) {
    // 0x1670
    set_var(-1, 0, 0x1000000 * ((int32_t)(char)&g2 ^ 0xffff) == 0 ? 0 : 1, -0x5423, -0x59e4c1dd, -16, 6, 0, 0xe3fdf47, -0x51c56b9d, -8, (int16_t)&g1, 0x59807bff, 8, 91, -0x6c5c, -0x5fc7, -9, -6, 7, 1, 0x6229c2d6, -10, 0x494b, 1);
    return 0x494b;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bf0 - 0x2c4f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2bf0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2bf0
    if (v1 != 0) {
        // 0x2c24
        printf((char *)(v1 + 1175));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c50 - 0x2c84
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c50
    int32_t v1; // 0x2c50
    printf((char *)(v1 + 1114));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s470r2.c
// Address range: 0x2c90 - 0x2de7
// Line range:    52 - 54
int32_t set_var(int16_t g_2_l, int32_t g_14_l, int32_t g_24_l, int16_t g_49_l, int32_t g_53_l, char g_54_l, int16_t g_55_l, int32_t g_68_l, int32_t g_84_l, int32_t g_86_l, char g_111_l, int16_t g_130_l, int32_t g_143_l, int16_t g_195_l, char g_208_l, int16_t g_210_l, int16_t g_234_l, int32_t g_235_l, int32_t g_248_l, char g_249_l, char g_256_l, int32_t g_260_l, char g_263_l, int16_t g_264_l, int32_t g_267_l) {
    // 0x2c90
    int32_t v1; // 0x2c90
    *(int16_t *)(v1 + 0x237c) = (int16_t)g_14_l;
    *(int32_t *)(v1 + 0x2380) = g_24_l;
    *(int32_t *)(v1 + 0x2384) = (int32_t)g_49_l;
    *(int16_t *)(v1 + 0x2388) = (int16_t)g_53_l;
    *(int32_t *)(v1 + 0x238c) = (int32_t)g_54_l;
    *(char *)(v1 + 0x2390) = (char)g_55_l;
    *(int16_t *)(v1 + 0x2392) = (int16_t)g_68_l;
    *(int32_t *)(v1 + 0x23cc) = g_84_l;
    *(int32_t *)(v1 + 0x2394) = g_86_l;
    *(int32_t *)(v1 + 0x2398) = (int32_t)g_111_l;
    *(char *)(v1 + 0x239c) = (char)g_130_l;
    *(int16_t *)(v1 + 0x239e) = (int16_t)g_143_l;
    *(int32_t *)(v1 + 0x23a0) = (int32_t)g_195_l;
    *(int16_t *)(v1 + 0x23a4) = (int16_t)g_208_l;
    *(char *)(v1 + 0x23a6) = (char)g_210_l;
    *(int16_t *)(v1 + 0x23a8) = g_234_l;
    *(int16_t *)(v1 + 0x23aa) = (int16_t)g_235_l;
    *(int32_t *)(v1 + 0x23ac) = g_248_l;
    *(int32_t *)(v1 + 0x23b0) = (int32_t)g_249_l;
    *(char *)(v1 + 0x23b4) = g_256_l;
    *(char *)(v1 + 0x23b5) = (char)g_260_l;
    *(int32_t *)(v1 + 0x23b8) = (int32_t)g_263_l;
    *(char *)(v1 + 0x23bc) = (char)g_264_l;
    *(int16_t *)(v1 + 0x23be) = (int16_t)g_267_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2df0 - 0x2e70
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2df0
    int32_t v1; // 0x2df0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e70 - 0x2eb4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2e70
    int32_t v1; // 0x2e70
    int32_t * v2 = (int32_t *)(v1 + 0x21e3); // 0x2e83
    uint32_t v3 = *v2; // 0x2e83
    char v4; // 0x2e70
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x21ef + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2eb4 - 0x2ecc
int32_t _fini(void) {
    // 0x2eb4
    int32_t v1; // 0x2eb4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

