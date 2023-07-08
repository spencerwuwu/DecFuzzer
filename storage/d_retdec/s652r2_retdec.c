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
int32_t set_var(int32_t g_5_l, int32_t g_14_l, int32_t g_16_l, int16_t g_17_l, int32_t g_18_l, int32_t g_19_l, char g_32_l, int16_t g_45_l, char g_74_l, int16_t g_76_l, int32_t g_78_l, char g_79_l, int32_t g_110_l, char g_112_l, int32_t g_134_l, int32_t g_137_l, char g_138_l, int16_t g_139_l, int32_t g_143_l, char g_144_l, int32_t g_163_l, int32_t g_164_l, int32_t g_187_l, int32_t g_189_l, int16_t g_190_l, int32_t g_191_l, int32_t g_203_l);
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
    return v1 + 0x3fb7;
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
    char * v3 = (char *)(v1 + 0x3f1f); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s652r2.c
// Address range: 0x11a0 - 0x1607
// Line range:    217 - 253
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1eef)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e70); // 0x125e
    transparent_crc(v5, (char *)(v2 + 0x1e65), v1);
    int16_t v6 = *(int16_t *)(v2 + 0x3e74); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a6
    transparent_crc(v7, (char *)(v2 + 0x1e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c8
    transparent_crc(v8, (char *)(v2 + 0x1e74), v1);
    unsigned char v9 = *(char *)(v2 + 0x3e80); // 0x12ea
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e79), v1);
    uint16_t v10 = *(int16_t *)(v2 + 0x3e82); // 0x130f
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7e), v1);
    char v11 = *(char *)(v2 + 0x3e84); // 0x1332
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e83), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x3e86); // 0x1355
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3ec4); // 0x1378
    transparent_crc(v13, (char *)(v2 + 0x1e8d), v1);
    char v14 = *(char *)(v2 + 0x3e88); // 0x139a
    transparent_crc((int32_t)v14, (char *)(v2 + 0x1e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3e8c); // 0x13bd
    transparent_crc(v15, (char *)(v2 + 0x1e97), v1);
    char v16 = *(char *)(v2 + 0x3e90); // 0x13df
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9d), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e94); // 0x1402
    transparent_crc(v17, (char *)(v2 + 0x1ea3), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x3e98); // 0x1424
    transparent_crc(v18, (char *)(v2 + 0x1ea9), v1);
    char v19 = *(char *)(v2 + 0x3e9c); // 0x1446
    transparent_crc((int32_t)v19, (char *)(v2 + 0x1eaf), v1);
    int16_t v20 = *(int16_t *)(v2 + 0x3e9e); // 0x146b
    transparent_crc((int32_t)v20, (char *)(v2 + 0x1eb5), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x3ea0); // 0x1491
    transparent_crc(v21, (char *)(v2 + 0x1ebb), v1);
    unsigned char v22 = *(char *)(v2 + 0x3ea4); // 0x14b3
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec1), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x3ec8); // 0x14d6
    transparent_crc(v23, (char *)(v2 + 0x1ec7), v1);
    int32_t v24 = *(int32_t *)(v2 + 0x3ecc); // 0x14f8
    transparent_crc(v24, (char *)(v2 + 0x1ecd), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x3ea8); // 0x151a
    transparent_crc(v25, (char *)(v2 + 0x1ed3), v1);
    int32_t v26 = *(int32_t *)(v2 + 0x1f2c); // 0x153c
    transparent_crc(v26, (char *)(v2 + 0x1ed9), v1);
    int32_t v27 = *(int32_t *)(v2 + 0x3eac); // 0x155e
    transparent_crc(v27, (char *)(v2 + 0x1edf), v1);
    uint16_t v28 = *(int16_t *)(v2 + 0x3eb0); // 0x1580
    transparent_crc((int32_t)v28, (char *)(v2 + 0x1ee5), v1);
    int32_t v29 = *(int32_t *)(v2 + 0x3eb4); // 0x15a3
    transparent_crc(v29, (char *)(v2 + 0x1eeb), v1);
    int32_t v30 = *(int32_t *)(v2 + 0x3eb8); // 0x15c5
    transparent_crc(v30, (char *)(v2 + 0x1ef1), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ebc), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1610 - 0x1615
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1610
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1620 - 0x16c8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x169a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1661
        while (v1 != 0) {
            // 0x1667
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x16a5
        int32_t v5; // 0x1620
        *(int32_t *)(v5 + 0x3a51 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s652r2.c
// Address range: 0x16d0 - 0x2799
// Line range:    65 - 210
int32_t func_1(void) {
    // 0x258d
    set_var(11, 0x8700d35, 8, -0x29b3, -0x7c1ca7a4, -2, -102, -2, -64, -7, 0, 90, 0x1da04f93, -9, 0x452b0610, -4, -3, 0x1d2e, 0x1d3cf30, -99, 0, 0, 0x66f017b8, 0x29cee28c, -0x1470, 7, -4);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27a0 - 0x27ff
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x27a0
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x27a0
    if (v1 != 0) {
        // 0x27d4
        printf((char *)(v1 + 2295));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2800 - 0x2834
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2800
    int32_t v1; // 0x2800
    printf((char *)(v1 + 2234));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s652r2.c
// Address range: 0x2840 - 0x29a6
// Line range:    55 - 57
int32_t set_var(int32_t g_5_l, int32_t g_14_l, int32_t g_16_l, int16_t g_17_l, int32_t g_18_l, int32_t g_19_l, char g_32_l, int16_t g_45_l, char g_74_l, int16_t g_76_l, int32_t g_78_l, char g_79_l, int32_t g_110_l, char g_112_l, int32_t g_134_l, int32_t g_137_l, char g_138_l, int16_t g_139_l, int32_t g_143_l, char g_144_l, int32_t g_163_l, int32_t g_164_l, int32_t g_187_l, int32_t g_189_l, int16_t g_190_l, int32_t g_191_l, int32_t g_203_l) {
    // 0x2840
    int32_t v1; // 0x2840
    *(int32_t *)(v1 + 0x27cc) = g_14_l;
    *(int32_t *)(v1 + 0x27d0) = g_16_l;
    *(int32_t *)(v1 + 0x27d4) = (int32_t)g_17_l;
    *(int16_t *)(v1 + 0x27d8) = (int16_t)g_18_l;
    *(int32_t *)(v1 + 0x27dc) = g_19_l;
    *(int32_t *)(v1 + 0x27e0) = (int32_t)g_32_l;
    *(char *)(v1 + 0x27e4) = (char)g_45_l;
    *(int16_t *)(v1 + 0x27e6) = (int16_t)g_74_l;
    *(char *)(v1 + 0x27e8) = (char)g_76_l;
    *(int16_t *)(v1 + 0x27ea) = (int16_t)g_78_l;
    *(int32_t *)(v1 + 0x2828) = (int32_t)g_79_l;
    *(char *)(v1 + 0x27ec) = (char)g_110_l;
    *(int32_t *)(v1 + 0x27f0) = (int32_t)g_112_l;
    *(char *)(v1 + 0x27f4) = (char)g_134_l;
    *(int32_t *)(v1 + 0x27f8) = g_137_l;
    *(int32_t *)(v1 + 0x27fc) = (int32_t)g_138_l;
    *(char *)(v1 + 0x2800) = (char)g_139_l;
    *(int16_t *)(v1 + 0x2802) = (int16_t)g_143_l;
    *(int32_t *)(v1 + 0x2804) = (int32_t)g_144_l;
    *(char *)(v1 + 0x2808) = (char)g_163_l;
    *(int32_t *)(v1 + 0x282c) = g_164_l;
    *(int32_t *)(v1 + 0x2830) = g_187_l;
    *(int32_t *)(v1 + 0x280c) = g_189_l;
    *(int32_t *)(v1 + 0x2810) = (int32_t)g_190_l;
    *(int16_t *)(v1 + 0x2814) = (int16_t)g_191_l;
    *(int32_t *)(v1 + 0x2818) = g_203_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x29b0 - 0x2a30
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x29b0
    int32_t v1; // 0x29b0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a30 - 0x2a74
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2a30
    int32_t v1; // 0x2a30
    int32_t * v2 = (int32_t *)(v1 + 0x262f); // 0x2a43
    uint32_t v3 = *v2; // 0x2a43
    char v4; // 0x2a30
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2643 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2a74 - 0x2a8c
int32_t _fini(void) {
    // 0x2a74
    int32_t v1; // 0x2a74
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

