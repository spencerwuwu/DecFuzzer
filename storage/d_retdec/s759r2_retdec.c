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
int32_t set_var(int16_t g_12_l, int32_t g_30_l, int32_t g_31_l, int16_t g_46_l, int32_t g_47_l, int32_t g_48_l, char g_61_l, int32_t g_65_l, int16_t g_74_l, int16_t g_90_l, int16_t g_96_l, int32_t g_122_l, int32_t g_123_l, int32_t g_148_l, int16_t g_150_l, int16_t g_151_l, int16_t g_152_l, int16_t g_162_l, char g_169_l, char g_190_l, int16_t g_193_l, int16_t g_203_l, int32_t g_209_l, char g_210_l, int32_t g_240_l, int32_t g_298_l, int32_t g_336_l, char g_337_l, int16_t g_338_l, char g_418_l, int32_t g_442_l, int32_t g_443_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x15ba749a; // 0x3148
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x5fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x5f68); // 0x1090
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
    return v1 + 0x5fc3;
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
    char * v3 = (char *)(v1 + 0x5f2b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759r2.c
// Address range: 0x11a0 - 0x16b7
// Line range:    337 - 378
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3e6d)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(-3, (char *)(v2 + 0x3e5c), v1);
    int16_t v3 = *(int16_t *)(v2 + 0x5e68); // 0x123a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x3e60), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x5e6c); // 0x125d
    transparent_crc(v4, (char *)(v2 + 0x3e65), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x5e70); // 0x127f
    transparent_crc(v5, (char *)(v2 + 0x3e6a), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x5e74); // 0x12a1
    transparent_crc((int32_t)v6, (char *)(v2 + 0x3e6f), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x5e78); // 0x12c4
    transparent_crc(v7, (char *)(v2 + 0x3e74), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x5e7c); // 0x12e6
    transparent_crc(v8, (char *)(v2 + 0x3e79), v1);
    char v9 = *(char *)(v2 + 0x5e80); // 0x1308
    transparent_crc((int32_t)v9, (char *)(v2 + 0x3e7e), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x5e84); // 0x132b
    transparent_crc(v10, (char *)(v2 + 0x3e83), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x5e88); // 0x134d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e88), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x5e8a); // 0x1370
    transparent_crc((int32_t)v12, (char *)(v2 + 0x3e8d), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x5e8c); // 0x1393
    transparent_crc((int32_t)v13, (char *)(v2 + 0x3e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x5e90); // 0x13b6
    transparent_crc(v14, (char *)(v2 + 0x3e97), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x5ed0); // 0x13d8
    transparent_crc(v15, (char *)(v2 + 0x3e9d), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x5e94); // 0x13fa
    transparent_crc(v16, (char *)(v2 + 0x3ea3), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x5e98); // 0x141c
    transparent_crc((int32_t)v17, (char *)(v2 + 0x3ea9), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x5e9a); // 0x1442
    transparent_crc((int32_t)v18, (char *)(v2 + 0x3eaf), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x5ed4); // 0x1468
    transparent_crc((int32_t)v19, (char *)(v2 + 0x3eb5), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x5e9c); // 0x148b
    transparent_crc((int32_t)v20, (char *)(v2 + 0x3ebb), v1);
    char v21 = *(char *)(v2 + 0x5ed6); // 0x14ae
    transparent_crc((int32_t)v21, (char *)(v2 + 0x3ec1), v1);
    unsigned char v22 = *(char *)(v2 + 0x5e9e); // 0x14d1
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ec7), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x5ea0); // 0x14f4
    transparent_crc((int32_t)v23, (char *)(v2 + 0x3ecd), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x5ea2); // 0x1517
    transparent_crc((int32_t)v24, (char *)(v2 + 0x3ed3), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5ea4); // 0x153a
    transparent_crc(v25, (char *)(v2 + 0x3ed9), v1);
    unsigned char v26 = *(char *)(v2 + 0x5ea8); // 0x155c
    transparent_crc((int32_t)v26, (char *)(v2 + 0x3edf), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x5eac); // 0x157f
    transparent_crc(v27, (char *)(v2 + 0x3ee5), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x5eb0); // 0x15a1
    transparent_crc(v28, (char *)(v2 + 0x3eeb), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x5eb4); // 0x15c3
    transparent_crc(v29, (char *)(v2 + 0x3ef1), v1);
    char v30 = *(char *)(v2 + 0x5eb8); // 0x15e5
    transparent_crc((int32_t)v30, (char *)(v2 + 0x3ef7), v1);
    uint16_t v31 = *(int16_t *)(v2 + 0x5eba); // 0x160a
    transparent_crc((int32_t)v31, (char *)(v2 + 0x3efd), v1);
    unsigned char v32 = *(char *)(v2 + 0x5ebc); // 0x1630
    transparent_crc((int32_t)v32, (char *)(v2 + 0x3f03), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x5ec0); // 0x1653
    transparent_crc(v33, (char *)(v2 + 0x3f09), v1);
    int32_t v34 = *(int32_t *)(v2 + 0x5ec4); // 0x1675
    transparent_crc(v34, (char *)(v2 + 0x3f0f), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5ec8), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x16c0 - 0x16c5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x16c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16d0 - 0x1778
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x174a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1711
        while (v1 != 0) {
            // 0x1717
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1755
        int32_t v5; // 0x16d0
        *(int32_t *)(v5 + 0x59a9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759r2.c
// Address range: 0x1780 - 0x3e9d
// Line range:    70 - 330
int32_t func_1(void) {
    // 0x3e8f
    set_var(-3, -1, -0x7c32f328, 0x174a, -0x40d015d9, -0x5be2bf9, 98, -0x4b7125d7, -0x1b93, -3857, 1, -3, 0, 0x2a266805, -0x3a7d, 1, 0, -0x1d9d, 0, -34, -0x2697, -2, -5, 116, -0x3a8241f4, 0x7c6442fd, 0x7da15cdc, 5, 1, -17, -0x6a2ce98d, -0x359754eb);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3ea0 - 0x3eff
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3ea0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3ea0
    if (v1 != 0) {
        // 0x3ed4
        printf((char *)(v1 + (int32_t)&g1 - 0x1f33));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x3f00 - 0x3f34
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3f00
    int32_t v1; // 0x3f00
    printf((char *)(v1 + 0x11d8));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759r2.c
// Address range: 0x3f40 - 0x4103
// Line range:    60 - 62
int32_t set_var(int16_t g_12_l, int32_t g_30_l, int32_t g_31_l, int16_t g_46_l, int32_t g_47_l, int32_t g_48_l, char g_61_l, int32_t g_65_l, int16_t g_74_l, int16_t g_90_l, int16_t g_96_l, int32_t g_122_l, int32_t g_123_l, int32_t g_148_l, int16_t g_150_l, int16_t g_151_l, int16_t g_152_l, int16_t g_162_l, char g_169_l, char g_190_l, int16_t g_193_l, int16_t g_203_l, int32_t g_209_l, char g_210_l, int32_t g_240_l, int32_t g_298_l, int32_t g_336_l, char g_337_l, int16_t g_338_l, char g_418_l, int32_t g_442_l, int32_t g_443_l) {
    // 0x3f40
    int32_t v1; // 0x3f40
    *(int16_t *)(v1 + 0x30cc) = (int16_t)g_30_l;
    *(int32_t *)(v1 + 0x30d0) = g_31_l;
    *(int32_t *)(v1 + 0x30d4) = (int32_t)g_46_l;
    *(int16_t *)(v1 + 0x30d8) = (int16_t)g_47_l;
    *(int32_t *)(v1 + 0x30dc) = g_48_l;
    *(int32_t *)(v1 + 0x30e0) = (int32_t)g_61_l;
    *(char *)(v1 + 0x30e4) = (char)g_65_l;
    *(int32_t *)(v1 + 0x30e8) = (int32_t)g_74_l;
    *(int16_t *)(v1 + 0x30ec) = g_90_l;
    *(int16_t *)(v1 + 0x30ee) = g_96_l;
    *(int16_t *)(v1 + 0x30f0) = (int16_t)g_122_l;
    *(int32_t *)(v1 + 0x30f4) = g_123_l;
    *(int32_t *)(v1 + 0x3134) = g_148_l;
    *(int32_t *)(v1 + 0x30f8) = (int32_t)g_150_l;
    *(int16_t *)(v1 + 0x30fc) = g_151_l;
    *(int16_t *)(v1 + 0x30fe) = g_152_l;
    *(int16_t *)(v1 + 0x3138) = g_162_l;
    *(int16_t *)(v1 + 0x3100) = (int16_t)g_169_l;
    *(char *)(v1 + 0x313a) = g_190_l;
    *(char *)(v1 + 0x3102) = (char)g_193_l;
    *(int16_t *)(v1 + 0x3104) = g_203_l;
    *(int16_t *)(v1 + 0x3106) = (int16_t)g_209_l;
    *(int32_t *)(v1 + 0x3108) = (int32_t)g_210_l;
    *(char *)(v1 + 0x310c) = (char)g_240_l;
    *(int32_t *)(v1 + 0x3110) = g_298_l;
    *(int32_t *)(v1 + 0x3114) = g_336_l;
    *(int32_t *)(v1 + 0x3118) = (int32_t)g_337_l;
    *(char *)(v1 + 0x311c) = (char)g_338_l;
    *(int16_t *)(v1 + 0x311e) = (int16_t)g_418_l;
    *(char *)(v1 + 0x3120) = (char)g_442_l;
    *(int32_t *)(v1 + 0x3124) = g_443_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4110 - 0x4190
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x4110
    int32_t v1; // 0x4110
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4190 - 0x41d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4190
    int32_t v1; // 0x4190
    int32_t * v2 = (int32_t *)(v1 + 0x2edb); // 0x41a3
    uint32_t v3 = *v2; // 0x41a3
    char v4; // 0x4190
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2eeb + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x41d4 - 0x41ec
int32_t _fini(void) {
    // 0x41d4
    int32_t v1; // 0x41d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

