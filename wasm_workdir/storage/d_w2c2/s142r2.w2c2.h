#ifndef s142r2_H
#define s142r2_H

#include "w2c2_base.h"

typedef struct s142r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s142r2Instance;

void f0(s142r2Instance*);

void f1(s142r2Instance*);

U32 f2(s142r2Instance*);

void f3(s142r2Instance*,U32);

void f4(s142r2Instance*,U32);

void s142r2____wasm_call_ctors(s142r2Instance*i);

void s142r2____wasm_apply_data_relocs(s142r2Instance*i);

U32 s142r2_func_1(s142r2Instance*i);

void s142r2_call_cb(s142r2Instance*i,U32 l0);

void s142r2Instantiate(s142r2Instance* instance, void* resolve(const char* module, const char* name));

void s142r2FreeInstance(s142r2Instance* instance);

#endif /* s142r2_H */

