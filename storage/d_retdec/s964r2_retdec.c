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
int32_t set_var(int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int16_t g_14_l, int32_t g_23_l, int32_t g_26_l, char g_56_l, int32_t g_57_l, int32_t g_58_l, int32_t g_72_l, int32_t g_82_l, int32_t g_104_l, int32_t g_159_l, int16_t g_160_l, char g_161_l, int16_t g_173_l, int16_t g_174_l, int16_t g_232_l, int32_t g_276_l, int32_t g_280_l, int32_t g_283_l, int16_t g_299_l, int32_t g_411_l, char g_413_l);
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
    return v1 + 0x4fb3;
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
    char * v3 = (char *)(v1 + 0x4f1b); // 0x1156
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s964r2.c
// Address range: 0x11a0 - 0x1579
// Line range:    382 - 414
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x11ce
    int32_t v2; // 0x11a0
    if (argv == (char **)2) {
        int32_t str = *(int32_t *)(v2 + 4); // 0x11da
        v1 = strcmp((char *)str, (char *)(v2 + 0x2ed8)) == 0;
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
    transparent_crc(v5, (char *)(v2 + 0x2e65), v1);
    uint16_t v6 = *(int16_t *)(v2 + 0x4ec0); // 0x1280
    transparent_crc((int32_t)v6, (char *)(v2 + 0x2e6a), v1);
    int32_t v7 = *(int32_t *)(v2 + 0x4e74); // 0x12a3
    transparent_crc(v7, (char *)(v2 + 0x2e6f), v1);
    int32_t v8 = *(int32_t *)(v2 + 0x4e78); // 0x12c5
    transparent_crc(v8, (char *)(v2 + 0x2e74), v1);
    char v9 = *(char *)(v2 + 0x4e7c); // 0x12e7
    transparent_crc((int32_t)v9, (char *)(v2 + 0x2e79), v1);
    int32_t v10 = *(int32_t *)(v2 + 0x4e80); // 0x130a
    transparent_crc(v10, (char *)(v2 + 0x2e7e), v1);
    int32_t v11 = *(int32_t *)(v2 + 0x4e84); // 0x132c
    transparent_crc(v11, (char *)(v2 + 0x2e83), v1);
    int32_t v12 = *(int32_t *)(v2 + 0x4e88); // 0x134e
    transparent_crc(v12, (char *)(v2 + 0x2e88), v1);
    int32_t v13 = *(int32_t *)(v2 + 0x4e8c); // 0x1370
    transparent_crc(v13, (char *)(v2 + 0x2e8d), v1);
    int32_t v14 = *(int32_t *)(v2 + 0x4e90); // 0x1392
    transparent_crc(v14, (char *)(v2 + 0x2e92), v1);
    int32_t v15 = *(int32_t *)(v2 + 0x4e94); // 0x13b4
    transparent_crc(v15, (char *)(v2 + 0x2e98), v1);
    int16_t v16 = *(int16_t *)(v2 + 0x4e98); // 0x13d6
    transparent_crc((int32_t)v16, (char *)(v2 + 0x2e9e), v1);
    unsigned char v17 = *(char *)(v2 + 0x4e9a); // 0x13f9
    transparent_crc((int32_t)v17, (char *)(v2 + 0x2ea4), v1);
    int16_t v18 = *(int16_t *)(v2 + 0x4e9c); // 0x141c
    transparent_crc((int32_t)v18, (char *)(v2 + 0x2eaa), v1);
    uint16_t v19 = *(int16_t *)(v2 + 0x4e9e); // 0x1442
    transparent_crc((int32_t)v19, (char *)(v2 + 0x2eb0), v1);
    uint16_t v20 = *(int16_t *)(v2 + 0x4ec2); // 0x1468
    transparent_crc((int32_t)v20, (char *)(v2 + 0x2eb6), v1);
    int32_t v21 = *(int32_t *)(v2 + 0x4ea0); // 0x148b
    transparent_crc(v21, (char *)(v2 + 0x2ebc), v1);
    int32_t v22 = *(int32_t *)(v2 + 0x4ea4); // 0x14ad
    transparent_crc(v22, (char *)(v2 + 0x2ec2), v1);
    int32_t v23 = *(int32_t *)(v2 + 0x4ea8); // 0x14cf
    transparent_crc(v23, (char *)(v2 + 0x2ec8), v1);
    uint16_t v24 = *(int16_t *)(v2 + 0x4eac); // 0x14f1
    transparent_crc((int32_t)v24, (char *)(v2 + 0x2ece), v1);
    int32_t v25 = *(int32_t *)(v2 + 0x4eb0); // 0x1514
    transparent_crc(v25, (char *)(v2 + 0x2ed4), v1);
    unsigned char v26 = *(char *)(v2 + 0x4eb4); // 0x1536
    transparent_crc((int32_t)v26, (char *)(v2 + 0x2eda), v1);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x4eb8), v1);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1580 - 0x1585
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1580
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1590 - 0x1638
// Line range:    58 - 75
void crc32_gentab(void) {
    for (int32_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x160a
        uint32_t v2 = i / 2;
        int32_t v3 = i % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
        v1--;
        int32_t v4 = v3; // 0x15d1
        while (v1 != 0) {
            // 0x15d7
            v2 = v4 / 2;
            v3 = v4 % 2 == 0 ? v2 : v2 ^ -0x12477ce0;
            v1--;
            v4 = v3;
        }
        // 0x1615
        int32_t v5; // 0x1590
        *(int32_t *)(v5 + 0x4ad5 + 4 * i) = v3;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s964r2.c
// Address range: 0x1640 - 0x3525
// Line range:    65 - 375
int32_t func_1(void) {
    // 0x1640
    set_var(0x566a927, -10, -0x2788, 0, 0x62939c01, -9, 4, 0x485393f1, 1, 0x1c9ac719, 2, -6, -0x8c4571a, -0x5999, 54, -0x3189, -0x3f73, 0, 0, -0x24fb1258, 0, 1, -0x31616ad6, 104);
    return -2;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3530 - 0x358f
// Line range:    95 - 101
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3530
    crc32_8bytes((int32_t)vname);
    int32_t v1; // 0x3530
    if (v1 != 0) {
        // 0x3564
        printf((char *)(v1 + 2896));
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x3590 - 0x35c4
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3590
    int32_t v1; // 0x3590
    printf((char *)(v1 + 2835));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s964r2.c
// Address range: 0x35d0 - 0x3715
// Line range:    55 - 57
int32_t set_var(int32_t g_9_l, int32_t g_10_l, int32_t g_11_l, int16_t g_14_l, int32_t g_23_l, int32_t g_26_l, char g_56_l, int32_t g_57_l, int32_t g_58_l, int32_t g_72_l, int32_t g_82_l, int32_t g_104_l, int32_t g_159_l, int16_t g_160_l, char g_161_l, int16_t g_173_l, int16_t g_174_l, int16_t g_232_l, int32_t g_276_l, int32_t g_280_l, int32_t g_283_l, int16_t g_299_l, int32_t g_411_l, char g_413_l) {
    // 0x35d0
    int32_t v1; // 0x35d0
    *(int32_t *)(v1 + 0x2a3c) = g_10_l;
    *(int32_t *)(v1 + 0x2a40) = g_11_l;
    *(int32_t *)(v1 + 0x2a44) = (int32_t)g_14_l;
    *(int16_t *)(v1 + 0x2a94) = (int16_t)g_23_l;
    *(int32_t *)(v1 + 0x2a48) = g_26_l;
    *(int32_t *)(v1 + 0x2a4c) = (int32_t)g_56_l;
    *(char *)(v1 + 0x2a50) = (char)g_57_l;
    *(int32_t *)(v1 + 0x2a54) = g_58_l;
    *(int32_t *)(v1 + 0x2a58) = g_72_l;
    *(int32_t *)(v1 + 0x2a5c) = g_82_l;
    *(int32_t *)(v1 + 0x2a60) = g_104_l;
    *(int32_t *)(v1 + 0x2a64) = g_159_l;
    *(int32_t *)(v1 + 0x2a68) = (int32_t)g_160_l;
    *(int16_t *)(v1 + 0x2a6c) = (int16_t)g_161_l;
    *(char *)(v1 + 0x2a6e) = (char)g_173_l;
    *(int16_t *)(v1 + 0x2a70) = g_174_l;
    *(int16_t *)(v1 + 0x2a72) = g_232_l;
    *(int16_t *)(v1 + 0x2a96) = (int16_t)g_276_l;
    *(int32_t *)(v1 + 0x2a74) = g_280_l;
    *(int32_t *)(v1 + 0x2a78) = g_283_l;
    *(int32_t *)(v1 + 0x2a7c) = (int32_t)g_299_l;
    *(int16_t *)(v1 + 0x2a80) = (int16_t)g_411_l;
    *(int32_t *)(v1 + 0x2a84) = (int32_t)g_413_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3720 - 0x37a0
// Line range:    86 - 92
void crc32_8bytes(int32_t val) {
    // 0x3720
    int32_t v1; // 0x3720
    uint32_t v2 = v1;
    crc32_byte((char)v2);
    crc32_byte((char)(v2 / 256));
    crc32_byte((char)(v2 / 0x10000));
    crc32_byte((char)(v2 / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x37a0 - 0x37e4
// Line range:    78 - 82
void crc32_byte(char b) {
    // 0x37a0
    int32_t v1; // 0x37a0
    int32_t * v2 = (int32_t *)(v1 + 0x28bb); // 0x37b3
    uint32_t v3 = *v2; // 0x37b3
    char v4; // 0x37a0
    *v2 = v3 / 256 ^ *(int32_t *)(v1 + 0x28c7 + 4 * (v3 % 256 ^ (int32_t)v4));
}

// Address range: 0x37e4 - 0x37fc
int32_t _fini(void) {
    // 0x37e4
    int32_t v1; // 0x37e4
    return __x86_get_pc_thunk_bx(v1);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 22

