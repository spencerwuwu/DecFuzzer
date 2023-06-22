#ifndef s525r2_H
#define s525r2_H

#include "w2c2_base.h"

typedef struct s525r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s525r2Instance;

void f0(s525r2Instance*);

void f1(s525r2Instance*);

U32 f2(s525r2Instance*);

void f3(s525r2Instance*,U32);

U32 f4(s525r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s525r2Instance*,U32,U32,U32,U32,U32);

void f6(s525r2Instance*,U32);

void f7(s525r2Instance*,U32,U32,U32);

void f8(s525r2Instance*,U32,U32,U32);

void s525r2____wasm_call_ctors(s525r2Instance*i);

void s525r2____wasm_apply_data_relocs(s525r2Instance*i);

U32 s525r2_func_1(s525r2Instance*i);

void s525r2_call_cb(s525r2Instance*i,U32 l0);

void s525r2Instantiate(s525r2Instance* instance, void* resolve(const char* module, const char* name));

void s525r2FreeInstance(s525r2Instance* instance);

#endif /* s525r2_H */

