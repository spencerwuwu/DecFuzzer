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
int32_t set_var(int32_t g_11_l, int16_t g_13_l, int16_t g_16_l, int32_t g_21_l, int32_t g_22_l, int16_t g_53_l, char g_77_l, int32_t g_78_l, int32_t g_79_l, char g_89_l, int16_t g_92_l, int16_t g_131_l, char g_163_l, int16_t g_195_l, int32_t g_261_l, int16_t g_275_l, int16_t g_346_l, int16_t g_347_l, int32_t g_353_l);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s394retdec.c
// Address range: 0x11a0 - 0x14ef
// Line range:    305 - 333
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2e63)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(0x1dbe, (char *)(v2 + 0x2e5c), v1);
    int32_t v3 = *(int32_t *)(v2 + 0x4e68); // 0x123a
    transparent_crc(v3, (char *)(v2 + 0x2e60), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x4e6c); // 0x125c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x2e65), v1);
    uint16_t v5 = *(int16_t *)(v2 + 0x4e6e); // 0x127f
    transparent_crc((int32_t)v5, (char *)(v2 + 0x2e6a), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x4e70); // 0x12a2
    transparent_crc(v6, (char *)(v2 + 0x2e6f), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e74); // 0x12c4
    transparent_crc(v7, (char *)(v2 + 0x2e74), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x4e78); // 0x12e6
    transparent_crc((int32_t)v8, (char *)(v2 + 0x2e79), v1);
    unsigned char v9 = *(char *)(v2 + 0x4e7a); // 0x1309
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e7e), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e7c); // 0x132c
    transparent_crc(v10, (char *)(v2 + 0x2e83), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e80); // 0x134e
    transparent_crc(v11, (char *)(v2 + 0x2e88), v1);
    unsigned char v12 = *(char *)(v2 + 0x4e84); // 0x1370
    transparent_crc((int32_t)v12, (char *)(v2 + 0x2e8d), v1);
    uint16_t v13 = *(int16_t *)(v2 + 0x4e86); // 0x1393
    transparent_crc((int32_t)v13, (char *)(v2 + 0x2e92), v1);
    int16_t v14 = *(int16_t *)(v2 + 0x4e88); // 0x13b6
    transparent_crc((int32_t)v14, (char *)(v2 + 0x2e97), v1);
    unsigned char v15 = *(char *)(v2 + 0x4e8a); // 0x13d9
    transparent_crc((int32_t)v15, (char *)(v2 + 0x2e9d), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x4e8c); // 0x13fc
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2ea3), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x4e90); // 0x141f
    transparent_crc(v17, (char *)(v2 + 0x2ea9), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4e94); // 0x1441
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eaf), v1);
    int16_t v19 = *(int16_t *)(v2 + 0x4e96); // 0x1464
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb5), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x4ea4); // 0x1487
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2ebb), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4e98); // 0x14ad
    transparent_crc(v21, (char *)(v2 + 0x2ec1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4e9c), v1);
    return 0;
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x14f0 - 0x14f5
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1500 - 0x15a8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x157a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1541
        while (v1 != 0) {
            // 0x1547
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1585
        int32_t v5; // 0x1500
        *(int32_t *)(v5 + 0x4b49 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s394retdec.c
// Address range: 0x15b0 - 0x314b
// Line range:    57 - 298
int32_t func_1(void) {
    // 0x15b0
    set_var(-0x7091045f, 0, 0x196f, 1, 1, 0, 83, -0x4faa, 2, 8, 1, 0x1c00, 7, -1, 0x33165017, 0x3e12, -0x2c91, 0, -3);
    return 0x1c00;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3150 - 0x31af
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3150
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3150
    if (v1 != 0) {
        // 0x3184
        printf((char *)(v1 + 3863));
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x31b0 - 0x31e4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x31b0
    int32_t v1; // 0x31b0
    printf((char *)(v1 + 3802));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s394retdec.c
// Address range: 0x31f0 - 0x3302
// Line range:    47 - 49
int32_t set_var(int32_t g_11_l, int16_t g_13_l, int16_t g_16_l, int32_t g_21_l, int32_t g_22_l, int16_t g_53_l, char g_77_l, int32_t g_78_l, int32_t g_79_l, char g_89_l, int16_t g_92_l, int16_t g_131_l, char g_163_l, int16_t g_195_l, int32_t g_261_l, int16_t g_275_l, int16_t g_346_l, int16_t g_347_l, int32_t g_353_l) {
    // 0x31f0
    int32_t v1; // 0x31f0
    *(int32_t *)(v1 + 0x2e1c) = (int32_t)g_13_l;
    *(int16_t *)(v1 + 0x2e20) = g_16_l;
    *(int16_t *)(v1 + 0x2e22) = (int16_t)g_21_l;
    *(int32_t *)(v1 + 0x2e24) = g_22_l;
    *(int32_t *)(v1 + 0x2e28) = (int32_t)g_53_l;
    *(int16_t *)(v1 + 0x2e2c) = (int16_t)g_77_l;
    *(char *)(v1 + 0x2e2e) = (char)g_78_l;
    *(int32_t *)(v1 + 0x2e30) = g_79_l;
    *(int32_t *)(v1 + 0x2e34) = (int32_t)g_89_l;
    *(char *)(v1 + 0x2e38) = (char)g_92_l;
    *(int16_t *)(v1 + 0x2e3a) = g_131_l;
    *(int16_t *)(v1 + 0x2e3c) = (int16_t)g_163_l;
    *(char *)(v1 + 0x2e3e) = (char)g_195_l;
    *(int16_t *)(v1 + 0x2e40) = (int16_t)g_261_l;
    *(int32_t *)(v1 + 0x2e44) = (int32_t)g_275_l;
    *(int16_t *)(v1 + 0x2e48) = g_346_l;
    *(int16_t *)(v1 + 0x2e4a) = g_347_l;
    *(int16_t *)(v1 + 0x2e58) = (int16_t)g_353_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3310 - 0x3390
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3310
    int32_t v1; // 0x3310
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3390 - 0x33d4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x3390
    int32_t v1; // 0x3390
    int32_t * v2 = (int32_t *)(v1 + 0x2caf); // 0x33a3
    uint32_t v3 = *v2; // 0x33a3
    char v4; // 0x3390
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2cbb + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x33d4 - 0x33ec
int32_t _fini(void) {
    // 0x33d4
    int32_t v1; // 0x33d4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

