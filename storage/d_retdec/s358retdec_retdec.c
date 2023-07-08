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
int32_t set_var(int32_t g_8_l, int32_t g_9_l, int32_t g_18_l, int16_t g_36_l, int16_t g_37_l, int32_t g_53_l, int16_t g_67_l, int32_t g_73_l, int16_t g_83_l, int16_t g_103_l, int32_t g_104_l, char g_146_l, int32_t g_147_l, int32_t g_152_l, int32_t g_250_l, int16_t g_252_l, char g_331_l, int16_t g_435_l, int16_t g_436_l, int32_t g_467_l);
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
    return v1 + 0x4f97;
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
    char * v3 = (char *)(v1 + 0x4eff); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x11a0 - 0x1536
// Line range:    358 - 388
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ec1)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4ea4); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x4e70); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e69), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x4e72); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e74); // 0x12c9
    transparent_crc(v8, (char *)(v2 + 0x2e73), v1);
    int16_t v9 = *(int16_t *)(v2 + 0x4ea8); // 0x12eb
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e78); // 0x130e
    transparent_crc(v10, (char *)(v2 + 0x2e7d), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x4e7c); // 0x1330
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e82), v1);
    char v12 = *(char *)(v2 + 0x2f07); // 0x1353
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e87), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x4e7e); // 0x1378
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4eac); // 0x139b
    transparent_crc(v14, (char *)(v2 + 0x2e93), v1);
    char v15 = *(char *)(v2 + 0x4e80); // 0x13bd
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e84); // 0x13e0
    transparent_crc(v16, (char *)(v2 + 0x2e9f), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e88); // 0x1402
    transparent_crc(v17, (char *)(v2 + 0x2ea5), v1);
    transparent_crc(-0x49ac6def, (char *)(v2 + 0x2eab), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4e8c); // 0x1444
    transparent_crc(v18, (char *)(v2 + 0x2eb1), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x4eb0); // 0x1466
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb7), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e90); // 0x1489
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2ebd), v1);
    int16_t v21 = *(int16_t *)(v2 + 0x4e92); // 0x14ae
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ec3), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x4e94); // 0x14d1
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2ec9), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4e98); // 0x14f4
    transparent_crc(v23, (char *)(v2 + 0x2ecf), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e9c), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1540 - 0x1545
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1540
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1550 - 0x15f8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15ca
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1591
        while (v1 != 0) {
            // 0x1597
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x15d5
        int32_t v5; // 0x1550
        *(int32_t *)(v5 + 0x4b05 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x1600 - 0x3902
// Line range:    59 - 351
int32_t func_1(void) {
    // 0x16fe
    set_var(-0x734eb612, 1, -0x79d7bfa4, -1, -1, -0x25603a3e, 0, 1, 6, 0, 0, 67, 2, -1, 2, 0, -1, -1, -0x2e4a, -0x12bea1b2);
    return 0xeee4;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3910 - 0x396f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3910
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3910
    if (v1 != 0) {
        // 0x3944
        printf((char *)(v1 + 1893));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3970 - 0x39a4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3970
    int32_t v1; // 0x3970
    printf((char *)(v1 + 1832));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s358retdec.c
// Address range: 0x39b0 - 0x3acb
// Line range:    49 - 51
int32_t set_var(int32_t g_8_l, int32_t g_9_l, int32_t g_18_l, int16_t g_36_l, int16_t g_37_l, int32_t g_53_l, int16_t g_67_l, int32_t g_73_l, int16_t g_83_l, int16_t g_103_l, int32_t g_104_l, char g_146_l, int32_t g_147_l, int32_t g_152_l, int32_t g_250_l, int16_t g_252_l, char g_331_l, int16_t g_435_l, int16_t g_436_l, int32_t g_467_l) {
    // 0x39b0
    int32_t v1; // 0x39b0
    *(int32_t *)(v1 + 0x2698) = g_9_l;
    *(int32_t *)(v1 + 0x265c) = g_18_l;
    *(int32_t *)(v1 + 0x2660) = (int32_t)g_36_l;
    *(int16_t *)(v1 + 0x2664) = g_37_l;
    *(int16_t *)(v1 + 0x2666) = (int16_t)g_53_l;
    *(int32_t *)(v1 + 0x2668) = (int32_t)g_67_l;
    *(int16_t *)(v1 + 0x269c) = (int16_t)g_73_l;
    *(int32_t *)(v1 + 0x266c) = (int32_t)g_83_l;
    *(int16_t *)(v1 + 0x2670) = g_103_l;
    *(int16_t *)(v1 + 0x2672) = (int16_t)g_104_l;
    *(int32_t *)(v1 + 0x26a0) = (int32_t)g_146_l;
    *(char *)(v1 + 0x2674) = (char)g_147_l;
    *(int32_t *)(v1 + 0x2678) = g_152_l;
    *(int32_t *)(v1 + 0x267c) = g_250_l;
    *(int32_t *)(v1 + 0x2680) = (int32_t)g_252_l;
    *(int16_t *)(v1 + 0x26a4) = (int16_t)g_331_l;
    *(char *)(v1 + 0x2684) = (char)g_435_l;
    *(int16_t *)(v1 + 0x2686) = g_436_l;
    *(int16_t *)(v1 + 0x2688) = (int16_t)g_467_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3ad0 - 0x3b50
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3ad0
    int32_t v1; // 0x3ad0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3b50 - 0x3b94
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3b50
    int32_t v1; // 0x3b50
    int32_t * v2 = (int32_t *)(v1 + 0x24ef); // 0x3b63
    uint32_t v3 = *v2; // 0x3b63
    char v4; // 0x3b50
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2507 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3b94 - 0x3bac
int32_t _fini(void) {
    // 0x3b94
    int32_t v1; // 0x3b94
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

