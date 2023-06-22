#ifndef s201r2_H
#define s201r2_H

#include "w2c2_base.h"

typedef struct s201r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s201r2Instance;

void f0(s201r2Instance*);

void f1(s201r2Instance*);

U32 f2(s201r2Instance*);

void f3(s201r2Instance*,U32);

U32 f4(s201r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s201r2Instance*,U32,U32,U32,U32,U32);

void f6(s201r2Instance*,U32);

void f7(s201r2Instance*,U32,U32,U32);

void f8(s201r2Instance*,U32,U32,U32);

void s201r2____wasm_call_ctors(s201r2Instance*i);

void s201r2____wasm_apply_data_relocs(s201r2Instance*i);

U32 s201r2_func_1(s201r2Instance*i);

void s201r2_call_cb(s201r2Instance*i,U32 l0);

void s201r2Instantiate(s201r2Instance* instance, void* resolve(const char* module, const char* name));

void s201r2FreeInstance(s201r2Instance* instance);

#endif /* s201r2_H */

