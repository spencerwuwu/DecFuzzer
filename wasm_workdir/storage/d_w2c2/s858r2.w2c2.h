#ifndef s858r2_H
#define s858r2_H

#include "w2c2_base.h"

typedef struct s858r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s858r2Instance;

void f0(s858r2Instance*);

void f1(s858r2Instance*);

U32 f2(s858r2Instance*);

void f3(s858r2Instance*,U32);

U32 f4(s858r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s858r2Instance*,U32,U32,U32,U32,U32);

void f6(s858r2Instance*,U32);

void f7(s858r2Instance*,U32,U32,U32);

void f8(s858r2Instance*,U32,U32,U32);

void s858r2____wasm_call_ctors(s858r2Instance*i);

void s858r2____wasm_apply_data_relocs(s858r2Instance*i);

U32 s858r2_func_1(s858r2Instance*i);

void s858r2_call_cb(s858r2Instance*i,U32 l0);

void s858r2Instantiate(s858r2Instance* instance, void* resolve(const char* module, const char* name));

void s858r2FreeInstance(s858r2Instance* instance);

#endif /* s858r2_H */

