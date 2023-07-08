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
int32_t set_var(int16_t g_20_l, int32_t g_21_l, int32_t g_22_l, int32_t g_56_l, int32_t g_58_l, int16_t g_59_l, int32_t g_61_l, int16_t g_62_l, char g_142_l, char g_143_l, char g_145_l, int16_t g_146_l, int32_t g_147_l, char g_176_l, char g_184_l, int16_t g_196_l);
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
    return v1 + 0x3f87;
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
    char * v3 = (char *)(v1 + 0x3eef); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s166retdec.c
// Address range: 0x11a0 - 0x1466
// Line range:    191 - 215
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e64)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e94); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x1e61), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e6c); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e98); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x1e70), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x3e74); // 0x12c5
    transparent_crc((int32_t)v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e78); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e7c); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    char v11 = *(char *)(v2 + 0x3e7e); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e84), v1);
    char v12 = *(char *)(v2 + 0x3e7f); // 0x1350
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e8a), v1);
    char v13 = *(char *)(v2 + 0x3e80); // 0x1375
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e90), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x3e82); // 0x1398
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e96), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e84); // 0x13bb
    transparent_crc(v15, (char *)(v2 + 0x1e9c), v1);
    char v16 = *(char *)(v2 + 0x3e88); // 0x13dd
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea2), v1);
    char v17 = *(char *)(v2 + 0x3e89); // 0x1400
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea8), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e8a); // 0x1423
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eae), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e8c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1470 - 0x1475
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1470
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1480 - 0x1528
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14fa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14c1
        while (v1 != 0) {
            // 0x14c7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1505
        int32_t v5; // 0x1480
        *(int32_t *)(v5 + 0x3bbd + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s166retdec.c
// Address range: 0x1530 - 0x23ae
// Line range:    53 - 184
int16_t func_1(void) {
    // 0x1530
    set_var(1, 0, 0, 0, 0, 3847, -4, 0, 46, 1, -1, -0x7fe6, 0x49aa43c1, 1, -1, 0x550c);
    return -4;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23b0 - 0x240f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x23b0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x23b0
    if (v1 != 0) {
        // 0x23e4
        printf((char *)(v1 + 3236));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2410 - 0x2444
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2410
    int32_t v1; // 0x2410
    printf((char *)(v1 + 3175));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s166retdec.c
// Address range: 0x2450 - 0x2532
// Line range:    43 - 45
int32_t set_var(int16_t g_20_l, int32_t g_21_l, int32_t g_22_l, int32_t g_56_l, int32_t g_58_l, int16_t g_59_l, int32_t g_61_l, int16_t g_62_l, char g_142_l, char g_143_l, char g_145_l, int16_t g_146_l, int32_t g_147_l, char g_176_l, char g_184_l, int16_t g_196_l) {
    // 0x2450
    int32_t v1; // 0x2450
    *(int16_t *)(v1 + 0x2bbc) = (int16_t)g_21_l;
    *(int32_t *)(v1 + 0x2be8) = g_22_l;
    *(int32_t *)(v1 + 0x2bc0) = g_56_l;
    *(int32_t *)(v1 + 0x2bc4) = g_58_l;
    *(int32_t *)(v1 + 0x2bec) = (int32_t)g_59_l;
    *(int16_t *)(v1 + 0x2bc8) = (int16_t)g_61_l;
    *(int32_t *)(v1 + 0x2bcc) = (int32_t)g_62_l;
    *(int16_t *)(v1 + 0x2bd0) = (int16_t)g_142_l;
    *(char *)(v1 + 0x2bd2) = g_143_l;
    *(char *)(v1 + 0x2bd3) = g_145_l;
    *(char *)(v1 + 0x2bd4) = (char)g_146_l;
    *(int16_t *)(v1 + 0x2bd6) = (int16_t)g_147_l;
    *(int32_t *)(v1 + 0x2bd8) = (int32_t)g_176_l;
    *(char *)(v1 + 0x2bdc) = g_184_l;
    *(char *)(v1 + 0x2bdd) = (char)g_196_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2540 - 0x25c0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2540
    int32_t v1; // 0x2540
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x25c0 - 0x2604
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x25c0
    int32_t v1; // 0x25c0
    int32_t * v2 = (int32_t *)(v1 + 0x2a6f); // 0x25d3
    uint32_t v3 = *v2; // 0x25d3
    char v4; // 0x25c0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2a7f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2604 - 0x261c
int32_t _fini(void) {
    // 0x2604
    int32_t v1; // 0x2604
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

