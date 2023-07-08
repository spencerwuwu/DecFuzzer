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
int32_t set_var(char g_2_l, int16_t g_4_l, int16_t g_25_l, int32_t g_38_l, int16_t g_56_l, int32_t g_77_l, int32_t g_96_l, int16_t g_136_l, int16_t g_175_l, char g_186_l, int32_t g_193_l, int32_t g_244_l, char g_253_l, int32_t g_254_l, int32_t g_263_l, int32_t g_264_l, char g_265_l, int16_t g_268_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s211r2.c
// Address range: 0x11a0 - 0x14aa
// Line range:    243 - 269
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
    unsigned char v3 = *(char *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5e), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e6a); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e62), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e6c); // 0x1262
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1285
    transparent_crc(v6, (char *)(v2 + 0x1e6b), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x3e74); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e78); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e7c); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3ea8); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x3e80); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e85), v1);
    char v12 = *(char *)(v2 + 0x3e82); // 0x1354
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8b), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e84); // 0x1377
    transparent_crc(v13, (char *)(v2 + 0x1e91), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e88); // 0x1399
    transparent_crc(v14, (char *)(v2 + 0x1e97), v1);
    char v15 = *(char *)(v2 + 0x3e8c); // 0x13bb
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9d), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e90); // 0x13de
    transparent_crc(v16, (char *)(v2 + 0x1ea3), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e94); // 0x1400
    transparent_crc(v17, (char *)(v2 + 0x1ea9), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x1422
    transparent_crc(v18, (char *)(v2 + 0x1eaf), v1);
    char v19 = *(char *)(v2 + 0x3e9c); // 0x1444
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb5), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x3e9e); // 0x1467
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1ebb), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea0), v1);
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
        *(int32_t *)(v5 + 0x3b8d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s211r2.c
// Address range: 0x1570 - 0x27bb
// Line range:    55 - 236
int16_t func_1(void) {
    // 0x1570
    set_var(-16, 240, 0, 0, -8, 64, 0, 0, 1, 70, 0x47aea757, -6, 44, -0x59228d6a, -8, 0x6e31945d, 90, 0x6dcd);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27c0 - 0x281f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x27c0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x27c0
    if (v1 != 0) {
        // 0x27f4
        printf((char *)(v1 + 2209));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2820 - 0x2854
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2820
    int32_t v1; // 0x2820
    printf((char *)(v1 + 2148));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s211r2.c
// Address range: 0x2860 - 0x295d
// Line range:    45 - 47
int32_t set_var(char g_2_l, int16_t g_4_l, int16_t g_25_l, int32_t g_38_l, int16_t g_56_l, int32_t g_77_l, int32_t g_96_l, int16_t g_136_l, int16_t g_175_l, char g_186_l, int32_t g_193_l, int32_t g_244_l, char g_253_l, int32_t g_254_l, int32_t g_263_l, int32_t g_264_l, char g_265_l, int16_t g_268_l) {
    // 0x2860
    int32_t v1; // 0x2860
    *(char *)(v1 + 0x27ac) = (char)g_4_l;
    *(int16_t *)(v1 + 0x27ae) = g_25_l;
    *(int16_t *)(v1 + 0x27b0) = (int16_t)g_38_l;
    *(int32_t *)(v1 + 0x27b4) = (int32_t)g_56_l;
    *(int16_t *)(v1 + 0x27b8) = (int16_t)g_77_l;
    *(int32_t *)(v1 + 0x27bc) = g_96_l;
    *(int32_t *)(v1 + 0x27c0) = (int32_t)g_136_l;
    *(int16_t *)(v1 + 0x27ec) = g_175_l;
    *(int16_t *)(v1 + 0x27c4) = (int16_t)g_186_l;
    *(char *)(v1 + 0x27c6) = (char)g_193_l;
    *(int32_t *)(v1 + 0x27c8) = g_244_l;
    *(int32_t *)(v1 + 0x27cc) = (int32_t)g_253_l;
    *(char *)(v1 + 0x27d0) = (char)g_254_l;
    *(int32_t *)(v1 + 0x27d4) = g_263_l;
    *(int32_t *)(v1 + 0x27d8) = g_264_l;
    *(int32_t *)(v1 + 0x27dc) = (int32_t)g_265_l;
    *(char *)(v1 + 0x27e0) = (char)g_268_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2960 - 0x29e0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2960
    int32_t v1; // 0x2960
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29e0 - 0x2a24
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x29e0
    int32_t v1; // 0x29e0
    int32_t * v2 = (int32_t *)(v1 + 0x2663); // 0x29f3
    uint32_t v3 = *v2; // 0x29f3
    char v4; // 0x29e0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x266f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2a24 - 0x2a3c
int32_t _fini(void) {
    // 0x2a24
    int32_t v1; // 0x2a24
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

