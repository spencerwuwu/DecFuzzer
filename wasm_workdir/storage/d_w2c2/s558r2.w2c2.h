#ifndef s558r2_H
#define s558r2_H

#include "w2c2_base.h"

typedef struct s558r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s558r2Instance;

void f0(s558r2Instance*);

void f1(s558r2Instance*);

U32 f2(s558r2Instance*);

void f3(s558r2Instance*,U32);

U32 f4(s558r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s558r2Instance*,U32,U32,U32,U32,U32);

void f6(s558r2Instance*,U32);

void f7(s558r2Instance*,U32,U32,U32);

void f8(s558r2Instance*,U32,U32,U32);

void s558r2____wasm_call_ctors(s558r2Instance*i);

void s558r2____wasm_apply_data_relocs(s558r2Instance*i);

U32 s558r2_func_1(s558r2Instance*i);

void s558r2_call_cb(s558r2Instance*i,U32 l0);

void s558r2Instantiate(s558r2Instance* instance, void* resolve(const char* module, const char* name));

void s558r2FreeInstance(s558r2Instance* instance);

#endif /* s558r2_H */

