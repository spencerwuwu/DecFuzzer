#ifndef s531r2_H
#define s531r2_H

#include "w2c2_base.h"

typedef struct s531r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s531r2Instance;

void f0(s531r2Instance*);

void f1(s531r2Instance*);

U32 f2(s531r2Instance*);

void f3(s531r2Instance*,U32);

U32 f4(s531r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s531r2Instance*,U32,U32,U32,U32,U32);

void f6(s531r2Instance*,U32);

void f7(s531r2Instance*,U32,U32,U32);

void f8(s531r2Instance*,U32,U32,U32);

void s531r2____wasm_call_ctors(s531r2Instance*i);

void s531r2____wasm_apply_data_relocs(s531r2Instance*i);

U32 s531r2_func_1(s531r2Instance*i);

void s531r2_call_cb(s531r2Instance*i,U32 l0);

void s531r2Instantiate(s531r2Instance* instance, void* resolve(const char* module, const char* name));

void s531r2FreeInstance(s531r2Instance* instance);

#endif /* s531r2_H */

