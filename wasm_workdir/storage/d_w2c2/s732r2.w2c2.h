#ifndef s732r2_H
#define s732r2_H

#include "w2c2_base.h"

typedef struct s732r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s732r2Instance;

void f0(s732r2Instance*);

void f1(s732r2Instance*);

U32 f2(s732r2Instance*);

void f3(s732r2Instance*,U32);

U32 f4(s732r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s732r2Instance*,U32,U32,U32,U32,U32);

void f6(s732r2Instance*,U32);

void f7(s732r2Instance*,U32,U32,U32);

void f8(s732r2Instance*,U32,U32,U32);

void s732r2____wasm_call_ctors(s732r2Instance*i);

void s732r2____wasm_apply_data_relocs(s732r2Instance*i);

U32 s732r2_func_1(s732r2Instance*i);

void s732r2_call_cb(s732r2Instance*i,U32 l0);

void s732r2Instantiate(s732r2Instance* instance, void* resolve(const char* module, const char* name));

void s732r2FreeInstance(s732r2Instance* instance);

#endif /* s732r2_H */

