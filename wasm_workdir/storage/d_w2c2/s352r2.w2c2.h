#ifndef s352r2_H
#define s352r2_H

#include "w2c2_base.h"

typedef struct s352r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s352r2Instance;

void f0(s352r2Instance*);

void f1(s352r2Instance*);

U32 f2(s352r2Instance*);

void f3(s352r2Instance*,U32);

U32 f4(s352r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s352r2Instance*,U32,U32,U32,U32,U32);

void f6(s352r2Instance*,U32);

void f7(s352r2Instance*,U32,U32,U32);

void f8(s352r2Instance*,U32,U32,U32);

void s352r2____wasm_call_ctors(s352r2Instance*i);

void s352r2____wasm_apply_data_relocs(s352r2Instance*i);

U32 s352r2_func_1(s352r2Instance*i);

void s352r2_call_cb(s352r2Instance*i,U32 l0);

void s352r2Instantiate(s352r2Instance* instance, void* resolve(const char* module, const char* name));

void s352r2FreeInstance(s352r2Instance* instance);

#endif /* s352r2_H */

