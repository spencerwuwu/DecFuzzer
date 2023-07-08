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
int32_t set_var(int32_t g_2_l, int32_t g_17_l, int32_t g_22_l, int32_t g_42_l, int16_t g_52_l, int32_t g_54_l, char g_55_l, char g_64_l, int16_t g_70_l, int32_t g_75_l, int16_t g_96_l, char g_97_l, int32_t g_104_l, int32_t g_109_l, int32_t g_133_l, int32_t g_168_l, int32_t g_185_l, int32_t g_204_l, int32_t g_228_l, int32_t g_398_l, char g_399_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = -0x7cfc; // 0x41ed
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x4fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x4f68); // 0x1090
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
    return v1 + 0x4fa3;
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
    char * v3 = (char *)(v1 + 0x4f0b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s252r2.c
// Address range: 0x11a0 - 0x152d
// Line range:    283 - 313
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e5c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5e), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4eb0); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e62), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x2e67), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x2e6c), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x4e74); // 0x12a2
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e71), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x2e76), v1);
    char v9 = *(char *)(v2 + 0x4e7c); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e7b), v1);
    char v10 = *(char *)(v2 + 0x4e7d); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e80), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x4e7e); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e85), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e80); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x2e8a), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x4e84); // 0x1372
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8f), v1);
    unsigned char v14 = *(char *)(v2 + 0x4e86); // 0x1395
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e94), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e88); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x2e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e8c); // 0x13da
    transparent_crc(v16, (char *)(v2 + 0x2e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4eb4); // 0x13fc
    transparent_crc(v17, (char *)(v2 + 0x2ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4e90); // 0x141e
    transparent_crc(v18, (char *)(v2 + 0x2eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e94); // 0x1440
    transparent_crc(v19, (char *)(v2 + 0x2eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e98); // 0x1462
    transparent_crc(v20, (char *)(v2 + 0x2eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e9c); // 0x1484
    transparent_crc(v21, (char *)(v2 + 0x2ebd), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x2f08); // 0x14a6
    transparent_crc(v22, (char *)(v2 + 0x2ec3), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4ea0); // 0x14c8
    transparent_crc(v23, (char *)(v2 + 0x2ec9), v1);
    unsigned char v24 = *(char *)(v2 + 0x4ea4); // 0x14ea
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ecf), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ea8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1530 - 0x1535
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1530
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1540 - 0x15e8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15ba
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1581
        while (v1 != 0) {
            // 0x1587
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15c5
        int32_t v5; // 0x1540
        *(int32_t *)(v5 + 0x4b19 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s252r2.c
// Address range: 0x15f0 - 0x310b
// Line range:    59 - 276
char func_1(void) {
    // 0x30fc
    set_var(22, 0, -10, 0x56d9de36, 0x457c, -9, 1, 0, (int16_t)&g1, -0x60cb80d3, 2, -1, 1, -1, 0, -2, -1, -0x6918979, 0xb1bdb07, 2, 24);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3110 - 0x316f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3110
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3110
    if (v1 != 0) {
        // 0x3144
        printf((char *)(v1 + 3941));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3170 - 0x31a4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3170
    int32_t v1; // 0x3170
    printf((char *)(v1 + 3880));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s252r2.c
// Address range: 0x31b0 - 0x32c8
// Line range:    49 - 51
int32_t set_var(int32_t g_2_l, int32_t g_17_l, int32_t g_22_l, int32_t g_42_l, int16_t g_52_l, int32_t g_54_l, char g_55_l, char g_64_l, int16_t g_70_l, int32_t g_75_l, int16_t g_96_l, char g_97_l, int32_t g_104_l, int32_t g_109_l, int32_t g_133_l, int32_t g_168_l, int32_t g_185_l, int32_t g_204_l, int32_t g_228_l, int32_t g_398_l, char g_399_l) {
    // 0x31b0
    int32_t v1; // 0x31b0
    *(int32_t *)(v1 + 0x2e5c) = g_17_l;
    *(int32_t *)(v1 + 0x2ea4) = g_22_l;
    *(int32_t *)(v1 + 0x2e60) = g_42_l;
    *(int32_t *)(v1 + 0x2e64) = (int32_t)g_52_l;
    *(int16_t *)(v1 + 0x2e68) = (int16_t)g_54_l;
    *(int32_t *)(v1 + 0x2e6c) = (int32_t)g_55_l;
    *(char *)(v1 + 0x2e70) = g_64_l;
    *(char *)(v1 + 0x2e71) = (char)g_70_l;
    *(int16_t *)(v1 + 0x2e72) = (int16_t)g_75_l;
    *(int32_t *)(v1 + 0x2e74) = (int32_t)g_96_l;
    *(int16_t *)(v1 + 0x2e78) = (int16_t)g_97_l;
    *(char *)(v1 + 0x2e7a) = (char)g_104_l;
    *(int32_t *)(v1 + 0x2e7c) = g_109_l;
    *(int32_t *)(v1 + 0x2e80) = g_133_l;
    *(int32_t *)(v1 + 0x2ea8) = g_168_l;
    *(int32_t *)(v1 + 0x2e84) = g_185_l;
    *(int32_t *)(v1 + 0x2e88) = g_204_l;
    *(int32_t *)(v1 + 0x2e8c) = g_228_l;
    *(int32_t *)(v1 + 0x2e90) = g_398_l;
    *(int32_t *)(v1 + 0x2e94) = (int32_t)g_399_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x32d0 - 0x3350
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x32d0
    int32_t v1; // 0x32d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3350 - 0x3394
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3350
    int32_t v1; // 0x3350
    int32_t * v2 = (int32_t *)(v1 + 0x2cfb); // 0x3363
    uint32_t v3 = *v2; // 0x3363
    char v4; // 0x3350
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2d0b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3394 - 0x33ac
int32_t _fini(void) {
    // 0x3394
    int32_t v1; // 0x3394
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

