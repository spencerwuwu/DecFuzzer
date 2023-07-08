//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
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
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_22_l, int16_t g_39_l, char g_40_l, int16_t g_45_l, char g_46_l, int16_t g_57_l, char g_58_l, int32_t g_62_l, int16_t g_93_l, int32_t g_113_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, int32_t g_182_l, int16_t g_183_l, int16_t g_192_l, int16_t g_218_l, int16_t g_219_l, int32_t g_236_l, int16_t g_253_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x523e
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
    return v1 + 0x3f9b;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x11a0 - 0x1539
// Line range:    252 - 282
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea8)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e74); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    unsigned char v7 = *(char *)(v2 + 0x3ea8); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x3e76); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    char v9 = *(char *)(v2 + 0x3ea9); // 0x12e9
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3e78); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e7a); // 0x132f
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e7c); // 0x1352
    transparent_crc(v12, (char *)(v2 + 0x1e88), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e80); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3eac); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x1e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e84); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 0x1e98), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e88); // 0x13db
    transparent_crc(v16, (char *)(v2 + 0x1e9e), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x3e8c); // 0x13fd
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea4), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e90); // 0x1420
    transparent_crc(v18, (char *)(v2 + 0x1eaa), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3e94); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb0), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x3eb0); // 0x1465
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb6), v1);
    int16_t v21 = *(int16_t *)(v2 + 0x3e96); // 0x148b
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1ebc), v1);
    uint16_t v22 = *(int16_t *)(v2 + 0x3e98); // 0x14ae
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec2), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3e9c); // 0x14d4
    transparent_crc(v23, (char *)(v2 + 0x1ec8), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x3eb2); // 0x14f6
    transparent_crc((int32_t)v24, (char *)(v2 + 0x1ece), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1540 - 0x1545
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1540
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1550 - 0x15f8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15ca
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1591
        while (v1 != 0) {
            // 0x1597
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15d5
        int32_t v5; // 0x1550
        *(int32_t *)(v5 + 0x3b05 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x1600 - 0x2c15
// Line range:    59 - 245
char func_1(void) {
    // 0x2656
    set_var(-8, 0, -6, (int16_t)&g1, 0, 0x49e3, 0, 0x2933, -30, 0x389b8a59, -1, 0, (int32_t)(bool)((int32_t)(int16_t)&g1 >= 1 ^ (((int32_t)(int16_t)&g1 - 1 ^ -0x80000000) & (int32_t)(int16_t)&g1) >= 0 ^ (int32_t)(int16_t)&g1 != 1) ^ 0x389b8a59, 0, -0x77fc, 1, -4, 0, -0x32ab, 0x121e, (int32_t)(bool)((int32_t)(int16_t)&g1 >= 1 ^ (((int32_t)(int16_t)&g1 - 1 ^ -0x80000000) & (int32_t)(int16_t)&g1) >= 0 ^ (int32_t)(int16_t)&g1 != 1) ^ 0x389b8a59 | -0x1a3ff388, 0);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c20 - 0x2c7f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2c20
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2c20
    if (v1 != 0) {
        // 0x2c54
        printf((char *)(v1 + 1108));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c80 - 0x2cb4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c80
    int32_t v1; // 0x2c80
    printf((char *)(v1 + 1047));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x2cc0 - 0x2df9
// Line range:    49 - 51
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_22_l, int16_t g_39_l, char g_40_l, int16_t g_45_l, char g_46_l, int16_t g_57_l, char g_58_l, int32_t g_62_l, int16_t g_93_l, int32_t g_113_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, int32_t g_182_l, int16_t g_183_l, int16_t g_192_l, int16_t g_218_l, int16_t g_219_l, int32_t g_236_l, int16_t g_253_l) {
    // 0x2cc0
    int32_t v1; // 0x2cc0
    *(int32_t *)(v1 + 0x234c) = g_12_l;
    *(int32_t *)(v1 + 0x2350) = g_22_l;
    *(int32_t *)(v1 + 0x2354) = (int32_t)g_39_l;
    *(int16_t *)(v1 + 0x2358) = (int16_t)g_40_l;
    *(char *)(v1 + 0x238c) = (char)g_45_l;
    *(int16_t *)(v1 + 0x235a) = (int16_t)g_46_l;
    *(char *)(v1 + 0x238d) = (char)g_57_l;
    *(int16_t *)(v1 + 0x235c) = (int16_t)g_58_l;
    *(char *)(v1 + 0x235e) = (char)g_62_l;
    *(int32_t *)(v1 + 0x2360) = (int32_t)g_93_l;
    *(int16_t *)(v1 + 0x2364) = (int16_t)g_113_l;
    *(int32_t *)(v1 + 0x2390) = g_179_l;
    *(int32_t *)(v1 + 0x2368) = g_180_l;
    *(int32_t *)(v1 + 0x236c) = (int32_t)g_181_l;
    *(int16_t *)(v1 + 0x2370) = (int16_t)g_182_l;
    *(int32_t *)(v1 + 0x2374) = (int32_t)g_183_l;
    *(int16_t *)(v1 + 0x2378) = g_192_l;
    *(int16_t *)(v1 + 0x2394) = g_218_l;
    *(int16_t *)(v1 + 0x237a) = g_219_l;
    *(int16_t *)(v1 + 0x237c) = (int16_t)g_236_l;
    *(int32_t *)(v1 + 0x2380) = (int32_t)g_253_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e00 - 0x2e80
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2e00
    int32_t v1; // 0x2e00
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e80 - 0x2ec4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2e80
    int32_t v1; // 0x2e80
    int32_t * v2 = (int32_t *)(v1 + 0x21c3); // 0x2e93
    uint32_t v3 = *v2; // 0x2e93
    char v4; // 0x2e80
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x21d7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2ec4 - 0x2edc
int32_t _fini(void) {
    // 0x2ec4
    int32_t v1; // 0x2ec4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

