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
int32_t set_var(int32_t g_7_l, int32_t g_8_l, int16_t g_20_l, int16_t g_21_l, int32_t g_41_l, int32_t g_51_l, char g_53_l, int32_t g_56_l, int16_t g_57_l);
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
    return v1 + 0x2f7f;
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
    char * v3 = (char *)(v1 + 0x2ee7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s608retdec.c
// Address range: 0x11a0 - 0x1370
// Line range:    76 - 93
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3692)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x2e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 3676), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x2e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 3680), v1);
    int16_t v5 = *(int16_t *)(v2 + 0x2e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 3684), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x2e72); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 3689), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x2e8c); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 3694), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x2e74); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 3699), v1);
    unsigned char v9 = *(char *)(v2 + 0x2e78); // 0x12e8
    transparent_crc((int32_t)v9, (char *)(v2 + 3704), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2e7c); // 0x130b
    transparent_crc(v10, (char *)(v2 + 3709), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x2e80); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 3714), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e84), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1370 - 0x1375
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1370
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1380 - 0x1428
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13fa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x13c1
        while (v1 != 0) {
            // 0x13c7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1405
        int32_t v5; // 0x1380
        *(int32_t *)(v5 + 0x2cb1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s608retdec.c
// Address range: 0x1430 - 0x16ba
// Line range:    46 - 68
int16_t func_1(void) {
    // 0x1430
    set_var(0x37d8e6e8, -6, 8, 25, 0, 1, 1, 0x6114ac9f, -8);
    return -0x5361;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16c0 - 0x171f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x16c0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x16c0
    if (v1 != 0) {
        // 0x16f4
        printf((char *)(v1 + 2407));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1720 - 0x1754
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1720
    int32_t v1; // 0x1720
    printf((char *)(v1 + 2346));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s608retdec.c
// Address range: 0x1760 - 0x17e8
// Line range:    36 - 38
int32_t set_var(int32_t g_7_l, int32_t g_8_l, int16_t g_20_l, int16_t g_21_l, int32_t g_41_l, int32_t g_51_l, char g_53_l, int32_t g_56_l, int16_t g_57_l) {
    // 0x1760
    int32_t v1; // 0x1760
    *(int32_t *)(v1 + 0x28ac) = g_8_l;
    *(int32_t *)(v1 + 0x28b0) = (int32_t)g_20_l;
    *(int16_t *)(v1 + 0x28b4) = g_21_l;
    *(int16_t *)(v1 + 0x28b6) = (int16_t)g_41_l;
    *(int32_t *)(v1 + 0x28d0) = g_51_l;
    *(int32_t *)(v1 + 0x28b8) = (int32_t)g_53_l;
    *(char *)(v1 + 0x28bc) = (char)g_56_l;
    *(int32_t *)(v1 + 0x28c0) = (int32_t)g_57_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x17f0 - 0x1870
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x17f0
    int32_t v1; // 0x17f0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1870 - 0x18b4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1870
    int32_t v1; // 0x1870
    int32_t * v2 = (int32_t *)(v1 + 0x27b7); // 0x1883
    uint32_t v3 = *v2; // 0x1883
    char v4; // 0x1870
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x27c3 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x18b4 - 0x18cc
int32_t _fini(void) {
    // 0x18b4
    int32_t v1; // 0x18b4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

