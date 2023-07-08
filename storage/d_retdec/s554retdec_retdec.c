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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_6_l, int32_t g_36_l, int16_t g_38_l, int32_t g_52_l, int16_t g_53_l, int32_t g_56_l, char g_57_l, int16_t g_58_l, int32_t g_101_l, int16_t g_153_l, int32_t g_184_l, int32_t g_211_l, char g_238_l, int32_t g_251_l, int32_t g_253_l, int32_t g_272_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0xffffffe; // 0x2478
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
    return v1 + 0x3fa7;
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
    char * v3 = (char *)(v1 + 0x3f0f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s554retdec.c
// Address range: 0x11a0 - 0x14aa
// Line range:    246 - 272
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e8f)) == 0;
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
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x1e68), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3e78); // 0x12a2
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6d), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c8
    transparent_crc(v8, (char *)(v2 + 0x1e72), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e80); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e77), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x1310
    transparent_crc(v10, (char *)(v2 + 0x1e7c), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e88); // 0x1332
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e81), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e8a); // 0x1355
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e86), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e8c); // 0x1378
    transparent_crc(v13, (char *)(v2 + 0x1e8b), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e90); // 0x139a
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e91), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e94); // 0x13bd
    transparent_crc(v15, (char *)(v2 + 0x1e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e98); // 0x13df
    transparent_crc(v16, (char *)(v2 + 0x1e9d), v1);
    char v17 = *(char *)(v2 + 0x3e9c); // 0x1401
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea3), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3ea0); // 0x1424
    transparent_crc(v18, (char *)(v2 + 0x1ea9), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3ea4); // 0x1446
    transparent_crc(v19, (char *)(v2 + 0x1eaf), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3ea8); // 0x1468
    transparent_crc(v20, (char *)(v2 + 0x1eb5), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14b0 - 0x14b5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14c0 - 0x1568
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x153a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1501
        while (v1 != 0) {
            // 0x1507
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1545
        int32_t v5; // 0x14c0
        *(int32_t *)(v5 + 0x3b95 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s554retdec.c
// Address range: 0x1570 - 0x2b0f
// Line range:    55 - 239
int32_t func_1(void) {
    // 0x2b01
    set_var(0, 20, -1, -10, -0x3858, 0, 1, -0x451ab02f, 22, 1, 7, -0x3168, -0x34374b21, -1, 81, 0x28a66a15, 0x4ea3bce0, -0x5219c2ea);
    return -0x3eb0ffe5;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b10 - 0x2b6f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2b10
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2b10
    if (v1 != 0) {
        // 0x2b44
        printf((char *)(v1 + 1355));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2b70 - 0x2ba4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2b70
    int32_t v1; // 0x2b70
    printf((char *)(v1 + (int32_t)&g1 - 0x1f6a));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s554retdec.c
// Address range: 0x2bb0 - 0x2ca7
// Line range:    45 - 47
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_6_l, int32_t g_36_l, int16_t g_38_l, int32_t g_52_l, int16_t g_53_l, int32_t g_56_l, char g_57_l, int16_t g_58_l, int32_t g_101_l, int16_t g_153_l, int32_t g_184_l, int32_t g_211_l, char g_238_l, int32_t g_251_l, int32_t g_253_l, int32_t g_272_l) {
    // 0x2bb0
    int32_t v1; // 0x2bb0
    *(int32_t *)(v1 + 0x245c) = g_5_l;
    *(int32_t *)(v1 + 0x2460) = g_6_l;
    *(int32_t *)(v1 + 0x2464) = g_36_l;
    *(int32_t *)(v1 + 0x2468) = (int32_t)g_38_l;
    *(int16_t *)(v1 + 0x246c) = (int16_t)g_52_l;
    *(int32_t *)(v1 + 0x2470) = (int32_t)g_53_l;
    *(int16_t *)(v1 + 0x2474) = (int16_t)g_56_l;
    *(int32_t *)(v1 + 0x2478) = (int32_t)g_57_l;
    *(char *)(v1 + 0x247c) = (char)g_58_l;
    *(int16_t *)(v1 + 0x247e) = (int16_t)g_101_l;
    *(int32_t *)(v1 + 0x2480) = (int32_t)g_153_l;
    *(int16_t *)(v1 + 0x2484) = (int16_t)g_184_l;
    *(int32_t *)(v1 + 0x2488) = g_211_l;
    *(int32_t *)(v1 + 0x248c) = (int32_t)g_238_l;
    *(char *)(v1 + 0x2490) = (char)g_251_l;
    *(int32_t *)(v1 + 0x2494) = g_253_l;
    *(int32_t *)(v1 + 0x2498) = g_272_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2cb0 - 0x2d30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2cb0
    int32_t v1; // 0x2cb0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2d30 - 0x2d74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2d30
    int32_t v1; // 0x2d30
    int32_t * v2 = (int32_t *)(v1 + 0x231f); // 0x2d43
    uint32_t v3 = *v2; // 0x2d43
    char v4; // 0x2d30
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2327 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2d74 - 0x2d8c
int32_t _fini(void) {
    // 0x2d74
    int32_t v1; // 0x2d74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

