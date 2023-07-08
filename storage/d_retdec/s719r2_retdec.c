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
int32_t set_var(int32_t g_2_l, int16_t g_15_l, int32_t g_25_l, int16_t g_69_l, int32_t g_89_l, char g_108_l, int32_t g_115_l, int16_t g_117_l, int32_t g_147_l, int32_t g_148_l, char g_165_l, int32_t g_196_l, int16_t g_203_l, int16_t g_250_l, char g_381_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x3c7ea500; // 0x2efb
int32_t g2 = -0x3f7ea800; // 0x30f8
int32_t g3;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x4f97;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x4eff); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s719r2.c
// Address range: 0x11a0 - 0x1442
// Line range:    273 - 296
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2eae)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x4e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x2e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x4e74); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e78); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x2e6f), v1);
    char v8 = *(char *)(v2 + 0x4e7c); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e74), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e80); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x2e7a), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x4e84); // 0x130b
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e80), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e88); // 0x132e
    transparent_crc(v11, (char *)(v2 + 0x2e86), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e8c); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x2e8c), v1);
    unsigned char v13 = *(char *)(v2 + 0x4e90); // 0x1372
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e92), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e94); // 0x1395
    transparent_crc(v14, (char *)(v2 + 0x2e98), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x4e98); // 0x13b7
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9e), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x4ea4); // 0x13da
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea4), v1);
    unsigned char v17 = *(char *)(v2 + 0x4e9a); // 0x13fd
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2eaa), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e9c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1450 - 0x1455
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1450
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1460 - 0x1508
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14da
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14a1
        while (v1 != 0) {
            // 0x14a7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x14e5
        int32_t v5; // 0x1460
        *(int32_t *)(v5 + 0x4be9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s719r2.c
// Address range: 0x1510 - 0x2ee3
// Line range:    52 - 266
int32_t func_1(void) {
    // 0x2dcd
    set_var(-16, 1, -0x6931fd71, 8, 0, -1, -0x2f50f69a, -1, 0x7b9a, -0xff1274d, 2, 0x41cdb462, 2, 0, 2);
    return -16;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ef0 - 0x2f4f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2ef0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2ef0
    if (v1 != 0) {
        // 0x2f24
        printf((char *)(v1 + (int32_t)&g2 - 0x1f98));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2f50 - 0x2f84
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2f50
    int32_t v1; // 0x2f50
    printf((char *)(v1 + 0x1123));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s719r2.c
// Address range: 0x2f90 - 0x3066
// Line range:    42 - 44
int32_t set_var(int32_t g_2_l, int16_t g_15_l, int32_t g_25_l, int16_t g_69_l, int32_t g_89_l, char g_108_l, int32_t g_115_l, int16_t g_117_l, int32_t g_147_l, int32_t g_148_l, char g_165_l, int32_t g_196_l, int16_t g_203_l, int16_t g_250_l, char g_381_l) {
    // 0x2f90
    int32_t v1; // 0x2f90
    *(int32_t *)(v1 + 0x307c) = (int32_t)g_15_l;
    *(int16_t *)(v1 + 0x3080) = (int16_t)g_25_l;
    *(int32_t *)(v1 + 0x3084) = (int32_t)g_69_l;
    *(int16_t *)(v1 + 0x3088) = (int16_t)g_89_l;
    *(int32_t *)(v1 + 0x308c) = (int32_t)g_108_l;
    *(char *)(v1 + 0x3090) = (char)g_115_l;
    *(int32_t *)(v1 + 0x3094) = (int32_t)g_117_l;
    *(int16_t *)(v1 + 0x3098) = (int16_t)g_147_l;
    *(int32_t *)(v1 + 0x309c) = g_148_l;
    *(int32_t *)(v1 + 0x30a0) = (int32_t)g_165_l;
    *(char *)(v1 + 0x30a4) = (char)g_196_l;
    *(int32_t *)(v1 + 0x30a8) = (int32_t)g_203_l;
    *(int16_t *)(v1 + 0x30ac) = g_250_l;
    *(int16_t *)(v1 + 0x30b8) = (int16_t)g_381_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3070 - 0x30f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3070
    int32_t v1; // 0x3070
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x30f0 - 0x3134
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x30f0
    int32_t v1; // 0x30f0
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 84); // 0x3103
    uint32_t v3 = *v2; // 0x3103
    char v4; // 0x30f0
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 96 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x3124
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x3134 - 0x314c
int32_t _fini(void) {
    // 0x3134
    int32_t v1; // 0x3134
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

