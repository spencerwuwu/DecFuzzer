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
int32_t set_var(char g_15_l, int16_t g_16_l, char g_18_l, int16_t g_24_l, int32_t g_26_l, int32_t g_38_l, int32_t g_55_l, int16_t g_58_l, int32_t g_82_l, char g_90_l, char g_91_l, int32_t g_103_l, int16_t g_110_l, int32_t g_144_l, int32_t g_154_l, int32_t g_157_l, char g_178_l, int32_t g_185_l, int32_t g_209_l, char g_210_l, int32_t g_211_l, char g_212_l, int16_t g_217_l, int16_t g_233_l, int16_t g_241_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s676retdec.c
// Address range: 0x11a0 - 0x15a0
// Line range:    254 - 287
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ecd)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x3eb0); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e61), v1);
    char v5 = *(char *)(v2 + 0x3e69); // 0x1262
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e66), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e6a); // 0x1285
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3eb4); // 0x12a8
    transparent_crc(v7, (char *)(v2 + 0x1e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e6c); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3eb8); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3e70); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e74); // 0x1331
    transparent_crc(v11, (char *)(v2 + 0x1e84), v1);
    char v12 = *(char *)(v2 + 0x3e78); // 0x1353
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e89), v1);
    unsigned char v13 = *(char *)(v2 + 0x3e79); // 0x1376
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e7c); // 0x139b
    transparent_crc(v14, (char *)(v2 + 0x1e93), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x3e80); // 0x13bd
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e84); // 0x13e0
    transparent_crc(v16, (char *)(v2 + 0x1e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e88); // 0x1402
    transparent_crc(v17, (char *)(v2 + 0x1ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e8c); // 0x1424
    transparent_crc(v18, (char *)(v2 + 0x1eab), v1);
    unsigned char v19 = *(char *)(v2 + 0x3ebc); // 0x1446
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e90); // 0x1469
    transparent_crc(v20, (char *)(v2 + 0x1eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e94); // 0x148b
    transparent_crc(v21, (char *)(v2 + 0x1ebd), v1);
    char v22 = *(char *)(v2 + 0x3e98); // 0x14ad
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec3), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3e9c); // 0x14d0
    transparent_crc(v23, (char *)(v2 + 0x1ec9), v1);
    unsigned char v24 = *(char *)(v2 + 0x3ea0); // 0x14f2
    transparent_crc((int32_t)v24, (char *)(v2 + 0x1ecf), v1);
    int16_t v25 = *(int16_t *)(v2 + 0x3ea2); // 0x1517
    transparent_crc((int32_t)v25, (char *)(v2 + 0x1ed5), v1);
    uint16_t v26 = *(int16_t *)(v2 + 0x3ebe); // 0x153a
    transparent_crc((int32_t)v26, (char *)(v2 + 0x1edb), v1);
    uint16_t v27 = *(int16_t *)(v2 + 0x3ea4); // 0x155d
    transparent_crc((int32_t)v27, (char *)(v2 + 0x1ee1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea8), v1);
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
        *(int32_t *)(v5 + 0x3ab1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s676retdec.c
// Address range: 0x1660 - 0x2877
// Line range:    62 - 246
int32_t func_1(void) {
    // 0x1660
    set_var(-29, 0, 1, 6, 0, -0x5e44247f, 0, -0x6cd6, 0, -103, 87, 1, -29, -219, -5, -0x50040001, 1, 6, -1, -2, 0, 0, 0x7c05, 0, 0x4784);
    return -15;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2880 - 0x28df
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2880
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2880
    if (v1 != 0) {
        // 0x28b4
        printf((char *)(v1 + 2055));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x28e0 - 0x2914
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x28e0
    int32_t v1; // 0x28e0
    printf((char *)(v1 + 1994));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s676retdec.c
// Address range: 0x2920 - 0x2a74
// Line range:    52 - 54
int32_t set_var(char g_15_l, int16_t g_16_l, char g_18_l, int16_t g_24_l, int32_t g_26_l, int32_t g_38_l, int32_t g_55_l, int16_t g_58_l, int32_t g_82_l, char g_90_l, char g_91_l, int32_t g_103_l, int16_t g_110_l, int32_t g_144_l, int32_t g_154_l, int32_t g_157_l, char g_178_l, int32_t g_185_l, int32_t g_209_l, char g_210_l, int32_t g_211_l, char g_212_l, int16_t g_217_l, int16_t g_233_l, int16_t g_241_l) {
    // 0x2920
    int32_t v1; // 0x2920
    *(char *)(v1 + 0x26ec) = (char)g_16_l;
    *(int16_t *)(v1 + 0x2734) = (int16_t)g_18_l;
    *(char *)(v1 + 0x26ed) = (char)g_24_l;
    *(int16_t *)(v1 + 0x26ee) = (int16_t)g_26_l;
    *(int32_t *)(v1 + 0x2738) = g_38_l;
    *(int32_t *)(v1 + 0x26f0) = g_55_l;
    *(int32_t *)(v1 + 0x273c) = (int32_t)g_58_l;
    *(int16_t *)(v1 + 0x26f4) = (int16_t)g_82_l;
    *(int32_t *)(v1 + 0x26f8) = (int32_t)g_90_l;
    *(char *)(v1 + 0x26fc) = g_91_l;
    *(char *)(v1 + 0x26fd) = (char)g_103_l;
    *(int32_t *)(v1 + 0x2700) = (int32_t)g_110_l;
    *(int16_t *)(v1 + 0x2704) = (int16_t)g_144_l;
    *(int32_t *)(v1 + 0x2708) = g_154_l;
    *(int32_t *)(v1 + 0x270c) = g_157_l;
    *(int32_t *)(v1 + 0x2710) = (int32_t)g_178_l;
    *(char *)(v1 + 0x2740) = (char)g_185_l;
    *(int32_t *)(v1 + 0x2714) = g_209_l;
    *(int32_t *)(v1 + 0x2718) = (int32_t)g_210_l;
    *(char *)(v1 + 0x271c) = (char)g_211_l;
    *(int32_t *)(v1 + 0x2720) = (int32_t)g_212_l;
    *(char *)(v1 + 0x2724) = (char)g_217_l;
    *(int16_t *)(v1 + 0x2726) = g_233_l;
    *(int16_t *)(v1 + 0x2742) = g_241_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a80 - 0x2b00
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2a80
    int32_t v1; // 0x2a80
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b00 - 0x2b44
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2b00
    int32_t v1; // 0x2b00
    int32_t * v2 = (int32_t *)(v1 + 0x254b); // 0x2b13
    uint32_t v3 = *v2; // 0x2b13
    char v4; // 0x2b00
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2563 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2b44 - 0x2b5c
int32_t _fini(void) {
    // 0x2b44
    int32_t v1; // 0x2b44
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

