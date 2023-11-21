#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1211.c
 * Seed:      1429034147
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0x17571177;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3 = 0xDF1FEBAE;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = (-7);


/* --- FORWARD DECLARATIONS --- */
 int8_t  func_1(void);



static int set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l){
    g_2 = g_2_l;g_3 = g_3_l;g_4 = g_4_l;
    return 0;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_3 g_2
 * writes: g_4
 */
 int8_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t * c = a - b;
stack_pointer = c;
int64_t d = 391582071;
c[3] = d;
int64_t e = -551556178;
c[2] = e;
int64_t f = -7;
c[1] = f;
int64_t g = -8;
c[1] = g;
while (1) {
int64_t h = c[1];
int64_t i = -28;
int64_t j = h;
int64_t k = i;
int64_t l = j >= k;
int64_t m = 1;
int64_t n = l & m;
if (eqz(n)) goto B_a;
int64_t o = c[2];
if (eqz(o)) goto B_c;
goto B_a;
B_c:;
int64_t p = c[1];
int64_t q = 6;
int64_t r = p - q;
c[1] = r;
//continue L_b;
}
//unreachable;
B_a:;
int64_t s = c[3];
int64_t t = c[2];
int64_t u = c[1];
set_var(s, t, u);
int64_t v = c[3];
int64_t w = 24;
int64_t x = v << w;
int64_t y = x >> w;
int64_t z = 16;
int64_t* aa = c + z;
stack_pointer = aa;
return y;
}





/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

