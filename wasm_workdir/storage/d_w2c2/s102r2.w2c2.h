#ifndef s102r2_H
#define s102r2_H

#include "w2c2_base.h"

typedef struct s102r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s102r2Instance;

void f0(s102r2Instance*);

void f1(s102r2Instance*);

U32 f2(s102r2Instance*);

void f3(s102r2Instance*,U32);

U32 f4(s102r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s102r2Instance*,U32,U32,U32,U32,U32);

void f6(s102r2Instance*,U32);

void f7(s102r2Instance*,U32,U32,U32);

void f8(s102r2Instance*,U32,U32,U32);

void s102r2____wasm_call_ctors(s102r2Instance*i);

void s102r2____wasm_apply_data_relocs(s102r2Instance*i);

U32 s102r2_func_1(s102r2Instance*i);

void s102r2_call_cb(s102r2Instance*i,U32 l0);

void s102r2Instantiate(s102r2Instance* instance, void* resolve(const char* module, const char* name));

void s102r2FreeInstance(s102r2Instance* instance);

#endif /* s102r2_H */

