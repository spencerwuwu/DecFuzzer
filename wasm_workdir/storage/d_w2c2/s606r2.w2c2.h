#ifndef s606r2_H
#define s606r2_H

#include "w2c2_base.h"

typedef struct s606r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s606r2Instance;

void f0(s606r2Instance*);

void f1(s606r2Instance*);

U32 f2(s606r2Instance*);

void f3(s606r2Instance*,U32);

U32 f4(s606r2Instance*,U32,U32,U32,U32,U32);

void f5(s606r2Instance*,U32,U32,U32,U32,U32);

void f6(s606r2Instance*,U32);

void f7(s606r2Instance*,U32,U32,U32);

void f8(s606r2Instance*,U32,U32,U32);

void s606r2____wasm_call_ctors(s606r2Instance*i);

void s606r2____wasm_apply_data_relocs(s606r2Instance*i);

U32 s606r2_func_1(s606r2Instance*i);

void s606r2_call_cb(s606r2Instance*i,U32 l0);

void s606r2Instantiate(s606r2Instance* instance, void* resolve(const char* module, const char* name));

void s606r2FreeInstance(s606r2Instance* instance);

#endif /* s606r2_H */

