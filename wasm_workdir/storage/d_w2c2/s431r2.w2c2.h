#ifndef s431r2_H
#define s431r2_H

#include "w2c2_base.h"

typedef struct s431r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s431r2Instance;

void f0(s431r2Instance*);

void f1(s431r2Instance*);

U32 f2(s431r2Instance*);

void f3(s431r2Instance*,U32);

U32 f4(s431r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s431r2Instance*,U32,U32,U32,U32,U32);

void f6(s431r2Instance*,U32);

void f7(s431r2Instance*,U32,U32,U32);

void f8(s431r2Instance*,U32,U32,U32);

void s431r2____wasm_call_ctors(s431r2Instance*i);

void s431r2____wasm_apply_data_relocs(s431r2Instance*i);

U32 s431r2_func_1(s431r2Instance*i);

void s431r2_call_cb(s431r2Instance*i,U32 l0);

void s431r2Instantiate(s431r2Instance* instance, void* resolve(const char* module, const char* name));

void s431r2FreeInstance(s431r2Instance* instance);

#endif /* s431r2_H */

