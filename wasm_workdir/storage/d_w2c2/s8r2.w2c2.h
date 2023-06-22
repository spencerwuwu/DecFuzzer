#ifndef s8r2_H
#define s8r2_H

#include "w2c2_base.h"

typedef struct s8r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s8r2Instance;

void f0(s8r2Instance*);

void f1(s8r2Instance*);

U32 f2(s8r2Instance*);

void f3(s8r2Instance*,U32);

void f4(s8r2Instance*,U32);

void s8r2____wasm_call_ctors(s8r2Instance*i);

void s8r2____wasm_apply_data_relocs(s8r2Instance*i);

U32 s8r2_func_1(s8r2Instance*i);

void s8r2_call_cb(s8r2Instance*i,U32 l0);

void s8r2Instantiate(s8r2Instance* instance, void* resolve(const char* module, const char* name));

void s8r2FreeInstance(s8r2Instance* instance);

#endif /* s8r2_H */

