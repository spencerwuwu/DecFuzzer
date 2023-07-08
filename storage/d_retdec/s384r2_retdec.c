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
int32_t set_var(int32_t g_3_l, int16_t g_9_l, int32_t g_10_l, char g_43_l, int32_t g_45_l, int32_t g_59_l, char g_61_l, int32_t g_63_l, int16_t g_64_l, int16_t g_65_l, int32_t g_82_l, int32_t g_108_l, int16_t g_124_l, int16_t g_131_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x315f6700; // 0x3048
int32_t g2 = -0x1c64; // 0x30a8
int32_t g3;

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
    __libc_start_main(v2, a1, (char **)&v3, NULL, NULL, (void (*)())&g3);
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
    __x86_get_pc_thunk_dx((int32_t)&g3);
    int32_t v1; // 0x10b0
    return v1 + 0x3f8f;
}

// Address range: 0x10f0 - 0x1137
int32_t function_10f0(void) {
    // 0x10f0
    __x86_get_pc_thunk_dx((int32_t)&g3);
    return 0;
}

// Address range: 0x1140 - 0x118c
int32_t function_1140(void) {
    // 0x1140
    int32_t v1; // 0x1140
    int32_t v2 = __x86_get_pc_thunk_bx(v1); // 0x1148
    char * v3 = (char *)(v1 + 0x3ef7); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s384r2.c
// Address range: 0x11a0 - 0x1420
// Line range:    160 - 182
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x1ea1)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x3e68); // 0x121a
    transparent_crc(v3, (char *)(v2 + 0x1e5c), v1);
    uint16_t v4 = *(int16_t *)(v2 + 0x3e9c); // 0x123c
    transparent_crc((int32_t)v4, (char *)(v2 + 0x1e60), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x3e6c); // 0x125f
    transparent_crc(v5, (char *)(v2 + 0x1e64), v1);
    char v6 = *(char *)(v2 + 0x3e70); // 0x1281
    transparent_crc((int32_t)v6, (char *)(v2 + 0x1e69), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x3e74); // 0x12a4
    transparent_crc(v7, (char *)(v2 + 0x1e6e), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x3e78); // 0x12c6
    transparent_crc(v8, (char *)(v2 + 0x1e73), v1);
    char v9 = *(char *)(v2 + 0x3e7c); // 0x12e8
    transparent_crc((int32_t)v9, (char *)(v2 + 0x1e78), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x3e80); // 0x130b
    transparent_crc(v10, (char *)(v2 + 0x1e7d), v1);
    int16_t v11 = *(int16_t *)(v2 + 0x3e84); // 0x132d
    transparent_crc((int32_t)v11, (char *)(v2 + 0x1e82), v1);
    uint16_t v12 = *(int16_t *)(v2 + 0x3e86); // 0x1353
    transparent_crc((int32_t)v12, (char *)(v2 + 0x1e87), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x3e88); // 0x1376
    transparent_crc(v13, (char *)(v2 + 0x1e8c), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x3e8c); // 0x1398
    transparent_crc(v14, (char *)(v2 + 0x1e91), v1);
    uint16_t v15 = *(int16_t *)(v2 + 0x3e90); // 0x13ba
    transparent_crc((int32_t)v15, (char *)(v2 + 0x1e97), v1);
    uint16_t v16 = *(int16_t *)(v2 + 0x3e9e); // 0x13dd
    transparent_crc((int32_t)v16, (char *)(v2 + 0x1e9d), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x3e94), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1420 - 0x1425
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1420
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1430 - 0x14d8
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14aa
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x1471
        while (v1 != 0) {
            // 0x1477
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x14b5
        int32_t v5; // 0x1430
        *(int32_t *)(v5 + 0x3c11 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s384r2.c
// Address range: 0x14e0 - 0x1f40
// Line range:    51 - 153
char func_1(void) {
    // 0x1c70
    set_var(-0x2517360d, 35, -9, -112, 0x6fe0855b, -1, 6, -0x3a8b3c04, -5, -0x3fcb, 15, 273, -2731, 3);
    return 98;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f40 - 0x1f9f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f40
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1f40
    if (v1 != 0) {
        // 0x1f74
        printf((char *)(v1 + (int32_t)&g2 - 0x1fa5));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1fa0 - 0x1fd4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1fa0
    int32_t v1; // 0x1fa0
    printf((char *)(v1 + (int32_t)&g1 - 0x1f82));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s384r2.c
// Address range: 0x1fe0 - 0x20aa
// Line range:    41 - 43
int32_t set_var(int32_t g_3_l, int16_t g_9_l, int32_t g_10_l, char g_43_l, int32_t g_45_l, int32_t g_59_l, char g_61_l, int32_t g_63_l, int16_t g_64_l, int16_t g_65_l, int32_t g_82_l, int32_t g_108_l, int16_t g_124_l, int16_t g_131_l) {
    // 0x1fe0
    int32_t v1; // 0x1fe0
    *(int32_t *)(v1 + (int32_t)"g_9" + 32) = (int32_t)g_9_l;
    *(int16_t *)(v1 + (int32_t)"g_9" + 84) = (int16_t)g_10_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 36) = (int32_t)g_43_l;
    *(char *)(v1 + (int32_t)"g_9" + 40) = (char)g_45_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 44) = g_59_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 48) = (int32_t)g_61_l;
    *(char *)(v1 + (int32_t)"g_9" + 52) = (char)g_63_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 56) = (int32_t)g_64_l;
    *(int16_t *)(v1 + (int32_t)"g_9" + 60) = g_65_l;
    *(int16_t *)(v1 + (int32_t)"g_9" + 62) = (int16_t)g_82_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 64) = g_108_l;
    *(int32_t *)(v1 + (int32_t)"g_9" + 68) = (int32_t)g_124_l;
    *(int16_t *)(v1 + (int32_t)"g_9" + 72) = g_131_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20b0 - 0x2130
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x20b0
    int32_t v1; // 0x20b0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2130 - 0x2174
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x2130
    int32_t v1; // 0x2130
    int32_t * v2 = (int32_t *)(v1 + 0x2f07); // 0x2143
    uint32_t v3 = *v2; // 0x2143
    char v4; // 0x2130
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x2f13 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x2174 - 0x218c
int32_t _fini(void) {
    // 0x2174
    int32_t v1; // 0x2174
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

