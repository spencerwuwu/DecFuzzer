#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1626.c
 * Seed:      314682983
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 4294967294U;


/* --- FORWARD DECLARATIONS --- */
 uint32_t  func_1(void);



static int set_var(uint32_t g_4_l){
    g_4 = g_4_l;
    return 0;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_4
 */
 uint32_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t* c = a - b;
stack_pointer = c;
int64_t d = -2;
c[3] = d;
int64_t e = 32;
c[11] = e;
int64_t f = 1;
c[1] = f;
int64_t g = (ubyte)c[11];
int64_t h = 24;
int64_t i = g << h;
int64_t j = i >> h;
int64_t k = (int64_t)c[1];
int64_t l = k ^ j;
c[1] = l;
c[3] = l;
int64_t m = (int64_t)c[3];
set_var(m);
int64_t n = (ubyte)c[11];
int64_t o = 24;
int64_t p = n << o;
int64_t q = p >> o;
int64_t r = 16;
int64_t* s = c + r;
stack_pointer = s;
return q;
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
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/
