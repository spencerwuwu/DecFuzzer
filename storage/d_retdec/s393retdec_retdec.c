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
int32_t set_var(int32_t g_8_l, int32_t g_38_l, char g_47_l, char g_59_l, int16_t g_98_l, char g_125_l, int32_t g_126_l, int32_t g_150_l, int32_t g_151_l, int32_t g_152_l, int16_t g_155_l, int32_t g_156_l, int32_t g_157_l, int16_t g_158_l, int32_t g_219_l, int32_t g_236_l, int16_t g_245_l, int32_t g_246_l, char g_247_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s393retdec.c
// Address range: 0x11a0 - 0x14cd
// Line range:    232 - 259
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e8a)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    char v6 = *(char *)(v2 + 0x3ea8); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3eaa); // 0x12a4
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3e71); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e74); // 0x12ea
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e78); // 0x130c
    transparent_crc(v10, (char *)(v2 + 0x1e80), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e7c); // 0x132e
    transparent_crc(v11, (char *)(v2 + 0x1e86), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e80); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x1e8c), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e84); // 0x1372
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3eac); // 0x1398
    transparent_crc(v14, (char *)(v2 + 0x1e98), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e88); // 0x13ba
    transparent_crc(v15, (char *)(v2 + 0x1e9e), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e8c); // 0x13dc
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea4), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3eb0); // 0x13ff
    transparent_crc(v17, (char *)(v2 + 0x1eaa), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e90); // 0x1421
    transparent_crc(v18, (char *)(v2 + 0x1eb0), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x3e94); // 0x1443
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb6), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3e98); // 0x1466
    transparent_crc(v20, (char *)(v2 + 0x1ebc), v1);
    unsigned char v21 = *(char *)(v2 + 0x3e9c); // 0x1488
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1ec2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14d0 - 0x14d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14e0 - 0x1588
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x155a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1521
        while (v1 != 0) {
            // 0x1527
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1565
        int32_t v5; // 0x14e0
        *(int32_t *)(v5 + 0x3b75 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s393retdec.c
// Address range: 0x1590 - 0x266f
// Line range:    56 - 225
int16_t func_1(void) {
    // 0x1590
    set_var(1, 0, 1, 0, 0, 37, 2, -1, 2, 0x35965d04, 0x71f3, 0, -3, 0x26f2, 0, 7, -1, 0xe5843dd, 8);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2670 - 0x26cf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2670
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2670
    if (v1 != 0) {
        // 0x26a4
        printf((char *)(v1 + 2552));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x26d0 - 0x2704
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x26d0
    int32_t v1; // 0x26d0
    printf((char *)(v1 + 2491));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s393retdec.c
// Address range: 0x2710 - 0x2813
// Line range:    46 - 48
int32_t set_var(int32_t g_8_l, int32_t g_38_l, char g_47_l, char g_59_l, int16_t g_98_l, char g_125_l, int32_t g_126_l, int32_t g_150_l, int32_t g_151_l, int32_t g_152_l, int16_t g_155_l, int32_t g_156_l, int32_t g_157_l, int16_t g_158_l, int32_t g_219_l, int32_t g_236_l, int16_t g_245_l, int32_t g_246_l, char g_247_l) {
    // 0x2710
    int32_t v1; // 0x2710
    *(int32_t *)(v1 + 0x28fc) = g_38_l;
    *(int32_t *)(v1 + 0x2900) = (int32_t)g_47_l;
    *(char *)(v1 + 0x2904) = g_59_l;
    *(char *)(v1 + 0x293c) = (char)g_98_l;
    *(int16_t *)(v1 + 0x293e) = (int16_t)g_125_l;
    *(char *)(v1 + 0x2905) = (char)g_126_l;
    *(int32_t *)(v1 + 0x2908) = g_150_l;
    *(int32_t *)(v1 + 0x290c) = g_151_l;
    *(int32_t *)(v1 + 0x2910) = g_152_l;
    *(int32_t *)(v1 + 0x2914) = (int32_t)g_155_l;
    *(int16_t *)(v1 + 0x2918) = (int16_t)g_156_l;
    *(int32_t *)(v1 + 0x2940) = g_157_l;
    *(int32_t *)(v1 + 0x291c) = (int32_t)g_158_l;
    *(int16_t *)(v1 + 0x2920) = (int16_t)g_219_l;
    *(int32_t *)(v1 + 0x2944) = g_236_l;
    *(int32_t *)(v1 + 0x2924) = (int32_t)g_245_l;
    *(int16_t *)(v1 + 0x2928) = (int16_t)g_246_l;
    *(int32_t *)(v1 + 0x292c) = (int32_t)g_247_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2820 - 0x28a0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2820
    int32_t v1; // 0x2820
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28a0 - 0x28e4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x28a0
    int32_t v1; // 0x28a0
    int32_t * v2 = (int32_t *)(v1 + 0x27a3); // 0x28b3
    uint32_t v3 = *v2; // 0x28b3
    char v4; // 0x28a0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x27b7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x28e4 - 0x28fc
int32_t _fini(void) {
    // 0x28e4
    int32_t v1; // 0x28e4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

