#ifndef s679r2_H
#define s679r2_H

#include "w2c2_base.h"

typedef struct s679r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s679r2Instance;

void f0(s679r2Instance*);

void f1(s679r2Instance*);

U32 f2(s679r2Instance*);

void f3(s679r2Instance*,U32);

U32 f4(s679r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s679r2Instance*,U32,U32,U32,U32,U32);

void f6(s679r2Instance*,U32);

void f7(s679r2Instance*,U32,U32,U32);

void f8(s679r2Instance*,U32,U32,U32);

void s679r2____wasm_call_ctors(s679r2Instance*i);

void s679r2____wasm_apply_data_relocs(s679r2Instance*i);

U32 s679r2_func_1(s679r2Instance*i);

void s679r2_call_cb(s679r2Instance*i,U32 l0);

void s679r2Instantiate(s679r2Instance* instance, void* resolve(const char* module, const char* name));

void s679r2FreeInstance(s679r2Instance* instance);

#endif /* s679r2_H */

