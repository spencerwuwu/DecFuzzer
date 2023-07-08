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
int32_t set_var(int32_t g_4_l, int32_t g_7_l, int32_t g_14_l, int32_t g_16_l, int32_t g_52_l, int16_t g_73_l, int32_t g_99_l, int32_t g_106_l, int32_t g_118_l, char g_135_l, int32_t g_151_l, int32_t g_157_l, char g_177_l, int32_t g_198_l, int32_t g_201_l, int32_t g_206_l, char g_234_l, int16_t g_235_l, int32_t g_267_l, int32_t g_268_l, char g_305_l, int16_t g_318_l, int32_t g_320_l, int32_t g_328_l, int16_t g_333_l, int32_t g_347_l);
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
    return v1 + 0x4fb7;
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
    char * v3 = (char *)(v1 + 0x4f1f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618retdec.c
// Address range: 0x11a0 - 0x15bc
// Line range:    299 - 333
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2eab)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x2e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x4e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x2e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e74); // 0x1280
    transparent_crc(v6, (char *)(v2 + 0x2e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e78); // 0x12a2
    transparent_crc(v7, (char *)(v2 + 0x2e6e), v1);
    uint16_t v8 = *(int16_t *)(v2 + 0x4ec4); // 0x12c4
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e73), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e7c); // 0x12e7
    transparent_crc(v9, (char *)(v2 + 0x2e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e80); // 0x1309
    transparent_crc(v10, (char *)(v2 + 0x2e7d), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e84); // 0x132b
    transparent_crc(v11, (char *)(v2 + 0x2e83), v1);
    char v12 = *(char *)(v2 + 0x4e88); // 0x134d
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e89), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4ec8); // 0x1370
    transparent_crc(v13, (char *)(v2 + 0x2e8f), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e8c); // 0x1392
    transparent_crc(v14, (char *)(v2 + 0x2e95), v1);
    char v15 = *(char *)(v2 + 0x4e90); // 0x13b4
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9b), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e94); // 0x13d7
    transparent_crc(v16, (char *)(v2 + 0x2ea1), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4ecc); // 0x13f9
    transparent_crc(v17, (char *)(v2 + 0x2ea7), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x4e98); // 0x141b
    transparent_crc(v18, (char *)(v2 + 0x2ead), v1);
    unsigned char v19 = *(char *)(v2 + 0x4e9c); // 0x143d
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb3), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x4e9e); // 0x1460
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb9), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4ea0); // 0x1486
    transparent_crc(v21, (char *)(v2 + 0x2ebf), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea4); // 0x14a8
    transparent_crc(v22, (char *)(v2 + 0x2ec5), v1);
    char v23 = *(char *)(v2 + 0x4ea8); // 0x14ca
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ecb), v1);
    int16_t v24 = *(int16_t *)(v2 + 0x4ed0); // 0x14ed
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ed1), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4eac); // 0x1513
    transparent_crc(v25, (char *)(v2 + 0x2ed7), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eb0); // 0x1535
    transparent_crc(v26, (char *)(v2 + 0x2edd), v1);
    uint16_t v27 = *(int16_t *)(v2 + 0x4eb4); // 0x1557
    transparent_crc((int32_t)v27, (char *)(v2 + 0x2ee3), v1);
    int32_t v28 = *(int32_t *)(v2 + 0x4eb8); // 0x157a
    transparent_crc(v28, (char *)(v2 + 0x2ee9), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ebc), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15c0 - 0x15c5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15d0 - 0x1678
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x164a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1611
        while (v1 != 0) {
            // 0x1617
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1655
        int32_t v5; // 0x15d0
        *(int32_t *)(v5 + 0x4aa5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618retdec.c
// Address range: 0x1680 - 0x346a
// Line range:    63 - 292
int16_t func_1(void) {
    // 0x1680
    set_var(2, -0x3aa74541, -0x57ce14dd, 0x45c1d102, 3, 0, -0x3e89a2be, -0x61bebb29, -9, 7, 0, 0x1ea64901, -1, -3, 0, -0x7499ffd, 4, 0x1d8f, -0x5c1242ab, -0x1eeca7e9, -61, 0, -2, -4, -0x26d0, 5);
    return 0x7ba2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3470 - 0x34cf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3470
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3470
    if (v1 != 0) {
        // 0x34a4
        printf((char *)(v1 + 3103));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x34d0 - 0x3504
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x34d0
    int32_t v1; // 0x34d0
    printf((char *)(v1 + 3042));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s618retdec.c
// Address range: 0x3510 - 0x3667
// Line range:    53 - 55
int32_t set_var(int32_t g_4_l, int32_t g_7_l, int32_t g_14_l, int32_t g_16_l, int32_t g_52_l, int16_t g_73_l, int32_t g_99_l, int32_t g_106_l, int32_t g_118_l, char g_135_l, int32_t g_151_l, int32_t g_157_l, char g_177_l, int32_t g_198_l, int32_t g_201_l, int32_t g_206_l, char g_234_l, int16_t g_235_l, int32_t g_267_l, int32_t g_268_l, char g_305_l, int16_t g_318_l, int32_t g_320_l, int32_t g_328_l, int16_t g_333_l, int32_t g_347_l) {
    // 0x3510
    int32_t v1; // 0x3510
    *(int32_t *)(v1 + 0x2afc) = g_7_l;
    *(int32_t *)(v1 + 0x2b00) = g_14_l;
    *(int32_t *)(v1 + 0x2b04) = g_16_l;
    *(int32_t *)(v1 + 0x2b08) = g_52_l;
    *(int32_t *)(v1 + 0x2b0c) = (int32_t)g_73_l;
    *(int16_t *)(v1 + 0x2b58) = (int16_t)g_99_l;
    *(int32_t *)(v1 + 0x2b10) = g_106_l;
    *(int32_t *)(v1 + 0x2b14) = g_118_l;
    *(int32_t *)(v1 + 0x2b18) = (int32_t)g_135_l;
    *(char *)(v1 + 0x2b1c) = (char)g_151_l;
    *(int32_t *)(v1 + 0x2b5c) = g_157_l;
    *(int32_t *)(v1 + 0x2b20) = (int32_t)g_177_l;
    *(char *)(v1 + 0x2b24) = (char)g_198_l;
    *(int32_t *)(v1 + 0x2b28) = g_201_l;
    *(int32_t *)(v1 + 0x2b60) = g_206_l;
    *(int32_t *)(v1 + 0x2b2c) = (int32_t)g_234_l;
    *(char *)(v1 + 0x2b30) = (char)g_235_l;
    *(int16_t *)(v1 + 0x2b32) = (int16_t)g_267_l;
    *(int32_t *)(v1 + 0x2b34) = g_268_l;
    *(int32_t *)(v1 + 0x2b38) = (int32_t)g_305_l;
    *(char *)(v1 + 0x2b3c) = (char)g_318_l;
    *(int16_t *)(v1 + 0x2b64) = (int16_t)g_320_l;
    *(int32_t *)(v1 + 0x2b40) = g_328_l;
    *(int32_t *)(v1 + 0x2b44) = (int32_t)g_333_l;
    *(int16_t *)(v1 + 0x2b48) = (int16_t)g_347_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3670 - 0x36f0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3670
    int32_t v1; // 0x3670
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x36f0 - 0x3734
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x36f0
    int32_t v1; // 0x36f0
    int32_t * v2 = (int32_t *)(v1 + 0x296f); // 0x3703
    uint32_t v3 = *v2; // 0x3703
    char v4; // 0x36f0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2987 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3734 - 0x374c
int32_t _fini(void) {
    // 0x3734
    int32_t v1; // 0x3734
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

