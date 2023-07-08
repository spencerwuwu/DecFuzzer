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
int32_t set_var(int32_t g_2_l, char g_5_l, int16_t g_19_l, int32_t g_20_l, int16_t g_46_l, int32_t g_47_l, int32_t g_50_l, char g_51_l, int32_t g_52_l, int32_t g_69_l, int32_t g_81_l, int32_t g_138_l, int16_t g_141_l, int32_t g_158_l, int16_t g_164_l, int32_t g_165_l, int32_t g_186_l, int32_t g_208_l, int32_t g_209_l, int32_t g_214_l);
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
    return v1 + 0x3fa7;
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
    char * v3 = (char *)(v1 + 0x3f0f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s374r2.c
// Address range: 0x11a0 - 0x14ee
// Line range:    203 - 231
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e9b)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x3e6c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x3e6e); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e70); // 0x1282
    transparent_crc(v6, (char *)(v2 + 0x1e69), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e78); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x1e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e7c); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x1e78), v1);
    unsigned char v10 = *(char *)(v2 + 0x3e80); // 0x130e
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x1331
    transparent_crc(v11, (char *)(v2 + 0x1e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3e88); // 0x1353
    transparent_crc(v12, (char *)(v2 + 0x1e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e8c); // 0x1375
    transparent_crc(v13, (char *)(v2 + 0x1e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e90); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x1e91), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x3eb4); // 0x13b9
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e97), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e94); // 0x13dc
    transparent_crc(v16, (char *)(v2 + 0x1e9d), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x3eb6); // 0x13fe
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea3), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x1424
    transparent_crc(v18, (char *)(v2 + 0x1ea9), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3e9c); // 0x1446
    transparent_crc(v19, (char *)(v2 + 0x1eaf), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3ea0); // 0x1468
    transparent_crc(v20, (char *)(v2 + 0x1eb5), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3ea4); // 0x148a
    transparent_crc(v21, (char *)(v2 + 0x1ebb), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x3ea8); // 0x14ac
    transparent_crc(v22, (char *)(v2 + 0x1ec1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14f0 - 0x14f5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1500 - 0x15a8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x157a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1541
        while (v1 != 0) {
            // 0x1547
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1585
        int32_t v5; // 0x1500
        *(int32_t *)(v5 + 0x3b59 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s374r2.c
// Address range: 0x15b0 - 0x24ef
// Line range:    57 - 196
char func_1(void) {
    // 0x15b0
    set_var(0, 81, -3, 0, -0x4642, 0, 0, 1, 201, 0x6b841ae9, 1, 6, 0, 1, 0, 1, 0x64733226, -0x480ee7a3, -0x72ec7770, 1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x24f0 - 0x254f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x24f0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x24f0
    if (v1 != 0) {
        // 0x2524
        printf((char *)(v1 + 2935));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2550 - 0x2584
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2550
    int32_t v1; // 0x2550
    printf((char *)(v1 + 2874));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s374r2.c
// Address range: 0x2590 - 0x269f
// Line range:    47 - 49
int32_t set_var(int32_t g_2_l, char g_5_l, int16_t g_19_l, int32_t g_20_l, int16_t g_46_l, int32_t g_47_l, int32_t g_50_l, char g_51_l, int32_t g_52_l, int32_t g_69_l, int32_t g_81_l, int32_t g_138_l, int16_t g_141_l, int32_t g_158_l, int16_t g_164_l, int32_t g_165_l, int32_t g_186_l, int32_t g_208_l, int32_t g_209_l, int32_t g_214_l) {
    // 0x2590
    int32_t v1; // 0x2590
    *(int32_t *)(v1 + 0x2a7c) = (int32_t)g_5_l;
    *(char *)(v1 + 0x2a80) = (char)g_19_l;
    *(int16_t *)(v1 + 0x2a82) = (int16_t)g_20_l;
    *(int32_t *)(v1 + 0x2a84) = (int32_t)g_46_l;
    *(int16_t *)(v1 + 0x2a88) = (int16_t)g_47_l;
    *(int32_t *)(v1 + 0x2a8c) = g_50_l;
    *(int32_t *)(v1 + 0x2a90) = (int32_t)g_51_l;
    *(char *)(v1 + 0x2a94) = (char)g_52_l;
    *(int32_t *)(v1 + 0x2a98) = g_69_l;
    *(int32_t *)(v1 + 0x2a9c) = g_81_l;
    *(int32_t *)(v1 + 0x2aa0) = g_138_l;
    *(int32_t *)(v1 + 0x2aa4) = (int32_t)g_141_l;
    *(int16_t *)(v1 + 0x2ac8) = (int16_t)g_158_l;
    *(int32_t *)(v1 + 0x2aa8) = (int32_t)g_164_l;
    *(int16_t *)(v1 + 0x2aca) = (int16_t)g_165_l;
    *(int32_t *)(v1 + 0x2aac) = g_186_l;
    *(int32_t *)(v1 + 0x2ab0) = g_208_l;
    *(int32_t *)(v1 + 0x2ab4) = g_209_l;
    *(int32_t *)(v1 + 0x2ab8) = g_214_l;
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
    int32_t * v2 = (int32_t *)(v1 + 0x292f); // 0x2733
    uint32_t v3 = *v2; // 0x2733
    char v4; // 0x2720
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x293b + 4 * (v3 % 256 ^ (int32_t)v4));
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

