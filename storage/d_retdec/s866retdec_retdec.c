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
int32_t set_var(int32_t g_2_l, int16_t g_40_l, char g_60_l, int32_t g_73_l, int16_t g_102_l, char g_111_l, int32_t g_112_l, char g_113_l, char g_114_l, char g_117_l, char g_118_l, char g_119_l, int16_t g_141_l, int16_t g_144_l, int32_t g_168_l, char g_169_l, int16_t g_171_l, char g_180_l, int32_t g_181_l, int32_t g_182_l);
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
    return v1 + 0x3f97;
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
    char * v3 = (char *)(v1 + 0x3eff); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s866retdec.c
// Address range: 0x11a0 - 0x14f3
// Line range:    191 - 219
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e79)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    char v5 = *(char *)(v2 + 0x3e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e6a), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3e76); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e78); // 0x12ea
    transparent_crc(v9, (char *)(v2 + 0x1e7b), v1);
    char v10 = *(char *)(v2 + 0x3e7c); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e81), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e7d); // 0x132f
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e87), v1);
    char v12 = *(char *)(v2 + 0x3e7e); // 0x1352
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8d), v1);
    char v13 = *(char *)(v2 + 0x3e7f); // 0x1375
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e93), v1);
    char v14 = *(char *)(v2 + 0x3e80); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e99), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x3e82); // 0x13bb
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9f), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e84); // 0x13de
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea5), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e88); // 0x1404
    transparent_crc(v17, (char *)(v2 + 0x1eab), v1);
    char v18 = *(char *)(v2 + 0x3e8c); // 0x1426
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eb1), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3e8e); // 0x1449
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb7), v1);
    char v20 = *(char *)(v2 + 0x3e90); // 0x146c
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1ebd), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e94); // 0x148f
    transparent_crc(v21, (char *)(v2 + 0x1ec3), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3e98); // 0x14b1
    transparent_crc(v22, (char *)(v2 + 0x1ec9), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e9c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1500 - 0x1505
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1500
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1510 - 0x15b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x158a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1551
        while (v1 != 0) {
            // 0x1557
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1595
        int32_t v5; // 0x1510
        *(int32_t *)(v5 + 0x3b35 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s866retdec.c
// Address range: 0x15c0 - 0x2141
// Line range:    61 - 184
int32_t func_1(void) {
    // 0x1fbc
    set_var(16, -0x7c25, 84, 0x3967be2d, -0x2e81, 1, 0x3b0e2d30, 125, -10, -63, -50, 16, 1, -0x5180, 3, -88, -0x200c, -107, 0x280f67d3, 2);
    return 0x6f9a4d91;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2150 - 0x21af
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2150
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2150
    if (v1 != 0) {
        // 0x2184
        printf((char *)(v1 + 3871));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x21b0 - 0x21e4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x21b0
    int32_t v1; // 0x21b0
    printf((char *)(v1 + 3810));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s866retdec.c
// Address range: 0x21f0 - 0x2302
// Line range:    51 - 53
int32_t set_var(int32_t g_2_l, int16_t g_40_l, char g_60_l, int32_t g_73_l, int16_t g_102_l, char g_111_l, int32_t g_112_l, char g_113_l, char g_114_l, char g_117_l, char g_118_l, char g_119_l, int16_t g_141_l, int16_t g_144_l, int32_t g_168_l, char g_169_l, int16_t g_171_l, char g_180_l, int32_t g_181_l, int32_t g_182_l) {
    // 0x21f0
    int32_t v1; // 0x21f0
    *(int32_t *)(v1 + 0x2e1c) = (int32_t)g_40_l;
    *(int16_t *)(v1 + 0x2e20) = (int16_t)g_60_l;
    *(char *)(v1 + 0x2e22) = (char)g_73_l;
    *(int32_t *)(v1 + 0x2e24) = (int32_t)g_102_l;
    *(int16_t *)(v1 + 0x2e28) = (int16_t)g_111_l;
    *(char *)(v1 + 0x2e2a) = (char)g_112_l;
    *(int32_t *)(v1 + 0x2e2c) = (int32_t)g_113_l;
    *(char *)(v1 + 0x2e30) = g_114_l;
    *(char *)(v1 + 0x2e31) = g_117_l;
    *(char *)(v1 + 0x2e32) = g_118_l;
    *(char *)(v1 + 0x2e33) = g_119_l;
    *(char *)(v1 + 0x2e34) = (char)g_141_l;
    *(int16_t *)(v1 + 0x2e36) = g_144_l;
    *(int16_t *)(v1 + 0x2e38) = (int16_t)g_168_l;
    *(int32_t *)(v1 + 0x2e3c) = (int32_t)g_169_l;
    *(char *)(v1 + 0x2e40) = (char)g_171_l;
    *(int16_t *)(v1 + 0x2e42) = (int16_t)g_180_l;
    *(char *)(v1 + 0x2e44) = (char)g_181_l;
    *(int32_t *)(v1 + 0x2e48) = g_182_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2310 - 0x2390
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2310
    int32_t v1; // 0x2310
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2390 - 0x23d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2390
    int32_t v1; // 0x2390
    int32_t * v2 = (int32_t *)(v1 + 0x2caf); // 0x23a3
    uint32_t v3 = *v2; // 0x23a3
    char v4; // 0x2390
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2cb7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x23d4 - 0x23ec
int32_t _fini(void) {
    // 0x23d4
    int32_t v1; // 0x23d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

