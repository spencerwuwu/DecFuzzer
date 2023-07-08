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
int32_t set_var(int32_t g_7_l, char g_9_l, int32_t g_10_l, int32_t g_24_l, char g_50_l, int32_t g_62_l, int16_t g_77_l, int32_t g_79_l, int32_t g_100_l, int32_t g_117_l, int32_t g_127_l, int32_t g_142_l, int16_t g_144_l, int16_t g_187_l, int32_t g_219_l, int16_t g_220_l, int16_t g_221_l, int32_t g_222_l, char g_223_l, char g_225_l, char g_229_l, int32_t g_231_l, int32_t g_234_l, int32_t g_251_l, char g_253_l);
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
    return v1 + 0x4faf;
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
    char * v3 = (char *)(v1 + 0x4f17); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s171retdec.c
// Address range: 0x11a0 - 0x1599
// Line range:    268 - 301
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2eb6)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    char v4 = *(char *)(v2 + 0x4e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4ebc); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x2e69), v1);
    unsigned char v7 = *(char *)(v2 + 0x4e74); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x2e73), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x4e7c); // 0x12e8
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e80); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x2e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e84); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x2e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e88); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e8c); // 0x1371
    transparent_crc(v13, (char *)(v2 + 0x2e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e90); // 0x1393
    transparent_crc(v14, (char *)(v2 + 0x2e94), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x4e94); // 0x13b5
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9a), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x4e96); // 0x13d8
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4ec0); // 0x13fb
    transparent_crc(v17, (char *)(v2 + 0x2ea6), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4e98); // 0x141d
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eac), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x4e9a); // 0x1440
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb2), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e9c); // 0x1463
    transparent_crc(v20, (char *)(v2 + 0x2eb8), v1);
    char v21 = *(char *)(v2 + 0x4ea0); // 0x1485
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ebe), v1);
    char v22 = *(char *)(v2 + 0x4ea1); // 0x14aa
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec4), v1);
    char v23 = *(char *)(v2 + 0x4ea2); // 0x14cd
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2eca), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4ea4); // 0x14f0
    transparent_crc(v24, (char *)(v2 + 0x2ed0), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ea8); // 0x1512
    transparent_crc(v25, (char *)(v2 + 0x2ed6), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eac); // 0x1534
    transparent_crc(v26, (char *)(v2 + 0x2edc), v1);
    unsigned char v27 = *(char *)(v2 + 0x4eb0); // 0x1556
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ee2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15a0 - 0x15a5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15b0 - 0x1658
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x162a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x15f1
        while (v1 != 0) {
            // 0x15f7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1635
        int32_t v5; // 0x15b0
        *(int32_t *)(v5 + 0x4ab5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s171retdec.c
// Address range: 0x1660 - 0x336a
// Line range:    62 - 261
char func_1(void) {
    // 0x1660
    set_var(-8, 0, -21, -1, 47, -0x717844a9, -0x4bd1, 44, 2115, -0x6299726, -1, 6, -0x7a2d, 0x330e, 0, 1, -0x461f, -0x70a0766, 5, -122, -59, -0x7309751f, 1, 0x5e14dd74, -7);
    return 47;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3370 - 0x33cf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3370
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3370
    if (v1 != 0) {
        // 0x33a4
        printf((char *)(v1 + 3352));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x33d0 - 0x3404
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x33d0
    int32_t v1; // 0x33d0
    printf((char *)(v1 + 3291));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s171retdec.c
// Address range: 0x3410 - 0x355e
// Line range:    52 - 54
int32_t set_var(int32_t g_7_l, char g_9_l, int32_t g_10_l, int32_t g_24_l, char g_50_l, int32_t g_62_l, int16_t g_77_l, int32_t g_79_l, int32_t g_100_l, int32_t g_117_l, int32_t g_127_l, int32_t g_142_l, int16_t g_144_l, int16_t g_187_l, int32_t g_219_l, int16_t g_220_l, int16_t g_221_l, int32_t g_222_l, char g_223_l, char g_225_l, char g_229_l, int32_t g_231_l, int32_t g_234_l, int32_t g_251_l, char g_253_l) {
    // 0x3410
    int32_t v1; // 0x3410
    *(int32_t *)(v1 + 0x2bfc) = (int32_t)g_9_l;
    *(char *)(v1 + 0x2c00) = (char)g_10_l;
    *(int32_t *)(v1 + 0x2c04) = g_24_l;
    *(int32_t *)(v1 + 0x2c50) = (int32_t)g_50_l;
    *(char *)(v1 + 0x2c08) = (char)g_62_l;
    *(int32_t *)(v1 + 0x2c0c) = (int32_t)g_77_l;
    *(int16_t *)(v1 + 0x2c10) = (int16_t)g_79_l;
    *(int32_t *)(v1 + 0x2c14) = g_100_l;
    *(int32_t *)(v1 + 0x2c18) = g_117_l;
    *(int32_t *)(v1 + 0x2c1c) = g_127_l;
    *(int32_t *)(v1 + 0x2c20) = g_142_l;
    *(int32_t *)(v1 + 0x2c24) = (int32_t)g_144_l;
    *(int16_t *)(v1 + 0x2c28) = g_187_l;
    *(int16_t *)(v1 + 0x2c2a) = (int16_t)g_219_l;
    *(int32_t *)(v1 + 0x2c54) = (int32_t)g_220_l;
    *(int16_t *)(v1 + 0x2c2c) = g_221_l;
    *(int16_t *)(v1 + 0x2c2e) = (int16_t)g_222_l;
    *(int32_t *)(v1 + 0x2c30) = (int32_t)g_223_l;
    *(char *)(v1 + 0x2c34) = g_225_l;
    *(char *)(v1 + 0x2c35) = g_229_l;
    *(char *)(v1 + 0x2c36) = (char)g_231_l;
    *(int32_t *)(v1 + 0x2c38) = g_234_l;
    *(int32_t *)(v1 + 0x2c3c) = g_251_l;
    *(int32_t *)(v1 + 0x2c40) = (int32_t)g_253_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3560 - 0x35e0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3560
    int32_t v1; // 0x3560
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x35e0 - 0x3624
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x35e0
    int32_t v1; // 0x35e0
    int32_t * v2 = (int32_t *)(v1 + 0x2a77); // 0x35f3
    uint32_t v3 = *v2; // 0x35f3
    char v4; // 0x35e0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2a87 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3624 - 0x363c
int32_t _fini(void) {
    // 0x3624
    int32_t v1; // 0x3624
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

