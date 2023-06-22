#ifndef s493r2_H
#define s493r2_H

#include "w2c2_base.h"

typedef struct s493r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s493r2Instance;

void f0(s493r2Instance*);

void f1(s493r2Instance*);

U32 f2(s493r2Instance*);

void f3(s493r2Instance*,U32);

U32 f4(s493r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s493r2Instance*,U32,U32,U32,U32,U32);

void f6(s493r2Instance*,U32);

void f7(s493r2Instance*,U32,U32,U32);

void f8(s493r2Instance*,U32,U32,U32);

void s493r2____wasm_call_ctors(s493r2Instance*i);

void s493r2____wasm_apply_data_relocs(s493r2Instance*i);

U32 s493r2_func_1(s493r2Instance*i);

void s493r2_call_cb(s493r2Instance*i,U32 l0);

void s493r2Instantiate(s493r2Instance* instance, void* resolve(const char* module, const char* name));

void s493r2FreeInstance(s493r2Instance* instance);

#endif /* s493r2_H */

