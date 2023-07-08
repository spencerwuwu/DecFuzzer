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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int16_t g_22_l, int32_t g_23_l, char g_25_l, int16_t g_26_l, int32_t g_51_l, int32_t g_57_l, char g_60_l, int32_t g_61_l, int32_t g_66_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0xe000; // 0x21bb
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
    return v1 + 0x2f8f;
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
    char * v3 = (char *)(v1 + 0x2ef7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s929r2.c
// Address range: 0x11a0 - 0x13fb
// Line range:    139 - 160
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3715)) == 0;
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
    int16_t v7 = *(int16_t *)(v2 + 0x2e78); // 0x12a2
    transparent_crc((int32_t)v7, (char *)(v2 + 3692), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e7c); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 3697), v1);
    char v9 = *(char *)(v2 + 0x2e80); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 3702), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x2e82); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 3707), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e84); // 0x1330
    transparent_crc(v11, (char *)(v2 + 3712), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x2e88); // 0x1352
    transparent_crc(v12, (char *)(v2 + 3717), v1);
    char v13 = *(char *)(v2 + 0x2e8c); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 3722), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x2e9c); // 0x1397
    transparent_crc(v14, (char *)(v2 + 3727), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x2e90); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 3732), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e94), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1400 - 0x1405
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1400
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1410 - 0x14b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x148a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1451
        while (v1 != 0) {
            // 0x1457
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1495
        int32_t v5; // 0x1410
        *(int32_t *)(v5 + 0x2c31 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s929r2.c
// Address range: 0x14c0 - 0x1c41
// Line range:    54 - 132
int32_t func_1(void) {
    // 0x17d9
    set_var(-0x13d1f30b, -0x17c388d0, 5, -28, 26, -7, -5, -0x7b8b, -1, 1, -9, 0, 0x5a815809);
    return 5;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c50 - 0x1caf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1c50
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1c50
    if (v1 != 0) {
        // 0x1c84
        printf((char *)(v1 + 1001));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1cb0 - 0x1ce4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1cb0
    int32_t v1; // 0x1cb0
    printf((char *)(v1 + 940));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s929r2.c
// Address range: 0x1cf0 - 0x1da5
// Line range:    44 - 46
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int16_t g_22_l, int32_t g_23_l, char g_25_l, int16_t g_26_l, int32_t g_51_l, int32_t g_57_l, char g_60_l, int32_t g_61_l, int32_t g_66_l) {
    // 0x1cf0
    int32_t v1; // 0x1cf0
    *(int32_t *)(v1 + 0x231c) = g_3_l;
    *(int32_t *)(v1 + 0x2320) = g_4_l;
    *(int32_t *)(v1 + 0x2324) = g_5_l;
    *(int32_t *)(v1 + 0x2328) = (int32_t)g_22_l;
    *(int16_t *)(v1 + 0x232c) = (int16_t)g_23_l;
    *(int32_t *)(v1 + 0x2330) = (int32_t)g_25_l;
    *(char *)(v1 + 0x2334) = (char)g_26_l;
    *(int16_t *)(v1 + 0x2336) = (int16_t)g_51_l;
    *(int32_t *)(v1 + 0x2338) = g_57_l;
    *(int32_t *)(v1 + 0x233c) = (int32_t)g_60_l;
    *(char *)(v1 + 0x2340) = (char)g_61_l;
    *(int32_t *)(v1 + 0x2350) = g_66_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1db0 - 0x1e30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1db0
    int32_t v1; // 0x1db0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e30 - 0x1e74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1e30
    int32_t v1; // 0x1e30
    int32_t * v2 = (int32_t *)(v1 + (int32_t)&g1 + 76); // 0x1e43
    uint32_t v3 = *v2; // 0x1e43
    char v4; // 0x1e30
    int32_t v5 = *(int32_t *)(v1 + (int32_t)&g1 + 88 + 4 * (v3 % 256 ^ (int32_t)v4)); // 0x1e64
    *v2 = v3 / 256 ^ v5;
}

// Address range: 0x1e74 - 0x1e8c
int32_t _fini(void) {
    // 0x1e74
    int32_t v1; // 0x1e74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

