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
int32_t set_var(int32_t g_13_l, int32_t g_16_l, int16_t g_23_l, int32_t g_27_l, int32_t g_50_l, int32_t g_53_l, char g_72_l, char g_91_l, char g_256_l, char g_258_l, int32_t g_273_l, int32_t g_274_l, char g_275_l, int32_t g_339_l);
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
    return v1 + 0x4f87;
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
    char * v3 = (char *)(v1 + 0x4eef); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s912r2.c
// Address range: 0x11a0 - 0x141e
// Line range:    263 - 285
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e82)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e61), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x4e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e94); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x2e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e74); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x2e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x2e75), v1);
    char v9 = *(char *)(v2 + 0x4e98); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e7a), v1);
    unsigned char v10 = *(char *)(v2 + 0x4e7c); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7f), v1);
    char v11 = *(char *)(v2 + 0x4e7d); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e84), v1);
    unsigned char v12 = *(char *)(v2 + 0x4e7e); // 0x1350
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e8a), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e80); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x2e90), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e84); // 0x1395
    transparent_crc(v14, (char *)(v2 + 0x2e96), v1);
    unsigned char v15 = *(char *)(v2 + 0x4e88); // 0x13b7
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9c), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e9c); // 0x13dc
    transparent_crc(v16, (char *)(v2 + 0x2ea2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e8c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1420 - 0x1425
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1420
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1430 - 0x14d8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14aa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1471
        while (v1 != 0) {
            // 0x1477
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x14b5
        int32_t v5; // 0x1430
        *(int32_t *)(v5 + 0x4c11 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s912r2.c
// Address range: 0x14e0 - 0x2de0
// Line range:    55 - 256
int16_t func_1(void) {
    // 0x14e0
    set_var(-0xe5f8cb1, 0x938e, 0x3bd3, 0, -1, 8, 0, 1, 25, 32, -0x4fae19a5, 1, 66, 0);
    return -0x5de2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2de0 - 0x2e3f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2de0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2de0
    if (v1 != 0) {
        // 0x2e14
        printf((char *)(v1 + 0x1268));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2e40 - 0x2e74
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2e40
    int32_t v1; // 0x2e40
    printf((char *)(v1 + 0x122b));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s912r2.c
// Address range: 0x2e80 - 0x2f3e
// Line range:    45 - 47
int32_t set_var(int32_t g_13_l, int32_t g_16_l, int16_t g_23_l, int32_t g_27_l, int32_t g_50_l, int32_t g_53_l, char g_72_l, char g_91_l, char g_256_l, char g_258_l, int32_t g_273_l, int32_t g_274_l, char g_275_l, int32_t g_339_l) {
    // 0x2e80
    int32_t v1; // 0x2e80
    *(int32_t *)(v1 + 0x318c) = g_16_l;
    *(int32_t *)(v1 + 0x3190) = (int32_t)g_23_l;
    *(int16_t *)(v1 + 0x3194) = (int16_t)g_27_l;
    *(int32_t *)(v1 + 0x31b8) = g_50_l;
    *(int32_t *)(v1 + 0x3198) = g_53_l;
    *(int32_t *)(v1 + 0x319c) = (int32_t)g_72_l;
    *(char *)(v1 + 0x31bc) = g_91_l;
    *(char *)(v1 + 0x31a0) = g_256_l;
    *(char *)(v1 + 0x31a1) = g_258_l;
    *(char *)(v1 + 0x31a2) = (char)g_273_l;
    *(int32_t *)(v1 + 0x31a4) = g_274_l;
    *(int32_t *)(v1 + 0x31a8) = (int32_t)g_275_l;
    *(char *)(v1 + 0x31ac) = (char)g_339_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2f40 - 0x2fc0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2f40
    int32_t v1; // 0x2f40
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fc0 - 0x3004
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2fc0
    int32_t v1; // 0x2fc0
    int32_t * v2 = (int32_t *)(v1 + 0x306f); // 0x2fd3
    uint32_t v3 = *v2; // 0x2fd3
    char v4; // 0x2fc0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x3083 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3004 - 0x301c
int32_t _fini(void) {
    // 0x3004
    int32_t v1; // 0x3004
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

