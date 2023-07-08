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
int32_t set_var(int16_t g_15_l, char g_19_l, int16_t g_34_l, char g_35_l, char g_38_l, int32_t g_39_l, int16_t g_62_l, char g_129_l, int16_t g_142_l, char g_150_l);
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
    return *(int32_t *)(v1 + 0x2fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x2f68); // 0x1090
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
    return v1 + 0x2f73;
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
    char * v3 = (char *)(v1 + 0x2edb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s469r2.c
// Address range: 0x11a0 - 0x13bf
// Line range:    174 - 193
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3676)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int16_t v3 = *(int16_t *)(v2 + 0x2e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 3678), v1);
    unsigned char v4 = *(char *)(v2 + 0x2e6a); // 0x1240
    transparent_crc((int32_t)v4, (char *)(v2 + 3683), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x2e6c); // 0x1263
    transparent_crc((int32_t)v5, (char *)(v2 + 3688), v1);
    char v6 = *(char *)(v2 + 0x2e6e); // 0x1286
    transparent_crc((int32_t)v6, (char *)(v2 + 3693), v1);
    transparent_crc(-0x7c04e746, (char *)(v2 + 3698), v1);
    unsigned char v7 = *(char *)(v2 + 0x2e6f); // 0x12c9
    transparent_crc((int32_t)v7, (char *)(v2 + 3703), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e70); // 0x12ec
    transparent_crc(v8, (char *)(v2 + 3708), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x2e74); // 0x130e
    transparent_crc((int32_t)v9, (char *)(v2 + 3713), v1);
    unsigned char v10 = *(char *)(v2 + 0x2e76); // 0x1334
    transparent_crc((int32_t)v10, (char *)(v2 + 3718), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x2e80); // 0x1357
    transparent_crc((int32_t)v11, (char *)(v2 + 3724), v1);
    char v12 = *(char *)(v2 + 0x2e77); // 0x137a
    transparent_crc((int32_t)v12, (char *)(v2 + 3730), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e78), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x13c0 - 0x13c5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13d0 - 0x1478
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x144a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1411
        while (v1 != 0) {
            // 0x1417
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1455
        int32_t v5; // 0x13d0
        *(int32_t *)(v5 + 0x2c55 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s469r2.c
// Address range: 0x1480 - 0x1ae5
// Line range:    48 - 167
int32_t func_1(void) {
    // 0x1480
    set_var(2, -5, -0x5f88, -58, 1, -1, 2, -126, 0, -1);
    return -113;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1af0 - 0x1b4f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1af0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1af0
    if (v1 != 0) {
        // 0x1b24
        printf((char *)(v1 + 1352));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x1b50 - 0x1b84
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1b50
    int32_t v1; // 0x1b50
    printf((char *)(v1 + 1291));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s469r2.c
// Address range: 0x1b90 - 0x1c27
// Line range:    38 - 40
int32_t set_var(int16_t g_15_l, char g_19_l, int16_t g_34_l, char g_35_l, char g_38_l, int32_t g_39_l, int16_t g_62_l, char g_129_l, int16_t g_142_l, char g_150_l) {
    // 0x1b90
    int32_t v1; // 0x1b90
    *(int16_t *)(v1 + 0x247c) = (int16_t)g_19_l;
    *(char *)(v1 + 0x247e) = (char)g_34_l;
    *(int16_t *)(v1 + 0x2480) = (int16_t)g_35_l;
    *(char *)(v1 + 0x2482) = g_38_l;
    *(char *)(v1 + 0x2483) = (char)g_39_l;
    *(int32_t *)(v1 + 0x2484) = (int32_t)g_62_l;
    *(int16_t *)(v1 + 0x2488) = (int16_t)g_129_l;
    *(char *)(v1 + 0x248a) = (char)g_142_l;
    *(int16_t *)(v1 + 0x2494) = (int16_t)g_150_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c30 - 0x1cb0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1c30
    int32_t v1; // 0x1c30
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1cb0 - 0x1cf4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1cb0
    int32_t v1; // 0x1cb0
    int32_t * v2 = (int32_t *)(v1 + 0x236b); // 0x1cc3
    uint32_t v3 = *v2; // 0x1cc3
    char v4; // 0x1cb0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2377 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x1cf4 - 0x1d0c
int32_t _fini(void) {
    // 0x1cf4
    int32_t v1; // 0x1cf4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

