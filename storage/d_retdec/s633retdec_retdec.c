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
int32_t set_var(char g_12_l, int32_t g_21_l, char g_31_l, int32_t g_32_l, int32_t g_35_l, int16_t g_60_l, int32_t g_63_l, char g_73_l, int32_t g_86_l, int32_t g_108_l, int32_t g_109_l, char g_110_l, int32_t g_152_l, int32_t g_168_l, int16_t g_173_l, int16_t g_195_l, int16_t g_198_l, char g_253_l, int32_t g_272_l, char g_273_l, char g_274_l, int32_t g_285_l, int16_t g_289_l, int32_t g_314_l, int16_t g_326_l, int32_t g_352_l, int16_t g_353_l, char g_381_l, char g_394_l, int32_t g_415_l, int32_t g_447_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = -0x734c; // 0x1e1
int32_t g2;

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
    return v1 + 0x4fbf;
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
    char * v3 = (char *)(v1 + 0x4f27); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s633retdec.c
// Address range: 0x11a0 - 0x1672
// Line range:    343 - 382
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e64)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x4ecc); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e68); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x2e61), v1);
    unsigned char v5 = *(char *)(v2 + 0x4ecd); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e6c); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x2e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e70); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x2e70), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x4e74); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x2e7a), v1);
    unsigned char v10 = *(char *)(v2 + 0x4e7c); // 0x130b
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7f), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e80); // 0x132e
    transparent_crc(v11, (char *)(v2 + 0x2e84), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e84); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x2e89), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e88); // 0x1372
    transparent_crc(v13, (char *)(v2 + 0x2e8f), v1);
    unsigned char v14 = *(char *)(v2 + 0x4e8c); // 0x1394
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e95), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e90); // 0x13b7
    transparent_crc(v15, (char *)(v2 + 0x2e9b), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4ed0); // 0x13d9
    transparent_crc(v16, (char *)(v2 + 0x2ea1), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x4e94); // 0x13fb
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea7), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4ed4); // 0x141e
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ead), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x4e96); // 0x1441
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb3), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e98); // 0x1467
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb9), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e9c); // 0x148a
    transparent_crc(v21, (char *)(v2 + 0x2ebf), v1);
    char v22 = *(char *)(v2 + 0x4ea0); // 0x14ac
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec5), v1);
    unsigned char v23 = *(char *)(v2 + 0x4ea1); // 0x14d1
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ecb), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4ea4); // 0x14f4
    transparent_crc(v24, (char *)(v2 + 0x2ed1), v1);
    uint16_t v25 = *(int16_t *)(v2 + 0x4ea8); // 0x1516
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ed7), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eac); // 0x1539
    transparent_crc(v26, (char *)(v2 + 0x2edd), v1);
    uint16_t v27 = *(int16_t *)(v2 + 0x4eb0); // 0x155b
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ee3), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x4eb4); // 0x157e
    transparent_crc(v28, (char *)(v2 + 0x2ee9), v1);
    uint16_t v29 = *(int16_t *)(v2 + 0x4eb8); // 0x15a0
    transparent_crc((int32_t)v29, (char *)(v2 + 0x2eef), v1);
    unsigned char v30 = *(char *)(v2 + 0x4eba); // 0x15c6
    transparent_crc((int32_t)v30, (char *)(v2 + 0x2ef5), v1);
    unsigned char v31 = *(char *)(v2 + 0x4ebb); // 0x15eb
    transparent_crc((int32_t)v31, (char *)(v2 + 0x2efb), v1);
    int32_t v32 = *(int32_t *)(v2 + 0x4ebc); // 0x160e
    transparent_crc(v32, (char *)(v2 + 0x2f01), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x4ec0); // 0x1630
    transparent_crc(v33, (char *)(v2 + 0x2f07), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ec4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1680 - 0x1685
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1680
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1690 - 0x1738
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x170a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16d1
        while (v1 != 0) {
            // 0x16d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1715
        int32_t v5; // 0x1690
        *(int32_t *)(v5 + 0x49e9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s633retdec.c
// Address range: 0x1740 - 0x3c95
// Line range:    68 - 336
int32_t func_1(void) {
    // 0x3c87
    set_var(0, -2, -1, 0x969e0cd, 0x367afff1, -0x4212, -3, 12, 0x79765bc9, -0x38da37f5, -4, -121, -0x7eb37b7e, 0, -1, 0, (int16_t)&g1, 1, 0x70504d8e, 105, 1, 0x7c96ad61, -0x5edd, 0x21d3a323, -1936, 0x702ea30, -0x6da5, -84, -13, 3, -0x66ad2b5c);
    return 199;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3ca0 - 0x3cff
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3ca0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3ca0
    if (v1 != 0) {
        // 0x3cd4
        printf((char *)(v1 + 1037));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3d00 - 0x3d34
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3d00
    int32_t v1; // 0x3d00
    printf((char *)(v1 + 976));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s633retdec.c
// Address range: 0x3d40 - 0x3ee2
// Line range:    58 - 60
int32_t set_var(char g_12_l, int32_t g_21_l, char g_31_l, int32_t g_32_l, int32_t g_35_l, int16_t g_60_l, int32_t g_63_l, char g_73_l, int32_t g_86_l, int32_t g_108_l, int32_t g_109_l, char g_110_l, int32_t g_152_l, int32_t g_168_l, int16_t g_173_l, int16_t g_195_l, int16_t g_198_l, char g_253_l, int32_t g_272_l, char g_273_l, char g_274_l, int32_t g_285_l, int16_t g_289_l, int32_t g_314_l, int16_t g_326_l, int32_t g_352_l, int16_t g_353_l, char g_381_l, char g_394_l, int32_t g_415_l, int32_t g_447_l) {
    // 0x3d40
    int32_t v1; // 0x3d40
    *(char *)(v1 + 0x2330) = (char)g_21_l;
    *(int32_t *)(v1 + 0x22cc) = (int32_t)g_31_l;
    *(char *)(v1 + 0x2331) = (char)g_32_l;
    *(int32_t *)(v1 + 0x22d0) = g_35_l;
    *(int32_t *)(v1 + 0x22d4) = (int32_t)g_60_l;
    *(int16_t *)(v1 + 0x22d8) = (int16_t)g_63_l;
    *(int32_t *)(v1 + 0x22dc) = (int32_t)g_73_l;
    *(char *)(v1 + 0x22e0) = (char)g_86_l;
    *(int32_t *)(v1 + 0x22e4) = g_108_l;
    *(int32_t *)(v1 + 0x22e8) = g_109_l;
    *(int32_t *)(v1 + 0x22ec) = (int32_t)g_110_l;
    *(char *)(v1 + 0x22f0) = (char)g_152_l;
    *(int32_t *)(v1 + 0x22f4) = g_168_l;
    *(int32_t *)(v1 + 0x2334) = (int32_t)g_173_l;
    *(int16_t *)(v1 + 0x22f8) = g_195_l;
    *(int16_t *)(v1 + 0x2338) = g_198_l;
    *(int16_t *)(v1 + 0x22fa) = (int16_t)g_253_l;
    *(char *)(v1 + 0x22fc) = (char)g_272_l;
    *(int32_t *)(v1 + 0x2300) = (int32_t)g_273_l;
    *(char *)(v1 + 0x2304) = g_274_l;
    *(char *)(v1 + 0x2305) = (char)g_285_l;
    *(int32_t *)(v1 + 0x2308) = (int32_t)g_289_l;
    *(int16_t *)(v1 + 0x230c) = (int16_t)g_314_l;
    *(int32_t *)(v1 + 0x2310) = (int32_t)g_326_l;
    *(int16_t *)(v1 + 0x2314) = (int16_t)g_352_l;
    *(int32_t *)(v1 + 0x2318) = (int32_t)g_353_l;
    *(int16_t *)(v1 + 0x231c) = (int16_t)g_381_l;
    *(char *)(v1 + 0x231e) = g_394_l;
    *(char *)(v1 + 0x231f) = (char)g_415_l;
    *(int32_t *)(v1 + 0x2320) = g_447_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3ef0 - 0x3f70
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3ef0
    int32_t v1; // 0x3ef0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3f70 - 0x3fb4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3f70
    int32_t v1; // 0x3f70
    int32_t * v2 = (int32_t *)(v1 + 0x20f7); // 0x3f83
    uint32_t v3 = *v2; // 0x3f83
    char v4; // 0x3f70
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x210b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3fb4 - 0x3fcc
int32_t _fini(void) {
    // 0x3fb4
    int32_t v1; // 0x3fb4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

