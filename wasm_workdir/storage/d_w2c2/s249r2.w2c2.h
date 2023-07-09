#ifndef s249r2_H
#define s249r2_H

#include "w2c2_base.h"

typedef struct s249r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s249r2Instance;

void f0(s249r2Instance*);

void f1(s249r2Instance*);

U32 f2(s249r2Instance*);

void f3(s249r2Instance*,U32);

U32 f4(s249r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s249r2Instance*,U32,U32,U32,U32,U32);

void f6(s249r2Instance*,U32);

void f7(s249r2Instance*,U32,U32,U32);

void f8(s249r2Instance*,U32,U32,U32);

void s249r2____wasm_call_ctors(s249r2Instance*i);

void s249r2____wasm_apply_data_relocs(s249r2Instance*i);

U32 s249r2_func_1(s249r2Instance*i);

void s249r2_call_cb(s249r2Instance*i,U32 l0);

void s249r2Instantiate(s249r2Instance* instance, void* resolve(const char* module, const char* name));

void s249r2FreeInstance(s249r2Instance* instance);

#endif /* s249r2_H */
