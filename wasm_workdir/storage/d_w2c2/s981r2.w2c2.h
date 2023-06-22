#ifndef s981r2_H
#define s981r2_H

#include "w2c2_base.h"

typedef struct s981r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s981r2Instance;

void f0(s981r2Instance*);

void f1(s981r2Instance*);

U32 f2(s981r2Instance*);

void f3(s981r2Instance*,U32);

U32 f4(s981r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s981r2Instance*,U32,U32,U32,U32,U32);

void f6(s981r2Instance*,U32);

void f7(s981r2Instance*,U32,U32,U32);

void f8(s981r2Instance*,U32,U32,U32);

void s981r2____wasm_call_ctors(s981r2Instance*i);

void s981r2____wasm_apply_data_relocs(s981r2Instance*i);

U32 s981r2_func_1(s981r2Instance*i);

void s981r2_call_cb(s981r2Instance*i,U32 l0);

void s981r2Instantiate(s981r2Instance* instance, void* resolve(const char* module, const char* name));

void s981r2FreeInstance(s981r2Instance* instance);

#endif /* s981r2_H */

