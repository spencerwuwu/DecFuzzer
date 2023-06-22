#ifndef s45r2_H
#define s45r2_H

#include "w2c2_base.h"

typedef struct s45r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s45r2Instance;

void f0(s45r2Instance*);

void f1(s45r2Instance*);

U32 f2(s45r2Instance*);

void f3(s45r2Instance*,U32);

void f4(s45r2Instance*,U32);

void s45r2____wasm_call_ctors(s45r2Instance*i);

void s45r2____wasm_apply_data_relocs(s45r2Instance*i);

U32 s45r2_func_1(s45r2Instance*i);

void s45r2_call_cb(s45r2Instance*i,U32 l0);

void s45r2Instantiate(s45r2Instance* instance, void* resolve(const char* module, const char* name));

void s45r2FreeInstance(s45r2Instance* instance);

#endif /* s45r2_H */

