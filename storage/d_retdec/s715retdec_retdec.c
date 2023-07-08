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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_41_l, int32_t g_51_l, char g_54_l, int32_t g_55_l, int32_t g_56_l, int32_t g_73_l, int32_t g_85_l, char g_107_l, char g_135_l, int32_t g_136_l, int16_t g_141_l, int32_t g_179_l, int32_t g_195_l, char g_196_l, int32_t g_201_l, int16_t g_237_l, int16_t g_382_l, char g_392_l, int32_t g_425_l, char g_432_l, char g_496_l, char g_607_l);
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
    return v1 + 0x5fb7;
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
    char * v3 = (char *)(v1 + 0x5f1f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s715retdec.c
// Address range: 0x11a0 - 0x15fd
// Line range:    454 - 490
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3ec7)) == 0;
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
    int32_t v6 = *(int32_t *)(v2 + 0x5e74); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x3e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x5e78); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x3e6c), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x5e7c); // 0x12c4
    transparent_crc(v8, (char *)(v2 + 0x3e71), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x5e80); // 0x12e6
    transparent_crc(v9, (char *)(v2 + 0x3e76), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x5e84); // 0x1308
    transparent_crc(v10, (char *)(v2 + 0x3e7b), v1);
    char v11 = *(char *)(v2 + 0x5e88); // 0x132a
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e80), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x5e8c); // 0x134d
    transparent_crc(v12, (char *)(v2 + 0x3e85), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x5e90); // 0x136f
    transparent_crc(v13, (char *)(v2 + 0x3e8a), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x5e94); // 0x1391
    transparent_crc(v14, (char *)(v2 + 0x3e8f), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x5e98); // 0x13b3
    transparent_crc(v15, (char *)(v2 + 0x3e94), v1);
    char v16 = *(char *)(v2 + 0x5ec4); // 0x13d5
    transparent_crc((int32_t)v16, (char *)(v2 + 0x3e99), v1);
    unsigned char v17 = *(char *)(v2 + 0x5e9c); // 0x13f8
    transparent_crc((int32_t)v17, (char *)(v2 + 0x3e9f), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x5ea0); // 0x141b
    transparent_crc(v18, (char *)(v2 + 0x3ea5), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x5ea4); // 0x143d
    transparent_crc((int32_t)v19, (char *)(v2 + 0x3eab), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x5ea8); // 0x1460
    transparent_crc(v20, (char *)(v2 + 0x3eb1), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x5eac); // 0x1482
    transparent_crc(v21, (char *)(v2 + 0x3eb7), v1);
    char v22 = *(char *)(v2 + 0x5eb0); // 0x14a4
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3ebd), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x5ec8); // 0x14c7
    transparent_crc(v23, (char *)(v2 + 0x3ec3), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x5eb2); // 0x14e9
    transparent_crc((int32_t)v24, (char *)(v2 + 0x3ec9), v1);
    uint16_t v25 = *(int16_t *)(v2 + 0x5eb4); // 0x150c
    transparent_crc((int32_t)v25, (char *)(v2 + 0x3ecf), v1);
    char v26 = *(char *)(v2 + 0x5eb6); // 0x152f
    transparent_crc((int32_t)v26, (char *)(v2 + 0x3ed5), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x5ecc); // 0x1552
    transparent_crc(v27, (char *)(v2 + 0x3edb), v1);
    char v28 = *(char *)(v2 + 0x5eb7); // 0x1574
    transparent_crc((int32_t)v28, (char *)(v2 + 0x3ee1), v1);
    unsigned char v29 = *(char *)(v2 + 0x5eb8); // 0x1597
    transparent_crc((int32_t)v29, (char *)(v2 + 0x3ee7), v1);
    char v30 = *(char *)(v2 + 0x5eb9); // 0x15ba
    transparent_crc((int32_t)v30, (char *)(v2 + 0x3eed), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5ebc), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1600 - 0x1605
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1600
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1610 - 0x16b8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x168a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1651
        while (v1 != 0) {
            // 0x1657
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1695
        int32_t v5; // 0x1610
        *(int32_t *)(v5 + 0x5a61 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s715retdec.c
// Address range: 0x16c0 - 0x4ad6
// Line range:    65 - 447
char func_1(void) {
    // 0x4ac7
    set_var(-15, 2, 2, 0x9c3fbb4, 1, -0x600d4769, -1, -0x7b9373a4, 22, 0x3bba684a, -0x2de605b6, 0, -0x753c8bb8, 0, 53, 0x71b0934b, 0x1836, 0x6a661fa2, 0, 3, 1, 0x56c7, 8, -1, 0, -10, 109, 7);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4ae0 - 0x4b3f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4ae0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x4ae0
    if (v1 != 0) {
        // 0x4b14
        printf((char *)(v1 + 1459));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4b40 - 0x4b74
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4b40
    int32_t v1; // 0x4b40
    printf((char *)(v1 + 1398));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s715retdec.c
// Address range: 0x4b80 - 0x4cec
// Line range:    55 - 57
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int32_t g_41_l, int32_t g_51_l, char g_54_l, int32_t g_55_l, int32_t g_56_l, int32_t g_73_l, int32_t g_85_l, char g_107_l, char g_135_l, int32_t g_136_l, int16_t g_141_l, int32_t g_179_l, int32_t g_195_l, char g_196_l, int32_t g_201_l, int16_t g_237_l, int16_t g_382_l, char g_392_l, int32_t g_425_l, char g_432_l, char g_496_l, char g_607_l) {
    // 0x4b80
    int32_t v1; // 0x4b80
    *(int32_t *)(v1 + 0x248c) = g_5_l;
    *(int32_t *)(v1 + 0x2490) = g_8_l;
    *(int32_t *)(v1 + 0x2494) = g_9_l;
    *(int32_t *)(v1 + 0x2498) = g_10_l;
    *(int32_t *)(v1 + 0x249c) = g_11_l;
    *(int32_t *)(v1 + 0x24a0) = g_41_l;
    *(int32_t *)(v1 + 0x24a4) = g_51_l;
    *(int32_t *)(v1 + 0x24a8) = (int32_t)g_54_l;
    *(char *)(v1 + 0x24ac) = (char)g_55_l;
    *(int32_t *)(v1 + 0x24b0) = g_56_l;
    *(int32_t *)(v1 + 0x24b4) = g_73_l;
    *(int32_t *)(v1 + 0x24b8) = g_85_l;
    *(int32_t *)(v1 + 0x24bc) = (int32_t)g_107_l;
    *(char *)(v1 + 0x24e8) = g_135_l;
    *(char *)(v1 + 0x24c0) = (char)g_136_l;
    *(int32_t *)(v1 + 0x24c4) = (int32_t)g_141_l;
    *(int16_t *)(v1 + 0x24c8) = (int16_t)g_179_l;
    *(int32_t *)(v1 + 0x24cc) = g_195_l;
    *(int32_t *)(v1 + 0x24d0) = (int32_t)g_196_l;
    *(char *)(v1 + 0x24d4) = (char)g_201_l;
    *(int32_t *)(v1 + 0x24ec) = (int32_t)g_237_l;
    *(int16_t *)(v1 + 0x24d6) = g_382_l;
    *(int16_t *)(v1 + 0x24d8) = (int16_t)g_392_l;
    *(char *)(v1 + 0x24da) = (char)g_425_l;
    *(int32_t *)(v1 + 0x24f0) = (int32_t)g_432_l;
    *(char *)(v1 + 0x24db) = g_496_l;
    *(char *)(v1 + 0x24dc) = g_607_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4cf0 - 0x4d70
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x4cf0
    int32_t v1; // 0x4cf0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4d70 - 0x4db4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4d70
    int32_t v1; // 0x4d70
    int32_t * v2 = (int32_t *)(v1 + 0x22ef); // 0x4d83
    uint32_t v3 = *v2; // 0x4d83
    char v4; // 0x4d70
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2303 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x4db4 - 0x4dcc
int32_t _fini(void) {
    // 0x4db4
    int32_t v1; // 0x4db4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

