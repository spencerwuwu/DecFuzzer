#ifndef s257r2_H
#define s257r2_H

#include "w2c2_base.h"

typedef struct s257r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s257r2Instance;

void f0(s257r2Instance*);

void f1(s257r2Instance*);

U32 f2(s257r2Instance*);

void f3(s257r2Instance*,U32);

U32 f4(s257r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s257r2Instance*,U32,U32,U32,U32,U32);

void f6(s257r2Instance*,U32);

void f7(s257r2Instance*,U32,U32,U32);

void f8(s257r2Instance*,U32,U32,U32);

void s257r2____wasm_call_ctors(s257r2Instance*i);

void s257r2____wasm_apply_data_relocs(s257r2Instance*i);

U32 s257r2_func_1(s257r2Instance*i);

void s257r2_call_cb(s257r2Instance*i,U32 l0);

void s257r2Instantiate(s257r2Instance* instance, void* resolve(const char* module, const char* name));

void s257r2FreeInstance(s257r2Instance* instance);

#endif /* s257r2_H */

