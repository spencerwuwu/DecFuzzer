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
int32_t set_var(int16_t g_4_l, int32_t g_22_l, int16_t g_23_l, char g_26_l, int16_t g_37_l, char g_48_l, int16_t g_54_l, int16_t g_64_l, int32_t g_67_l, int16_t g_91_l, int32_t g_134_l, int16_t g_135_l, char g_156_l, int32_t g_174_l, int32_t g_176_l, int32_t g_195_l, int32_t g_218_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x7699f7b3; // 0x275b
int32_t g2;

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
    return v1 + 0x3f8f;
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
    char * v3 = (char *)(v1 + 0x3ef7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s770retdec.c
// Address range: 0x11a0 - 0x1486
// Line range:    208 - 233
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e8b)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e65), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e72); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x3e74); // 0x12a5
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6f), v1);
    char v8 = *(char *)(v2 + 0x3e9c); // 0x12c8
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e74), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x3e9e); // 0x12eb
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3e76); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e78); // 0x1331
    transparent_crc(v11, (char *)(v2 + 0x1e83), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e7c); // 0x1353
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3ea0); // 0x1376
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x3e7e); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e93), v1);
    char v15 = *(char *)(v2 + 0x3e80); // 0x13bb
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e84); // 0x13de
    transparent_crc(v16, (char *)(v2 + 0x1e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e88); // 0x1400
    transparent_crc(v17, (char *)(v2 + 0x1ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e8c); // 0x1422
    transparent_crc(v18, (char *)(v2 + 0x1eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3e90); // 0x1444
    transparent_crc(v19, (char *)(v2 + 0x1eb1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e94), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1490 - 0x1495
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1490
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14a0 - 0x1548
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x151a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14e1
        while (v1 != 0) {
            // 0x14e7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1525
        int32_t v5; // 0x14a0
        *(int32_t *)(v5 + 0x3ba5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s770retdec.c
// Address range: 0x1550 - 0x2667
// Line range:    54 - 201
int32_t func_1(void) {
    // 0x1550
    set_var(7, -8, -0x482a, 33, -0x6294, 0, 0, -6, -0x5669962b, -0x36fc, 0, 0x1e25, 5, -0x66797b06, 1, -5, 0x352912ab);
    return 0xb7d6;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2670 - 0x26cf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2670
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2670
    if (v1 != 0) {
        // 0x26a4
        printf((char *)(v1 + 2535));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x26d0 - 0x2704
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x26d0
    int32_t v1; // 0x26d0
    printf((char *)(v1 + 2474));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s770retdec.c
// Address range: 0x2710 - 0x2804
// Line range:    44 - 46
int32_t set_var(int16_t g_4_l, int32_t g_22_l, int16_t g_23_l, char g_26_l, int16_t g_37_l, char g_48_l, int16_t g_54_l, int16_t g_64_l, int32_t g_67_l, int16_t g_91_l, int32_t g_134_l, int16_t g_135_l, char g_156_l, int32_t g_174_l, int32_t g_176_l, int32_t g_195_l, int32_t g_218_l) {
    // 0x2710
    int32_t v1; // 0x2710
    *(int16_t *)(v1 + 0x28fc) = (int16_t)g_22_l;
    *(int32_t *)(v1 + 0x2900) = (int32_t)g_23_l;
    *(int16_t *)(v1 + 0x2904) = (int16_t)g_26_l;
    *(char *)(v1 + 0x2906) = (char)g_37_l;
    *(int16_t *)(v1 + 0x2908) = (int16_t)g_48_l;
    *(char *)(v1 + 0x2930) = (char)g_54_l;
    *(int16_t *)(v1 + 0x2932) = g_64_l;
    *(int16_t *)(v1 + 0x290a) = (int16_t)g_67_l;
    *(int32_t *)(v1 + 0x290c) = (int32_t)g_91_l;
    *(int16_t *)(v1 + 0x2910) = (int16_t)g_134_l;
    *(int32_t *)(v1 + 0x2934) = (int32_t)g_135_l;
    *(int16_t *)(v1 + 0x2912) = (int16_t)g_156_l;
    *(char *)(v1 + 0x2914) = (char)g_174_l;
    *(int32_t *)(v1 + 0x2918) = g_176_l;
    *(int32_t *)(v1 + 0x291c) = g_195_l;
    *(int32_t *)(v1 + 0x2920) = g_218_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2810 - 0x2890
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2810
    int32_t v1; // 0x2810
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2890 - 0x28d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2890
    int32_t v1; // 0x2890
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 76); // 0x28a3
    uint32_t v3 = *v2; // 0x28a3
    char v4; // 0x2890
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 92 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x28c4
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x28d4 - 0x28ec
int32_t _fini(void) {
    // 0x28d4
    int32_t v1; // 0x28d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

