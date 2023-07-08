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
int32_t set_var(int32_t g_10_l, int16_t g_14_l, int16_t g_46_l, int16_t g_53_l, int16_t g_62_l, int32_t g_73_l, int16_t g_82_l, int32_t g_94_l, int32_t g_106_l, char g_108_l, char g_109_l, int32_t g_118_l, int16_t g_166_l, int32_t g_179_l, int32_t g_194_l, int32_t g_207_l);
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
    return v1 + 0x3f93;
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
    char * v3 = (char *)(v1 + 0x3efb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s585r2.c
// Address range: 0x11a0 - 0x1462
// Line range:    151 - 175
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e5c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5e), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e63), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3ea0); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e68), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e6e); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6d), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3ea2); // 0x12a5
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e72), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e70); // 0x12c8
    transparent_crc(v8, (char *)(v2 + 0x1e77), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e74); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e7c), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e78); // 0x130d
    transparent_crc(v10, (char *)(v2 + 0x1e81), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e7c); // 0x132f
    transparent_crc(v11, (char *)(v2 + 0x1e86), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e80); // 0x1351
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8c), v1);
    char v13 = *(char *)(v2 + 0x3e81); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e84); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x1e98), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x3e88); // 0x13b9
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9e), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e8c); // 0x13dc
    transparent_crc(v16, (char *)(v2 + 0x1ea4), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e90); // 0x13fe
    transparent_crc(v17, (char *)(v2 + 0x1eaa), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e94); // 0x1420
    transparent_crc(v18, (char *)(v2 + 0x1eb0), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e98), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1470 - 0x1475
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1470
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1480 - 0x1528
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14fa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14c1
        while (v1 != 0) {
            // 0x14c7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1505
        int32_t v5; // 0x1480
        *(int32_t *)(v5 + 0x3bc5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s585r2.c
// Address range: 0x1530 - 0x2310
// Line range:    53 - 144
int16_t func_1(void) {
    // 0x1530
    set_var(-9, -1, 0, 2, 0, 1, -3343, 3, -0x6fdcf03, 90, 1, -6, 1, 0x7c7af323, -0x4cee7807, -0x7db7c3e1);
    return -9;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2310 - 0x236f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2310
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2310
    if (v1 != 0) {
        // 0x2344
        printf((char *)(v1 + 3398));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2370 - 0x23a4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2370
    int32_t v1; // 0x2370
    printf((char *)(v1 + 3337));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s585r2.c
// Address range: 0x23b0 - 0x2495
// Line range:    43 - 45
int32_t set_var(int32_t g_10_l, int16_t g_14_l, int16_t g_46_l, int16_t g_53_l, int16_t g_62_l, int32_t g_73_l, int16_t g_82_l, int32_t g_94_l, int32_t g_106_l, char g_108_l, char g_109_l, int32_t g_118_l, int16_t g_166_l, int32_t g_179_l, int32_t g_194_l, int32_t g_207_l) {
    // 0x23b0
    int32_t v1; // 0x23b0
    *(int32_t *)(v1 + 0x2c5c) = (int32_t)g_14_l;
    *(int16_t *)(v1 + 0x2c60) = g_46_l;
    *(int16_t *)(v1 + 0x2c94) = g_53_l;
    *(int16_t *)(v1 + 0x2c62) = g_62_l;
    *(int16_t *)(v1 + 0x2c96) = (int16_t)g_73_l;
    *(int32_t *)(v1 + 0x2c64) = (int32_t)g_82_l;
    *(int16_t *)(v1 + 0x2c68) = (int16_t)g_94_l;
    *(int32_t *)(v1 + 0x2c6c) = g_106_l;
    *(int32_t *)(v1 + 0x2c70) = (int32_t)g_108_l;
    *(char *)(v1 + 0x2c74) = g_109_l;
    *(char *)(v1 + 0x2c75) = (char)g_118_l;
    *(int32_t *)(v1 + 0x2c78) = (int32_t)g_166_l;
    *(int16_t *)(v1 + 0x2c7c) = (int16_t)g_179_l;
    *(int32_t *)(v1 + 0x2c80) = g_194_l;
    *(int32_t *)(v1 + 0x2c84) = g_207_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x24a0 - 0x2520
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x24a0
    int32_t v1; // 0x24a0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2520 - 0x2564
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2520
    int32_t v1; // 0x2520
    int32_t * v2 = (int32_t *)(v1 + 0x2b1b); // 0x2533
    uint32_t v3 = *v2; // 0x2533
    char v4; // 0x2520
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2b27 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2564 - 0x257c
int32_t _fini(void) {
    // 0x2564
    int32_t v1; // 0x2564
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

