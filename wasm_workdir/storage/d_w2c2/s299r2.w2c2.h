#ifndef s299r2_H
#define s299r2_H

#include "w2c2_base.h"

typedef struct s299r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s299r2Instance;

void f0(s299r2Instance*);

void f1(s299r2Instance*);

U32 f2(s299r2Instance*);

void f3(s299r2Instance*,U32);

U32 f4(s299r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s299r2Instance*,U32,U32,U32,U32,U32);

void f6(s299r2Instance*,U32);

void f7(s299r2Instance*,U32,U32,U32);

void f8(s299r2Instance*,U32,U32,U32);

void s299r2____wasm_call_ctors(s299r2Instance*i);

void s299r2____wasm_apply_data_relocs(s299r2Instance*i);

U32 s299r2_func_1(s299r2Instance*i);

void s299r2_call_cb(s299r2Instance*i,U32 l0);

void s299r2Instantiate(s299r2Instance* instance, void* resolve(const char* module, const char* name));

void s299r2FreeInstance(s299r2Instance* instance);

#endif /* s299r2_H */

