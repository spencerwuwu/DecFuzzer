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
int32_t set_var(int32_t g_8_l, int32_t g_26_l, char g_27_l, int16_t g_28_l, char g_35_l, char g_36_l, int16_t g_37_l, int32_t g_60_l, char g_94_l, char g_124_l, int32_t g_127_l, int32_t g_131_l, char g_157_l, int32_t g_160_l, int32_t g_163_l, char g_172_l, char g_173_l, int32_t g_174_l, int16_t g_175_l, int32_t g_176_l, int32_t g_206_l, char g_207_l, int32_t g_208_l, char g_210_l, int16_t g_211_l, char g_212_l, int32_t g_213_l);
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
    return v1 + 0x3fa7;
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
    char * v3 = (char *)(v1 + 0x3f0f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s16retdec.c
// Address range: 0x11a0 - 0x15e6
// Line range:    211 - 246
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ee6)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3eb4); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e6c); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e6e); // 0x1283
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    char v7 = *(char *)(v2 + 0x3e70); // 0x12a6
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3eb8); // 0x12c9
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e72); // 0x12ee
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e74); // 0x1314
    transparent_crc(v10, (char *)(v2 + 0x1e7e), v1);
    char v11 = *(char *)(v2 + 0x3e78); // 0x1336
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e79); // 0x1359
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e7c); // 0x137c
    transparent_crc(v13, (char *)(v2 + 0x1e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e80); // 0x139e
    transparent_crc(v14, (char *)(v2 + 0x1e94), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e84); // 0x13c0
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9a), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3ebc); // 0x13e3
    transparent_crc(v16, (char *)(v2 + 0x1ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3ec0); // 0x1405
    transparent_crc(v17, (char *)(v2 + 0x1ea6), v1);
    char v18 = *(char *)(v2 + 0x3ec4); // 0x1427
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eac), v1);
    char v19 = *(char *)(v2 + 0x3e85); // 0x144a
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb2), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e88); // 0x146d
    transparent_crc(v20, (char *)(v2 + 0x1eb8), v1);
    int16_t v21 = *(int16_t *)(v2 + 0x3e8c); // 0x148f
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1ebe), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3e90); // 0x14b2
    transparent_crc(v22, (char *)(v2 + 0x1ec4), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3e94); // 0x14d4
    transparent_crc(v23, (char *)(v2 + 0x1eca), v1);
    char v24 = *(char *)(v2 + 0x3e98); // 0x14f6
    transparent_crc((int32_t)v24, (char *)(v2 + 0x1ed0), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x3e9c); // 0x1519
    transparent_crc(v25, (char *)(v2 + 0x1ed6), v1);
    char v26 = *(char *)(v2 + 0x3ea0); // 0x153b
    transparent_crc((int32_t)v26, (char *)(v2 + 0x1edc), v1);
    int16_t v27 = *(int16_t *)(v2 + 0x3ea2); // 0x155e
    transparent_crc((int32_t)v27, (char *)(v2 + 0x1ee2), v1);
    char v28 = *(char *)(v2 + 0x3ea4); // 0x1581
    transparent_crc((int32_t)v28, (char *)(v2 + 0x1ee8), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x3ea8); // 0x15a4
    transparent_crc(v29, (char *)(v2 + 0x1eee), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15f0 - 0x15f5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1600 - 0x16a8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x167a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1641
        while (v1 != 0) {
            // 0x1647
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1685
        int32_t v5; // 0x1600
        *(int32_t *)(v5 + 0x3a69 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s16retdec.c
// Address range: 0x16b0 - 0x2850
// Line range:    64 - 204
int32_t func_1(void) {
    // 0x195e
    set_var(2, 0, 1, -0x69d8, -88, 0, 2, 0x6ccce42b, 49, -1, 9, 0xaedaf9c, 4, 0, 0, 0, -40, -0x10042d0c, 7, -0x2acce5c5, 0x25639f12, -1, 0x727779b4, -112, 1, 57, 0x2e68c3bf);
    return -0x10042d0c;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2850 - 0x28af
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2850
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2850
    if (v1 != 0) {
        // 0x2884
        printf((char *)(v1 + 2116));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x28b0 - 0x28e4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x28b0
    int32_t v1; // 0x28b0
    printf((char *)(v1 + 2055));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s16retdec.c
// Address range: 0x28f0 - 0x2a53
// Line range:    54 - 56
int32_t set_var(int32_t g_8_l, int32_t g_26_l, char g_27_l, int16_t g_28_l, char g_35_l, char g_36_l, int16_t g_37_l, int32_t g_60_l, char g_94_l, char g_124_l, int32_t g_127_l, int32_t g_131_l, char g_157_l, int32_t g_160_l, int32_t g_163_l, char g_172_l, char g_173_l, int32_t g_174_l, int16_t g_175_l, int32_t g_176_l, int32_t g_206_l, char g_207_l, int32_t g_208_l, char g_210_l, int16_t g_211_l, char g_212_l, int32_t g_213_l) {
    // 0x28f0
    int32_t v1; // 0x28f0
    *(int32_t *)(v1 + 0x271c) = g_26_l;
    *(int32_t *)(v1 + 0x2768) = (int32_t)g_27_l;
    *(char *)(v1 + 0x2720) = (char)g_28_l;
    *(int16_t *)(v1 + 0x2722) = (int16_t)g_35_l;
    *(char *)(v1 + 0x2724) = g_36_l;
    *(char *)(v1 + 0x276c) = (char)g_37_l;
    *(int16_t *)(v1 + 0x2726) = (int16_t)g_60_l;
    *(int32_t *)(v1 + 0x2728) = (int32_t)g_94_l;
    *(char *)(v1 + 0x272c) = g_124_l;
    *(char *)(v1 + 0x272d) = (char)g_127_l;
    *(int32_t *)(v1 + 0x2730) = g_131_l;
    *(int32_t *)(v1 + 0x2734) = (int32_t)g_157_l;
    *(char *)(v1 + 0x2738) = (char)g_160_l;
    *(int32_t *)(v1 + 0x2770) = g_163_l;
    *(int32_t *)(v1 + 0x2774) = (int32_t)g_172_l;
    *(char *)(v1 + 0x2778) = g_173_l;
    *(char *)(v1 + 0x2739) = (char)g_174_l;
    *(int32_t *)(v1 + 0x273c) = (int32_t)g_175_l;
    *(int16_t *)(v1 + 0x2740) = (int16_t)g_176_l;
    *(int32_t *)(v1 + 0x2744) = g_206_l;
    *(int32_t *)(v1 + 0x2748) = (int32_t)g_207_l;
    *(char *)(v1 + 0x274c) = (char)g_208_l;
    *(int32_t *)(v1 + 0x2750) = (int32_t)g_210_l;
    *(char *)(v1 + 0x2754) = (char)g_211_l;
    *(int16_t *)(v1 + 0x2756) = (int16_t)g_212_l;
    *(char *)(v1 + 0x2758) = (char)g_213_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a60 - 0x2ae0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2a60
    int32_t v1; // 0x2a60
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ae0 - 0x2b24
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2ae0
    int32_t v1; // 0x2ae0
    int32_t * v2 = (int32_t *)(v1 + 0x256f); // 0x2af3
    uint32_t v3 = *v2; // 0x2af3
    char v4; // 0x2ae0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x258b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2b24 - 0x2b3c
int32_t _fini(void) {
    // 0x2b24
    int32_t v1; // 0x2b24
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

