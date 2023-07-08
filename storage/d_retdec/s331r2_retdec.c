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
int32_t set_var(char g_2_l, int32_t g_3_l, int32_t g_10_l, int32_t g_15_l, int32_t g_17_l, int32_t g_20_l, int32_t g_27_l, int32_t g_62_l, int32_t g_68_l, int32_t g_75_l, int32_t g_76_l, int32_t g_79_l, char g_80_l, int32_t g_81_l, int32_t g_94_l, int32_t g_131_l, int32_t g_134_l);
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
    return v1 + 0x3fa3;
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
    char * v3 = (char *)(v1 + 0x3f0b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s331r2.c
// Address range: 0x11a0 - 0x1480
// Line range:    197 - 222
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea9)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123f
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x1261
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1283
    transparent_crc(v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a5
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c7
    transparent_crc(v8, (char *)(v2 + 0x1e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x1e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e88); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x1e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e8c); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x1e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3eb0); // 0x1371
    transparent_crc(v13, (char *)(v2 + 0x1e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e90); // 0x1393
    transparent_crc(v14, (char *)(v2 + 0x1e91), v1);
    char v15 = *(char *)(v2 + 0x3e94); // 0x13b5
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e96), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e98); // 0x13d8
    transparent_crc(v16, (char *)(v2 + 0x1e9b), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e9c); // 0x13fa
    transparent_crc(v17, (char *)(v2 + 0x1ea0), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3ea0); // 0x141c
    transparent_crc(v18, (char *)(v2 + 0x1ea5), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3ea4); // 0x143e
    transparent_crc(v19, (char *)(v2 + 0x1eab), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1480 - 0x1485
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1480
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1490 - 0x1538
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x150a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14d1
        while (v1 != 0) {
            // 0x14d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1515
        int32_t v5; // 0x1490
        *(int32_t *)(v5 + 0x3bc5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s331r2.c
// Address range: 0x1540 - 0x1f85
// Line range:    54 - 189
int32_t func_1(void) {
    int32_t v1 = 1;
    int32_t v2 = 0x3d0e72ee;
    int32_t v3 = 6;
    int32_t v4 = -0x518c9219;
    int32_t v5 = 0x29656d29;
    int32_t v6 = 0;
    int32_t v7 = 0;
    int32_t v8; // 0x1540
    int32_t v9; // 0x1540
    int32_t v10; // 0x1540
    int32_t v11; // 0x1540
    int32_t v12; // 0x1540
    char v13; // 0x1540
    int32_t v14; // 0x1540
    int32_t v15; // 0x1540
    int32_t v16; // 0x1540
    int32_t v17; // 0x1bab
    int32_t v18; // 0x1e42
    if ((v1 & -0x326a0087) == 0) {
        // 0x19f4
        v18 = 0;
        v17 = v3 | -0x22263050 | -73;
        v18++;
        v11 = v17;
        while (v18 != 19) {
            // 0x1b9d
            v17 = v11 | -73;
            v18++;
            v11 = v17;
        }
        // 0x1e52
        v10 = v5 | -0x732c41b;
        v8 = v2;
        v9 = 19;
        v12 = v17;
        v13 = 1;
        v14 = v4 + 1;
        v16 = 0;
        v15 = v6 - 1;
    } else {
        // 0x1701
        v10 = 24;
        v8 = v1 & v2;
        v9 = v7;
        v12 = v3;
        v13 = 119;
        v14 = v4;
        v16 = v5;
        v15 = v6;
    }
    int32_t result = v15;
    int32_t v19 = v14;
    char v20 = v13;
    int32_t v21 = v12;
    int32_t v22 = v8;
    int32_t v23 = v10;
    int32_t v24 = v7 + 1; // 0x1e55
    while (v24 != 15) {
        // 0x16bc
        v1 = v23;
        v2 = v22;
        v3 = v21;
        v4 = v19;
        v5 = v16;
        v6 = result;
        v7 = v24;
        if ((v1 & -0x326a0087) == 0) {
            // 0x19f4
            v18 = 0;
            v17 = v3 | -0x22263050 | -73;
            v18++;
            v11 = v17;
            while (v18 != 19) {
                // 0x1b9d
                v17 = v11 | -73;
                v18++;
                v11 = v17;
            }
            // 0x1e52
            v10 = v5 | -0x732c41b;
            v8 = v2;
            v9 = 19;
            v12 = v17;
            v13 = 1;
            v14 = v4 + 1;
            v16 = 0;
            v15 = v6 - 1;
        } else {
            // 0x1701
            v10 = 24;
            v8 = v1 & v2;
            v9 = v7;
            v12 = v3;
            v13 = v20;
            v14 = v4;
            v16 = v5;
            v15 = v6;
        }
        // 0x1e52
        result = v15;
        v19 = v14;
        v20 = v13;
        v21 = v12;
        v22 = v8;
        v23 = v10;
        v24 = v7 + 1;
    }
    // 0x1e60
    set_var(-4, v23, 0, -0x17018ad8, -0x732c41c, v22, v9, 1, 1, 0x7c168b, 0, v21, v20, -1, v19, 0x291112fb, -0x5da16e86);
    return result;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f90 - 0x1fef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f90
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1f90
    if (v1 != 0) {
        // 0x1fc4
        printf((char *)(v1 + (int32_t)"_134" - 0x1f97));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1ff0 - 0x2024
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1ff0
    int32_t v1; // 0x1ff0
    printf((char *)(v1 + 0x1084));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s331r2.c
// Address range: 0x2030 - 0x210f
// Line range:    44 - 46
int32_t set_var(char g_2_l, int32_t g_3_l, int32_t g_10_l, int32_t g_15_l, int32_t g_17_l, int32_t g_20_l, int32_t g_27_l, int32_t g_62_l, int32_t g_68_l, int32_t g_75_l, int32_t g_76_l, int32_t g_79_l, char g_80_l, int32_t g_81_l, int32_t g_94_l, int32_t g_131_l, int32_t g_134_l) {
    // 0x2030
    int32_t v1; // 0x2030
    *(char *)(v1 + 0x2fdc) = (char)g_3_l;
    *(int32_t *)(v1 + 0x2fe0) = g_10_l;
    *(int32_t *)(v1 + 0x2fe4) = g_15_l;
    *(int32_t *)(v1 + 0x2fe8) = g_17_l;
    *(int32_t *)(v1 + 0x2fec) = g_20_l;
    *(int32_t *)(v1 + 0x2ff0) = g_27_l;
    *(int32_t *)(v1 + 0x2ff4) = g_62_l;
    *(int32_t *)(v1 + 0x2ff8) = g_68_l;
    *(int32_t *)(v1 + 0x2ffc) = g_75_l;
    *(int32_t *)(v1 + 0x3000) = g_76_l;
    *(int32_t *)(v1 + 0x3024) = g_79_l;
    *(int32_t *)(v1 + 0x3004) = (int32_t)g_80_l;
    *(char *)(v1 + 0x3008) = (char)g_81_l;
    *(int32_t *)(v1 + 0x300c) = g_94_l;
    *(int32_t *)(v1 + 0x3010) = g_131_l;
    *(int32_t *)(v1 + 0x3014) = g_134_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2110 - 0x2190
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2110
    int32_t v1; // 0x2110
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2190 - 0x21d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2190
    int32_t v1; // 0x2190
    int32_t * v2 = (int32_t *)(v1 + 0x2ebb); // 0x21a3
    uint32_t v3 = *v2; // 0x21a3
    char v4; // 0x2190
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2ec7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x21d4 - 0x21ec
int32_t _fini(void) {
    // 0x21d4
    int32_t v1; // 0x21d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

