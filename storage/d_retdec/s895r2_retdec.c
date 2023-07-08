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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_30_l, char g_31_l, char g_44_l, char g_51_l, int32_t g_52_l, int32_t g_59_l, char g_60_l, int32_t g_61_l, int16_t g_62_l, char g_87_l, int32_t g_106_l, char g_107_l, int32_t g_129_l, char g_130_l, char g_131_l, int16_t g_132_l, int32_t g_156_l, char g_157_l, int16_t g_160_l, int32_t g_161_l, int32_t g_283_l, int32_t g_327_l, char g_329_l, int32_t g_503_l, int16_t g_507_l, int32_t g_553_l, char g_554_l, char g_555_l, int16_t g_558_l, char g_592_l, int32_t g_599_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x12b7b; // 0x27a8
int32_t g2;

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
    return v1 + 0x5fbb;
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
    char * v3 = (char *)(v1 + 0x5f23); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x11a0 - 0x16b0
// Line range:    429 - 470
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3eb2)) == 0;
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
    char v7 = *(char *)(v2 + 0x5ec8); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x3e6e), v1);
    unsigned char v8 = *(char *)(v2 + 0x5e75); // 0x12c6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x3e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x5e78); // 0x12e9
    transparent_crc(v9, (char *)(v2 + 0x3e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x5e7c); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x3e7d), v1);
    unsigned char v11 = *(char *)(v2 + 0x5e80); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e82), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x5e84); // 0x1350
    transparent_crc(v12, (char *)(v2 + 0x3e87), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x5e88); // 0x1372
    transparent_crc((int32_t)v13, (char *)(v2 + 0x3e8c), v1);
    unsigned char v14 = *(char *)(v2 + 0x5e8a); // 0x1395
    transparent_crc((int32_t)v14, (char *)(v2 + 0x3e91), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x5e8c); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x3e96), v1);
    char v16 = *(char *)(v2 + 0x5e90); // 0x13da
    transparent_crc((int32_t)v16, (char *)(v2 + 0x3e9c), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x5ecc); // 0x13fd
    transparent_crc(v17, (char *)(v2 + 0x3ea2), v1);
    char v18 = *(char *)(v2 + 0x5e91); // 0x141f
    transparent_crc((int32_t)v18, (char *)(v2 + 0x3ea8), v1);
    char v19 = *(char *)(v2 + 0x5e92); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x3eae), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x5ed0); // 0x1465
    transparent_crc((int32_t)v20, (char *)(v2 + 0x3eb4), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x5e94); // 0x1488
    transparent_crc(v21, (char *)(v2 + 0x3eba), v1);
    char v22 = *(char *)(v2 + 0x5e98); // 0x14aa
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ec0), v1);
    uint16_t v23 = *(int16_t *)(v2 + 0x5e9a); // 0x14cd
    transparent_crc((int32_t)v23, (char *)(v2 + 0x3ec6), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x5ed4); // 0x14f0
    transparent_crc(v24, (char *)(v2 + 0x3ecc), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5e9c); // 0x1512
    transparent_crc(v25, (char *)(v2 + 0x3ed2), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x5ea0); // 0x1534
    transparent_crc(v26, (char *)(v2 + 0x3ed8), v1);
    unsigned char v27 = *(char *)(v2 + 0x5ea4); // 0x1556
    transparent_crc((int32_t)v27, (char *)(v2 + 0x3ede), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x5ea8); // 0x157b
    transparent_crc(v28, (char *)(v2 + 0x3ee4), v1);
    uint16_t v29 = *(int16_t *)(v2 + 0x5eac); // 0x159d
    transparent_crc((int32_t)v29, (char *)(v2 + 0x3eea), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x5eb0); // 0x15c0
    transparent_crc(v30, (char *)(v2 + 0x3ef0), v1);
    char v31 = *(char *)(v2 + 0x5eb4); // 0x15e2
    transparent_crc((int32_t)v31, (char *)(v2 + 0x3ef6), v1);
    unsigned char v32 = *(char *)(v2 + 0x5eb5); // 0x1605
    transparent_crc((int32_t)v32, (char *)(v2 + 0x3efc), v1);
    uint16_t v33 = *(int16_t *)(v2 + 0x5eb6); // 0x1628
    transparent_crc((int32_t)v33, (char *)(v2 + 0x3f02), v1);
    unsigned char v34 = *(char *)(v2 + 0x5eb8); // 0x164b
    transparent_crc((int32_t)v34, (char *)(v2 + 0x3f08), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x5ebc); // 0x166e
    transparent_crc(v35, (char *)(v2 + 0x3f0e), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5ec0), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x16b0 - 0x16b5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x16b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x16c0 - 0x1768
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x173a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1701
        while (v1 != 0) {
            // 0x1707
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1745
        int32_t v5; // 0x16c0
        *(int32_t *)(v5 + 0x59b9 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x1770 - 0x4839
// Line range:    74 - 422
int32_t func_1(void) {
    // 0x20e1
    set_var(0, -1, 0x66e52324, -3, 0, 61, -4, -9, -36, -0x5a88236a, -1, -9, 0, 114, 0, -56, 2, 0, 2, -10, -7, 0, -3, -5, -1, -4, -0x493b, -7, 19, -1, -0x28f2, 49, 1);
    return 86;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4840 - 0x489f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4840
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x4840
    if (v1 != 0) {
        // 0x4874
        printf((char *)(v1 + (int32_t)&g1 - 0x1f34));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x48a0 - 0x48d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x48a0
    int32_t v1; // 0x48a0
    printf((char *)(v1 + 2103));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x48e0 - 0x4aa0
// Line range:    64 - 66
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_30_l, char g_31_l, char g_44_l, char g_51_l, int32_t g_52_l, int32_t g_59_l, char g_60_l, int32_t g_61_l, int16_t g_62_l, char g_87_l, int32_t g_106_l, char g_107_l, int32_t g_129_l, char g_130_l, char g_131_l, int16_t g_132_l, int32_t g_156_l, char g_157_l, int16_t g_160_l, int32_t g_161_l, int32_t g_283_l, int32_t g_327_l, char g_329_l, int32_t g_503_l, int16_t g_507_l, int32_t g_553_l, char g_554_l, char g_555_l, int16_t g_558_l, char g_592_l, int32_t g_599_l) {
    // 0x48e0
    int32_t v1; // 0x48e0
    *(int32_t *)(v1 + 0x272c) = g_5_l;
    *(int32_t *)(v1 + 0x2730) = g_30_l;
    *(int32_t *)(v1 + 0x2734) = (int32_t)g_31_l;
    *(char *)(v1 + 0x2738) = g_44_l;
    *(char *)(v1 + 0x278c) = g_51_l;
    *(char *)(v1 + 0x2739) = (char)g_52_l;
    *(int32_t *)(v1 + 0x273c) = g_59_l;
    *(int32_t *)(v1 + 0x2740) = (int32_t)g_60_l;
    *(char *)(v1 + 0x2744) = (char)g_61_l;
    *(int32_t *)(v1 + 0x2748) = (int32_t)g_62_l;
    *(int16_t *)(v1 + 0x274c) = (int16_t)g_87_l;
    *(char *)(v1 + 0x274e) = (char)g_106_l;
    *(int32_t *)(v1 + 0x2750) = (int32_t)g_107_l;
    *(char *)(v1 + 0x2754) = (char)g_129_l;
    *(int32_t *)(v1 + 0x2790) = (int32_t)g_130_l;
    *(char *)(v1 + 0x2755) = g_131_l;
    *(char *)(v1 + 0x2756) = (char)g_132_l;
    *(int16_t *)(v1 + 0x2794) = (int16_t)g_156_l;
    *(int32_t *)(v1 + 0x2758) = (int32_t)g_157_l;
    *(char *)(v1 + 0x275c) = (char)g_160_l;
    *(int16_t *)(v1 + 0x275e) = (int16_t)g_161_l;
    *(int32_t *)(v1 + 0x2798) = g_283_l;
    *(int32_t *)(v1 + 0x2760) = g_327_l;
    *(int32_t *)(v1 + 0x2764) = (int32_t)g_329_l;
    *(char *)(v1 + 0x2768) = (char)g_503_l;
    *(int32_t *)(v1 + 0x276c) = (int32_t)g_507_l;
    *(int16_t *)(v1 + 0x2770) = (int16_t)g_553_l;
    *(int32_t *)(v1 + 0x2774) = (int32_t)g_554_l;
    *(char *)(v1 + 0x2778) = g_555_l;
    *(char *)(v1 + 0x2779) = (char)g_558_l;
    *(int16_t *)(v1 + 0x277a) = (int16_t)g_592_l;
    *(char *)(v1 + 0x277c) = (char)g_599_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4aa0 - 0x4b20
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x4aa0
    int32_t v1; // 0x4aa0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4b20 - 0x4b64
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4b20
    int32_t v1; // 0x4b20
    int32_t * v2 = (int32_t *)(v1 + 0x2543); // 0x4b33
    uint32_t v3 = *v2; // 0x4b33
    char v4; // 0x4b20
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x255b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x4b64 - 0x4b7c
int32_t _fini(void) {
    // 0x4b64
    int32_t v1; // 0x4b64
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

