#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_324.c
 * Seed:      914884510
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_4 = 3U;/* VOLATILE GLOBAL g_4 */
static uint32_t g_7 = 1U;
static uint32_t g_11 = 1U;


/* --- FORWARD DECLARATIONS --- */
 int16_t  func_1(void);



static int set_var(uint8_t g_4_l, uint32_t g_7_l, uint32_t g_11_l){
    g_4 = g_4_l;g_7 = g_7_l;g_11 = g_11_l;
    return 0;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_11
 */
 int16_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t* c = a - b;
stack_pointer = c;
int64_t d = 3;
c[15] = d;
int64_t e = 1;
c[2] = e;
int64_t f = 1;
c[1] = f;
int64_t g = -192134082;
c[0] = g;
int64_t h = (int64_t)c[0];
c[1] = h;
int64_t i = (ubyte)c[15];
int64_t j = (int64_t)c[2];
int64_t k = (int64_t)c[1];
int64_t l = 255;
int64_t m = i & l;
set_var(m, j, k);
int64_t n = (ubyte)c[15];
int64_t o = 255;
int64_t p = n & o;
int64_t q = 16;
int64_t r = p << q;
int64_t s = r >> q;
int64_t t = 16;
int64_t* u = c + t;
stack_pointer = u;
return s;
}





/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 9
breakdown:
   depth: 1, occurrence: 2
   depth: 9, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

