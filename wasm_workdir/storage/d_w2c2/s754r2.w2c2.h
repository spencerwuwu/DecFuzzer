#ifndef s754r2_H
#define s754r2_H

#include "w2c2_base.h"

typedef struct s754r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s754r2Instance;

void f0(s754r2Instance*);

void f1(s754r2Instance*);

U32 f2(s754r2Instance*);

void f3(s754r2Instance*,U32);

U32 f4(s754r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s754r2Instance*,U32,U32,U32,U32,U32);

void f6(s754r2Instance*,U32);

void f7(s754r2Instance*,U32,U32,U32);

void f8(s754r2Instance*,U32,U32,U32);

void s754r2____wasm_call_ctors(s754r2Instance*i);

void s754r2____wasm_apply_data_relocs(s754r2Instance*i);

U32 s754r2_func_1(s754r2Instance*i);

void s754r2_call_cb(s754r2Instance*i,U32 l0);

void s754r2Instantiate(s754r2Instance* instance, void* resolve(const char* module, const char* name));

void s754r2FreeInstance(s754r2Instance* instance);

#endif /* s754r2_H */

