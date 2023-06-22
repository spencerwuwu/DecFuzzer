#ifndef s9r2_H
#define s9r2_H

#include "w2c2_base.h"

typedef struct s9r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s9r2Instance;

void f0(s9r2Instance*);

void f1(s9r2Instance*);

U32 f2(s9r2Instance*);

void f3(s9r2Instance*,U32);

U32 f4(s9r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s9r2Instance*,U32,U32,U32,U32,U32);

void f6(s9r2Instance*,U32);

void f7(s9r2Instance*,U32,U32,U32);

void f8(s9r2Instance*,U32,U32,U32);

void s9r2____wasm_call_ctors(s9r2Instance*i);

void s9r2____wasm_apply_data_relocs(s9r2Instance*i);

U32 s9r2_func_1(s9r2Instance*i);

void s9r2_call_cb(s9r2Instance*i,U32 l0);

void s9r2Instantiate(s9r2Instance* instance, void* resolve(const char* module, const char* name));

void s9r2FreeInstance(s9r2Instance* instance);

#endif /* s9r2_H */

