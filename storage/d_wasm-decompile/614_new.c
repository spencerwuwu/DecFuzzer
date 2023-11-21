#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_21.c
 * Seed:      624803689
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */


/* --- FORWARD DECLARATIONS --- */
 const int8_t  func_1(void);




/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
 const int8_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t* c = a - b;
int64_t d = 151;
c[15] = d;
int64_t e = 1;
c[2] = e;
while (1) {
int64_t f = (ubyte)c[15];
int64_t g = 255;
int64_t h = f & g;
int64_t i = (int64_t)c[2];
int64_t j = i ^ h;
c[2] = j;
int64_t k = 8;
c[2] = k;
while (1) {
int64_t l = (int64_t)c[2];
int64_t m = 27;
int64_t n = l;
int64_t o = m;
int64_t p = n <= o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_b;
int64_t s = (int64_t)c[2];
if (eqz(s)) goto B_d;
//continue L_a;
B_d:;
int64_t t = (int64_t)c[2];
int64_t u = 3;
int64_t v = t + u;
c[2] = v;
//continue L_c;
}
//unreachable;
B_b:;
}
int64_t w = (int64_t)c[2];
int64_t x = 24;
int64_t y = w << x;
int64_t z = y >> x;
return z;
}





/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

