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
int32_t set_var(int32_t g_12_l, int32_t g_23_l, char g_26_l, int32_t g_39_l, char g_40_l, int32_t g_51_l, int32_t g_52_l, int16_t g_83_l, int32_t g_92_l, int32_t g_144_l, int16_t g_145_l, int32_t g_146_l, int32_t g_149_l, int16_t g_152_l, int16_t g_158_l, int16_t g_159_l, char g_169_l, int32_t g_203_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x51ed
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t __libc_start_main(int32_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x1024
int32_t _init(void) {
    // 0x1000
    int32_t v1; // 0x1000
    __x86_get_pc_thunk_bx(v1);
    return *(int32_t *)(v1 + 0x3fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x3f68); // 0x1090
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
    return v1 + 0x3f9f;
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
    char * v3 = (char *)(v1 + 0x3f07); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s218retdec.c
// Address range: 0x11a0 - 0x14a9
// Line range:    180 - 206
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e78)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e61), v1);
    char v5 = *(char *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e66), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1281
    transparent_crc(v6, (char *)(v2 + 0x1e6b), v1);
    unsigned char v7 = *(char *)(v2 + 0x3e78); // 0x12a3
    transparent_crc((int32_t)v7, (char *)(v2 + 0x1e70), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e75), v1);
    int32_t v9 = *(int32_t *)(v2 + 0x3e80); // 0x12e8
    transparent_crc(v9, (char *)(v2 + 0x1e7a), v1);
    int16_t v10 = *(int16_t *)(v2 + 0x3e84); // 0x130a
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7f), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e88); // 0x132d
    transparent_crc(v11, (char *)(v2 + 0x1e84), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x3eac); // 0x134f
    transparent_crc(v12, (char *)(v2 + 0x1e89), v1);
    int16_t v13 = *(int16_t *)(v2 + 0x3e8c); // 0x1371
    transparent_crc((int32_t)v13, (char *)(v2 + 0x1e8f), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e90); // 0x1397
    transparent_crc(v14, (char *)(v2 + 0x1e95), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e94); // 0x13b9
    transparent_crc(v15, (char *)(v2 + 0x1e9b), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x3e98); // 0x13db
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1ea1), v1);
    int16_t v17 = *(int16_t *)(v2 + 0x3e9a); // 0x13fe
    transparent_crc((int32_t)v17, (char *)(v2 + 0x1ea7), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e9c); // 0x1421
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1ead), v1);
    char v19 = *(char *)(v2 + 0x3e9e); // 0x1444
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eb3), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3ea0); // 0x1467
    transparent_crc(v20, (char *)(v2 + 0x1eb9), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea4), v1);
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
        *(int32_t *)(v5 + 0x3b91 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s218retdec.c
// Address range: 0x1570 - 0x224f
// Line range:    55 - 173
int32_t func_1(void) {
    // 0x20fa
    set_var(-0x57ca742c, -0x537bd078, 0, 1, 83, -0x7c8210a1, -5, (int16_t)&g1, 7, 0, -5, -2, 4, 7, 0x44eb, -0x653c, -1, -0x645b6f99);
    return -3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2250 - 0x22af
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2250
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2250
    if (v1 != 0) {
        // 0x2284
        printf((char *)(v1 + 3599));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x22b0 - 0x22e4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x22b0
    int32_t v1; // 0x22b0
    printf((char *)(v1 + 3538));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s218retdec.c
// Address range: 0x22f0 - 0x23ea
// Line range:    45 - 47
int32_t set_var(int32_t g_12_l, int32_t g_23_l, char g_26_l, int32_t g_39_l, char g_40_l, int32_t g_51_l, int32_t g_52_l, int16_t g_83_l, int32_t g_92_l, int32_t g_144_l, int16_t g_145_l, int32_t g_146_l, int32_t g_149_l, int16_t g_152_l, int16_t g_158_l, int16_t g_159_l, char g_169_l, int32_t g_203_l) {
    // 0x22f0
    int32_t v1; // 0x22f0
    *(int32_t *)(v1 + 0x2d1c) = g_23_l;
    *(int32_t *)(v1 + 0x2d20) = (int32_t)g_26_l;
    *(char *)(v1 + 0x2d24) = (char)g_39_l;
    *(int32_t *)(v1 + 0x2d28) = (int32_t)g_40_l;
    *(char *)(v1 + 0x2d2c) = (char)g_51_l;
    *(int32_t *)(v1 + 0x2d30) = g_52_l;
    *(int32_t *)(v1 + 0x2d34) = (int32_t)g_83_l;
    *(int16_t *)(v1 + 0x2d38) = (int16_t)g_92_l;
    *(int32_t *)(v1 + 0x2d3c) = g_144_l;
    *(int32_t *)(v1 + 0x2d60) = (int32_t)g_145_l;
    *(int16_t *)(v1 + 0x2d40) = (int16_t)g_146_l;
    *(int32_t *)(v1 + 0x2d44) = g_149_l;
    *(int32_t *)(v1 + 0x2d48) = (int32_t)g_152_l;
    *(int16_t *)(v1 + 0x2d4c) = g_158_l;
    *(int16_t *)(v1 + 0x2d4e) = g_159_l;
    *(int16_t *)(v1 + 0x2d50) = (int16_t)g_169_l;
    *(char *)(v1 + 0x2d52) = (char)g_203_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x23f0 - 0x2470
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x23f0
    int32_t v1; // 0x23f0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2470 - 0x24b4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2470
    int32_t v1; // 0x2470
    int32_t * v2 = (int32_t *)(v1 + 0x2bd7); // 0x2483
    uint32_t v3 = *v2; // 0x2483
    char v4; // 0x2470
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2be3 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x24b4 - 0x24cc
int32_t _fini(void) {
    // 0x24b4
    int32_t v1; // 0x24b4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

