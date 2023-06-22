#ifndef s125r2_H
#define s125r2_H

#include "w2c2_base.h"

typedef struct s125r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s125r2Instance;

void f0(s125r2Instance*);

void f1(s125r2Instance*);

U32 f2(s125r2Instance*);

void f3(s125r2Instance*,U32);

U32 f4(s125r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s125r2Instance*,U32,U32,U32,U32,U32);

void f6(s125r2Instance*,U32);

void f7(s125r2Instance*,U32,U32,U32);

void f8(s125r2Instance*,U32,U32,U32);

void s125r2____wasm_call_ctors(s125r2Instance*i);

void s125r2____wasm_apply_data_relocs(s125r2Instance*i);

U32 s125r2_func_1(s125r2Instance*i);

void s125r2_call_cb(s125r2Instance*i,U32 l0);

void s125r2Instantiate(s125r2Instance* instance, void* resolve(const char* module, const char* name));

void s125r2FreeInstance(s125r2Instance* instance);

#endif /* s125r2_H */

