#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1940.c
 * Seed:      3468196926
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_2 = 0U;
static uint16_t g_3 = 1U;


/* --- FORWARD DECLARATIONS --- */
 int8_t  func_1(void);



static int set_var(uint32_t g_2_l, uint16_t g_3_l){
    g_2 = g_2_l;g_3 = g_3_l;
    return 0;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3
 */
 int8_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t* c = a - b;
stack_pointer = c;
int64_t d = 0;
c[3] = d;
int64_t e = 1;
c[5] = e;
int64_t f = 0;
c[1] = f;
int64_t g = (int64_t)c[3];
int64_t h = (ushort)c[5];
int64_t i = 65535;
int64_t j = h & i;
int64_t k = j ^ g;
c[5] = k;
int64_t l = 65535;
int64_t m = k & l;
c[1] = m;
int64_t n = (int64_t)c[3];
int64_t o = (ushort)c[5];
int64_t p = 65535;
int64_t q = o & p;
set_var(n, q);
int64_t r = (int64_t)c[1];
int64_t s = 24;
int64_t t = r << s;
int64_t u = t >> s;
int64_t v = 16;
int64_t* w = c + v;
stack_pointer = w;
return u;
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

