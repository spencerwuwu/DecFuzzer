#ifndef s229r2_H
#define s229r2_H

#include "w2c2_base.h"

typedef struct s229r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s229r2Instance;

void f0(s229r2Instance*);

void f1(s229r2Instance*);

U32 f2(s229r2Instance*);

void f3(s229r2Instance*,U32);

U32 f4(s229r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s229r2Instance*,U32,U32,U32,U32,U32);

void f6(s229r2Instance*,U32);

void f7(s229r2Instance*,U32,U32,U32);

void f8(s229r2Instance*,U32,U32,U32);

void s229r2____wasm_call_ctors(s229r2Instance*i);

void s229r2____wasm_apply_data_relocs(s229r2Instance*i);

U32 s229r2_func_1(s229r2Instance*i);

void s229r2_call_cb(s229r2Instance*i,U32 l0);

void s229r2Instantiate(s229r2Instance* instance, void* resolve(const char* module, const char* name));

void s229r2FreeInstance(s229r2Instance* instance);

#endif /* s229r2_H */

