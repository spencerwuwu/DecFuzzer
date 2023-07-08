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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int16_t g_11_l, int32_t g_27_l, int16_t g_29_l, int16_t g_30_l, int32_t g_43_l, int16_t g_44_l, char g_55_l, int32_t g_94_l, char g_101_l, int16_t g_102_l, char g_112_l, int16_t g_186_l, char g_189_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 180; // 0x30a8
int32_t g2 = 28; // 0x3108
int16_t g3 = 0; // 0x525c
int32_t g4;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g4);
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
    __x86_get_pc_thunk_dx((int32_t)&g4);
    int32_t v1; // 0x10b0
    return v1 + 0x3f8b;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g4);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x3ef3); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s773r2.c
// Address range: 0x11a0 - 0x1449
// Line range:    168 - 191
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e90)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e69), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x3e78); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6e), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x3e7a); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e7c); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x1e78), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e98); // 0x130b
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7d), v1);
    unsigned char v11 = *(char *)(v2 + 0x3e80); // 0x1331
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e84); // 0x1356
    transparent_crc(v12, (char *)(v2 + 0x1e87), v1);
    char v13 = *(char *)(v2 + 0x3e9a); // 0x1378
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8c), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x3e88); // 0x139b
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e92), v1);
    unsigned char v15 = *(char *)(v2 + 0x3e8a); // 0x13be
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e98), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x3e8c); // 0x13e1
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9e), v1);
    unsigned char v17 = *(char *)(v2 + 0x3e8e); // 0x1404
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea4), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e90), v1);
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
        *(int32_t *)(v5 + 0x3bdd + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s773r2.c
// Address range: 0x1510 - 0x1edb
// Line range:    52 - 160
int16_t func_1(void) {
    // 0x1dc9
    set_var(-10, 0, 0x39e3, 0x1791e6e4, 0x79c9, -0x3d57, -0x52b5d4ae, 0, 8, -0x153c4d9d, 0, -0x7a41, -20, (int16_t)&g3, 96);
    return 0x4a54;
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
        printf((char *)(v1 + (int32_t)&g2 - 0x1f9e));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1f40 - 0x1f74
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1f40
    int32_t v1; // 0x1f40
    printf((char *)(v1 + (int32_t)&g1 - 0x1f7b));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s773r2.c
// Address range: 0x1f80 - 0x2059
// Line range:    42 - 44
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int16_t g_11_l, int32_t g_27_l, int16_t g_29_l, int16_t g_30_l, int32_t g_43_l, int16_t g_44_l, char g_55_l, int32_t g_94_l, char g_101_l, int16_t g_102_l, char g_112_l, int16_t g_186_l, char g_189_l) {
    // 0x1f80
    int32_t v1; // 0x1f80
    *(int32_t *)(v1 + (int32_t)"ing %s : %X\n" + 32) = g_3_l;
    *(int32_t *)(v1 + (int32_t)"ing %s : %X\n" + 36) = (int32_t)g_11_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 40) = (int16_t)g_27_l;
    *(int32_t *)(v1 + (int32_t)"ing %s : %X\n" + 44) = (int32_t)g_29_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 48) = g_30_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 50) = (int16_t)g_43_l;
    *(int32_t *)(v1 + (int32_t)"ing %s : %X\n" + 52) = (int32_t)g_44_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 80) = (int16_t)g_55_l;
    *(char *)(v1 + (int32_t)"ing %s : %X\n" + 56) = (char)g_94_l;
    *(int32_t *)(v1 + (int32_t)"ing %s : %X\n" + 60) = (int32_t)g_101_l;
    *(char *)(v1 + (int32_t)"ing %s : %X\n" + 82) = (char)g_102_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 64) = (int16_t)g_112_l;
    *(char *)(v1 + (int32_t)"ing %s : %X\n" + 66) = (char)g_186_l;
    *(int16_t *)(v1 + (int32_t)"ing %s : %X\n" + 68) = (int16_t)g_189_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2060 - 0x20e0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2060
    int32_t v1; // 0x2060
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20e0 - 0x2124
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x20e0
    int32_t v1; // 0x20e0
    int32_t * v2 = (int32_t *)(v1 + 0x2f53); // 0x20f3
    uint32_t v3 = *v2; // 0x20f3
    char v4; // 0x20e0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f5f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2124 - 0x213c
int32_t _fini(void) {
    // 0x2124
    int32_t v1; // 0x2124
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

