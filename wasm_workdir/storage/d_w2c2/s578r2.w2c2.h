#ifndef s578r2_H
#define s578r2_H

#include "w2c2_base.h"

typedef struct s578r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s578r2Instance;

void f0(s578r2Instance*);

void f1(s578r2Instance*);

U32 f2(s578r2Instance*);

void f3(s578r2Instance*,U32);

U32 f4(s578r2Instance*,U32,U32,U32,U32,U32);

void f5(s578r2Instance*,U32,U32,U32,U32,U32);

void f6(s578r2Instance*,U32);

void f7(s578r2Instance*,U32,U32,U32);

void f8(s578r2Instance*,U32,U32,U32);

void s578r2____wasm_call_ctors(s578r2Instance*i);

void s578r2____wasm_apply_data_relocs(s578r2Instance*i);

U32 s578r2_func_1(s578r2Instance*i);

void s578r2_call_cb(s578r2Instance*i,U32 l0);

void s578r2Instantiate(s578r2Instance* instance, void* resolve(const char* module, const char* name));

void s578r2FreeInstance(s578r2Instance* instance);

#endif /* s578r2_H */
