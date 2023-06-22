#ifndef s562r2_H
#define s562r2_H

#include "w2c2_base.h"

typedef struct s562r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s562r2Instance;

void f0(s562r2Instance*);

void f1(s562r2Instance*);

U32 f2(s562r2Instance*);

void f3(s562r2Instance*,U32);

U32 f4(s562r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s562r2Instance*,U32,U32,U32,U32,U32);

void f6(s562r2Instance*,U32);

void f7(s562r2Instance*,U32,U32,U32);

void f8(s562r2Instance*,U32,U32,U32);

void s562r2____wasm_call_ctors(s562r2Instance*i);

void s562r2____wasm_apply_data_relocs(s562r2Instance*i);

U32 s562r2_func_1(s562r2Instance*i);

void s562r2_call_cb(s562r2Instance*i,U32 l0);

void s562r2Instantiate(s562r2Instance* instance, void* resolve(const char* module, const char* name));

void s562r2FreeInstance(s562r2Instance* instance);

#endif /* s562r2_H */

