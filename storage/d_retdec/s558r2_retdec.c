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
int32_t set_var(char g_28_l, int32_t g_37_l, int32_t g_42_l, char g_51_l, char g_52_l, int32_t g_63_l, int16_t g_65_l, char g_66_l, int32_t g_67_l, int32_t g_81_l, char g_127_l, int16_t g_136_l, char g_145_l, char g_148_l, int32_t g_151_l, int32_t g_192_l, char g_202_l, int32_t g_219_l, int16_t g_220_l, int32_t g_248_l, int16_t g_259_l, int32_t g_321_l, int16_t g_349_l, int32_t g_430_l, int16_t g_457_l, int32_t g_486_l, int32_t g_494_l, char g_507_l, int32_t g_549_l);
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
    return v1 + 0x4fbb;
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
    char * v3 = (char *)(v1 + 0x4f23); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s558r2.c
// Address range: 0x11a0 - 0x1654
// Line range:    384 - 422
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ed9)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    transparent_crc(0, (char *)(v2 + 0x2e61), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e6c); // 0x1261
    transparent_crc(v4, (char *)(v2 + 0x2e66), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e70); // 0x1283
    transparent_crc(v5, (char *)(v2 + 0x2e6b), v1);
    unsigned char v6 = *(char *)(v2 + 0x4e74); // 0x12a5
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e70), v1);
    unsigned char v7 = *(char *)(v2 + 0x4e75); // 0x12c8
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e75), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12eb
    transparent_crc(v8, (char *)(v2 + 0x2e7a), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x4e7c); // 0x130d
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e7f), v1);
    char v10 = *(char *)(v2 + 0x4ec8); // 0x1333
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e84), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4ecc); // 0x1358
    transparent_crc(v11, (char *)(v2 + 0x2e89), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e80); // 0x137a
    transparent_crc(v12, (char *)(v2 + 0x2e8e), v1);
    char v13 = *(char *)(v2 + 0x4ed0); // 0x139c
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e93), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x4e84); // 0x13bf
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e99), v1);
    char v15 = *(char *)(v2 + 0x4e86); // 0x13e5
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9f), v1);
    unsigned char v16 = *(char *)(v2 + 0x4e87); // 0x1408
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea5), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e88); // 0x142b
    transparent_crc(v17, (char *)(v2 + 0x2eab), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4e8c); // 0x144d
    transparent_crc(v18, (char *)(v2 + 0x2eb1), v1);
    char v19 = *(char *)(v2 + 0x4e90); // 0x146f
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb7), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e94); // 0x1492
    transparent_crc(v20, (char *)(v2 + 0x2ebd), v1);
    uint16_t v21 = *(int16_t *)(v2 + 0x4ed2); // 0x14b4
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ec3), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4e98); // 0x14d7
    transparent_crc(v22, (char *)(v2 + 0x2ec9), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x4e9c); // 0x14f9
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ecf), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4ea0); // 0x151c
    transparent_crc(v24, (char *)(v2 + 0x2ed5), v1);
    uint16_t v25 = *(int16_t *)(v2 + 0x4ea4); // 0x153e
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2edb), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4ea8); // 0x1564
    transparent_crc(v26, (char *)(v2 + 0x2ee1), v1);
    uint16_t v27 = *(int16_t *)(v2 + 0x4eac); // 0x1586
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ee7), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x4eb0); // 0x15a9
    transparent_crc(v28, (char *)(v2 + 0x2eed), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x4eb4); // 0x15cb
    transparent_crc(v29, (char *)(v2 + 0x2ef3), v1);
    unsigned char v30 = *(char *)(v2 + 0x4eb8); // 0x15ed
    transparent_crc((int32_t)v30, (char *)(v2 + 0x2ef9), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x4ebc); // 0x1612
    transparent_crc(v31, (char *)(v2 + 0x2eff), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ec0), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1660 - 0x1665
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1660
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1670 - 0x1718
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x16ea
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16b1
        while (v1 != 0) {
            // 0x16b7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16f5
        int32_t v5; // 0x1670
        *(int32_t *)(v5 + 0x4a05 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s558r2.c
// Address range: 0x1720 - 0x3737
// Line range:    67 - 376
int32_t func_1(void) {
    // 0x34fa
    set_var(8, 21, -0x29d40113, 85, 83, 3, 0x1851, 0, 0, -0x7454dd42, 0, -1, -50, -115, 2, -0x10679666, -1, 1, 0, 9, -806, 0x3253be1f, -0x5d65, -0x1eaf6627, -3233, -0x77f9ff5a, -0x6caf7c2f, 35, -0x743d5a38);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3740 - 0x379f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3740
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3740
    if (v1 != 0) {
        // 0x3774
        printf((char *)(v1 + 2405));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x37a0 - 0x37d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x37a0
    int32_t v1; // 0x37a0
    printf((char *)(v1 + 2344));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s558r2.c
// Address range: 0x37e0 - 0x3961
// Line range:    57 - 59
int32_t set_var(char g_28_l, int32_t g_37_l, int32_t g_42_l, char g_51_l, char g_52_l, int32_t g_63_l, int16_t g_65_l, char g_66_l, int32_t g_67_l, int32_t g_81_l, char g_127_l, int16_t g_136_l, char g_145_l, char g_148_l, int32_t g_151_l, int32_t g_192_l, char g_202_l, int32_t g_219_l, int16_t g_220_l, int32_t g_248_l, int16_t g_259_l, int32_t g_321_l, int16_t g_349_l, int32_t g_430_l, int16_t g_457_l, int32_t g_486_l, int32_t g_494_l, char g_507_l, int32_t g_549_l) {
    // 0x37e0
    int32_t v1; // 0x37e0
    *(char *)(v1 + 0x282c) = (char)g_37_l;
    *(int32_t *)(v1 + 0x2830) = g_42_l;
    *(int32_t *)(v1 + 0x2834) = (int32_t)g_51_l;
    *(char *)(v1 + 0x2838) = g_52_l;
    *(char *)(v1 + 0x2839) = (char)g_63_l;
    *(int32_t *)(v1 + 0x283c) = (int32_t)g_65_l;
    *(int16_t *)(v1 + 0x2840) = (int16_t)g_66_l;
    *(char *)(v1 + 0x288c) = (char)g_67_l;
    *(int32_t *)(v1 + 0x2890) = g_81_l;
    *(int32_t *)(v1 + 0x2844) = (int32_t)g_127_l;
    *(char *)(v1 + 0x2894) = (char)g_136_l;
    *(int16_t *)(v1 + 0x2848) = (int16_t)g_145_l;
    *(char *)(v1 + 0x284a) = g_148_l;
    *(char *)(v1 + 0x284b) = (char)g_151_l;
    *(int32_t *)(v1 + 0x284c) = g_192_l;
    *(int32_t *)(v1 + 0x2850) = (int32_t)g_202_l;
    *(char *)(v1 + 0x2854) = (char)g_219_l;
    *(int32_t *)(v1 + 0x2858) = (int32_t)g_220_l;
    *(int16_t *)(v1 + 0x2896) = (int16_t)g_248_l;
    *(int32_t *)(v1 + 0x285c) = (int32_t)g_259_l;
    *(int16_t *)(v1 + 0x2860) = (int16_t)g_321_l;
    *(int32_t *)(v1 + 0x2864) = (int32_t)g_349_l;
    *(int16_t *)(v1 + 0x2868) = (int16_t)g_430_l;
    *(int32_t *)(v1 + 0x286c) = (int32_t)g_457_l;
    *(int16_t *)(v1 + 0x2870) = (int16_t)g_486_l;
    *(int32_t *)(v1 + 0x2874) = g_494_l;
    *(int32_t *)(v1 + 0x2878) = (int32_t)g_507_l;
    *(char *)(v1 + 0x287c) = (char)g_549_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3970 - 0x39f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3970
    int32_t v1; // 0x3970
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x39f0 - 0x3a34
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x39f0
    int32_t v1; // 0x39f0
    int32_t * v2 = (int32_t *)(v1 + 0x2673); // 0x3a03
    uint32_t v3 = *v2; // 0x3a03
    char v4; // 0x39f0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2687 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3a34 - 0x3a4c
int32_t _fini(void) {
    // 0x3a34
    int32_t v1; // 0x3a34
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

