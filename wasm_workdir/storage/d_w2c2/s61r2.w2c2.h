#ifndef s61r2_H
#define s61r2_H

#include "w2c2_base.h"

typedef struct s61r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s61r2Instance;

void f0(s61r2Instance*);

void f1(s61r2Instance*);

U32 f2(s61r2Instance*);

void f3(s61r2Instance*,U32);

U32 f4(s61r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s61r2Instance*,U32,U32,U32,U32,U32);

void f6(s61r2Instance*,U32);

void f7(s61r2Instance*,U32,U32,U32);

void f8(s61r2Instance*,U32,U32,U32);

void s61r2____wasm_call_ctors(s61r2Instance*i);

void s61r2____wasm_apply_data_relocs(s61r2Instance*i);

U32 s61r2_func_1(s61r2Instance*i);

void s61r2_call_cb(s61r2Instance*i,U32 l0);

void s61r2Instantiate(s61r2Instance* instance, void* resolve(const char* module, const char* name));

void s61r2FreeInstance(s61r2Instance* instance);

#endif /* s61r2_H */

