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
int16_t func_1(void);
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
int32_t set_var(int16_t g_2_l, int32_t g_7_l, int32_t g_8_l, int32_t g_9_l, int32_t g_14_l, int16_t g_16_l, int32_t g_17_l, int16_t g_18_l, int32_t g_19_l, int16_t g_21_l, int16_t g_22_l, char g_26_l, int32_t g_27_l, char g_30_l, int32_t g_47_l, int32_t g_49_l, char g_104_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x116c; // 0x30c8
int16_t g2 = 0x302e; // 0x377
int32_t g3;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x3f9f;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x3f07); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s366retdec.c
// Address range: 0x11a0 - 0x1492
// Line range:    161 - 186
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e88)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x1e6c), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x3e7c); // 0x12c5
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e71), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12eb
    transparent_crc(v9, (char *)(v2 + 0x1e76), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3eac); // 0x130d
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7b), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x1333
    transparent_crc(v11, (char *)(v2 + 0x1e80), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x3e88); // 0x1355
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e85), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e8a); // 0x137b
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8a), v1);
    char v14 = *(char *)(v2 + 0x3e8c); // 0x13a1
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e8f), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e90); // 0x13c6
    transparent_crc(v15, (char *)(v2 + 0x1e94), v1);
    unsigned char v16 = *(char *)(v2 + 0x3e94); // 0x13e8
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e99), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e98); // 0x140b
    transparent_crc(v17, (char *)(v2 + 0x1e9e), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e9c); // 0x142d
    transparent_crc(v18, (char *)(v2 + 0x1ea3), v1);
    char v19 = *(char *)(v2 + 0x3ea0); // 0x144f
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1ea8), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14a0 - 0x14a5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14b0 - 0x1558
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x152a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14f1
        while (v1 != 0) {
            // 0x14f7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1535
        int32_t v5; // 0x14b0
        *(int32_t *)(v5 + 0x3ba1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s366retdec.c
// Address range: 0x1560 - 0x1f18
// Line range:    54 - 154
int16_t func_1(void) {
    // 0x171b
    set_var(-25, 0x2159124b, 8, 0, -0x76dd93cf, (int16_t)&g2, -1, 0, 0x69a22db7, 0x74be, -0x7952, 106, -0x3c1731a, 69, -1, -0x78385aff, -123);
    return 69;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f20 - 0x1f7f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f20
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1f20
    if (v1 != 0) {
        // 0x1f54
        printf((char *)(v1 + (int32_t)&g1 - 0x1f9a));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1f80 - 0x1fb4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1f80
    int32_t v1; // 0x1f80
    printf((char *)(v1 + (int32_t)"ter hashing %s : %X\n" - 0x1f77));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s366retdec.c
// Address range: 0x1fc0 - 0x20ae
// Line range:    44 - 46
int32_t set_var(int16_t g_2_l, int32_t g_7_l, int32_t g_8_l, int32_t g_9_l, int32_t g_14_l, int16_t g_16_l, int32_t g_17_l, int16_t g_18_l, int32_t g_19_l, int16_t g_21_l, int16_t g_22_l, char g_26_l, int32_t g_27_l, char g_30_l, int32_t g_47_l, int32_t g_49_l, char g_104_l) {
    // 0x1fc0
    int32_t v1; // 0x1fc0
    *(int16_t *)(v1 + (int32_t)"g_19" + 32) = (int16_t)g_7_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 36) = g_8_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 40) = g_9_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 44) = g_14_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 48) = (int32_t)g_16_l;
    *(int16_t *)(v1 + (int32_t)"g_19" + 52) = (int16_t)g_17_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 56) = (int32_t)g_18_l;
    *(int16_t *)(v1 + (int32_t)"g_19" + 100) = (int16_t)g_19_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 60) = (int32_t)g_21_l;
    *(int16_t *)(v1 + (int32_t)"g_19" + 64) = g_22_l;
    *(int16_t *)(v1 + (int32_t)"g_19" + 66) = (int16_t)g_26_l;
    *(char *)(v1 + (int32_t)"g_19" + 68) = (char)g_27_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 72) = (int32_t)g_30_l;
    *(char *)(v1 + (int32_t)"g_19" + 76) = (char)g_47_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 80) = g_49_l;
    *(int32_t *)(v1 + (int32_t)"g_19" + 84) = (int32_t)g_104_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20b0 - 0x2130
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x20b0
    int32_t v1; // 0x20b0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2130 - 0x2174
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2130
    int32_t v1; // 0x2130
    int32_t * v2 = (int32_t *)(v1 + 0x2f17); // 0x2143
    uint32_t v3 = *v2; // 0x2143
    char v4; // 0x2130
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f23 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2174 - 0x218c
int32_t _fini(void) {
    // 0x2174
    int32_t v1; // 0x2174
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

