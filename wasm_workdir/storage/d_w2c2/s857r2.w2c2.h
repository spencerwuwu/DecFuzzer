#ifndef s857r2_H
#define s857r2_H

#include "w2c2_base.h"

typedef struct s857r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s857r2Instance;

void f0(s857r2Instance*);

void f1(s857r2Instance*);

U32 f2(s857r2Instance*);

void f3(s857r2Instance*,U32);

U32 f4(s857r2Instance*,U32,U32,U32,U32);

void f5(s857r2Instance*,U32,U32,U32,U32,U32);

void f6(s857r2Instance*,U32);

void f7(s857r2Instance*,U32,U32,U32);

void f8(s857r2Instance*,U32,U32,U32);

void s857r2____wasm_call_ctors(s857r2Instance*i);

void s857r2____wasm_apply_data_relocs(s857r2Instance*i);

U32 s857r2_func_1(s857r2Instance*i);

void s857r2_call_cb(s857r2Instance*i,U32 l0);

void s857r2Instantiate(s857r2Instance* instance, void* resolve(const char* module, const char* name));

void s857r2FreeInstance(s857r2Instance* instance);

#endif /* s857r2_H */

