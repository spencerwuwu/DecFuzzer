#ifndef s107r2_H
#define s107r2_H

#include "w2c2_base.h"

typedef struct s107r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s107r2Instance;

void f0(s107r2Instance*);

void f1(s107r2Instance*);

U32 f2(s107r2Instance*);

void f3(s107r2Instance*,U32);

U32 f4(s107r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s107r2Instance*,U32,U32,U32,U32,U32);

void f6(s107r2Instance*,U32);

void f7(s107r2Instance*,U32,U32,U32);

void f8(s107r2Instance*,U32,U32,U32);

void s107r2____wasm_call_ctors(s107r2Instance*i);

void s107r2____wasm_apply_data_relocs(s107r2Instance*i);

U32 s107r2_func_1(s107r2Instance*i);

void s107r2_call_cb(s107r2Instance*i,U32 l0);

void s107r2Instantiate(s107r2Instance* instance, void* resolve(const char* module, const char* name));

void s107r2FreeInstance(s107r2Instance* instance);

#endif /* s107r2_H */

