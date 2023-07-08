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
int32_t set_var(int32_t g_8_l, char g_10_l, int16_t g_12_l, int16_t g_16_l, int32_t g_19_l, int32_t g_44_l, int32_t g_45_l, char g_48_l, int32_t g_60_l, char g_62_l, int32_t g_67_l, int16_t g_73_l);
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
    return v1 + 0x2f8b;
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
    char * v3 = (char *)(v1 + 0x2ef3); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s654r2.c
// Address range: 0x11a0 - 0x13db
// Line range:    109 - 129
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
    int32_t v3 = *(int32_t *)(v2 + 0x2e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 3678), v1);
    unsigned char v4 = *(char *)(v2 + 0x2e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 3682), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x2e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 3687), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x2e70); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 3692), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x2e74); // 0x12a8
    transparent_crc(v7, (char *)(v2 + 3697), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e78); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 3702), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x2e98); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 3707), v1);
    char v10 = *(char *)(v2 + 0x2e7c); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 3712), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e80); // 0x1331
    transparent_crc(v11, (char *)(v2 + 3717), v1);
    char v12 = *(char *)(v2 + 0x2e84); // 0x1353
    transparent_crc((int32_t)v12, (char *)(v2 + 3722), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x2e88); // 0x1376
    transparent_crc(v13, (char *)(v2 + 3727), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x2e8c); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 3732), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e90), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13e0 - 0x13e5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13f0 - 0x1498
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x146a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1431
        while (v1 != 0) {
            // 0x1437
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1475
        int32_t v5; // 0x13f0
        *(int32_t *)(v5 + 0x2c4d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s654r2.c
// Address range: 0x14a0 - 0x1890
// Line range:    49 - 101
int16_t func_1(void) {
    // 0x14a0
    set_var(0x6e60b0ce, 24, -0x5c85, 6, 6, -0x5c85, -24, -42, 0x22a57d88, 61, -0x22a57d90, 1);
    return 0x5d3c;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1890 - 0x18ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1890
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1890
    if (v1 != 0) {
        // 0x18c4
        printf((char *)(v1 + 1961));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x18f0 - 0x1924
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x18f0
    int32_t v1; // 0x18f0
    printf((char *)(v1 + 1900));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s654r2.c
// Address range: 0x1930 - 0x19dc
// Line range:    39 - 41
int32_t set_var(int32_t g_8_l, char g_10_l, int16_t g_12_l, int16_t g_16_l, int32_t g_19_l, int32_t g_44_l, int32_t g_45_l, char g_48_l, int32_t g_60_l, char g_62_l, int32_t g_67_l, int16_t g_73_l) {
    // 0x1930
    int32_t v1; // 0x1930
    *(int32_t *)(v1 + 0x26dc) = (int32_t)g_10_l;
    *(char *)(v1 + 0x26e0) = (char)g_12_l;
    *(int16_t *)(v1 + 0x26e2) = g_16_l;
    *(int16_t *)(v1 + 0x26e4) = (int16_t)g_19_l;
    *(int32_t *)(v1 + 0x26e8) = g_44_l;
    *(int32_t *)(v1 + 0x26ec) = g_45_l;
    *(int32_t *)(v1 + 0x270c) = (int32_t)g_48_l;
    *(char *)(v1 + 0x26f0) = (char)g_60_l;
    *(int32_t *)(v1 + 0x26f4) = (int32_t)g_62_l;
    *(char *)(v1 + 0x26f8) = (char)g_67_l;
    *(int32_t *)(v1 + 0x26fc) = (int32_t)g_73_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x19e0 - 0x1a60
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x19e0
    int32_t v1; // 0x19e0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1a60 - 0x1aa4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1a60
    int32_t v1; // 0x1a60
    int32_t * v2 = (int32_t *)(v1 + 0x25d3); // 0x1a73
    uint32_t v3 = *v2; // 0x1a73
    char v4; // 0x1a60
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x25df + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x1aa4 - 0x1abc
int32_t _fini(void) {
    // 0x1aa4
    int32_t v1; // 0x1aa4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

