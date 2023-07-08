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
int32_t set_var(int32_t g_7_l, int16_t g_17_l, int16_t g_23_l, int16_t g_25_l, char g_38_l, char g_53_l, int16_t g_60_l, int32_t g_90_l, int32_t g_108_l, char g_111_l, int32_t g_140_l, int32_t g_141_l, int32_t g_143_l, int32_t g_147_l, int32_t g_152_l, char g_155_l, char g_231_l, int16_t g_253_l, int16_t g_297_l, int32_t g_303_l, int32_t g_322_l, int16_t g_335_l, char g_375_l, int32_t g_464_l, int32_t g_465_l, char g_467_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x413f
int32_t g2;

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
    return v1 + 0x4fb3;
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
    char * v3 = (char *)(v1 + 0x4f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x11a0 - 0x160a
// Line range:    408 - 444
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e96)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    transparent_crc(-0x57325d52, (char *)(v2 + 0x2e60), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x4e6c); // 0x125c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e64), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x4e6e); // 0x1282
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e69), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x4e70); // 0x12a8
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6e), v1);
    transparent_crc(5, (char *)(v2 + 0x2e73), v1);
    unsigned char v7 = *(char *)(v2 + 0x4ec0); // 0x12ee
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e78), v1);
    unsigned char v8 = *(char *)(v2 + 0x4e72); // 0x1311
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e7d), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x4e74); // 0x1334
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e82), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e78); // 0x1357
    transparent_crc(v10, (char *)(v2 + 0x2e87), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e7c); // 0x1379
    transparent_crc(v11, (char *)(v2 + 0x2e8c), v1);
    char v12 = *(char *)(v2 + 0x4e80); // 0x139b
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e92), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e84); // 0x13c0
    transparent_crc(v13, (char *)(v2 + 0x2e98), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e88); // 0x13e2
    transparent_crc(v14, (char *)(v2 + 0x2e9e), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e8c); // 0x1404
    transparent_crc(v15, (char *)(v2 + 0x2ea4), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e90); // 0x1426
    transparent_crc(v16, (char *)(v2 + 0x2eaa), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e94); // 0x1448
    transparent_crc(v17, (char *)(v2 + 0x2eb0), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e98); // 0x146a
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eb6), v1);
    unsigned char v19 = *(char *)(v2 + 0x4e99); // 0x148d
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2ebc), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x4e9a); // 0x14b0
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2ec2), v1);
    uint16_t v21 = *(int16_t *)(v2 + 0x4e9c); // 0x14d3
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ec8), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea0); // 0x14f9
    transparent_crc(v22, (char *)(v2 + 0x2ece), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4ea4); // 0x151b
    transparent_crc(v23, (char *)(v2 + 0x2ed4), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x4ea8); // 0x153d
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2eda), v1);
    char v25 = *(char *)(v2 + 0x4eaa); // 0x1560
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ee0), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eac); // 0x1583
    transparent_crc(v26, (char *)(v2 + 0x2ee6), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x4eb0); // 0x15a5
    transparent_crc(v27, (char *)(v2 + 0x2eec), v1);
    char v28 = *(char *)(v2 + 0x4eb4); // 0x15c7
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2ef2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1610 - 0x1615
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1610
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1620 - 0x16c8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x169a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1661
        while (v1 != 0) {
            // 0x1667
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16a5
        int32_t v5; // 0x1620
        *(int32_t *)(v5 + 0x4a45 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x16d0 - 0x364d
// Line range:    65 - 401
int32_t func_1(void) {
    // 0x363f
    set_var(-0x2492fc8c, 0x59bb, (int16_t)&g1, 1, 0, 1, 1, -1, 0x7def5a7f, 9, 0x3ad813d1, 1, -0x5ab8e3bc, -1, -0x511d2796, 3, -27, 0x5745, 0x4bdb, -0x7769a89c, 3, -0x36e8, 1, 0x4322c4ea, 1, -110);
    return 3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3650 - 0x36af
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3650
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3650
    if (v1 != 0) {
        // 0x3684
        printf((char *)(v1 + 2632));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x36b0 - 0x36e4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x36b0
    int32_t v1; // 0x36b0
    printf((char *)(v1 + 2571));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s803retdec.c
// Address range: 0x36f0 - 0x3850
// Line range:    55 - 57
int32_t set_var(int32_t g_7_l, int16_t g_17_l, int16_t g_23_l, int16_t g_25_l, char g_38_l, char g_53_l, int16_t g_60_l, int32_t g_90_l, int32_t g_108_l, char g_111_l, int32_t g_140_l, int32_t g_141_l, int32_t g_143_l, int32_t g_147_l, int32_t g_152_l, char g_155_l, char g_231_l, int16_t g_253_l, int16_t g_297_l, int32_t g_303_l, int32_t g_322_l, int16_t g_335_l, char g_375_l, int32_t g_464_l, int32_t g_465_l, char g_467_l) {
    // 0x36f0
    int32_t v1; // 0x36f0
    *(int32_t *)(v1 + 0x291c) = (int32_t)g_17_l;
    *(int16_t *)(v1 + 0x2920) = g_23_l;
    *(int16_t *)(v1 + 0x2922) = g_25_l;
    *(int16_t *)(v1 + 0x2924) = (int16_t)g_38_l;
    *(char *)(v1 + 0x2974) = g_53_l;
    *(char *)(v1 + 0x2926) = (char)g_60_l;
    *(int16_t *)(v1 + 0x2928) = (int16_t)g_90_l;
    *(int32_t *)(v1 + 0x292c) = g_108_l;
    *(int32_t *)(v1 + 0x2930) = (int32_t)g_111_l;
    *(char *)(v1 + 0x2934) = (char)g_140_l;
    *(int32_t *)(v1 + 0x2938) = g_141_l;
    *(int32_t *)(v1 + 0x293c) = g_143_l;
    *(int32_t *)(v1 + 0x2940) = g_147_l;
    *(int32_t *)(v1 + 0x2944) = g_152_l;
    *(int32_t *)(v1 + 0x2948) = (int32_t)g_155_l;
    *(char *)(v1 + 0x294c) = g_231_l;
    *(char *)(v1 + 0x294d) = (char)g_253_l;
    *(int16_t *)(v1 + 0x294e) = g_297_l;
    *(int16_t *)(v1 + 0x2950) = (int16_t)g_303_l;
    *(int32_t *)(v1 + 0x2954) = g_322_l;
    *(int32_t *)(v1 + 0x2958) = (int32_t)g_335_l;
    *(int16_t *)(v1 + 0x295c) = (int16_t)g_375_l;
    *(char *)(v1 + 0x295e) = (char)g_464_l;
    *(int32_t *)(v1 + 0x2960) = g_465_l;
    *(int32_t *)(v1 + 0x2964) = (int32_t)g_467_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3850 - 0x38d0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3850
    int32_t v1; // 0x3850
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x38d0 - 0x3914
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x38d0
    int32_t v1; // 0x38d0
    int32_t * v2 = (int32_t *)(v1 + 0x278b); // 0x38e3
    uint32_t v3 = *v2; // 0x38e3
    char v4; // 0x38d0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2797 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3914 - 0x392c
int32_t _fini(void) {
    // 0x3914
    int32_t v1; // 0x3914
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

