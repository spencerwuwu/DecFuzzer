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
int32_t set_var(int16_t g_4_l, int32_t g_9_l, int32_t g_17_l, char g_27_l, int32_t g_43_l, int32_t g_57_l, int32_t g_65_l, int32_t g_77_l, int16_t g_111_l, int32_t g_150_l, int16_t g_186_l, char g_187_l, int16_t g_192_l, int16_t g_193_l, int32_t g_206_l);
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
    return v1 + 0x3f97;
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
    char * v3 = (char *)(v1 + 0x3eff); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s716r2.c
// Address range: 0x11a0 - 0x1445
// Line range:    194 - 217
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e86)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    unsigned char v6 = *(char *)(v2 + 0x3e74); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e84); // 0x130a
    transparent_crc(v10, (char *)(v2 + 0x1e7d), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e88); // 0x132c
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e8c); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x1e88), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e90); // 0x1371
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8e), v1);
    unsigned char v14 = *(char *)(v2 + 0x3e92); // 0x1394
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e94), v1);
    int16_t v15 = *(int16_t *)(v2 + 0x3e94); // 0x13b7
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e9a), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e96); // 0x13dd
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e98); // 0x1403
    transparent_crc(v17, (char *)(v2 + 0x1ea6), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e9c), v1);
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
        *(int32_t *)(v5 + 0x3be5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s716r2.c
// Address range: 0x1510 - 0x25e1
// Line range:    52 - 187
int16_t func_1(void) {
    // 0x1510
    set_var(-2829, -2, 1, 1, -1, -0x4168ff5b, -2, 1, -8, -8, 0x45ac, 38, 0x6180, 5, -0x1f6f5739);
    return -2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x25f0 - 0x264f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x25f0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x25f0
    if (v1 != 0) {
        // 0x2624
        printf((char *)(v1 + 2652));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2650 - 0x2684
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2650
    int32_t v1; // 0x2650
    printf((char *)(v1 + 2591));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s716r2.c
// Address range: 0x2690 - 0x2766
// Line range:    42 - 44
int32_t set_var(int16_t g_4_l, int32_t g_9_l, int32_t g_17_l, char g_27_l, int32_t g_43_l, int32_t g_57_l, int32_t g_65_l, int32_t g_77_l, int16_t g_111_l, int32_t g_150_l, int16_t g_186_l, char g_187_l, int16_t g_192_l, int16_t g_193_l, int32_t g_206_l) {
    // 0x2690
    int32_t v1; // 0x2690
    *(int16_t *)(v1 + 0x297c) = (int16_t)g_9_l;
    *(int32_t *)(v1 + 0x2980) = g_17_l;
    *(int32_t *)(v1 + 0x2984) = (int32_t)g_27_l;
    *(char *)(v1 + 0x2988) = (char)g_43_l;
    *(int32_t *)(v1 + 0x298c) = g_57_l;
    *(int32_t *)(v1 + 0x2990) = g_65_l;
    *(int32_t *)(v1 + 0x2994) = g_77_l;
    *(int32_t *)(v1 + 0x2998) = (int32_t)g_111_l;
    *(int16_t *)(v1 + 0x299c) = (int16_t)g_150_l;
    *(int32_t *)(v1 + 0x29a0) = (int32_t)g_186_l;
    *(int16_t *)(v1 + 0x29a4) = (int16_t)g_187_l;
    *(char *)(v1 + 0x29a6) = (char)g_192_l;
    *(int16_t *)(v1 + 0x29a8) = g_193_l;
    *(int16_t *)(v1 + 0x29aa) = (int16_t)g_206_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2770 - 0x27f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2770
    int32_t v1; // 0x2770
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27f0 - 0x2834
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x27f0
    int32_t v1; // 0x27f0
    int32_t * v2 = (int32_t *)(v1 + 0x284f); // 0x2803
    uint32_t v3 = *v2; // 0x2803
    char v4; // 0x27f0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2857 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2834 - 0x284c
int32_t _fini(void) {
    // 0x2834
    int32_t v1; // 0x2834
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

