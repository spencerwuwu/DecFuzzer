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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int16_t g_31_l, int16_t g_60_l, int16_t g_61_l, int32_t g_69_l, int32_t g_102_l, int16_t g_104_l, char g_105_l, int32_t g_106_l, int32_t g_107_l, int16_t g_108_l, int32_t g_109_l, int32_t g_110_l, char g_113_l);
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
    return *(int32_t *)(v1 + 0x2fdb);
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
    int32_t v2 = *(int32_t *)(v1 + 0x2f68); // 0x1090
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
    return v1 + 0x2f93;
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
    char * v3 = (char *)(v1 + 0x2efb); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s926r2.c
// Address range: 0x11a0 - 0x1489
// Line range:    135 - 160
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 3695)) == 0;
    }
    // 0x11ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    int32_t v3 = *(int32_t *)(v2 + 0x2ea0); // 0x121a
    transparent_crc(v3, (char *)(v2 + 3676), v1);
    int32_t v4 = *(int32_t *)(v2 + 0x2e68); // 0x123c
    transparent_crc(v4, (char *)(v2 + 3680), v1);
    int32_t v5 = *(int32_t *)(v2 + 0x2ea4); // 0x125e
    transparent_crc(v5, (char *)(v2 + 3684), v1);
    int32_t v6 = *(int32_t *)(v2 + 0x2ea8); // 0x1280
    transparent_crc(v6, (char *)(v2 + 3688), v1);
    int16_t v7 = *(int16_t *)(v2 + 0x2e6c); // 0x12a2
    transparent_crc((int32_t)v7, (char *)(v2 + 3692), v1);
    int16_t v8 = *(int16_t *)(v2 + 0x2e6e); // 0x12c5
    transparent_crc((int32_t)v8, (char *)(v2 + 3697), v1);
    uint16_t v9 = *(int16_t *)(v2 + 0x2e70); // 0x12eb
    transparent_crc((int32_t)v9, (char *)(v2 + 3702), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x2e74); // 0x1311
    transparent_crc(v10, (char *)(v2 + 3707), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x2e78); // 0x1333
    transparent_crc(v11, (char *)(v2 + 3712), v1);
    int16_t v12 = *(int16_t *)(v2 + 0x2e7c); // 0x1355
    transparent_crc((int32_t)v12, (char *)(v2 + 3718), v1);
    char v13 = *(char *)(v2 + 0x2e7e); // 0x1378
    transparent_crc((int32_t)v13, (char *)(v2 + 3724), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x2e80); // 0x139b
    transparent_crc(v14, (char *)(v2 + 3730), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x2e84); // 0x13bd
    transparent_crc(v15, (char *)(v2 + 3736), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x2e88); // 0x13df
    transparent_crc((int32_t)v16, (char *)(v2 + 3742), v1);
    int32_t v17 = *(int32_t *)(v2 + 0x2e8c); // 0x1402
    transparent_crc(v17, (char *)(v2 + 3748), v1);
    int32_t v18 = *(int32_t *)(v2 + 0x2e90); // 0x1424
    transparent_crc(v18, (char *)(v2 + 3754), v1);
    char v19 = *(char *)(v2 + 0x2e94); // 0x1446
    transparent_crc((int32_t)v19, (char *)(v2 + 3760), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2e98), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1490 - 0x1495
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1490
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14a0 - 0x1548
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x151a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x14e1
        while (v1 != 0) {
            // 0x14e7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1525
        int32_t v5; // 0x14a0
        *(int32_t *)(v5 + 0x2bad + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s926r2.c
// Address range: 0x1550 - 0x1b3b
// Line range:    58 - 127
char func_1(void) {
    // 0x1550
    set_var(-30, -8, 0, 1, 0, 1, 1, -0x2a4ed738, -21, 0x48cc, 20, -0xbbfaaa, 1, 0x39db, -0x1e7946a1, -0x2a8cb39d, 1);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1b40 - 0x1b9f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1b40
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x1b40
    if (v1 != 0) {
        // 0x1b74
        printf((char *)(v1 + 1302));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1ba0 - 0x1bd4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1ba0
    int32_t v1; // 0x1ba0
    printf((char *)(v1 + 1241));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s926r2.c
// Address range: 0x1be0 - 0x1cce
// Line range:    48 - 50
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_6_l, int32_t g_7_l, int16_t g_31_l, int16_t g_60_l, int16_t g_61_l, int32_t g_69_l, int32_t g_102_l, int16_t g_104_l, char g_105_l, int32_t g_106_l, int32_t g_107_l, int16_t g_108_l, int32_t g_109_l, int32_t g_110_l, char g_113_l) {
    // 0x1be0
    int32_t v1; // 0x1be0
    *(int32_t *)(v1 + 0x2464) = g_5_l;
    *(int32_t *)(v1 + 0x242c) = g_6_l;
    *(int32_t *)(v1 + 0x2468) = g_7_l;
    *(int32_t *)(v1 + 0x246c) = (int32_t)g_31_l;
    *(int16_t *)(v1 + 0x2430) = g_60_l;
    *(int16_t *)(v1 + 0x2432) = g_61_l;
    *(int16_t *)(v1 + 0x2434) = (int16_t)g_69_l;
    *(int32_t *)(v1 + 0x2438) = g_102_l;
    *(int32_t *)(v1 + 0x243c) = (int32_t)g_104_l;
    *(int16_t *)(v1 + 0x2440) = (int16_t)g_105_l;
    *(char *)(v1 + 0x2442) = (char)g_106_l;
    *(int32_t *)(v1 + 0x2444) = g_107_l;
    *(int32_t *)(v1 + 0x2448) = (int32_t)g_108_l;
    *(int16_t *)(v1 + 0x244c) = (int16_t)g_109_l;
    *(int32_t *)(v1 + 0x2450) = g_110_l;
    *(int32_t *)(v1 + 0x2454) = (int32_t)g_113_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1cd0 - 0x1d50
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x1cd0
    int32_t v1; // 0x1cd0
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1d50 - 0x1d94
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x1d50
    int32_t v1; // 0x1d50
    int32_t * v2 = (int32_t *)(v1 + 0x22eb); // 0x1d63
    uint32_t v3 = *v2; // 0x1d63
    char v4; // 0x1d50
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x22ff + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x1d94 - 0x1dac
int32_t _fini(void) {
    // 0x1d94
    int32_t v1; // 0x1d94
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

