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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_12_l, int32_t g_15_l, int32_t g_28_l, int16_t g_29_l, char g_44_l, int16_t g_54_l, char g_55_l, char g_56_l, int32_t g_83_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1; // 0x21eb
int32_t g2;

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
    return v1 + 0x2f9b;
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
    char * v3 = (char *)(v1 + 0x2f03); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s494retdec.c
// Address range: 0x11a0 - 0x1486
// Line range:    129 - 154
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3708)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x2e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 3676), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x2e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 3680), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x2e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 3684), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x2e74); // 0x1280
    transparent_crc(v6, (char *)(v2 + 3688), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x2e78); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 3692), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e7c); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 3696), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x2e80); // 0x12e6
    transparent_crc(v9, (char *)(v2 + 3700), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2e84); // 0x1308
    transparent_crc(v10, (char *)(v2 + 3705), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e88); // 0x132a
    transparent_crc(v11, (char *)(v2 + 3710), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x2e8c); // 0x134c
    transparent_crc(v12, (char *)(v2 + 3715), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x2e90); // 0x136e
    transparent_crc(v13, (char *)(v2 + 3720), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x2e94); // 0x1390
    transparent_crc((int32_t)v14, (char *)(v2 + 3725), v1);
    unsigned char v15 = *(char *)(v2 + 0x2e96); // 0x13b3
    transparent_crc((int32_t)v15, (char *)(v2 + 3730), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x2e98); // 0x13d6
    transparent_crc((int32_t)v16, (char *)(v2 + 3735), v1);
    char v17 = *(char *)(v2 + 0x2ea8); // 0x13fc
    transparent_crc((int32_t)v17, (char *)(v2 + 3740), v1);
    unsigned char v18 = *(char *)(v2 + 0x2e9a); // 0x141f
    transparent_crc((int32_t)v18, (char *)(v2 + 3745), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x2e9c); // 0x1444
    transparent_crc(v19, (char *)(v2 + 3750), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2ea0), v1);
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
        *(int32_t *)(v5 + 0x2bad + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s494retdec.c
// Address range: 0x1550 - 0x1be4
// Line range:    54 - 122
int16_t func_1(void) {
    // 0x1550
    set_var(-0x1f57154, -8, -2, 0, 0x7dd68876, -1, 1, -0x9470c2c, 10, 0, 7, 0x6e6c, 12, 1, 0, 94, 3);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1bf0 - 0x1c4f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1bf0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1bf0
    if (v1 != 0) {
        // 0x1c24
        printf((char *)(v1 + 1115));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1c50 - 0x1c84
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1c50
    int32_t v1; // 0x1c50
    printf((char *)(v1 + 1054));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s494retdec.c
// Address range: 0x1c90 - 0x1d75
// Line range:    44 - 46
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_12_l, int32_t g_15_l, int32_t g_28_l, int16_t g_29_l, char g_44_l, int16_t g_54_l, char g_55_l, char g_56_l, int32_t g_83_l) {
    // 0x1c90
    int32_t v1; // 0x1c90
    *(int32_t *)(v1 + 0x237c) = g_3_l;
    *(int32_t *)(v1 + 0x2380) = g_4_l;
    *(int32_t *)(v1 + 0x2384) = g_5_l;
    *(int32_t *)(v1 + 0x2388) = g_8_l;
    *(int32_t *)(v1 + 0x238c) = g_9_l;
    *(int32_t *)(v1 + 0x2390) = g_10_l;
    *(int32_t *)(v1 + 0x2394) = g_11_l;
    *(int32_t *)(v1 + 0x2398) = g_12_l;
    *(int32_t *)(v1 + 0x239c) = g_15_l;
    *(int32_t *)(v1 + 0x23a0) = g_28_l;
    *(int32_t *)(v1 + 0x23a4) = (int32_t)g_29_l;
    *(int16_t *)(v1 + 0x23a8) = (int16_t)g_44_l;
    *(char *)(v1 + 0x23aa) = (char)g_54_l;
    *(int16_t *)(v1 + 0x23ac) = (int16_t)g_55_l;
    *(char *)(v1 + 0x23bc) = g_56_l;
    *(char *)(v1 + 0x23ae) = (char)g_83_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1d80 - 0x1e00
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1d80
    int32_t v1; // 0x1d80
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e00 - 0x1e44
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1e00
    int32_t v1; // 0x1e00
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 88); // 0x1e13
    uint32_t v3 = *v2; // 0x1e13
    char v4; // 0x1e00
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 100 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x1e34
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x1e44 - 0x1e5c
int32_t _fini(void) {
    // 0x1e44
    int32_t v1; // 0x1e44
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

