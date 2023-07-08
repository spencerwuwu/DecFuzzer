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
int32_t set_var(int32_t g_11_l, int16_t g_46_l, int16_t g_47_l, char g_51_l, int32_t g_59_l, char g_63_l, int32_t g_65_l, int16_t g_88_l, char g_90_l, int16_t g_92_l, char g_114_l, int32_t g_121_l, int16_t g_194_l, char g_209_l, int32_t g_211_l, int16_t g_226_l, char g_228_l, char g_304_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x75ffffd1; // 0x2ffc
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
    return v1 + 0x4f8f;
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
    char * v3 = (char *)(v1 + 0x4ef7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x11a0 - 0x14ad
// Line range:    258 - 284
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2eaa)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x4e9c); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x2e5c), v1);
    int16_t v4 = *(int16_t *)(v2 + 0x4e68); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e61), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x4e6a); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e66), v1);
    char v6 = *(char *)(v2 + 0x4e6c); // 0x1282
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6b), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e70); // 0x12a5
    transparent_crc(v7, (char *)(v2 + 0x2e70), v1);
    char v8 = *(char *)(v2 + 0x4e74); // 0x12c7
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x4e78); // 0x12ea
    transparent_crc(v9, (char *)(v2 + 0x2e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x4e7c); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7f), v1);
    unsigned char v11 = *(char *)(v2 + 0x4e7e); // 0x132f
    transparent_crc((int32_t)v11, (char *)(v2 + 0x2e84), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x4e80); // 0x1352
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e89), v1);
    unsigned char v13 = *(char *)(v2 + 0x4ea0); // 0x1375
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8e), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e84); // 0x1398
    transparent_crc(v14, (char *)(v2 + 0x2e94), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x4e88); // 0x13ba
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9a), v1);
    unsigned char v16 = *(char *)(v2 + 0x4e8a); // 0x13dd
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea0), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e8c); // 0x1400
    transparent_crc(v17, (char *)(v2 + 0x2ea6), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x4e90); // 0x1422
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eac), v1);
    char v19 = *(char *)(v2 + 0x4e92); // 0x1445
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb2), v1);
    unsigned char v20 = *(char *)(v2 + 0x4e93); // 0x1468
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb8), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e94), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14b0 - 0x14b5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14c0 - 0x1568
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x153a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1501
        while (v1 != 0) {
            // 0x1507
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1545
        int32_t v5; // 0x14c0
        *(int32_t *)(v5 + 0x4b85 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x1570 - 0x2f43
// Line range:    59 - 251
int32_t func_1(void) {
    // 0x1570
    set_var(0, 0, 0x2000, 0, -0x372df630, 25, -0x99cab6e, 1985, -1, 7, 0, 1914, 1435, 1, 0x7f26b11, -0x16f6, -8, 90);
    return 90;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2f50 - 0x2faf
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2f50
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2f50
    if (v1 != 0) {
        // 0x2f84
        printf((char *)(v1 + 0x110e));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2fb0 - 0x2fe4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2fb0
    int32_t v1; // 0x2fb0
    printf((char *)(v1 + 0x10d1));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x2ff0 - 0x30ed
// Line range:    49 - 51
int32_t set_var(int32_t g_11_l, int16_t g_46_l, int16_t g_47_l, char g_51_l, int32_t g_59_l, char g_63_l, int32_t g_65_l, int16_t g_88_l, char g_90_l, int16_t g_92_l, char g_114_l, int32_t g_121_l, int16_t g_194_l, char g_209_l, int32_t g_211_l, int16_t g_226_l, char g_228_l, char g_304_l) {
    // 0x2ff0
    int32_t v1; // 0x2ff0
    *(int32_t *)(v1 + (int32_t)&g1 + 84) = (int32_t)g_46_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 32) = g_47_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 34) = (int16_t)g_51_l;
    *(char *)(v1 + (int32_t)&g1 + 36) = (char)g_59_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 40) = (int32_t)g_63_l;
    *(char *)(v1 + (int32_t)&g1 + 44) = (char)g_65_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 48) = (int32_t)g_88_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 52) = (int16_t)g_90_l;
    *(char *)(v1 + (int32_t)&g1 + 54) = (char)g_92_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 56) = (int16_t)g_114_l;
    *(char *)(v1 + (int32_t)&g1 + 88) = (char)g_121_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 60) = (int32_t)g_194_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 64) = (int16_t)g_209_l;
    *(char *)(v1 + (int32_t)&g1 + 66) = (char)g_211_l;
    *(int32_t *)(v1 + (int32_t)&g1 + 68) = (int32_t)g_226_l;
    *(int16_t *)(v1 + (int32_t)&g1 + 72) = (int16_t)g_228_l;
    *(char *)(v1 + (int32_t)&g1 + 74) = g_304_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x30f0 - 0x3170
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x30f0
    int32_t v1; // 0x30f0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3170 - 0x31b4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3170
    int32_t v1; // 0x3170
    int32_t * v2 = (int32_t *)(v1 + 0x2ec7); // 0x3183
    uint32_t v3 = *v2; // 0x3183
    char v4; // 0x3170
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2ed7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x31b4 - 0x31cc
int32_t _fini(void) {
    // 0x31b4
    int32_t v1; // 0x31b4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

