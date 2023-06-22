#ifndef s356r2_H
#define s356r2_H

#include "w2c2_base.h"

typedef struct s356r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s356r2Instance;

void f0(s356r2Instance*);

void f1(s356r2Instance*);

U32 f2(s356r2Instance*);

void f3(s356r2Instance*,U32);

U32 f4(s356r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s356r2Instance*,U32,U32,U32,U32,U32);

void f6(s356r2Instance*,U32);

void f7(s356r2Instance*,U32,U32,U32);

void f8(s356r2Instance*,U32,U32,U32);

void s356r2____wasm_call_ctors(s356r2Instance*i);

void s356r2____wasm_apply_data_relocs(s356r2Instance*i);

U32 s356r2_func_1(s356r2Instance*i);

void s356r2_call_cb(s356r2Instance*i,U32 l0);

void s356r2Instantiate(s356r2Instance* instance, void* resolve(const char* module, const char* name));

void s356r2FreeInstance(s356r2Instance* instance);

#endif /* s356r2_H */

