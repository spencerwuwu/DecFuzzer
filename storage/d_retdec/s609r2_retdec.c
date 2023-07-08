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
int32_t set_var(int32_t g_5_l, int32_t g_6_l, int32_t g_13_l, int32_t g_14_l, int32_t g_15_l, char g_44_l, char g_68_l, char g_70_l, int32_t g_83_l, char g_92_l, int16_t g_108_l, int16_t g_109_l, int32_t g_110_l, int32_t g_111_l, int32_t g_113_l, int32_t g_139_l, int32_t g_154_l, char g_155_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x28bc; // 0x273b
int32_t g2 = 0x273b; // 0x28bc
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
    return v1 + 0x3f9b;
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
    char * v3 = (char *)(v1 + 0x3f03); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s609r2.c
// Address range: 0x11a0 - 0x14c5
// Line range:    191 - 218
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea7)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3ea8); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    unsigned char v8 = *(char *)(v2 + 0x3e78); // 0x12c4
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e73), v1);
    unsigned char v9 = *(char *)(v2 + 0x3e79); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e78), v1);
    unsigned char v10 = *(char *)(v2 + 0x3e7a); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e7c); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x1e82), v1);
    unsigned char v12 = *(char *)(v2 + 0x3e80); // 0x134f
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e87), v1);
    transparent_crc(-5, (char *)(v2 + 0x1e8c), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e82); // 0x1392
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e91), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e84); // 0x13b5
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e97), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e88); // 0x13d8
    transparent_crc(v15, (char *)(v2 + 0x1e9d), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e8c); // 0x13fa
    transparent_crc(v16, (char *)(v2 + 0x1ea3), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e90); // 0x141c
    transparent_crc(v17, (char *)(v2 + 0x1ea9), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e94); // 0x143e
    transparent_crc(v18, (char *)(v2 + 0x1eaf), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3e98); // 0x1460
    transparent_crc(v19, (char *)(v2 + 0x1eb5), v1);
    char v20 = *(char *)(v2 + 0x3e9c); // 0x1482
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1ebb), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea0), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x14d0 - 0x14d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14e0 - 0x1588
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x155a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1521
        while (v1 != 0) {
            // 0x1527
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1565
        int32_t v5; // 0x14e0
        *(int32_t *)(v5 + 0x3b6d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s609r2.c
// Address range: 0x1590 - 0x2690
// Line range:    56 - 184
int32_t func_1(void) {
    // 0x1590
    set_var(-6, 0, 0, -3, 5, -24, -9, 100, -14, -1, 0x255f, -0x3cb2, -0x473d85b6, 0x7adb25b5, -0x28b53038, -0x12a7324c, 1, 0);
    return 132;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2690 - 0x26ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2690
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2690
    if (v1 != 0) {
        // 0x26c4
        printf((char *)(v1 + 2513));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x26f0 - 0x2724
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x26f0
    int32_t v1; // 0x26f0
    printf((char *)(v1 + 2452));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s609r2.c
// Address range: 0x2730 - 0x2821
// Line range:    46 - 48
int32_t set_var(int32_t g_5_l, int32_t g_6_l, int32_t g_13_l, int32_t g_14_l, int32_t g_15_l, char g_44_l, char g_68_l, char g_70_l, int32_t g_83_l, char g_92_l, int16_t g_108_l, int16_t g_109_l, int32_t g_110_l, int32_t g_111_l, int32_t g_113_l, int32_t g_139_l, int32_t g_154_l, char g_155_l) {
    // 0x2730
    int32_t v1; // 0x2730
    *(int32_t *)(v1 + (int32_t)&g2 + 32) = g_6_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 36) = g_13_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 96) = g_14_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 40) = g_15_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 44) = (int32_t)g_44_l;
    *(char *)(v1 + (int32_t)&g2 + 48) = g_68_l;
    *(char *)(v1 + (int32_t)&g2 + 49) = g_70_l;
    *(char *)(v1 + (int32_t)&g2 + 50) = (char)g_83_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 52) = (int32_t)g_92_l;
    *(char *)(v1 + (int32_t)&g2 + 56) = (char)g_108_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 58) = g_109_l;
    *(int16_t *)(v1 + (int32_t)&g2 + 60) = (int16_t)g_110_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 64) = g_111_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 68) = g_113_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 72) = g_139_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 76) = g_154_l;
    *(int32_t *)(v1 + (int32_t)&g2 + 80) = (int32_t)g_155_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2830 - 0x28b0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2830
    int32_t v1; // 0x2830
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28b0 - 0x28f4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x28b0
    int32_t v1; // 0x28b0
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 88); // 0x28c3
    uint32_t v3 = *v2; // 0x28c3
    char v4; // 0x28b0
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 100 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x28e4
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x28f4 - 0x290c
int32_t _fini(void) {
    // 0x28f4
    int32_t v1; // 0x28f4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

