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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_17_l, char g_20_l, int16_t g_64_l, int32_t g_88_l, int32_t g_89_l, int16_t g_90_l, int16_t g_93_l, int32_t g_126_l, int32_t g_151_l, int16_t g_176_l, int32_t g_177_l, int16_t g_194_l, int32_t g_239_l, char g_253_l, int32_t g_275_l, int32_t g_297_l, int32_t g_317_l, char g_373_l, char g_408_l, char g_442_l, int32_t g_445_l, int32_t g_446_l, int32_t g_456_l, int32_t g_457_l, int32_t g_458_l, char g_478_l, char g_479_l, char g_488_l, char g_534_l);
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
    return *(int32_t *)(v1 + 0x5fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x5f68); // 0x1090
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
    return v1 + 0x5faf;
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
    char * v3 = (char *)(v1 + 0x5f17); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515r2.c
// Address range: 0x11a0 - 0x1670
// Line range:    443 - 482
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3e91)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x5e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x3e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x5e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x3e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x5e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x3e64), v1);
    unsigned char v6 = *(char *)(v2 + 0x5e74); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x3e69), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x5ebc); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x3e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x5e78); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x3e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x5e7c); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x3e78), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x5e80); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x3e7d), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x5e82); // 0x1330
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x5e84); // 0x1356
    transparent_crc(v12, (char *)(v2 + 0x3e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x5ec0); // 0x1378
    transparent_crc(v13, (char *)(v2 + 0x3e8d), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x5e88); // 0x139a
    transparent_crc((int32_t)v14, (char *)(v2 + 0x3e93), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x5e8c); // 0x13bd
    transparent_crc(v15, (char *)(v2 + 0x3e99), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x5e90); // 0x13df
    transparent_crc((int32_t)v16, (char *)(v2 + 0x3e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x5ec4); // 0x1402
    transparent_crc(v17, (char *)(v2 + 0x3ea5), v1);
    unsigned char v18 = *(char *)(v2 + 0x5e92); // 0x1424
    transparent_crc((int32_t)v18, (char *)(v2 + 0x3eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x5e94); // 0x1447
    transparent_crc(v19, (char *)(v2 + 0x3eb1), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x5ec8); // 0x1469
    transparent_crc(v20, (char *)(v2 + 0x3eb7), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x5e98); // 0x148b
    transparent_crc(v21, (char *)(v2 + 0x3ebd), v1);
    char v22 = *(char *)(v2 + 0x5e9c); // 0x14ad
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ec3), v1);
    unsigned char v23 = *(char *)(v2 + 0x5e9d); // 0x14d0
    transparent_crc((int32_t)v23, (char *)(v2 + 0x3ec9), v1);
    unsigned char v24 = *(char *)(v2 + 0x5e9e); // 0x14f5
    transparent_crc((int32_t)v24, (char *)(v2 + 0x3ecf), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5ea0); // 0x1518
    transparent_crc(v25, (char *)(v2 + 0x3ed5), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x5ea4); // 0x153a
    transparent_crc(v26, (char *)(v2 + 0x3edb), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x5ecc); // 0x155c
    transparent_crc(v27, (char *)(v2 + 0x3ee1), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x5ea8); // 0x157e
    transparent_crc(v28, (char *)(v2 + 0x3ee7), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x5eac); // 0x15a0
    transparent_crc(v29, (char *)(v2 + 0x3eed), v1);
    char v30 = *(char *)(v2 + 0x5eb0); // 0x15c2
    transparent_crc((int32_t)v30, (char *)(v2 + 0x3ef3), v1);
    unsigned char v31 = *(char *)(v2 + 0x5eb1); // 0x15e5
    transparent_crc((int32_t)v31, (char *)(v2 + 0x3ef9), v1);
    unsigned char v32 = *(char *)(v2 + 0x5eb2); // 0x160a
    transparent_crc((int32_t)v32, (char *)(v2 + 0x3eff), v1);
    unsigned char v33 = *(char *)(v2 + 0x5eb3); // 0x162d
    transparent_crc((int32_t)v33, (char *)(v2 + 0x3f05), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5eb4), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1670 - 0x1675
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1670
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1680 - 0x1728
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x16fa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16c1
        while (v1 != 0) {
            // 0x16c7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1705
        int32_t v5; // 0x1680
        *(int32_t *)(v5 + 0x59f1 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515r2.c
// Address range: 0x1730 - 0x4289
// Line range:    68 - 436
int32_t func_1(void) {
    // 0x1730
    set_var(1, -0x3162fa46, -1, 58, 0, 1, 2, -9, -0x47e4, 0x828d0e3, 0, 1, -0x7c084da0, 1, 0, 1, -8, 0, -0x7984cf02, -1, 1, 105, 1, -0x561d707, 0, -0x53566108, 0x15397d0a, 34, -5, -1, -43);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4290 - 0x42ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4290
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x4290
    if (v1 != 0) {
        // 0x42c4
        printf((char *)(v1 + 3611));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x42f0 - 0x4324
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x42f0
    int32_t v1; // 0x42f0
    printf((char *)(v1 + 3550));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515r2.c
// Address range: 0x4330 - 0x44cc
// Line range:    58 - 60
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_17_l, char g_20_l, int16_t g_64_l, int32_t g_88_l, int32_t g_89_l, int16_t g_90_l, int16_t g_93_l, int32_t g_126_l, int32_t g_151_l, int16_t g_176_l, int32_t g_177_l, int16_t g_194_l, int32_t g_239_l, char g_253_l, int32_t g_275_l, int32_t g_297_l, int32_t g_317_l, char g_373_l, char g_408_l, char g_442_l, int32_t g_445_l, int32_t g_446_l, int32_t g_456_l, int32_t g_457_l, int32_t g_458_l, char g_478_l, char g_479_l, char g_488_l, char g_534_l) {
    // 0x4330
    int32_t v1; // 0x4330
    *(int32_t *)(v1 + 0x2cdc) = g_5_l;
    *(int32_t *)(v1 + 0x2ce0) = g_17_l;
    *(int32_t *)(v1 + 0x2ce4) = (int32_t)g_20_l;
    *(char *)(v1 + 0x2ce8) = (char)g_64_l;
    *(int16_t *)(v1 + 0x2d30) = (int16_t)g_88_l;
    *(int32_t *)(v1 + 0x2cec) = g_89_l;
    *(int32_t *)(v1 + 0x2cf0) = (int32_t)g_90_l;
    *(int16_t *)(v1 + 0x2cf4) = g_93_l;
    *(int16_t *)(v1 + 0x2cf6) = (int16_t)g_126_l;
    *(int32_t *)(v1 + 0x2cf8) = g_151_l;
    *(int32_t *)(v1 + 0x2d34) = (int32_t)g_176_l;
    *(int16_t *)(v1 + 0x2cfc) = (int16_t)g_177_l;
    *(int32_t *)(v1 + 0x2d00) = (int32_t)g_194_l;
    *(int16_t *)(v1 + 0x2d04) = (int16_t)g_239_l;
    *(int32_t *)(v1 + 0x2d38) = (int32_t)g_253_l;
    *(char *)(v1 + 0x2d06) = (char)g_275_l;
    *(int32_t *)(v1 + 0x2d08) = g_297_l;
    *(int32_t *)(v1 + 0x2d3c) = g_317_l;
    *(int32_t *)(v1 + 0x2d0c) = (int32_t)g_373_l;
    *(char *)(v1 + 0x2d10) = g_408_l;
    *(char *)(v1 + 0x2d11) = g_442_l;
    *(char *)(v1 + 0x2d12) = (char)g_445_l;
    *(int32_t *)(v1 + 0x2d14) = g_446_l;
    *(int32_t *)(v1 + 0x2d18) = g_456_l;
    *(int32_t *)(v1 + 0x2d40) = g_457_l;
    *(int32_t *)(v1 + 0x2d1c) = g_458_l;
    *(int32_t *)(v1 + 0x2d20) = (int32_t)g_478_l;
    *(char *)(v1 + 0x2d24) = g_479_l;
    *(char *)(v1 + 0x2d25) = g_488_l;
    *(char *)(v1 + 0x2d26) = g_534_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x44d0 - 0x4550
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x44d0
    int32_t v1; // 0x44d0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4550 - 0x4594
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4550
    int32_t v1; // 0x4550
    int32_t * v2 = (int32_t *)(v1 + 0x2b07); // 0x4563
    uint32_t v3 = *v2; // 0x4563
    char v4; // 0x4550
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2b23 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x4594 - 0x45ac
int32_t _fini(void) {
    // 0x4594
    int32_t v1; // 0x4594
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

