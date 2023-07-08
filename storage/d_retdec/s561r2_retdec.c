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
int32_t set_var(int32_t g_9_l, char g_23_l, int32_t g_38_l, char g_84_l, int32_t g_85_l, int16_t g_86_l, int32_t g_129_l, int32_t g_148_l, int16_t g_149_l, int32_t g_150_l, int32_t g_178_l, int16_t g_192_l, char g_239_l, int32_t g_248_l, char g_258_l, int32_t g_281_l, int32_t g_298_l, int16_t g_309_l);
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
    return v1 + 0x3fa7;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s561r2.c
// Address range: 0x11a0 - 0x14a9
// Line range:    270 - 296
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eb3)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e74); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x3e7c); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x1e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x130e
    transparent_crc(v10, (char *)(v2 + 0x1e7f), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e88); // 0x1330
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e85), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e8c); // 0x1353
    transparent_crc(v12, (char *)(v2 + 0x1e8b), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e90); // 0x1375
    transparent_crc(v13, (char *)(v2 + 0x1e91), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e94); // 0x1397
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e97), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e96); // 0x13ba
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9d), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e98); // 0x13dd
    transparent_crc(v16, (char *)(v2 + 0x1ea3), v1);
    unsigned char v17 = *(char *)(v2 + 0x3e9c); // 0x13ff
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea9), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3ea0); // 0x1422
    transparent_crc(v18, (char *)(v2 + 0x1eaf), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3ea4); // 0x1444
    transparent_crc(v19, (char *)(v2 + 0x1eb5), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x3ea8); // 0x1466
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1ebb), v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s561r2.c
// Address range: 0x1570 - 0x2c05
// Line range:    55 - 263
int32_t func_1(void) {
    // 0x2ac9
    set_var(-2, -58, 1, -31, -0x182391d1, -0x2db9, -0x3b13f9a5, -4, 4, 0x50425ff9, -0x1b2510ee, -0x515c, -6, -1, -92, -1, -1, 0x4095);
    return 2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2c10 - 0x2c6f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2c10
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2c10
    if (v1 != 0) {
        // 0x2c44
        printf((char *)(v1 + 1105));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c70 - 0x2ca4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c70
    int32_t v1; // 0x2c70
    printf((char *)(v1 + 1044));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s561r2.c
// Address range: 0x2cb0 - 0x2da7
// Line range:    45 - 47
int32_t set_var(int32_t g_9_l, char g_23_l, int32_t g_38_l, char g_84_l, int32_t g_85_l, int16_t g_86_l, int32_t g_129_l, int32_t g_148_l, int16_t g_149_l, int32_t g_150_l, int32_t g_178_l, int16_t g_192_l, char g_239_l, int32_t g_248_l, char g_258_l, int32_t g_281_l, int32_t g_298_l, int16_t g_309_l) {
    // 0x2cb0
    int32_t v1; // 0x2cb0
    *(int32_t *)(v1 + 0x235c) = (int32_t)g_23_l;
    *(char *)(v1 + 0x2360) = (char)g_38_l;
    *(int32_t *)(v1 + 0x2364) = (int32_t)g_84_l;
    *(char *)(v1 + 0x2368) = (char)g_85_l;
    *(int32_t *)(v1 + 0x236c) = (int32_t)g_86_l;
    *(int16_t *)(v1 + 0x2370) = (int16_t)g_129_l;
    *(int32_t *)(v1 + 0x2374) = g_148_l;
    *(int32_t *)(v1 + 0x2378) = (int32_t)g_149_l;
    *(int16_t *)(v1 + 0x237c) = (int16_t)g_150_l;
    *(int32_t *)(v1 + 0x2380) = g_178_l;
    *(int32_t *)(v1 + 0x2384) = (int32_t)g_192_l;
    *(int16_t *)(v1 + 0x2388) = (int16_t)g_239_l;
    *(char *)(v1 + 0x238a) = (char)g_248_l;
    *(int32_t *)(v1 + 0x238c) = (int32_t)g_258_l;
    *(char *)(v1 + 0x2390) = (char)g_281_l;
    *(int32_t *)(v1 + 0x2394) = g_298_l;
    *(int32_t *)(v1 + 0x2398) = (int32_t)g_309_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2db0 - 0x2e30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2db0
    int32_t v1; // 0x2db0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e30 - 0x2e74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2e30
    int32_t v1; // 0x2e30
    int32_t * v2 = (int32_t *)(v1 + 0x221f); // 0x2e43
    uint32_t v3 = *v2; // 0x2e43
    char v4; // 0x2e30
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2227 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2e74 - 0x2e8c
int32_t _fini(void) {
    // 0x2e74
    int32_t v1; // 0x2e74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

