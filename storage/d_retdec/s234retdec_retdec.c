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
int32_t set_var(int32_t g_2_l, int16_t g_20_l, char g_34_l, char g_36_l, int32_t g_37_l, int32_t g_73_l, int32_t g_89_l, int16_t g_92_l, int16_t g_109_l, int32_t g_119_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 248; // 0x30a8
int32_t g2 = 32; // 0x3108
int32_t g3;

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
    return v1 + 0x3f7b;
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
    char * v3 = (char *)(v1 + 0x3ee3); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s234retdec.c
// Address range: 0x11a0 - 0x13b5
// Line range:    132 - 151
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
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5e), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e88); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e62), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e8a); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e67), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e6c); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6c), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e8c); // 0x12a5
    transparent_crc(v7, (char *)(v2 + 0x1e71), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x1ec8); // 0x12c7
    transparent_crc(v8, (char *)(v2 + 0x1e76), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e70); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x1e7b), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e74); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x1e80), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e78); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e85), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e7a); // 0x1350
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8a), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e7c); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x1e90), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e80), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
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
        *(int32_t *)(v5 + 0x3c61 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s234retdec.c
// Address range: 0x1480 - 0x1ed7
// Line range:    48 - 125
char func_1(void) {
    // 0x1480
    set_var(0x29de13c7, 0, 0, -3, 0, 1, 1, 1, -0x674c, 0x29de13c7);
    return -57;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1ee0 - 0x1f3f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1ee0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1ee0
    if (v1 != 0) {
        // 0x1f14
        printf((char *)(v1 + (int32_t)&g2 - 0x1fb2));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1f40 - 0x1f74
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1f40
    int32_t v1; // 0x1f40
    printf((char *)(v1 + (int32_t)&g1 - 0x1f8f));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s234retdec.c
// Address range: 0x1f80 - 0x2014
// Line range:    38 - 40
int32_t set_var(int32_t g_2_l, int16_t g_20_l, char g_34_l, char g_36_l, int32_t g_37_l, int32_t g_73_l, int32_t g_89_l, int16_t g_92_l, int16_t g_109_l, int32_t g_119_l) {
    // 0x1f80
    int32_t v1; // 0x1f80
    *(int32_t *)(v1 + (int32_t)"m = %X\n" + 32) = (int32_t)g_20_l;
    *(int16_t *)(v1 + (int32_t)"m = %X\n" + 64) = (int16_t)g_34_l;
    *(char *)(v1 + (int32_t)"m = %X\n" + 66) = g_36_l;
    *(char *)(v1 + (int32_t)"m = %X\n" + 36) = (char)g_37_l;
    *(int32_t *)(v1 + (int32_t)"m = %X\n" + 68) = g_73_l;
    *(int32_t *)(v1 + (int32_t)"m = %X\n" + 40) = g_89_l;
    *(int32_t *)(v1 + (int32_t)"m = %X\n" + 44) = (int32_t)g_92_l;
    *(int16_t *)(v1 + (int32_t)"m = %X\n" + 48) = g_109_l;
    *(int16_t *)(v1 + (int32_t)"m = %X\n" + 50) = (int16_t)g_119_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2020 - 0x20a0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2020
    int32_t v1; // 0x2020
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20a0 - 0x20e4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x20a0
    int32_t v1; // 0x20a0
    int32_t * v2 = (int32_t *)(v1 + 0x2f83); // 0x20b3
    uint32_t v3 = *v2; // 0x20b3
    char v4; // 0x20a0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f93 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x20e4 - 0x20fc
int32_t _fini(void) {
    // 0x20e4
    int32_t v1; // 0x20e4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

