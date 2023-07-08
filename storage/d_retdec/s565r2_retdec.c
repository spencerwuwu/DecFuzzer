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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_12_l, int32_t g_20_l, int32_t g_21_l, char g_34_l, int32_t g_92_l, int32_t g_93_l, char g_102_l, char g_105_l, int32_t g_147_l, int16_t g_148_l, int32_t g_149_l, int32_t g_151_l, int32_t g_191_l, int32_t g_220_l, char g_221_l, int32_t g_273_l, int16_t g_287_l, int32_t g_288_l, char g_298_l, int16_t g_301_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s565r2.c
// Address range: 0x11a0 - 0x15b8
// Line range:    321 - 355
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ee6)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4ec0); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x2e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4ec4); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x2e6c), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e74); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 0x2e71), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12e6
    transparent_crc(v9, (char *)(v2 + 0x2e76), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e7c); // 0x1308
    transparent_crc(v10, (char *)(v2 + 0x2e7b), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4ec8); // 0x132a
    transparent_crc(v11, (char *)(v2 + 0x2e80), v1);
    char v12 = *(char *)(v2 + 0x4e80); // 0x134c
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e85), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e84); // 0x136f
    transparent_crc(v13, (char *)(v2 + 0x2e8a), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e88); // 0x1391
    transparent_crc(v14, (char *)(v2 + 0x2e8f), v1);
    unsigned char v15 = *(char *)(v2 + 0x4e8c); // 0x13b3
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e94), v1);
    unsigned char v16 = *(char *)(v2 + 0x4e8d); // 0x13d6
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2e9a), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e90); // 0x13f9
    transparent_crc(v17, (char *)(v2 + 0x2ea0), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4ecc); // 0x141b
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ea6), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e94); // 0x143e
    transparent_crc(v19, (char *)(v2 + 0x2eac), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e98); // 0x1460
    transparent_crc(v20, (char *)(v2 + 0x2eb2), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e9c); // 0x1482
    transparent_crc(v21, (char *)(v2 + 0x2eb8), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea0); // 0x14a4
    transparent_crc(v22, (char *)(v2 + 0x2ebe), v1);
    unsigned char v23 = *(char *)(v2 + 0x4ea4); // 0x14c6
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec4), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4ea8); // 0x14eb
    transparent_crc(v24, (char *)(v2 + 0x2eca), v1);
    int16_t v25 = *(int16_t *)(v2 + 0x4eac); // 0x150d
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ed0), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eb0); // 0x1530
    transparent_crc(v26, (char *)(v2 + 0x2ed6), v1);
    unsigned char v27 = *(char *)(v2 + 0x4ece); // 0x1552
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2edc), v1);
    uint16_t v28 = *(int16_t *)(v2 + 0x4eb4); // 0x1575
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2ee2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15c0 - 0x15c5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15d0 - 0x1678
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x164a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1611
        while (v1 != 0) {
            // 0x1617
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1655
        int32_t v5; // 0x15d0
        *(int32_t *)(v5 + 0x4aa1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s565r2.c
// Address range: 0x1680 - 0x3713
// Line range:    63 - 314
int32_t func_1(void) {
    // 0x331e
    set_var(-1, 2, 1, 0x33c63384, 0, 0x6b9dd952, -1, -0x7c33b82f, 0, 0, -0x4541ad43, -0x7a5bf1a4, 1, -92, 1, 0, -1, -0x2d5a80bc, 0x7f3d2019, 0x64cd47ac, -2, -5, -1, -5, 0, -7);
    return -0x4541ad43;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3720 - 0x377f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3720
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3720
    if (v1 != 0) {
        // 0x3754
        printf((char *)(v1 + 2408));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3780 - 0x37b4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3780
    int32_t v1; // 0x3780
    printf((char *)(v1 + 2347));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s565r2.c
// Address range: 0x37c0 - 0x3914
// Line range:    53 - 55
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_6_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_12_l, int32_t g_20_l, int32_t g_21_l, char g_34_l, int32_t g_92_l, int32_t g_93_l, char g_102_l, char g_105_l, int32_t g_147_l, int16_t g_148_l, int32_t g_149_l, int32_t g_151_l, int32_t g_191_l, int32_t g_220_l, char g_221_l, int32_t g_273_l, int16_t g_287_l, int32_t g_288_l, char g_298_l, int16_t g_301_l) {
    // 0x37c0
    int32_t v1; // 0x37c0
    *(int32_t *)(v1 + 0x284c) = g_3_l;
    *(int32_t *)(v1 + 0x28a4) = g_6_l;
    *(int32_t *)(v1 + 0x2850) = g_9_l;
    *(int32_t *)(v1 + 0x2854) = g_10_l;
    *(int32_t *)(v1 + 0x28a8) = g_11_l;
    *(int32_t *)(v1 + 0x2858) = g_12_l;
    *(int32_t *)(v1 + 0x285c) = g_20_l;
    *(int32_t *)(v1 + 0x2860) = g_21_l;
    *(int32_t *)(v1 + 0x28ac) = (int32_t)g_34_l;
    *(char *)(v1 + 0x2864) = (char)g_92_l;
    *(int32_t *)(v1 + 0x2868) = g_93_l;
    *(int32_t *)(v1 + 0x286c) = (int32_t)g_102_l;
    *(char *)(v1 + 0x2870) = g_105_l;
    *(char *)(v1 + 0x2871) = (char)g_147_l;
    *(int32_t *)(v1 + 0x2874) = (int32_t)g_148_l;
    *(int16_t *)(v1 + 0x28b0) = (int16_t)g_149_l;
    *(int32_t *)(v1 + 0x2878) = g_151_l;
    *(int32_t *)(v1 + 0x287c) = g_191_l;
    *(int32_t *)(v1 + 0x2880) = g_220_l;
    *(int32_t *)(v1 + 0x2884) = (int32_t)g_221_l;
    *(char *)(v1 + 0x2888) = (char)g_273_l;
    *(int32_t *)(v1 + 0x288c) = (int32_t)g_287_l;
    *(int16_t *)(v1 + 0x2890) = (int16_t)g_288_l;
    *(int32_t *)(v1 + 0x2894) = (int32_t)g_298_l;
    *(char *)(v1 + 0x28b2) = (char)g_301_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3920 - 0x39a0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3920
    int32_t v1; // 0x3920
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x39a0 - 0x39e4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x39a0
    int32_t v1; // 0x39a0
    int32_t * v2 = (int32_t *)(v1 + 0x26bb); // 0x39b3
    uint32_t v3 = *v2; // 0x39b3
    char v4; // 0x39a0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x26d3 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x39e4 - 0x39fc
int32_t _fini(void) {
    // 0x39e4
    int32_t v1; // 0x39e4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

