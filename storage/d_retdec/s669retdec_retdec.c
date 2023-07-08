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
int32_t set_var(int32_t g_3_l, int32_t g_47_l, int32_t g_48_l, int32_t g_50_l, char g_51_l, int32_t g_72_l, int16_t g_73_l, int16_t g_97_l, int32_t g_109_l, int32_t g_130_l, int32_t g_142_l, int32_t g_159_l, char g_160_l, int32_t g_198_l, int32_t g_200_l, int32_t g_224_l, int32_t g_226_l, int16_t g_236_l, int32_t g_240_l, char g_269_l, int16_t g_295_l, int16_t g_299_l, int32_t g_304_l, int32_t g_306_l, char g_307_l, int32_t g_308_l, char g_311_l, int32_t g_351_l, int16_t g_369_l, int32_t g_386_l, int32_t g_389_l, int16_t g_392_l, int32_t g_395_l, char g_413_l, int32_t g_416_l, int16_t g_417_l, int32_t g_418_l, char g_419_l, char g_434_l, int32_t g_514_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x4c7a7600; // 0x31d8
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x6fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x6f68); // 0x1090
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
    return v1 + 0x6fe3;
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
    char * v3 = (char *)(v1 + 0x6f4b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x11a0 - 0x17cd
// Line range:    424 - 473
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x4ef9)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x6e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x4e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x6ef0); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x4e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x6ef4); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x4e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x6e6c); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x4e6a), v1);
    char v7 = *(char *)(v2 + 0x6e70); // 0x12a2
    transparent_crc((int32_t)v7, (char *)(v2 + 0x4e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x6e74); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x4e74), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x6e78); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x4e79), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x6e7a); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x4e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x6e7c); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x4e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x6e80); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x4e89), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x6e84); // 0x1371
    transparent_crc(v13, (char *)(v2 + 0x4e8f), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x6e88); // 0x1393
    transparent_crc(v14, (char *)(v2 + 0x4e95), v1);
    char v15 = *(char *)(v2 + 0x6e8c); // 0x13b5
    transparent_crc((int32_t)v15, (char *)(v2 + 0x4e9b), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x6ef8); // 0x13d8
    transparent_crc(v16, (char *)(v2 + 0x4ea1), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x6e90); // 0x13fa
    transparent_crc(v17, (char *)(v2 + 0x4ea7), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x6e94); // 0x141c
    transparent_crc(v18, (char *)(v2 + 0x4ead), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x6e98); // 0x143e
    transparent_crc(v19, (char *)(v2 + 0x4eb3), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x6e9c); // 0x1460
    transparent_crc((int32_t)v20, (char *)(v2 + 0x4eb9), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x6ea0); // 0x1483
    transparent_crc(v21, (char *)(v2 + 0x4ebf), v1);
    transparent_crc(0, (char *)(v2 + 0x4ec5), v1);
    unsigned char v22 = *(char *)(v2 + 0x6ea4); // 0x14c7
    transparent_crc((int32_t)v22, (char *)(v2 + 0x4ecb), v1);
    int16_t v23 = *(int16_t *)(v2 + 0x6ea6); // 0x14ec
    transparent_crc((int32_t)v23, (char *)(v2 + 0x4ed1), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x6ea8); // 0x150f
    transparent_crc((int32_t)v24, (char *)(v2 + 0x4ed7), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x6eac); // 0x1535
    transparent_crc(v25, (char *)(v2 + 0x4edd), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x6eb0); // 0x1557
    transparent_crc(v26, (char *)(v2 + 0x4ee3), v1);
    char v27 = *(char *)(v2 + 0x6eb4); // 0x1579
    transparent_crc((int32_t)v27, (char *)(v2 + 0x4ee9), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x6eb8); // 0x159c
    transparent_crc(v28, (char *)(v2 + 0x4eef), v1);
    unsigned char v29 = *(char *)(v2 + 0x6ebc); // 0x15be
    transparent_crc((int32_t)v29, (char *)(v2 + 0x4ef5), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x6ec0); // 0x15e3
    transparent_crc(v30, (char *)(v2 + 0x4efb), v1);
    uint16_t v31 = *(int16_t *)(v2 + 0x6ec4); // 0x1605
    transparent_crc((int32_t)v31, (char *)(v2 + 0x4f01), v1);
    int32_t v32 = *(int32_t *)(v2 + 0x6ec8); // 0x1628
    transparent_crc(v32, (char *)(v2 + 0x4f07), v1);
    int32_t v33 = *(int32_t *)(v2 + 0x6efc); // 0x164a
    transparent_crc(v33, (char *)(v2 + 0x4f0d), v1);
    uint16_t v34 = *(int16_t *)(v2 + 0x6ecc); // 0x166c
    transparent_crc((int32_t)v34, (char *)(v2 + 0x4f13), v1);
    int32_t v35 = *(int32_t *)(v2 + 0x6ed0); // 0x1692
    transparent_crc(v35, (char *)(v2 + 0x4f19), v1);
    char v36 = *(char *)(v2 + 0x6f00); // 0x16b4
    transparent_crc((int32_t)v36, (char *)(v2 + 0x4f1f), v1);
    int32_t v37 = *(int32_t *)(v2 + 0x6ed4); // 0x16d9
    transparent_crc(v37, (char *)(v2 + 0x4f25), v1);
    int16_t v38 = *(int16_t *)(v2 + 0x6ed8); // 0x16fb
    transparent_crc((int32_t)v38, (char *)(v2 + 0x4f2b), v1);
    int32_t v39 = *(int32_t *)(v2 + 0x6edc); // 0x1721
    transparent_crc(v39, (char *)(v2 + 0x4f31), v1);
    unsigned char v40 = *(char *)(v2 + 0x6ee0); // 0x1743
    transparent_crc((int32_t)v40, (char *)(v2 + 0x4f37), v1);
    unsigned char v41 = *(char *)(v2 + 0x6ee1); // 0x1768
    transparent_crc((int32_t)v41, (char *)(v2 + 0x4f3d), v1);
    int32_t v42 = *(int32_t *)(v2 + 0x6ee4); // 0x178b
    transparent_crc(v42, (char *)(v2 + 0x4f43), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x6ee8), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x17d0 - 0x17d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x17d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x17e0 - 0x1888
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x185a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1821
        while (v1 != 0) {
            // 0x1827
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1865
        int32_t v5; // 0x17e0
        *(int32_t *)(v5 + 0x68c5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x1890 - 0x4e03
// Line range:    78 - 417
int32_t func_1(void) {
    // 0x4a4a
    set_var(1, 0, 0, -5, 120, 0x4141eda7, 4, 1, 0, 1, 0x4fa1a2bb, 0, 83, 0, 0x516bf4f6, -1, 1, 0x6804, -1, 2, 1, -0x37f6, -0x727930fd, 0xa2b921b, 3, -4, -16, -1, 0x5f07, -9, 0, -1, 0, 0, -3, -450, -0x3de265d5, 71, 1, 1);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4e10 - 0x4e6f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4e10
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x4e10
    if (v1 != 0) {
        // 0x4e44
        printf((char *)(v1 + (int32_t)&g1 - 0x1eff));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x4e70 - 0x4ea4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4e70
    int32_t v1; // 0x4e70
    printf((char *)(v1 + 0x129c));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s669retdec.c
// Address range: 0x4eb0 - 0x50f7
// Line range:    68 - 70
int32_t set_var(int32_t g_3_l, int32_t g_47_l, int32_t g_48_l, int32_t g_50_l, char g_51_l, int32_t g_72_l, int16_t g_73_l, int16_t g_97_l, int32_t g_109_l, int32_t g_130_l, int32_t g_142_l, int32_t g_159_l, char g_160_l, int32_t g_198_l, int32_t g_200_l, int32_t g_224_l, int32_t g_226_l, int16_t g_236_l, int32_t g_240_l, char g_269_l, int16_t g_295_l, int16_t g_299_l, int32_t g_304_l, int32_t g_306_l, char g_307_l, int32_t g_308_l, char g_311_l, int32_t g_351_l, int16_t g_369_l, int32_t g_386_l, int32_t g_389_l, int16_t g_392_l, int32_t g_395_l, char g_413_l, int32_t g_416_l, int16_t g_417_l, int32_t g_418_l, char g_419_l, char g_434_l, int32_t g_514_l) {
    // 0x4eb0
    int32_t v1; // 0x4eb0
    *(int32_t *)(v1 + 0x315c) = g_47_l;
    *(int32_t *)(v1 + 0x31e4) = g_48_l;
    *(int32_t *)(v1 + 0x31e8) = g_50_l;
    *(int32_t *)(v1 + 0x3160) = (int32_t)g_51_l;
    *(char *)(v1 + 0x3164) = (char)g_72_l;
    *(int32_t *)(v1 + 0x3168) = (int32_t)g_73_l;
    *(int16_t *)(v1 + 0x316c) = g_97_l;
    *(int16_t *)(v1 + 0x316e) = (int16_t)g_109_l;
    *(int32_t *)(v1 + 0x3170) = g_130_l;
    *(int32_t *)(v1 + 0x3174) = g_142_l;
    *(int32_t *)(v1 + 0x3178) = g_159_l;
    *(int32_t *)(v1 + 0x317c) = (int32_t)g_160_l;
    *(char *)(v1 + 0x3180) = (char)g_198_l;
    *(int32_t *)(v1 + 0x31ec) = g_200_l;
    *(int32_t *)(v1 + 0x3184) = g_224_l;
    *(int32_t *)(v1 + 0x3188) = g_226_l;
    *(int32_t *)(v1 + 0x318c) = (int32_t)g_236_l;
    *(int16_t *)(v1 + 0x3190) = (int16_t)g_240_l;
    *(int32_t *)(v1 + 0x3194) = (int32_t)g_269_l;
    *(char *)(v1 + 0x3198) = (char)g_295_l;
    *(int16_t *)(v1 + 0x319a) = g_299_l;
    *(int16_t *)(v1 + 0x319c) = (int16_t)g_304_l;
    *(int32_t *)(v1 + 0x31a0) = g_306_l;
    *(int32_t *)(v1 + 0x31a4) = (int32_t)g_307_l;
    *(char *)(v1 + 0x31a8) = (char)g_308_l;
    *(int32_t *)(v1 + 0x31ac) = (int32_t)g_311_l;
    *(char *)(v1 + 0x31b0) = (char)g_351_l;
    *(int32_t *)(v1 + 0x31b4) = (int32_t)g_369_l;
    *(int16_t *)(v1 + 0x31b8) = (int16_t)g_386_l;
    *(int32_t *)(v1 + 0x31bc) = g_389_l;
    *(int32_t *)(v1 + 0x31f0) = (int32_t)g_392_l;
    *(int16_t *)(v1 + 0x31c0) = (int16_t)g_395_l;
    *(int32_t *)(v1 + 0x31c4) = (int32_t)g_413_l;
    *(char *)(v1 + 0x31f4) = (char)g_416_l;
    *(int32_t *)(v1 + 0x31c8) = (int32_t)g_417_l;
    *(int16_t *)(v1 + 0x31cc) = (int16_t)g_418_l;
    *(int32_t *)(v1 + 0x31d0) = (int32_t)g_419_l;
    *(char *)(v1 + 0x31d4) = g_434_l;
    *(char *)(v1 + 0x31d5) = (char)g_514_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5100 - 0x5180
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x5100
    int32_t v1; // 0x5100
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x5180 - 0x51c4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x5180
    int32_t v1; // 0x5180
    int32_t * v2 = (int32_t *)(v1 + 0x2f0b); // 0x5193
    uint32_t v3 = *v2; // 0x5193
    char v4; // 0x5180
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f27 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x51c4 - 0x51dc
int32_t _fini(void) {
    // 0x51c4
    int32_t v1; // 0x51c4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

