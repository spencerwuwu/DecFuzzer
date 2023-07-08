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
int32_t set_var(char g_3_l, int16_t g_8_l, int32_t g_10_l, int16_t g_12_l, int16_t g_13_l, char g_16_l, char g_29_l, int16_t g_30_l, char g_31_l, int16_t g_32_l, char g_41_l, char g_48_l, int32_t g_49_l, int16_t g_52_l, int16_t g_61_l, int32_t g_63_l, char g_66_l, int32_t g_79_l, char g_82_l, int16_t g_116_l, int16_t g_132_l, int32_t g_133_l, int32_t g_155_l, int32_t g_157_l, int32_t g_163_l, int16_t g_174_l, int16_t g_188_l, int32_t g_191_l, int32_t g_210_l, int32_t g_220_l, int32_t g_224_l, int16_t g_240_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 980; // 0x5f9c
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
    return v1 + 0x4fa7;
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
    char * v3 = (char *)(v1 + 0x4f0f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s68retdec.c
// Address range: 0x11a0 - 0x16a0
// Line range:    296 - 336
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e85)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    unsigned char v3 = *(char *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x4e6a); // 0x123f
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e6c); // 0x1262
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x4eb4); // 0x1284
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e69), v1);
    uint16_t v7 = *(int16_t *)(v2 + 0x4e70); // 0x12a7
    transparent_crc((int32_t)v7, (char *)(v2 + 0x2e6e), v1);
    char v8 = *(char *)(v2 + 0x4e72); // 0x12ca
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e73), v1);
    char v9 = *(char *)(v2 + 0x4e73); // 0x12ed
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e78), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x4e74); // 0x1310
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7d), v1);
    char v11 = *(char *)(v2 + 0x4e76); // 0x1333
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e82), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x4e78); // 0x1358
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e87), v1);
    unsigned char v13 = *(char *)(v2 + 0x4e7a); // 0x137e
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8c), v1);
    char v14 = *(char *)(v2 + 0x4e7b); // 0x13a3
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e91), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e7c); // 0x13c8
    transparent_crc(v15, (char *)(v2 + 0x2e96), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x4e80); // 0x13ea
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2e9b), v1);
    uint16_t v17 = *(int16_t *)(v2 + 0x4e82); // 0x140d
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea0), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4eb8); // 0x1430
    transparent_crc(v18, (char *)(v2 + 0x2ea5), v1);
    char v19 = *(char *)(v2 + 0x4e84); // 0x1452
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eaa), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x4e88); // 0x1477
    transparent_crc(v20, (char *)(v2 + 0x2eaf), v1);
    unsigned char v21 = *(char *)(v2 + 0x4e8c); // 0x1499
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2eb4), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x4e8e); // 0x14be
    transparent_crc((int32_t)v22, (char *)(v2 + 0x2eb9), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x4e90); // 0x14e1
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ebf), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x4e94); // 0x1504
    transparent_crc(v24, (char *)(v2 + 0x2ec5), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4ebc); // 0x1526
    transparent_crc(v25, (char *)(v2 + 0x2ecb), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4e98); // 0x1548
    transparent_crc(v26, (char *)(v2 + 0x2ed1), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x4e9c); // 0x156a
    transparent_crc(v27, (char *)(v2 + 0x2ed7), v1);
    uint16_t v28 = *(int16_t *)(v2 + 0x4ea0); // 0x158c
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2edd), v1);
    uint16_t v29 = *(int16_t *)(v2 + 0x4ea2); // 0x15af
    transparent_crc((int32_t)v29, (char *)(v2 + 0x2ee3), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x4ea4); // 0x15d2
    transparent_crc(v30, (char *)(v2 + 0x2ee9), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x4ec0); // 0x15f4
    transparent_crc(v31, (char *)(v2 + 0x2eef), v1);
    int32_t v32 = *(int32_t *)(v2 + 0x4ec4); // 0x1616
    transparent_crc(v32, (char *)(v2 + 0x2ef5), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x4ec8); // 0x1638
    transparent_crc(v33, (char *)(v2 + 0x2efb), v1);
    uint16_t v34 = *(int16_t *)(v2 + 0x4ea8); // 0x165a
    transparent_crc((int32_t)v34, (char *)(v2 + 0x2f01), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eac), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x16a0 - 0x16a5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x16a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16b0 - 0x1758
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x172a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x16f1
        while (v1 != 0) {
            // 0x16f7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1735
        int32_t v5; // 0x16b0
        *(int32_t *)(v5 + 0x49bd + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s68retdec.c
// Address range: 0x1760 - 0x3a3a
// Line range:    69 - 289
int16_t func_1(void) {
    // 0x1760
    set_var(-100, -0x6736, 9, 1, -3, 1, -1, -0x5178, 5, -0x5aff, -9, -95, -0x8636b2e, (int16_t)&g1, 0x7e40, 0, 114, 0x5200cc90, -1, 0x139e, -2, -0x3eba8bf1, 0, -9, -0x7dbf82e3, -0x1eba, -0x56d1, 8, 0, 0, 0, 0x2263);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3a40 - 0x3a9f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3a40
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3a40
    if (v1 != 0) {
        // 0x3a74
        printf((char *)(v1 + 1639));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3aa0 - 0x3ad4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3aa0
    int32_t v1; // 0x3aa0
    printf((char *)(v1 + 1578));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s68retdec.c
// Address range: 0x3ae0 - 0x3ca3
// Line range:    59 - 61
int32_t set_var(char g_3_l, int16_t g_8_l, int32_t g_10_l, int16_t g_12_l, int16_t g_13_l, char g_16_l, char g_29_l, int16_t g_30_l, char g_31_l, int16_t g_32_l, char g_41_l, char g_48_l, int32_t g_49_l, int16_t g_52_l, int16_t g_61_l, int32_t g_63_l, char g_66_l, int32_t g_79_l, char g_82_l, int16_t g_116_l, int16_t g_132_l, int32_t g_133_l, int32_t g_155_l, int32_t g_157_l, int32_t g_163_l, int16_t g_174_l, int16_t g_188_l, int32_t g_191_l, int32_t g_210_l, int32_t g_220_l, int32_t g_224_l, int16_t g_240_l) {
    // 0x3ae0
    int32_t v1; // 0x3ae0
    *(char *)(v1 + 0x252c) = (char)g_8_l;
    *(int16_t *)(v1 + 0x252e) = (int16_t)g_10_l;
    *(int32_t *)(v1 + 0x2530) = (int32_t)g_12_l;
    *(int16_t *)(v1 + 0x2578) = g_13_l;
    *(int16_t *)(v1 + 0x2534) = (int16_t)g_16_l;
    *(char *)(v1 + 0x2536) = g_29_l;
    *(char *)(v1 + 0x2537) = (char)g_30_l;
    *(int16_t *)(v1 + 0x2538) = (int16_t)g_31_l;
    *(char *)(v1 + 0x253a) = (char)g_32_l;
    *(int16_t *)(v1 + 0x253c) = (int16_t)g_41_l;
    *(char *)(v1 + 0x253e) = g_48_l;
    *(char *)(v1 + 0x253f) = (char)g_49_l;
    *(int32_t *)(v1 + 0x2540) = (int32_t)g_52_l;
    *(int16_t *)(v1 + 0x2544) = g_61_l;
    *(int16_t *)(v1 + 0x2546) = (int16_t)g_63_l;
    *(int32_t *)(v1 + 0x257c) = (int32_t)g_66_l;
    *(char *)(v1 + 0x2548) = (char)g_79_l;
    *(int32_t *)(v1 + 0x254c) = (int32_t)g_82_l;
    *(char *)(v1 + 0x2550) = (char)g_116_l;
    *(int16_t *)(v1 + 0x2552) = g_132_l;
    *(int16_t *)(v1 + 0x2554) = (int16_t)g_133_l;
    *(int32_t *)(v1 + 0x2558) = g_155_l;
    *(int32_t *)(v1 + 0x2580) = g_157_l;
    *(int32_t *)(v1 + 0x255c) = g_163_l;
    *(int32_t *)(v1 + 0x2560) = (int32_t)g_174_l;
    *(int16_t *)(v1 + 0x2564) = g_188_l;
    *(int16_t *)(v1 + 0x2566) = (int16_t)g_191_l;
    *(int32_t *)(v1 + 0x2568) = g_210_l;
    *(int32_t *)(v1 + 0x2584) = g_220_l;
    *(int32_t *)(v1 + 0x2588) = g_224_l;
    *(int32_t *)(v1 + 0x258c) = (int32_t)g_240_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3cb0 - 0x3d30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3cb0
    int32_t v1; // 0x3cb0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3d30 - 0x3d74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3d30
    int32_t v1; // 0x3d30
    int32_t * v2 = (int32_t *)(v1 + 0x231f); // 0x3d43
    uint32_t v3 = *v2; // 0x3d43
    char v4; // 0x3d30
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x233f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3d74 - 0x3d8c
int32_t _fini(void) {
    // 0x3d74
    int32_t v1; // 0x3d74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

