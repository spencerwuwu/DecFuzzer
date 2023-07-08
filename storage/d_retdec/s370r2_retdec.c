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
int32_t set_var(char g_2_l, char g_13_l, int16_t g_52_l, int16_t g_53_l, int32_t g_54_l, char g_57_l, int32_t g_59_l, char g_69_l, int32_t g_91_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 115; // 0x13bc
int32_t g2 = 0xa8ff; // 0x216b
int32_t g3;

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
    return v1 + 0x2f77;
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
    char * v3 = (char *)(v1 + 0x2edf); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370r2.c
// Address range: 0x11a0 - 0x1372
// Line range:    144 - 161
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3718)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    char v3 = *(char *)(v2 + 0x2e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 3676), v1);
    char v4 = *(char *)(v2 + 0x2e69); // 0x123d
    transparent_crc((int32_t)v4, (char *)(v2 + 3680), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x2e6a); // 0x1260
    transparent_crc((int32_t)v5, (char *)(v2 + 3685), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x2e6c); // 0x1283
    transparent_crc((int32_t)v6, (char *)(v2 + 3690), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x2e84); // 0x12a6
    transparent_crc(v7, (char *)(v2 + 3695), v1);
    unsigned char v8 = *(char *)(v2 + 0x2e6e); // 0x12c8
    transparent_crc((int32_t)v8, (char *)(v2 + 3700), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x2e70); // 0x12eb
    transparent_crc(v9, (char *)(v2 + 3705), v1);
    char v10 = *(char *)(v2 + 0x2e74); // 0x130d
    transparent_crc((int32_t)v10, (char *)(v2 + 3710), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e78); // 0x1330
    transparent_crc(v11, (char *)(v2 + 3715), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e7c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1380 - 0x1385
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1380
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1390 - 0x1438
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x140a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x13d1
        while (v1 != 0) {
            // 0x13d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1415
        int32_t v5; // 0x1390
        *(int32_t *)(v5 + 0x2c99 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370r2.c
// Address range: 0x1440 - 0x1cc1
// Line range:    46 - 136
char func_1(void) {
    // 0x1b2e
    set_var(-6, 25, 0, (int16_t)&g1, 0, 7, -1, 8, 8);
    return 106;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1cd0 - 0x1d2f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1cd0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1cd0
    if (v1 != 0) {
        // 0x1d04
        printf((char *)(v1 + 856));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1d30 - 0x1d64
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1d30
    int32_t v1; // 0x1d30
    printf((char *)(v1 + 795));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370r2.c
// Address range: 0x1d70 - 0x1df5
// Line range:    36 - 38
int32_t set_var(char g_2_l, char g_13_l, int16_t g_52_l, int16_t g_53_l, int32_t g_54_l, char g_57_l, int32_t g_59_l, char g_69_l, int32_t g_91_l) {
    // 0x1d70
    int32_t v1; // 0x1d70
    *(char *)(v1 + 0x229c) = g_13_l;
    *(char *)(v1 + 0x229d) = (char)g_52_l;
    *(int16_t *)(v1 + 0x229e) = g_53_l;
    *(int16_t *)(v1 + 0x22a0) = (int16_t)g_54_l;
    *(int32_t *)(v1 + 0x22b8) = (int32_t)g_57_l;
    *(char *)(v1 + 0x22a2) = (char)g_59_l;
    *(int32_t *)(v1 + 0x22a4) = (int32_t)g_69_l;
    *(char *)(v1 + 0x22a8) = (char)g_91_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e00 - 0x1e80
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1e00
    int32_t v1; // 0x1e00
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e80 - 0x1ec4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1e80
    int32_t v1; // 0x1e80
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g2 + 52); // 0x1e93
    uint32_t v3 = *v2; // 0x1e93
    char v4; // 0x1e80
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g2 + 64 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x1eb4
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x1ec4 - 0x1edc
int32_t _fini(void) {
    // 0x1ec4
    int32_t v1; // 0x1ec4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

