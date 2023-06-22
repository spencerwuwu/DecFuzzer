#ifndef s932r2_H
#define s932r2_H

#include "w2c2_base.h"

typedef struct s932r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s932r2Instance;

void f0(s932r2Instance*);

void f1(s932r2Instance*);

U32 f2(s932r2Instance*);

void f3(s932r2Instance*,U32);

U32 f4(s932r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s932r2Instance*,U32,U32,U32,U32,U32);

void f6(s932r2Instance*,U32);

void f7(s932r2Instance*,U32,U32,U32);

void f8(s932r2Instance*,U32,U32,U32);

void s932r2____wasm_call_ctors(s932r2Instance*i);

void s932r2____wasm_apply_data_relocs(s932r2Instance*i);

U32 s932r2_func_1(s932r2Instance*i);

void s932r2_call_cb(s932r2Instance*i,U32 l0);

void s932r2Instantiate(s932r2Instance* instance, void* resolve(const char* module, const char* name));

void s932r2FreeInstance(s932r2Instance* instance);

#endif /* s932r2_H */

