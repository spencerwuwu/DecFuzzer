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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, char g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_31_l, char g_44_l, char g_73_l, int32_t g_115_l, int16_t g_116_l, int32_t g_133_l, int32_t g_192_l, int32_t g_231_l, int32_t g_245_l, int32_t g_246_l, int16_t g_250_l, int32_t g_263_l, int32_t g_264_l, char g_271_l, int16_t g_275_l);
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
    return v1 + 0x3fa3;
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
    char * v3 = (char *)(v1 + 0x3f0b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s438r2.c
// Address range: 0x11a0 - 0x14f0
// Line range:    235 - 263
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1e9c)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x3e6c); // 0x123c
    transparent_crc(v4, (char *)(v2 + 0x1e60), v1);
    char v5 = *(char *)(v2 + 0x3e70); // 0x125e
    transparent_crc((int32_t)v5, (char *)(v2 + 0x1e64), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x3e74); // 0x1283
    transparent_crc(v6, (char *)(v2 + 0x1e68), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e78); // 0x12a5
    transparent_crc(v7, (char *)(v2 + 0x1e6c), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e7c); // 0x12c7
    transparent_crc(v8, (char *)(v2 + 0x1e71), v1);
    char v9 = *(char *)(v2 + 0x3e80); // 0x12e9
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e76), v1);
    char v10 = *(char *)(v2 + 0x3e81); // 0x130c
    transparent_crc((int32_t)v10, (char *)(v2 + 0x1e7b), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x3e84); // 0x132f
    transparent_crc(v11, (char *)(v2 + 0x1e80), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e88); // 0x1351
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e86), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e8c); // 0x1374
    transparent_crc(v13, (char *)(v2 + 0x1e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e90); // 0x1396
    transparent_crc(v14, (char *)(v2 + 0x1e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x3eb0); // 0x13b8
    transparent_crc(v15, (char *)(v2 + 0x1e98), v1);
    int32_t v16 = *(int32_t *)(v2 + 0x3e94); // 0x13da
    transparent_crc(v16, (char *)(v2 + 0x1e9e), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x3e98); // 0x13fc
    transparent_crc(v17, (char *)(v2 + 0x1ea4), v1);
    uint16_t v18 = *(int16_t *)(v2 + 0x3e9c); // 0x141e
    transparent_crc((int32_t)v18, (char *)(v2 + 0x1eaa), v1);
    int32_t v19 = *(int32_t *)(v2 + 0x3ea0); // 0x1441
    transparent_crc(v19, (char *)(v2 + 0x1eb0), v1);
    int32_t v20 = *(int32_t *)(v2 + 0x3eb4); // 0x1463
    transparent_crc(v20, (char *)(v2 + 0x1eb6), v1);
    unsigned char v21 = *(char *)(v2 + 0x3ea4); // 0x1485
    transparent_crc((int32_t)v21, (char *)(v2 + 0x1ebc), v1);
    uint16_t v22 = *(int16_t *)(v2 + 0x3ea6); // 0x14aa
    transparent_crc((int32_t)v22, (char *)(v2 + 0x1ec2), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3ea8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
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
        *(int32_t *)(v5 + 0x3b59 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s438r2.c
// Address range: 0x15b0 - 0x258b
// Line range:    57 - 228
char func_1(void) {
    // 0x2405
    set_var(-0x81d8666, 0, -4, 0x173bf38c, -0x528bb2fe, -0x45f276b0, 47, -1, -0x45f276b0, -1, -0x1b219d70, -0x1b26df17, 0, 0xf675b37, -0x53d32456, 8, -0x7b6a7ec0, 0, -111, 2);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2590 - 0x25ef
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2590
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x2590
    if (v1 != 0) {
        // 0x25c4
        printf((char *)(v1 + 2776));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x25f0 - 0x2624
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x25f0
    int32_t v1; // 0x25f0
    printf((char *)(v1 + 2715));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s438r2.c
// Address range: 0x2630 - 0x273c
// Line range:    47 - 49
int32_t set_var(int32_t g_2_l, int32_t g_3_l, char g_8_l, int32_t g_9_l, int32_t g_10_l, int32_t g_31_l, char g_44_l, char g_73_l, int32_t g_115_l, int16_t g_116_l, int32_t g_133_l, int32_t g_192_l, int32_t g_231_l, int32_t g_245_l, int32_t g_246_l, int16_t g_250_l, int32_t g_263_l, int32_t g_264_l, char g_271_l, int16_t g_275_l) {
    // 0x2630
    int32_t v1; // 0x2630
    *(int32_t *)(v1 + 0x29dc) = g_3_l;
    *(int32_t *)(v1 + 0x29e0) = (int32_t)g_8_l;
    *(char *)(v1 + 0x29e4) = (char)g_9_l;
    *(int32_t *)(v1 + 0x29e8) = g_10_l;
    *(int32_t *)(v1 + 0x29ec) = g_31_l;
    *(int32_t *)(v1 + 0x29f0) = (int32_t)g_44_l;
    *(char *)(v1 + 0x29f4) = g_73_l;
    *(char *)(v1 + 0x29f5) = (char)g_115_l;
    *(int32_t *)(v1 + 0x29f8) = (int32_t)g_116_l;
    *(int16_t *)(v1 + 0x29fc) = (int16_t)g_133_l;
    *(int32_t *)(v1 + 0x2a00) = g_192_l;
    *(int32_t *)(v1 + 0x2a04) = g_231_l;
    *(int32_t *)(v1 + 0x2a24) = g_245_l;
    *(int32_t *)(v1 + 0x2a08) = g_246_l;
    *(int32_t *)(v1 + 0x2a0c) = (int32_t)g_250_l;
    *(int16_t *)(v1 + 0x2a10) = (int16_t)g_263_l;
    *(int32_t *)(v1 + 0x2a14) = g_264_l;
    *(int32_t *)(v1 + 0x2a28) = (int32_t)g_271_l;
    *(char *)(v1 + 0x2a18) = (char)g_275_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2740 - 0x27c0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x2740
    int32_t v1; // 0x2740
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27c0 - 0x2804
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x27c0
    int32_t v1; // 0x27c0
    int32_t * v2 = (int32_t *)(v1 + 0x288b); // 0x27d3
    uint32_t v3 = *v2; // 0x27d3
    char v4; // 0x27c0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x289b + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2804 - 0x281c
int32_t _fini(void) {
    // 0x2804
    int32_t v1; // 0x2804
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

