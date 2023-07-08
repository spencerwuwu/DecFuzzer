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
int32_t set_var(int16_t g_3_l, int32_t g_29_l, int16_t g_30_l, int16_t g_35_l, int32_t g_54_l, int16_t g_64_l, int32_t g_76_l, int16_t g_77_l, int16_t g_89_l, int16_t g_92_l, int32_t g_102_l, int32_t g_124_l, char g_125_l, int16_t g_126_l, int16_t g_127_l, int32_t g_128_l, int32_t g_129_l, char g_160_l, char g_170_l, char g_171_l, int32_t g_196_l, char g_197_l, int32_t g_229_l, int32_t g_253_l, char g_270_l, int32_t g_288_l, int32_t g_289_l, int16_t g_437_l);
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
    return *(int32_t *)(v1 + 0x4fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x4f68); // 0x1090
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
    return v1 + 0x4fb3;
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
    char * v3 = (char *)(v1 + 0x4f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s962retdec.c
// Address range: 0x11a0 - 0x162b
// Line range:    337 - 374
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ecb)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    transparent_crc(-0x1de9805b, (char *)(v2 + 0x2e60), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e6c); // 0x1260
    transparent_crc(v4, (char *)(v2 + 0x2e64), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x4ec0); // 0x1282
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e69), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x4e70); // 0x12a5
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6e), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e74); // 0x12cb
    transparent_crc(v7, (char *)(v2 + 0x2e73), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x4e78); // 0x12ed
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e78), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e7c); // 0x1310
    transparent_crc(v9, (char *)(v2 + 0x2e7d), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x4e80); // 0x1332
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e82), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x4e82); // 0x1355
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e87), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x4ec2); // 0x137b
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e8c), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4ec4); // 0x139e
    transparent_crc(v13, (char *)(v2 + 0x2e91), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e84); // 0x13c0
    transparent_crc(v14, (char *)(v2 + 0x2e97), v1);
    char v15 = *(char *)(v2 + 0x4e88); // 0x13e2
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9d), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x4e8a); // 0x1405
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea3), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x4e8c); // 0x1428
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea9), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4ec8); // 0x144b
    transparent_crc(v18, (char *)(v2 + 0x2eaf), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e90); // 0x146d
    transparent_crc(v19, (char *)(v2 + 0x2eb5), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e94); // 0x148f
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2ebb), v1);
    unsigned char v21 = *(char *)(v2 + 0x4ecc); // 0x14b2
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ec1), v1);
    unsigned char v22 = *(char *)(v2 + 0x4e95); // 0x14d5
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec7), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4e98); // 0x14f8
    transparent_crc(v23, (char *)(v2 + 0x2ecd), v1);
    unsigned char v24 = *(char *)(v2 + 0x4e9c); // 0x151a
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ed3), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ea0); // 0x153d
    transparent_crc(v25, (char *)(v2 + 0x2ed9), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4ea4); // 0x155f
    transparent_crc(v26, (char *)(v2 + 0x2edf), v1);
    char v27 = *(char *)(v2 + 0x4ea8); // 0x1581
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ee5), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x4eac); // 0x15a4
    transparent_crc(v28, (char *)(v2 + 0x2eeb), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x4eb0); // 0x15c6
    transparent_crc(v29, (char *)(v2 + 0x2ef1), v1);
    int16_t v30 = *(int16_t *)(v2 + 0x4eb4); // 0x15e8
    transparent_crc((int32_t)v30, (char *)(v2 + 0x2ef7), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1630 - 0x1635
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1630
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1640 - 0x16e8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x16ba
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1681
        while (v1 != 0) {
            // 0x1687
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16c5
        int32_t v5; // 0x1640
        *(int32_t *)(v5 + 0x4a31 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s962retdec.c
// Address range: 0x16f0 - 0x3174
// Line range:    70 - 330
int32_t func_1(void) {
    int32_t v1 = 3;
    int32_t v2 = 7; // 0x1a49
    int16_t v3 = -1; // 0x16f0
    int16_t v4 = v3; // 0x19e7
    int32_t v5 = 0;
    v4++;
    v2 &= ((int32_t)(0x9d4416da < v1) ^ -0x3dfd);
    int16_t v6 = v4 & -0x2688; // 0x1a85
    int32_t v7 = v5 - 1; // 0x19c9
    while (v5 >= -16) {
        // 0x19cf
        v5 = v7;
        v4++;
        v2 &= ((int32_t)((0x80000000 * (int32_t)(v6 + 1) | 0x1d4416da) < v1) ^ -0x3dfd);
        v6 = v4 & -0x2688;
        v7 = v5 - 1;
    }
    // 0x1e28
    v1++;
    v3 += 18;
    while (v1 != 9) {
        // 0x19c5
        v4 = v3;
        v5 = 0;
        v4++;
        v2 &= ((int32_t)((0x80000000 * (int32_t)(v6 + 1) | 0x1d4416da) < v1) ^ -0x3dfd);
        v6 = v4 & -0x2688;
        v7 = v5 - 1;
        while (v5 >= -16) {
            // 0x19cf
            v5 = v7;
            v4++;
            v2 &= ((int32_t)((0x80000000 * (int32_t)(v6 + 1) | 0x1d4416da) < v1) ^ -0x3dfd);
            v6 = v4 & -0x2688;
            v7 = v5 - 1;
        }
        // 0x1e28
        v1++;
        v3 += 18;
    }
    int32_t v8 = -0x62ffe6d1; // 0x1e6e
    int16_t v9 = -0x5a10; // 0x1e6e
    int32_t v10 = 0; // 0x1e6e
    int16_t v11 = 0; // 0x1e6e
    int32_t v12 = 4; // 0x1e6e
    char v13 = -89; // 0x1e6e
    char v14 = 0; // 0x1e6e
    char v15 = -27; // 0x1e6e
    char v16 = 124; // 0x1e6e
    int32_t v17 = -0x62ffe6d1; // 0x1e6e
    if ((v2 & -((v2 & 0xc203))) == 0) {
        int32_t v18 = 22; // 0x221f
        v10 |= 0x6e4d;
        v18 -= 3;
        int32_t v19 = v10; // 0x2042
        while (v18 >= 15) {
            // 0x2048
            v10 = v19 | 0x6e4d;
            v18 -= 3;
            v19 = v10;
        }
        // 0x2331
        v8++;
        while (v8 != -0x62ffe6ca) {
            // 0x203b
            v18 = 22;
            v10 |= 0x6e4d;
            v18 -= 3;
            v19 = v10;
            while (v18 >= 15) {
                // 0x2048
                v10 = v19 | 0x6e4d;
                v18 -= 3;
                v19 = v10;
            }
            // 0x2331
            v8++;
        }
        // 0x2411
        v9 = -0x6a4a;
        v11 = 1;
        v12 = -0x77a1c83d;
        v13 = 1;
        v14 = (char)v10 + 120;
        v15 = -61;
        v16 = 0;
        v17 = -0x62ffe6ca;
    }
    // 0x2f53
    set_var(-0x3dfd, 0xce3d978, v6, 107, -4, v9, v10, 0x516a, 277, v11, 0, v12, 2, 6, 4, 0, 0, v13, v14, v15, -1, v16, 0x1fdf78e1, 0x54d7d783, -70, 0x426b7b25, v17, -0x7207);
    return 0x1fdf78e1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3180 - 0x31df
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3180
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3180
    if (v1 != 0) {
        // 0x31b4
        printf((char *)(v1 + 3869));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x31e0 - 0x3214
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x31e0
    int32_t v1; // 0x31e0
    printf((char *)(v1 + 3808));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s962retdec.c
// Address range: 0x3220 - 0x33a1
// Line range:    60 - 62
int32_t set_var(int16_t g_3_l, int32_t g_29_l, int16_t g_30_l, int16_t g_35_l, int32_t g_54_l, int16_t g_64_l, int32_t g_76_l, int16_t g_77_l, int16_t g_89_l, int16_t g_92_l, int32_t g_102_l, int32_t g_124_l, char g_125_l, int16_t g_126_l, int16_t g_127_l, int32_t g_128_l, int32_t g_129_l, char g_160_l, char g_170_l, char g_171_l, int32_t g_196_l, char g_197_l, int32_t g_229_l, int32_t g_253_l, char g_270_l, int32_t g_288_l, int32_t g_289_l, int16_t g_437_l) {
    // 0x3220
    int32_t v1; // 0x3220
    *(int16_t *)(v1 + 0x2dec) = (int16_t)g_29_l;
    *(int32_t *)(v1 + 0x2df0) = (int32_t)g_30_l;
    *(int16_t *)(v1 + 0x2e44) = g_35_l;
    *(int16_t *)(v1 + 0x2df4) = (int16_t)g_54_l;
    *(int32_t *)(v1 + 0x2df8) = (int32_t)g_64_l;
    *(int16_t *)(v1 + 0x2dfc) = (int16_t)g_76_l;
    *(int32_t *)(v1 + 0x2e00) = (int32_t)g_77_l;
    *(int16_t *)(v1 + 0x2e04) = g_89_l;
    *(int16_t *)(v1 + 0x2e06) = g_92_l;
    *(int16_t *)(v1 + 0x2e46) = (int16_t)g_102_l;
    *(int32_t *)(v1 + 0x2e48) = g_124_l;
    *(int32_t *)(v1 + 0x2e08) = (int32_t)g_125_l;
    *(char *)(v1 + 0x2e0c) = (char)g_126_l;
    *(int16_t *)(v1 + 0x2e0e) = g_127_l;
    *(int16_t *)(v1 + 0x2e10) = (int16_t)g_128_l;
    *(int32_t *)(v1 + 0x2e4c) = g_129_l;
    *(int32_t *)(v1 + 0x2e14) = (int32_t)g_160_l;
    *(char *)(v1 + 0x2e18) = g_170_l;
    *(char *)(v1 + 0x2e50) = g_171_l;
    *(char *)(v1 + 0x2e19) = (char)g_196_l;
    *(int32_t *)(v1 + 0x2e1c) = (int32_t)g_197_l;
    *(char *)(v1 + 0x2e20) = (char)g_229_l;
    *(int32_t *)(v1 + 0x2e24) = g_253_l;
    *(int32_t *)(v1 + 0x2e28) = (int32_t)g_270_l;
    *(char *)(v1 + 0x2e2c) = (char)g_288_l;
    *(int32_t *)(v1 + 0x2e30) = g_289_l;
    *(int32_t *)(v1 + 0x2e34) = (int32_t)g_437_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x33b0 - 0x3430
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x33b0
    int32_t v1; // 0x33b0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3430 - 0x3474
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3430
    int32_t v1; // 0x3430
    int32_t * v2 = (int32_t *)(v1 + 0x2c2b); // 0x3443
    uint32_t v3 = *v2; // 0x3443
    char v4; // 0x3430
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2c43 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3474 - 0x348c
int32_t _fini(void) {
    // 0x3474
    int32_t v1; // 0x3474
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

