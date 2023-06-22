#ifndef s985r2_H
#define s985r2_H

#include "w2c2_base.h"

typedef struct s985r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s985r2Instance;

void f0(s985r2Instance*);

void f1(s985r2Instance*);

U32 f2(s985r2Instance*);

void f3(s985r2Instance*,U32);

U32 f4(s985r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s985r2Instance*,U32,U32,U32,U32,U32);

void f6(s985r2Instance*,U32);

void f7(s985r2Instance*,U32,U32,U32);

void f8(s985r2Instance*,U32,U32,U32);

void s985r2____wasm_call_ctors(s985r2Instance*i);

void s985r2____wasm_apply_data_relocs(s985r2Instance*i);

U32 s985r2_func_1(s985r2Instance*i);

void s985r2_call_cb(s985r2Instance*i,U32 l0);

void s985r2Instantiate(s985r2Instance* instance, void* resolve(const char* module, const char* name));

void s985r2FreeInstance(s985r2Instance* instance);

#endif /* s985r2_H */

