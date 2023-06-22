#ifndef s124r2_H
#define s124r2_H

#include "w2c2_base.h"

typedef struct s124r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s124r2Instance;

void f0(s124r2Instance*);

void f1(s124r2Instance*);

U32 f2(s124r2Instance*);

void f3(s124r2Instance*,U32);

void f4(s124r2Instance*,U32);

void s124r2____wasm_call_ctors(s124r2Instance*i);

void s124r2____wasm_apply_data_relocs(s124r2Instance*i);

U32 s124r2_func_1(s124r2Instance*i);

void s124r2_call_cb(s124r2Instance*i,U32 l0);

void s124r2Instantiate(s124r2Instance* instance, void* resolve(const char* module, const char* name));

void s124r2FreeInstance(s124r2Instance* instance);

#endif /* s124r2_H */

