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
int32_t set_var(int32_t g_4_l, char g_5_l, int16_t g_17_l, int32_t g_18_l, int16_t g_45_l, char g_46_l, int16_t g_47_l, int32_t g_50_l, int32_t g_57_l, int32_t g_58_l, int32_t g_76_l, int32_t g_80_l, int32_t g_84_l, int16_t g_91_l, int16_t g_111_l, char g_170_l);
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
    return v1 + 0x3f8f;
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
    char * v3 = (char *)(v1 + 0x3ef7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s901retdec.c
// Address range: 0x11a0 - 0x1467
// Line range:    194 - 218
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea4)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    char v4 = *(char *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x3e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e69), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6e), v1);
    char v8 = *(char *)(v2 + 0x3e76); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e73), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e78); // 0x12ec
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e7c); // 0x1312
    transparent_crc(v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e80); // 0x1334
    transparent_crc(v11, (char *)(v2 + 0x1e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e9c); // 0x1356
    transparent_crc(v12, (char *)(v2 + 0x1e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e84); // 0x1378
    transparent_crc(v13, (char *)(v2 + 0x1e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e88); // 0x139a
    transparent_crc(v14, (char *)(v2 + 0x1e91), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e8c); // 0x13bc
    transparent_crc(v15, (char *)(v2 + 0x1e96), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e90); // 0x13de
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9b), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x3ea0); // 0x1401
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea0), v1);
    unsigned char v18 = *(char *)(v2 + 0x3e92); // 0x1424
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1ea6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e94), v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s901retdec.c
// Address range: 0x1530 - 0x23c9
// Line range:    57 - 187
int32_t func_1(void) {
    // 0x1830
    set_var(1, 1, 252, 3, 1, 70, -9, 0x127a4ef2, -10, 0, -0x4325b0f, 1, 0x50fade0f, 3, 0, -4);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23d0 - 0x242f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x23d0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x23d0
    if (v1 != 0) {
        // 0x2404
        printf((char *)(v1 + 3196));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2430 - 0x2464
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2430
    int32_t v1; // 0x2430
    printf((char *)(v1 + 3135));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s901retdec.c
// Address range: 0x2470 - 0x2552
// Line range:    47 - 49
int32_t set_var(int32_t g_4_l, char g_5_l, int16_t g_17_l, int32_t g_18_l, int16_t g_45_l, char g_46_l, int16_t g_47_l, int32_t g_50_l, int32_t g_57_l, int32_t g_58_l, int32_t g_76_l, int32_t g_80_l, int32_t g_84_l, int16_t g_91_l, int16_t g_111_l, char g_170_l) {
    // 0x2470
    int32_t v1; // 0x2470
    *(int32_t *)(v1 + 0x2b9c) = (int32_t)g_5_l;
    *(char *)(v1 + 0x2ba0) = (char)g_17_l;
    *(int16_t *)(v1 + 0x2ba2) = (int16_t)g_18_l;
    *(int32_t *)(v1 + 0x2ba4) = (int32_t)g_45_l;
    *(int16_t *)(v1 + 0x2ba8) = (int16_t)g_46_l;
    *(char *)(v1 + 0x2baa) = (char)g_47_l;
    *(int16_t *)(v1 + 0x2bac) = (int16_t)g_50_l;
    *(int32_t *)(v1 + 0x2bb0) = g_57_l;
    *(int32_t *)(v1 + 0x2bb4) = g_58_l;
    *(int32_t *)(v1 + 0x2bd0) = g_76_l;
    *(int32_t *)(v1 + 0x2bb8) = g_80_l;
    *(int32_t *)(v1 + 0x2bbc) = g_84_l;
    *(int32_t *)(v1 + 0x2bc0) = (int32_t)g_91_l;
    *(int16_t *)(v1 + 0x2bc4) = g_111_l;
    *(int16_t *)(v1 + 0x2bd4) = (int16_t)g_170_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2560 - 0x25e0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2560
    int32_t v1; // 0x2560
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x25e0 - 0x2624
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x25e0
    int32_t v1; // 0x25e0
    int32_t * v2 = (int32_t *)(v1 + 0x2a57); // 0x25f3
    uint32_t v3 = *v2; // 0x25f3
    char v4; // 0x25e0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2a67 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2624 - 0x263c
int32_t _fini(void) {
    // 0x2624
    int32_t v1; // 0x2624
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

