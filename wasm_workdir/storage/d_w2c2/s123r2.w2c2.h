#ifndef s123r2_H
#define s123r2_H

#include "w2c2_base.h"

typedef struct s123r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s123r2Instance;

void f0(s123r2Instance*);

void f1(s123r2Instance*);

U32 f2(s123r2Instance*);

void f3(s123r2Instance*,U32);

void f4(s123r2Instance*,U32);

void s123r2____wasm_call_ctors(s123r2Instance*i);

void s123r2____wasm_apply_data_relocs(s123r2Instance*i);

U32 s123r2_func_1(s123r2Instance*i);

void s123r2_call_cb(s123r2Instance*i,U32 l0);

void s123r2Instantiate(s123r2Instance* instance, void* resolve(const char* module, const char* name));

void s123r2FreeInstance(s123r2Instance* instance);

#endif /* s123r2_H */

