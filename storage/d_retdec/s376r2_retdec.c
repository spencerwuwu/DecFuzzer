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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_11_l, int32_t g_12_l, int16_t g_22_l, char g_31_l, int32_t g_59_l, char g_67_l, int32_t g_93_l, int32_t g_110_l, int32_t g_111_l, int16_t g_143_l, int16_t g_144_l, int32_t g_145_l, char g_189_l);
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
    return v1 + 0x3f9b;
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
    char * v3 = (char *)(v1 + 0x3f03); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s376r2.c
// Address range: 0x11a0 - 0x148a
// Line range:    202 - 227
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e99)) == 0;
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
    int32_t v6 = *(int32_t *)(v2 + 0x3ea8); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x1e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x1e6c), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e78); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 0x1e71), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e7c); // 0x12e6
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e76), v1);
    unsigned char v10 = *(char *)(v2 + 0x3e7e); // 0x1309
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7b), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x132c
    transparent_crc(v11, (char *)(v2 + 0x1e80), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e84); // 0x134e
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e85), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e88); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x1e8a), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e8c); // 0x1395
    transparent_crc(v14, (char *)(v2 + 0x1e8f), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e90); // 0x13b7
    transparent_crc(v15, (char *)(v2 + 0x1e95), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x3e94); // 0x13d9
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9b), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x3e96); // 0x13ff
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea1), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x1425
    transparent_crc(v18, (char *)(v2 + 0x1ea7), v1);
    unsigned char v19 = *(char *)(v2 + 0x3e9c); // 0x1447
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1ead), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1490 - 0x1495
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1490
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14a0 - 0x1548
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x151a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14e1
        while (v1 != 0) {
            // 0x14e7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1525
        int32_t v5; // 0x14a0
        *(int32_t *)(v5 + 0x3bad + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s376r2.c
// Address range: 0x1550 - 0x2133
// Line range:    54 - 195
int32_t func_1(void) {
    // 0x1550
    set_var(9, 0x7fd5464b, -0x3e7b3afa, 20, 0x36544d18, 2, 9, -70, 0x13944077, -41, 9, 0x2e325606, 0x4e4d2d9, -0x17b3, -7, -1, 18);
    return 9;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2140 - 0x219f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2140
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2140
    if (v1 != 0) {
        // 0x2174
        printf((char *)(v1 + 3859));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x21a0 - 0x21d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x21a0
    int32_t v1; // 0x21a0
    printf((char *)(v1 + 3798));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s376r2.c
// Address range: 0x21e0 - 0x22c8
// Line range:    44 - 46
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_11_l, int32_t g_12_l, int16_t g_22_l, char g_31_l, int32_t g_59_l, char g_67_l, int32_t g_93_l, int32_t g_110_l, int32_t g_111_l, int16_t g_143_l, int16_t g_144_l, int32_t g_145_l, char g_189_l) {
    // 0x21e0
    int32_t v1; // 0x21e0
    *(int32_t *)(v1 + 0x2e2c) = g_3_l;
    *(int32_t *)(v1 + 0x2e30) = g_4_l;
    *(int32_t *)(v1 + 0x2e34) = g_5_l;
    *(int32_t *)(v1 + 0x2e6c) = g_11_l;
    *(int32_t *)(v1 + 0x2e38) = g_12_l;
    *(int32_t *)(v1 + 0x2e3c) = (int32_t)g_22_l;
    *(int16_t *)(v1 + 0x2e40) = (int16_t)g_31_l;
    *(char *)(v1 + 0x2e42) = (char)g_59_l;
    *(int32_t *)(v1 + 0x2e44) = (int32_t)g_67_l;
    *(char *)(v1 + 0x2e48) = (char)g_93_l;
    *(int32_t *)(v1 + 0x2e4c) = g_110_l;
    *(int32_t *)(v1 + 0x2e50) = g_111_l;
    *(int32_t *)(v1 + 0x2e54) = (int32_t)g_143_l;
    *(int16_t *)(v1 + 0x2e58) = g_144_l;
    *(int16_t *)(v1 + 0x2e5a) = (int16_t)g_145_l;
    *(int32_t *)(v1 + 0x2e5c) = (int32_t)g_189_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x22d0 - 0x2350
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x22d0
    int32_t v1; // 0x22d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2350 - 0x2394
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2350
    int32_t v1; // 0x2350
    int32_t * v2 = (int32_t *)(v1 + 0x2cf3); // 0x2363
    uint32_t v3 = *v2; // 0x2363
    char v4; // 0x2350
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2cff + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2394 - 0x23ac
int32_t _fini(void) {
    // 0x2394
    int32_t v1; // 0x2394
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

