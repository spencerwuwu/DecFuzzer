#ifndef s832r2_H
#define s832r2_H

#include "w2c2_base.h"

typedef struct s832r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s832r2Instance;

void f0(s832r2Instance*);

void f1(s832r2Instance*);

U32 f2(s832r2Instance*);

void f3(s832r2Instance*,U32);

U32 f4(s832r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s832r2Instance*,U32,U32,U32,U32,U32);

void f6(s832r2Instance*,U32);

void f7(s832r2Instance*,U32,U32,U32);

void f8(s832r2Instance*,U32,U32,U32);

void s832r2____wasm_call_ctors(s832r2Instance*i);

void s832r2____wasm_apply_data_relocs(s832r2Instance*i);

U32 s832r2_func_1(s832r2Instance*i);

void s832r2_call_cb(s832r2Instance*i,U32 l0);

void s832r2Instantiate(s832r2Instance* instance, void* resolve(const char* module, const char* name));

void s832r2FreeInstance(s832r2Instance* instance);

#endif /* s832r2_H */

