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
int32_t set_var(int32_t g_6_l, int32_t g_11_l, char g_12_l, int32_t g_23_l, int32_t g_34_l, int32_t g_36_l, int16_t g_38_l, int32_t g_39_l, int16_t g_62_l, char g_63_l, int32_t g_84_l, int16_t g_85_l, int32_t g_86_l, int32_t g_89_l, char g_90_l, int32_t g_100_l, int16_t g_101_l, int32_t g_144_l, int16_t g_188_l, int32_t g_189_l, int32_t g_190_l);
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
    return v1 + 0x3fb3;
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
    char * v3 = (char *)(v1 + 0x3f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428retdec.c
// Address range: 0x11a0 - 0x150c
// Line range:    211 - 240
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eb0)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x3e80); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x130a
    transparent_crc(v10, (char *)(v2 + 0x1e7e), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e88); // 0x132c
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e8a); // 0x134f
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e8c); // 0x1372
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e90); // 0x1394
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e94); // 0x13b7
    transparent_crc(v15, (char *)(v2 + 0x1e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e98); // 0x13d9
    transparent_crc(v16, (char *)(v2 + 0x1e9c), v1);
    unsigned char v17 = *(char *)(v2 + 0x3e9c); // 0x13fb
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea1), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3ea0); // 0x141e
    transparent_crc(v18, (char *)(v2 + 0x1ea6), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x3ea4); // 0x1440
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eac), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3ea8); // 0x1463
    transparent_crc(v20, (char *)(v2 + 0x1eb2), v1);
    int16_t v21 = *(int16_t *)(v2 + 0x3eac); // 0x1485
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1eb8), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3eb0); // 0x14a8
    transparent_crc(v22, (char *)(v2 + 0x1ebe), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3eb4); // 0x14ca
    transparent_crc(v23, (char *)(v2 + 0x1ec4), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1510 - 0x1515
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1510
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1520 - 0x15c8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x159a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1561
        while (v1 != 0) {
            // 0x1567
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15a5
        int32_t v5; // 0x1520
        *(int32_t *)(v5 + 0x3b41 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428retdec.c
// Address range: 0x15d0 - 0x24d4
// Line range:    58 - 204
char func_1(void) {
    // 0x15d0
    set_var(0, -0x49b02582, -62, -5, -1, -1, -1, -1, 0, -2, -8, 1325, -0x39a0ce1, 0x806af73, -1, -0x28b13466, 1, -0x271e61e, 0x3aa0, -4, 6);
    return 63;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x24e0 - 0x253f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x24e0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x24e0
    if (v1 != 0) {
        // 0x2514
        printf((char *)(v1 + 2954));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2540 - 0x2574
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2540
    int32_t v1; // 0x2540
    printf((char *)(v1 + 2893));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s428retdec.c
// Address range: 0x2580 - 0x269e
// Line range:    48 - 50
int32_t set_var(int32_t g_6_l, int32_t g_11_l, char g_12_l, int32_t g_23_l, int32_t g_34_l, int32_t g_36_l, int16_t g_38_l, int32_t g_39_l, int16_t g_62_l, char g_63_l, int32_t g_84_l, int16_t g_85_l, int32_t g_86_l, int32_t g_89_l, char g_90_l, int32_t g_100_l, int16_t g_101_l, int32_t g_144_l, int16_t g_188_l, int32_t g_189_l, int32_t g_190_l) {
    // 0x2580
    int32_t v1; // 0x2580
    *(int32_t *)(v1 + 0x2a8c) = g_11_l;
    *(int32_t *)(v1 + 0x2a90) = (int32_t)g_12_l;
    *(char *)(v1 + 0x2a94) = (char)g_23_l;
    *(int32_t *)(v1 + 0x2a98) = g_34_l;
    *(int32_t *)(v1 + 0x2a9c) = g_36_l;
    *(int32_t *)(v1 + 0x2aa0) = (int32_t)g_38_l;
    *(int16_t *)(v1 + 0x2aa4) = (int16_t)g_39_l;
    *(int32_t *)(v1 + 0x2aa8) = (int32_t)g_62_l;
    *(int16_t *)(v1 + 0x2aac) = (int16_t)g_63_l;
    *(char *)(v1 + 0x2aae) = (char)g_84_l;
    *(int32_t *)(v1 + 0x2ab0) = (int32_t)g_85_l;
    *(int16_t *)(v1 + 0x2ab4) = (int16_t)g_86_l;
    *(int32_t *)(v1 + 0x2ab8) = g_89_l;
    *(int32_t *)(v1 + 0x2abc) = (int32_t)g_90_l;
    *(char *)(v1 + 0x2ac0) = (char)g_100_l;
    *(int32_t *)(v1 + 0x2ac4) = (int32_t)g_101_l;
    *(int16_t *)(v1 + 0x2ac8) = (int16_t)g_144_l;
    *(int32_t *)(v1 + 0x2acc) = (int32_t)g_188_l;
    *(int16_t *)(v1 + 0x2ad0) = (int16_t)g_189_l;
    *(int32_t *)(v1 + 0x2ad4) = g_190_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x26a0 - 0x2720
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x26a0
    int32_t v1; // 0x26a0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2720 - 0x2764
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2720
    int32_t v1; // 0x2720
    int32_t * v2 = (int32_t *)(v1 + 0x293b); // 0x2733
    uint32_t v3 = *v2; // 0x2733
    char v4; // 0x2720
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2943 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2764 - 0x277c
int32_t _fini(void) {
    // 0x2764
    int32_t v1; // 0x2764
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

