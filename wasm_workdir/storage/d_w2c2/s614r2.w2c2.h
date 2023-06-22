#ifndef s614r2_H
#define s614r2_H

#include "w2c2_base.h"

typedef struct s614r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s614r2Instance;

void f0(s614r2Instance*);

void f1(s614r2Instance*);

U32 f2(s614r2Instance*);

void f3(s614r2Instance*,U32);

void f4(s614r2Instance*,U32);

void s614r2____wasm_call_ctors(s614r2Instance*i);

void s614r2____wasm_apply_data_relocs(s614r2Instance*i);

U32 s614r2_func_1(s614r2Instance*i);

void s614r2_call_cb(s614r2Instance*i,U32 l0);

void s614r2Instantiate(s614r2Instance* instance, void* resolve(const char* module, const char* name));

void s614r2FreeInstance(s614r2Instance* instance);

#endif /* s614r2_H */

