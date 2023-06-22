#ifndef s346r2_H
#define s346r2_H

#include "w2c2_base.h"

typedef struct s346r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s346r2Instance;

void f0(s346r2Instance*);

void f1(s346r2Instance*);

U32 f2(s346r2Instance*);

void f3(s346r2Instance*,U32);

U32 f4(s346r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s346r2Instance*,U32,U32,U32,U32,U32);

void f6(s346r2Instance*,U32);

void f7(s346r2Instance*,U32,U32,U32);

void f8(s346r2Instance*,U32,U32,U32);

void s346r2____wasm_call_ctors(s346r2Instance*i);

void s346r2____wasm_apply_data_relocs(s346r2Instance*i);

U32 s346r2_func_1(s346r2Instance*i);

void s346r2_call_cb(s346r2Instance*i,U32 l0);

void s346r2Instantiate(s346r2Instance* instance, void* resolve(const char* module, const char* name));

void s346r2FreeInstance(s346r2Instance* instance);

#endif /* s346r2_H */

