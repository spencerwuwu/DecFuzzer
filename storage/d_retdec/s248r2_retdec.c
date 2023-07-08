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
int32_t set_var(int16_t g_2_l, int16_t g_10_l, char g_12_l, char g_37_l, int32_t g_38_l, int32_t g_52_l, char g_65_l, char g_66_l, char g_67_l, int32_t g_97_l, int32_t g_98_l, char g_102_l, int32_t g_109_l, int32_t g_121_l, int32_t g_134_l, int32_t g_169_l, int32_t g_209_l, char g_227_l, int32_t g_228_l, char g_229_l, int32_t g_263_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s248r2.c
// Address range: 0x11a0 - 0x1515
// Line range:    239 - 268
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea2)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e6a); // 0x1240
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e6c); // 0x1263
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e6d); // 0x1286
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e70); // 0x12a9
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e74); // 0x12cb
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    char v9 = *(char *)(v2 + 0x3e78); // 0x12ed
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    char v10 = *(char *)(v2 + 0x3e79); // 0x1310
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e7a); // 0x1335
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e7c); // 0x1358
    transparent_crc(v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e80); // 0x137a
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    char v14 = *(char *)(v2 + 0x3e84); // 0x139c
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e88); // 0x13bf
    transparent_crc(v15, (char *)(v2 + 0x1e98), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e8c); // 0x13e1
    transparent_crc(v16, (char *)(v2 + 0x1e9e), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e90); // 0x1403
    transparent_crc(v17, (char *)(v2 + 0x1ea4), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3eb0); // 0x1425
    transparent_crc(v18, (char *)(v2 + 0x1eaa), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3e94); // 0x1447
    transparent_crc(v19, (char *)(v2 + 0x1eb0), v1);
    char v20 = *(char *)(v2 + 0x3e98); // 0x1469
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb6), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3e9c); // 0x148c
    transparent_crc(v21, (char *)(v2 + 0x1ebc), v1);
    unsigned char v22 = *(char *)(v2 + 0x3ea0); // 0x14ae
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec2), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3ea4); // 0x14d3
    transparent_crc(v23, (char *)(v2 + 0x1ec8), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1520 - 0x1525
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1520
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1530 - 0x15d8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15aa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1571
        while (v1 != 0) {
            // 0x1577
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15b5
        int32_t v5; // 0x1530
        *(int32_t *)(v5 + 0x3b25 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s248r2.c
// Address range: 0x15e0 - 0x28b4
// Line range:    58 - 232
int32_t func_1(void) {
    // 0x15e0
    set_var(-1, 0x21e0, -1, 68, 68, 0x7d67f3e8, 1, 1, -6, -0x3c9d5fd1, 0x27df68d3, 88, -0x5d1b4e69, -1, 0x2cc3de63, 0, 1, 8, -0x41790310, -63, -0x2ea2cde3);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28c0 - 0x291f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x28c0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x28c0
    if (v1 != 0) {
        // 0x28f4
        printf((char *)(v1 + 1966));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2920 - 0x2954
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2920
    int32_t v1; // 0x2920
    printf((char *)(v1 + 1905));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s248r2.c
// Address range: 0x2960 - 0x2a75
// Line range:    48 - 50
int32_t set_var(int16_t g_2_l, int16_t g_10_l, char g_12_l, char g_37_l, int32_t g_38_l, int32_t g_52_l, char g_65_l, char g_66_l, char g_67_l, int32_t g_97_l, int32_t g_98_l, char g_102_l, int32_t g_109_l, int32_t g_121_l, int32_t g_134_l, int32_t g_169_l, int32_t g_209_l, char g_227_l, int32_t g_228_l, char g_229_l, int32_t g_263_l) {
    // 0x2960
    int32_t v1; // 0x2960
    *(int16_t *)(v1 + 0x26ac) = g_10_l;
    *(int16_t *)(v1 + 0x26ae) = (int16_t)g_12_l;
    *(char *)(v1 + 0x26b0) = g_37_l;
    *(char *)(v1 + 0x26b1) = (char)g_38_l;
    *(int32_t *)(v1 + 0x26b4) = g_52_l;
    *(int32_t *)(v1 + 0x26b8) = (int32_t)g_65_l;
    *(char *)(v1 + 0x26bc) = g_66_l;
    *(char *)(v1 + 0x26bd) = g_67_l;
    *(char *)(v1 + 0x26be) = (char)g_97_l;
    *(int32_t *)(v1 + 0x26c0) = g_98_l;
    *(int32_t *)(v1 + 0x26c4) = (int32_t)g_102_l;
    *(char *)(v1 + 0x26c8) = (char)g_109_l;
    *(int32_t *)(v1 + 0x26cc) = g_121_l;
    *(int32_t *)(v1 + 0x26d0) = g_134_l;
    *(int32_t *)(v1 + 0x26d4) = g_169_l;
    *(int32_t *)(v1 + 0x26f4) = g_209_l;
    *(int32_t *)(v1 + 0x26d8) = (int32_t)g_227_l;
    *(char *)(v1 + 0x26dc) = (char)g_228_l;
    *(int32_t *)(v1 + 0x26e0) = (int32_t)g_229_l;
    *(char *)(v1 + 0x26e4) = (char)g_263_l;
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
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2557 + 4 * (v3 % 256 ^ (int32_t)v4));
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

