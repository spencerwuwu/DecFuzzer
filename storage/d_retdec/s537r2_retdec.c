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
char func_1(void);
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
int32_t set_var(int32_t g_11_l, int16_t g_23_l, int16_t g_51_l, int32_t g_60_l, int32_t g_100_l, int32_t g_101_l, int32_t g_102_l, int32_t g_103_l, char g_121_l, int32_t g_151_l, int32_t g_202_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x522a
int32_t g2;

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
    return v1 + 0x3f87;
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
    char * v3 = (char *)(v1 + 0x3eef); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s537r2.c
// Address range: 0x11a0 - 0x13f5
// Line range:    176 - 197
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e7e)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x1ed8); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x3e6c); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x3e6e); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e70); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e74); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e78); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e7c); // 0x130a
    transparent_crc(v10, (char *)(v2 + 0x1e80), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x132c
    transparent_crc(v11, (char *)(v2 + 0x1e86), v1);
    char v12 = *(char *)(v2 + 0x3e84); // 0x134e
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8c), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e94); // 0x1371
    transparent_crc(v13, (char *)(v2 + 0x1e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e88); // 0x1393
    transparent_crc(v14, (char *)(v2 + 0x1e98), v1);
    transparent_crc(0x63cb28db, (char *)(v2 + 0x1e9e), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e8c), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1400 - 0x1405
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1400
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1410 - 0x14b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x148a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1451
        while (v1 != 0) {
            // 0x1457
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1495
        int32_t v5; // 0x1410
        *(int32_t *)(v5 + 0x3c29 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s537r2.c
// Address range: 0x14c0 - 0x2285
// Line range:    50 - 169
char func_1(void) {
    char result; // 0x14c0
    if ((int32_t)(0x10000 * ((int32_t)(int16_t)&g1 ^ -0xf84b43a)) >> 16 == 1) {
        // 0x17fd
        set_var(0x3eac25ad, (int16_t)((int32_t)(int16_t)&g1 ^ -0xf84b43a), -1693, 0x298b2365, 0x7283bd05, -10, 7, -1, -1, 0, -1);
        result = -1;
    } else {
        // 0x170c
        set_var(-0x2e6c1faa, (int16_t)((int32_t)(int16_t)&g1 ^ -0xf84b43a), -1693, 0x298b2365, 0x7283bd05, -10, 7, -1, -1, 0, -1);
        result = 2;
    }
    // 0x2276
    return result;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2290 - 0x22ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2290
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2290
    if (v1 != 0) {
        // 0x22c4
        printf((char *)(v1 + 3508));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x22f0 - 0x2324
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x22f0
    int32_t v1; // 0x22f0
    printf((char *)(v1 + 3447));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s537r2.c
// Address range: 0x2330 - 0x23cd
// Line range:    40 - 42
int32_t set_var(int32_t g_11_l, int16_t g_23_l, int16_t g_51_l, int32_t g_60_l, int32_t g_100_l, int32_t g_101_l, int32_t g_102_l, int32_t g_103_l, char g_121_l, int32_t g_151_l, int32_t g_202_l) {
    // 0x2330
    int32_t v1; // 0x2330
    *(int32_t *)(v1 + 0x2cdc) = (int32_t)g_23_l;
    *(int16_t *)(v1 + 0x2ce0) = g_51_l;
    *(int16_t *)(v1 + 0x2ce2) = (int16_t)g_60_l;
    *(int32_t *)(v1 + 0x2ce4) = g_100_l;
    *(int32_t *)(v1 + 0x2ce8) = g_101_l;
    *(int32_t *)(v1 + 0x2cec) = g_102_l;
    *(int32_t *)(v1 + 0x2cf0) = g_103_l;
    *(int32_t *)(v1 + 0x2cf4) = (int32_t)g_121_l;
    *(char *)(v1 + 0x2cf8) = (char)g_151_l;
    *(int32_t *)(v1 + 0x2d08) = g_202_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23d0 - 0x2450
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x23d0
    int32_t v1; // 0x23d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2450 - 0x2494
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2450
    int32_t v1; // 0x2450
    int32_t * v2 = (int32_t *)(v1 + 0x2bdf); // 0x2463
    uint32_t v3 = *v2; // 0x2463
    char v4; // 0x2450
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2beb + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2494 - 0x24ac
int32_t _fini(void) {
    // 0x2494
    int32_t v1; // 0x2494
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

