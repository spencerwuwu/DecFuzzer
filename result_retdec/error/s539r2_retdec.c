//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __x86_get_pc_thunk_ax(int32_t result);
int32_t __x86_get_pc_thunk_bx(int32_t a1);
int32_t crc32_8bytes(uint32_t a1);
int32_t crc32_byte(int32_t a1);
int32_t crc32_gentab(void);
int32_t func_1(void);
int32_t platform_main_begin(void);
int32_t platform_main_end(int32_t a1);
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, char a9, int16_t a10);
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x80490c0 - 0x80490c4
int32_t __x86_get_pc_thunk_bx(int32_t a1) {
    // 0x80490c0
    int32_t result; // 0x80490c0
    return result;
}

// Address range: 0x8049186 - 0x8049196
int32_t platform_main_begin(void) {
    // 0x8049186
    int32_t v1; // 0x8049186
    return __x86_get_pc_thunk_ax(v1) + 0x3e66;
}

// Address range: 0x8049196 - 0x80491c4
int32_t platform_main_end(int32_t a1) {
    // 0x8049196
    int32_t v1; // 0x8049196
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1e66));
}

// Address range: 0x804a18c - 0x804a1fd
int32_t crc32_gentab(void) {
    // 0x804a18c
    int32_t v1; // 0x804a18c
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804a192
    for (int32_t i = 0; i < 256; i++) {
        int32_t v3 = 8; // 0x804a1d5
        uint32_t v4 = i / 2;
        int32_t v5 = i % 2 == 0 ? v4 : v4 ^ -0x12477ce0;
        v3--;
        int32_t v6 = v5; // 0x804a1dd
        while (v3 != 0) {
            // 0x804a1bb
            v4 = v6 / 2;
            v5 = v6 % 2 == 0 ? v4 : v4 ^ -0x12477ce0;
            v3--;
            v6 = v5;
        }
        // 0x804a1df
        *(int32_t *)(v2 + 0x2ec9 + 4 * i) = v5;
    }
    // 0x804a1f9
    return v2 + 0x2e5d;
}

// Address range: 0x804a1fd - 0x804a243
int32_t crc32_byte(int32_t a1) {
    // 0x804a1fd
    int32_t v1; // 0x804a1fd
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804a204
    int32_t * v3 = (int32_t *)(v2 + 0x2e0b); // 0x804a214
    uint32_t v4 = *v3; // 0x804a214
    *v3 = *(int32_t *)(v2 + 0x2e57 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x2deb;
}

// Address range: 0x804a243 - 0x804a298
int32_t crc32_8bytes(uint32_t a1) {
    // 0x804a243
    int32_t v1; // 0x804a243
    __x86_get_pc_thunk_ax(v1);
    crc32_byte(a1 % 256);
    crc32_byte(a1 / 256 % 256);
    crc32_byte(a1 / 0x10000 % 256);
    return crc32_byte(a1 / 0x1000000);
}

// Address range: 0x804a298 - 0x804a2df
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3) {
    // 0x804a298
    int32_t v1; // 0x804a298
    __x86_get_pc_thunk_bx(v1);
    int32_t chars_printed = crc32_8bytes(a1); // 0x804a2b9
    if (a3 != 0) {
        // 0x804a2bb
        chars_printed = printf((char *)(v1 + 3444));
    }
    // 0x804a2d9
    return chars_printed;
}

// Address range: 0x804a347 - 0x804a3cf
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, char a9, int16_t a10) {
    // 0x804a347
    int32_t v1; // 0x804a347
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804a350
    *(int32_t *)(v2 + 0x2cc3) = a1;
    *(char *)(v2 + 0x2cc7) = (char)a2;
    *(char *)(v2 + 0x2cc8) = (char)a3;
    *(int32_t *)(v2 + 0x310f) = a4;
    *(int32_t *)(v2 + 0x2ccb) = a5;
    *(char *)(v2 + 0x2ccf) = (char)a6;
    *(char *)(v2 + 0x2cd0) = (char)a7;
    *(int32_t *)(v2 + 0x3113) = a8;
    return 0;
}

// Address range: 0x804a3cf - 0x804a5e1
int32_t func_1(void) {
    // 0x804a3cf
    int32_t v1; // 0x804a3cf
    __x86_get_pc_thunk_ax(v1);
    set_var(-3, 254, 254, 0, 1, 32, 0, 0, 1, -1695);
    return 254;
}

// Address range: 0x804a5e1 - 0x804a75b
int main(int argc, char ** argv) {
    // 0x804a5e1
    int32_t v1; // 0x804a5e1
    int32_t v2 = v1;
    char ** v3 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v3);
    int32_t v4 = 0; // 0x804a60a
    if (v3 == (char **)2) {
        int32_t str = *(int32_t *)(v1 + 4); // 0x804a612
        v4 = strcmp((char *)str, (char *)(v2 + 2664)) == 0;
    }
    // 0x804a632
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v2 + 0x2a20), v2 + 2666, v4);
    transparent_crc((int32_t)*(char *)(v2 + 0x2a24), v2 + 2670, v4);
    transparent_crc((int32_t)*(char *)(v2 + 0x2a25), v2 + 2674, v4);
    transparent_crc(*(int32_t *)(v2 + 0x2e6c), v2 + 2679, v4);
    transparent_crc(*(int32_t *)(v2 + 0x2a28), v2 + 2684, v4);
    transparent_crc((int32_t)*(char *)(v2 + 0x2a2c), v2 + 2689, v4);
    transparent_crc((int32_t)*(char *)(v2 + 0x2a2d), v2 + 2694, v4);
    transparent_crc(*(int32_t *)(v2 + 0x2e70), v2 + 2699, v4);
    platform_main_end(-1 - *(int32_t *)(v2 + 0x2a1c));
    return 0;
}

// Address range: 0x804a75b - 0x804a75f
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a75b
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (13.1.1)
// Detected functions: 11

