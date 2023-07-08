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
int32_t set_var(int16_t g_4_l, int32_t g_20_l, char g_24_l, int32_t g_31_l, int32_t g_52_l, int32_t g_53_l, char g_63_l, int16_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_119_l, int32_t g_123_l, int32_t g_126_l, char g_128_l, int32_t g_163_l, char g_170_l, int16_t g_172_l, int32_t g_192_l, int16_t g_198_l, char g_208_l, int32_t g_284_l, int32_t g_290_l, int32_t g_311_l, char g_312_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953retdec.c
// Address range: 0x11a0 - 0x15c2
// Line range:    252 - 286
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ee5)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    uint16_t v3 = *(int16_t *)(v2 + 0x4e68); // 0x121a
    transparent_crc((int32_t)v3, (char *)(v2 + 0x2e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x4e6c); // 0x123d
    transparent_crc(v4, (char *)(v2 + 0x2e60), v1);
    char v5 = *(char *)(v2 + 0x4e70); // 0x125f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e65), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e74); // 0x1284
    transparent_crc(v6, (char *)(v2 + 0x2e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e78); // 0x12a6
    transparent_crc(v7, (char *)(v2 + 0x2e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e7c); // 0x12c8
    transparent_crc(v8, (char *)(v2 + 0x2e74), v1);
    unsigned char v9 = *(char *)(v2 + 0x4ec4); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e79), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x4e80); // 0x130d
    transparent_crc((int32_t)v10, (char *)(v2 + 0x2e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e84); // 0x1330
    transparent_crc(v11, (char *)(v2 + 0x2e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e88); // 0x1352
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    char v13 = *(char *)(v2 + 0x4e8c); // 0x1374
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e90); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x2e93), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4ec8); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 0x2e99), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x4e94); // 0x13db
    transparent_crc(v16, (char *)(v2 + 0x2e9f), v1);
    unsigned char v17 = *(char *)(v2 + 0x4e98); // 0x13fd
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea5), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x2f20); // 0x1422
    transparent_crc(v18, (char *)(v2 + 0x2eab), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x4e9c); // 0x1444
    transparent_crc(v19, (char *)(v2 + 0x2eb1), v1);
    char v20 = *(char *)(v2 + 0x4ea0); // 0x1466
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb7), v1);
    uint16_t v21 = *(int16_t *)(v2 + 0x4ea2); // 0x1489
    transparent_crc((int32_t)v21, (char *)(v2 + 0x2ebd), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea4); // 0x14af
    transparent_crc(v22, (char *)(v2 + 0x2ec3), v1);
    uint16_t v23 = *(int16_t *)(v2 + 0x4ea8); // 0x14d1
    transparent_crc((int32_t)v23, (char *)(v2 + 0x2ec9), v1);
    unsigned char v24 = *(char *)(v2 + 0x4eaa); // 0x14f4
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ecf), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4eac); // 0x1519
    transparent_crc(v25, (char *)(v2 + 0x2ed5), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x4eb0); // 0x153b
    transparent_crc(v26, (char *)(v2 + 0x2edb), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x4eb4); // 0x155d
    transparent_crc(v27, (char *)(v2 + 0x2ee1), v1);
    unsigned char v28 = *(char *)(v2 + 0x4eb8); // 0x157f
    transparent_crc((int32_t)v28, (char *)(v2 + 0x2ee7), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4ebc), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x15d0 - 0x15d5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x15d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15e0 - 0x1688
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x165a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1621
        while (v1 != 0) {
            // 0x1627
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1665
        int32_t v5; // 0x15e0
        *(int32_t *)(v5 + 0x4a8d + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953retdec.c
// Address range: 0x1690 - 0x2fcc
// Line range:    67 - 245
int16_t func_1(void) {
    // 0x1690
    set_var(-1, 6, 8, -0x43959782, -1, -2, 0, -10, -0x4480b89d, 1, 4, -6, 0, 4, -119, -2, 56, 1, 5, -8, -2, 6, -0x631a015d, 5, -4);
    return -2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fd0 - 0x302f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2fd0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2fd0
    if (v1 != 0) {
        // 0x3004
        printf((char *)(v1 + 0x10bd));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3030 - 0x3064
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3030
    int32_t v1; // 0x3030
    printf((char *)(v1 + 0x1080));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s953retdec.c
// Address range: 0x3070 - 0x31bb
// Line range:    57 - 59
int32_t set_var(int16_t g_4_l, int32_t g_20_l, char g_24_l, int32_t g_31_l, int32_t g_52_l, int32_t g_53_l, char g_63_l, int16_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_119_l, int32_t g_123_l, int32_t g_126_l, char g_128_l, int32_t g_163_l, char g_170_l, int16_t g_172_l, int32_t g_192_l, int16_t g_198_l, char g_208_l, int32_t g_284_l, int32_t g_290_l, int32_t g_311_l, char g_312_l) {
    // 0x3070
    int32_t v1; // 0x3070
    *(int16_t *)(v1 + 0x2f9c) = (int16_t)g_20_l;
    *(int32_t *)(v1 + 0x2fa0) = (int32_t)g_24_l;
    *(char *)(v1 + 0x2fa4) = (char)g_31_l;
    *(int32_t *)(v1 + 0x2fa8) = g_52_l;
    *(int32_t *)(v1 + 0x2fac) = g_53_l;
    *(int32_t *)(v1 + 0x2fb0) = (int32_t)g_63_l;
    *(char *)(v1 + 0x2ff8) = (char)g_75_l;
    *(int16_t *)(v1 + 0x2fb4) = (int16_t)g_76_l;
    *(int32_t *)(v1 + 0x2fb8) = g_87_l;
    *(int32_t *)(v1 + 0x2fbc) = (int32_t)g_107_l;
    *(char *)(v1 + 0x2fc0) = (char)g_119_l;
    *(int32_t *)(v1 + 0x2fc4) = g_123_l;
    *(int32_t *)(v1 + 0x2ffc) = g_126_l;
    *(int32_t *)(v1 + 0x2fc8) = (int32_t)g_128_l;
    *(char *)(v1 + 0x2fcc) = (char)g_163_l;
    *(int32_t *)(v1 + 0x2fd0) = (int32_t)g_170_l;
    *(char *)(v1 + 0x2fd4) = (char)g_172_l;
    *(int16_t *)(v1 + 0x2fd6) = (int16_t)g_192_l;
    *(int32_t *)(v1 + 0x2fd8) = (int32_t)g_198_l;
    *(int16_t *)(v1 + 0x2fdc) = (int16_t)g_208_l;
    *(char *)(v1 + 0x2fde) = (char)g_284_l;
    *(int32_t *)(v1 + 0x2fe0) = g_290_l;
    *(int32_t *)(v1 + 0x2fe4) = g_311_l;
    *(int32_t *)(v1 + 0x2fe8) = (int32_t)g_312_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31c0 - 0x3240
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x31c0
    int32_t v1; // 0x31c0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3240 - 0x3284
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3240
    int32_t v1; // 0x3240
    int32_t * v2 = (int32_t *)(v1 + 0x2e1f); // 0x3253
    uint32_t v3 = *v2; // 0x3253
    char v4; // 0x3240
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2e2f + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x3284 - 0x329c
int32_t _fini(void) {
    // 0x3284
    int32_t v1; // 0x3284
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

