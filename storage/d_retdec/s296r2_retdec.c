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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_7_l, int32_t g_10_l, int32_t g_15_l, int32_t g_17_l, int16_t g_18_l, int16_t g_19_l, int32_t g_52_l, int32_t g_55_l, char g_71_l, int32_t g_85_l, int32_t g_93_l, char g_94_l, int32_t g_95_l, int32_t g_96_l, int32_t g_103_l, int32_t g_122_l, int16_t g_176_l, int32_t g_177_l, char g_230_l, int32_t g_232_l, int16_t g_268_l, int32_t g_269_l, int16_t g_286_l, int32_t g_300_l, int32_t g_383_l, int32_t g_423_l, char g_425_l, char g_494_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0x5d8b; // 0x1647
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
    return v1 + 0x5fd7;
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
    char * v3 = (char *)(v1 + 0x5f3f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s296r2.c
// Address range: 0x11a0 - 0x166a
// Line range:    382 - 421
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x3e92)) == 0;
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
    int16_t v10 = *(int16_t *)(v2 + 0x5e84); // 0x1308
    transparent_crc((int32_t)v10, (char *)(v2 + 0x3e7b), v1);
    uint16_t v11 = *(int16_t *)(v2 + 0x5e86); // 0x132b
    transparent_crc((int32_t)v11, (char *)(v2 + 0x3e80), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x5e88); // 0x1351
    transparent_crc(v12, (char *)(v2 + 0x3e85), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x5e8c); // 0x1373
    transparent_crc(v13, (char *)(v2 + 0x3e8a), v1);
    unsigned char v14 = *(char *)(v2 + 0x5e90); // 0x1395
    transparent_crc((int32_t)v14, (char *)(v2 + 0x3e8f), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x5e94); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x3e94), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x5e98); // 0x13da
    transparent_crc(v16, (char *)(v2 + 0x3e99), v1);
    unsigned char v17 = *(char *)(v2 + 0x5e9c); // 0x13fc
    transparent_crc((int32_t)v17, (char *)(v2 + 0x3e9e), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x5ea0); // 0x141f
    transparent_crc(v18, (char *)(v2 + 0x3ea3), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x5ea4); // 0x1441
    transparent_crc(v19, (char *)(v2 + 0x3ea8), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x5ea8); // 0x1463
    transparent_crc(v20, (char *)(v2 + 0x3ead), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x5eac); // 0x1485
    transparent_crc(v21, (char *)(v2 + 0x3eb3), v1);
    int16_t v22 = *(int16_t *)(v2 + 0x5eb0); // 0x14a7
    transparent_crc((int32_t)v22, (char *)(v2 + 0x3eb9), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x5eb4); // 0x14cd
    transparent_crc(v23, (char *)(v2 + 0x3ebf), v1);
    unsigned char v24 = *(char *)(v2 + 0x5eb8); // 0x14ef
    transparent_crc((int32_t)v24, (char *)(v2 + 0x3ec5), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x5ebc); // 0x1512
    transparent_crc(v25, (char *)(v2 + 0x3ecb), v1);
    int16_t v26 = *(int16_t *)(v2 + 0x5ec0); // 0x1534
    transparent_crc((int32_t)v26, (char *)(v2 + 0x3ed1), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x5ec4); // 0x1557
    transparent_crc(v27, (char *)(v2 + 0x3ed7), v1);
    uint16_t v28 = *(int16_t *)(v2 + 0x5ec8); // 0x1579
    transparent_crc((int32_t)v28, (char *)(v2 + 0x3edd), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x5ecc); // 0x159c
    transparent_crc(v29, (char *)(v2 + 0x3ee3), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x5ed0); // 0x15be
    transparent_crc(v30, (char *)(v2 + 0x3ee9), v1);
    int32_t v31 = *(int32_t *)(v2 + 0x5ed4); // 0x15e0
    transparent_crc(v31, (char *)(v2 + 0x3eef), v1);
    unsigned char v32 = *(char *)(v2 + 0x5ee4); // 0x1602
    transparent_crc((int32_t)v32, (char *)(v2 + 0x3ef5), v1);
    char v33 = *(char *)(v2 + 0x5ed8); // 0x1627
    transparent_crc((int32_t)v33, (char *)(v2 + 0x3efb), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x5edc), v1);
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
        *(int32_t *)(v5 + 0x5a09 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s296r2.c
// Address range: 0x1730 - 0x423f
// Line range:    68 - 375
char func_1(void) {
    // 0x4230
    set_var(1, 0x2e0cf572, 13, 4, 4, 1, 8, 0x6a71, (int16_t)&g1, -1, 0x70d8ac50, -5, -0x5b883508, 0x78016b84, -76, -1, 0x72e3e38f, -0x39429972, 0xfff7, 1, -1, -5, -0x3317d4d, -0x401d, -3, -3, 0xc799684, -9, -0x57713f3, 0, -3);
    return -1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4240 - 0x429f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4240
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x4240
    if (v1 != 0) {
        // 0x4274
        printf((char *)(v1 + 3681));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x42a0 - 0x42d4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x42a0
    int32_t v1; // 0x42a0
    printf((char *)(v1 + 3620));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s296r2.c
// Address range: 0x42e0 - 0x447c
// Line range:    58 - 60
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_7_l, int32_t g_10_l, int32_t g_15_l, int32_t g_17_l, int16_t g_18_l, int16_t g_19_l, int32_t g_52_l, int32_t g_55_l, char g_71_l, int32_t g_85_l, int32_t g_93_l, char g_94_l, int32_t g_95_l, int32_t g_96_l, int32_t g_103_l, int32_t g_122_l, int16_t g_176_l, int32_t g_177_l, char g_230_l, int32_t g_232_l, int16_t g_268_l, int32_t g_269_l, int16_t g_286_l, int32_t g_300_l, int32_t g_383_l, int32_t g_423_l, char g_425_l, char g_494_l) {
    // 0x42e0
    int32_t v1; // 0x42e0
    *(int32_t *)(v1 + 0x2d2c) = g_3_l;
    *(int32_t *)(v1 + 0x2d30) = g_4_l;
    *(int32_t *)(v1 + 0x2d34) = g_7_l;
    *(int32_t *)(v1 + 0x2d38) = g_10_l;
    *(int32_t *)(v1 + 0x2d3c) = g_15_l;
    *(int32_t *)(v1 + 0x2d40) = g_17_l;
    *(int32_t *)(v1 + 0x2d44) = (int32_t)g_18_l;
    *(int16_t *)(v1 + 0x2d48) = g_19_l;
    *(int16_t *)(v1 + 0x2d4a) = (int16_t)g_52_l;
    *(int32_t *)(v1 + 0x2d4c) = g_55_l;
    *(int32_t *)(v1 + 0x2d50) = (int32_t)g_71_l;
    *(char *)(v1 + 0x2d54) = (char)g_85_l;
    *(int32_t *)(v1 + 0x2d58) = g_93_l;
    *(int32_t *)(v1 + 0x2d5c) = (int32_t)g_94_l;
    *(char *)(v1 + 0x2d60) = (char)g_95_l;
    *(int32_t *)(v1 + 0x2d64) = g_96_l;
    *(int32_t *)(v1 + 0x2d68) = g_103_l;
    *(int32_t *)(v1 + 0x2d6c) = g_122_l;
    *(int32_t *)(v1 + 0x2d70) = (int32_t)g_176_l;
    *(int16_t *)(v1 + 0x2d74) = (int16_t)g_177_l;
    *(int32_t *)(v1 + 0x2d78) = (int32_t)g_230_l;
    *(char *)(v1 + 0x2d7c) = (char)g_232_l;
    *(int32_t *)(v1 + 0x2d80) = (int32_t)g_268_l;
    *(int16_t *)(v1 + 0x2d84) = (int16_t)g_269_l;
    *(int32_t *)(v1 + 0x2d88) = (int32_t)g_286_l;
    *(int16_t *)(v1 + 0x2d8c) = (int16_t)g_300_l;
    *(int32_t *)(v1 + 0x2d90) = g_383_l;
    *(int32_t *)(v1 + 0x2d94) = g_423_l;
    *(int32_t *)(v1 + 0x2d98) = (int32_t)g_425_l;
    *(char *)(v1 + 0x2da8) = g_494_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4480 - 0x4500
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x4480
    int32_t v1; // 0x4480
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4500 - 0x4544
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x4500
    int32_t v1; // 0x4500
    int32_t * v2 = (int32_t *)(v1 + 0x2b7f); // 0x4513
    uint32_t v3 = *v2; // 0x4513
    char v4; // 0x4500
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2b8b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x4544 - 0x455c
int32_t _fini(void) {
    // 0x4544
    int32_t v1; // 0x4544
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

