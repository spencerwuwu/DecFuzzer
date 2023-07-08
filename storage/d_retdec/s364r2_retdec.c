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
int32_t set_var(char g_2_l, char g_5_l, char g_25_l, int32_t g_32_l, char g_47_l, int32_t g_49_l, int32_t g_52_l, int32_t g_76_l, int32_t g_77_l, int16_t g_114_l, char g_115_l, int16_t g_117_l, int32_t g_130_l, int32_t g_151_l, int16_t g_168_l, char g_222_l, int32_t g_241_l, int32_t g_242_l, int32_t g_248_l, int32_t g_293_l, char g_331_l, int16_t g_339_l, char g_366_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x76c7b275; // 0x30a8
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
    return v1 + 0x4f9b;
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
    char * v3 = (char *)(v1 + 0x4f03); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s364r2.c
// Address range: 0x11a0 - 0x155c
// Line range:    282 - 313
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ecd)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    unsigned char v4 = *(char *)(v2 + 0x4e69); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    unsigned char v5 = *(char *)(v2 + 0x4e6a); // 0x1262
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e6c); // 0x1285
    transparent_crc(v6, (char *)(v2 + 0x2e69), v1);
    char v7 = *(char *)(v2 + 0x4e70); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e74); // 0x12ca
    transparent_crc(v8, (char *)(v2 + 0x2e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12ec
    transparent_crc(v9, (char *)(v2 + 0x2e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e7c); // 0x130e
    transparent_crc(v10, (char *)(v2 + 0x2e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e80); // 0x1330
    transparent_crc(v11, (char *)(v2 + 0x2e82), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x4e84); // 0x1352
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e87), v1);
    char v13 = *(char *)(v2 + 0x4ea8); // 0x1378
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8d), v1);
    uint16_t v14 = *(int16_t *)(v2 + 0x4e86); // 0x139b
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e93), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e88); // 0x13c1
    transparent_crc(v15, (char *)(v2 + 0x2e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4eac); // 0x13e3
    transparent_crc(v16, (char *)(v2 + 0x2e9f), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x4eb0); // 0x1405
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea5), v1);
    unsigned char v18 = *(char *)(v2 + 0x4e8c); // 0x1428
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e90); // 0x144b
    transparent_crc(v19, (char *)(v2 + 0x2eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e94); // 0x146d
    transparent_crc(v20, (char *)(v2 + 0x2eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4eb4); // 0x148f
    transparent_crc(v21, (char *)(v2 + 0x2ebd), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4e98); // 0x14b1
    transparent_crc(v22, (char *)(v2 + 0x2ec3), v1);
    unsigned char v23 = *(char *)(v2 + 0x4e9c); // 0x14d3
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec9), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x4e9e); // 0x14f6
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ecf), v1);
    char v25 = *(char *)(v2 + 0x4eb8); // 0x1519
    transparent_crc((int32_t)v25, (char *)(v2 + 0x2ed5), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ea0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1560 - 0x1565
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1560
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1570 - 0x1618
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15ea
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x15b1
        while (v1 != 0) {
            // 0x15b7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15f5
        int32_t v5; // 0x1570
        *(int32_t *)(v5 + 0x4aed + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s364r2.c
// Address range: 0x1620 - 0x2f35
// Line range:    60 - 275
int32_t func_1(void) {
    // 0x1620
    set_var(-1, 0, -124, 0x17a3f0af, -1, -1, 1, 0x7901a93e, -11, 1, 0, 0x71b9, 0x460693ea, 0, 0, 1, -0x3f7bc065, 6, 0, 0x5430ac92, -109, -1, 0);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2f40 - 0x2f9f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2f40
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2f40
    if (v1 != 0) {
        // 0x2f74
        printf((char *)(v1 + (int32_t)&g1 - 0x1f6d));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2fa0 - 0x2fd4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2fa0
    int32_t v1; // 0x2fa0
    printf((char *)(v1 + 0x10fe));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s364r2.c
// Address range: 0x2fe0 - 0x3113
// Line range:    50 - 52
int32_t set_var(char g_2_l, char g_5_l, char g_25_l, int32_t g_32_l, char g_47_l, int32_t g_49_l, int32_t g_52_l, int32_t g_76_l, int32_t g_77_l, int16_t g_114_l, char g_115_l, int16_t g_117_l, int32_t g_130_l, int32_t g_151_l, int16_t g_168_l, char g_222_l, int32_t g_241_l, int32_t g_242_l, int32_t g_248_l, int32_t g_293_l, char g_331_l, int16_t g_339_l, char g_366_l) {
    // 0x2fe0
    int32_t v1; // 0x2fe0
    *(char *)(v1 + 0x302c) = g_5_l;
    *(char *)(v1 + 0x302d) = g_25_l;
    *(char *)(v1 + 0x302e) = (char)g_32_l;
    *(int32_t *)(v1 + 0x3030) = (int32_t)g_47_l;
    *(char *)(v1 + 0x3034) = (char)g_49_l;
    *(int32_t *)(v1 + 0x3038) = g_52_l;
    *(int32_t *)(v1 + 0x303c) = g_76_l;
    *(int32_t *)(v1 + 0x3040) = g_77_l;
    *(int32_t *)(v1 + 0x3044) = (int32_t)g_114_l;
    *(int16_t *)(v1 + 0x3048) = (int16_t)g_115_l;
    *(char *)(v1 + 0x306c) = (char)g_117_l;
    *(int16_t *)(v1 + 0x304a) = (int16_t)g_130_l;
    *(int32_t *)(v1 + 0x304c) = g_151_l;
    *(int32_t *)(v1 + 0x3070) = (int32_t)g_168_l;
    *(int16_t *)(v1 + 0x3074) = (int16_t)g_222_l;
    *(char *)(v1 + 0x3050) = (char)g_241_l;
    *(int32_t *)(v1 + 0x3054) = g_242_l;
    *(int32_t *)(v1 + 0x3058) = g_248_l;
    *(int32_t *)(v1 + 0x3078) = g_293_l;
    *(int32_t *)(v1 + 0x305c) = (int32_t)g_331_l;
    *(char *)(v1 + 0x3060) = (char)g_339_l;
    *(int16_t *)(v1 + 0x3062) = (int16_t)g_366_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3120 - 0x31a0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3120
    int32_t v1; // 0x3120
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31a0 - 0x31e4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x31a0
    int32_t v1; // 0x31a0
    int32_t * v2 = (int32_t *)(v1 + 0x2ea3); // 0x31b3
    uint32_t v3 = *v2; // 0x31b3
    char v4; // 0x31a0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2ebf + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x31e4 - 0x31fc
int32_t _fini(void) {
    // 0x31e4
    int32_t v1; // 0x31e4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

