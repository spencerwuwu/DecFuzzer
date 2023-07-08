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
int32_t set_var(int32_t g_2_l, int16_t g_11_l, int16_t g_16_l, int32_t g_26_l, char g_28_l, int16_t g_30_l, int16_t g_33_l, int32_t g_44_l, int16_t g_48_l, int32_t g_62_l, int16_t g_63_l, char g_88_l, char g_112_l, char g_113_l, int32_t g_148_l, char g_150_l, int32_t g_242_l, char g_265_l, int32_t g_283_l, int16_t g_284_l, char g_290_l, int16_t g_299_l, char g_363_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 64; // 0x2f8b
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
    return v1 + 0x4f9f;
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
    char * v3 = (char *)(v1 + 0x4f07); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138r2.c
// Address range: 0x11a0 - 0x1581
// Line range:    290 - 322
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e63)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x4e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x4e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x2e6a), v1);
    char v7 = *(char *)(v2 + 0x4e74); // 0x12a4
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6f), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x4e76); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e74), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x4e78); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4eac); // 0x130d
    transparent_crc(v10, (char *)(v2 + 0x2e7e), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x4e7a); // 0x132f
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e7c); // 0x1352
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x4e80); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8d), v1);
    unsigned char v14 = *(char *)(v2 + 0x4e82); // 0x1397
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e92), v1);
    char v15 = *(char *)(v2 + 0x4e83); // 0x13ba
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e97), v1);
    unsigned char v16 = *(char *)(v2 + 0x4e84); // 0x13df
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2e9d), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e88); // 0x1402
    transparent_crc(v17, (char *)(v2 + 0x2ea3), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e8c); // 0x1424
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2ea9), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e90); // 0x1449
    transparent_crc(v19, (char *)(v2 + 0x2eaf), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e94); // 0x146b
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb5), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e98); // 0x148e
    transparent_crc(v21, (char *)(v2 + 0x2ebb), v1);
    uint16_t v22 = *(int16_t *)(v2 + 0x4e9c); // 0x14b0
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec1), v1);
    unsigned char v23 = *(char *)(v2 + 0x4e9e); // 0x14d3
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec7), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x4ea0); // 0x14f8
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ecd), v1);
    transparent_crc(-91, (char *)(v2 + 0x2ed3), v1);
    char v25 = *(char *)(v2 + 0x4ea2); // 0x153e
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ed9), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ea4), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1590 - 0x1595
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1590
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15a0 - 0x1648
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x161a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x15e1
        while (v1 != 0) {
            // 0x15e7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1625
        int32_t v5; // 0x15a0
        *(int32_t *)(v5 + 0x4ab1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138r2.c
// Address range: 0x1650 - 0x2dfe
// Line range:    61 - 283
char func_1(void) {
    // 0x1650
    set_var(-16, -1, 0, -0x60760d20, 103, 0x3e70, -2694, 0, 3, 0x6996dceb, -8, -5, 1, -8, -13, -7, 0x4616ce41, -52, 1, -0x44da, -106, -0x4a23, 18);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e00 - 0x2e5f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2e00
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2e00
    if (v1 != 0) {
        // 0x2e34
        printf((char *)(v1 + 0x127f));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x2e60 - 0x2e94
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2e60
    int32_t v1; // 0x2e60
    printf((char *)(v1 + 0x1242));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s138r2.c
// Address range: 0x2ea0 - 0x2fdf
// Line range:    51 - 53
int32_t set_var(int32_t g_2_l, int16_t g_11_l, int16_t g_16_l, int32_t g_26_l, char g_28_l, int16_t g_30_l, int16_t g_33_l, int32_t g_44_l, int16_t g_48_l, int32_t g_62_l, int16_t g_63_l, char g_88_l, char g_112_l, char g_113_l, int32_t g_148_l, char g_150_l, int32_t g_242_l, char g_265_l, int32_t g_283_l, int16_t g_284_l, char g_290_l, int16_t g_299_l, char g_363_l) {
    // 0x2ea0
    int32_t v1; // 0x2ea0
    *(int32_t *)(v1 + 0x316c) = (int32_t)g_11_l;
    *(int16_t *)(v1 + 0x3170) = g_16_l;
    *(int16_t *)(v1 + 0x3172) = (int16_t)g_26_l;
    *(int32_t *)(v1 + 0x3174) = (int32_t)g_28_l;
    *(char *)(v1 + 0x3178) = (char)g_30_l;
    *(int16_t *)(v1 + 0x317a) = g_33_l;
    *(int16_t *)(v1 + 0x317c) = (int16_t)g_44_l;
    *(int32_t *)(v1 + 0x31b0) = (int32_t)g_48_l;
    *(int16_t *)(v1 + 0x317e) = (int16_t)g_62_l;
    *(int32_t *)(v1 + 0x3180) = (int32_t)g_63_l;
    *(int16_t *)(v1 + 0x3184) = (int16_t)g_88_l;
    *(char *)(v1 + 0x3186) = g_112_l;
    *(char *)(v1 + 0x3187) = g_113_l;
    *(char *)(v1 + 0x3188) = (char)g_148_l;
    *(int32_t *)(v1 + 0x318c) = (int32_t)g_150_l;
    *(char *)(v1 + 0x3190) = (char)g_242_l;
    *(int32_t *)(v1 + 0x3194) = (int32_t)g_265_l;
    *(char *)(v1 + 0x3198) = (char)g_283_l;
    *(int32_t *)(v1 + 0x319c) = (int32_t)g_284_l;
    *(int16_t *)(v1 + 0x31a0) = (int16_t)g_290_l;
    *(char *)(v1 + 0x31a2) = (char)g_299_l;
    *(int16_t *)(v1 + 0x31a4) = (int16_t)g_363_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fe0 - 0x3060
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2fe0
    int32_t v1; // 0x2fe0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3060 - 0x30a4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3060
    int32_t v1; // 0x3060
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 92); // 0x3073
    uint32_t v3 = *v2; // 0x3073
    char v4; // 0x3060
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 104 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x3094
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x30a4 - 0x30bc
int32_t _fini(void) {
    // 0x30a4
    int32_t v1; // 0x30a4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

