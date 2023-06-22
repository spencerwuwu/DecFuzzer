#ifndef s585r2_H
#define s585r2_H

#include "w2c2_base.h"

typedef struct s585r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s585r2Instance;

void f0(s585r2Instance*);

void f1(s585r2Instance*);

U32 f2(s585r2Instance*);

void f3(s585r2Instance*,U32);

U32 f4(s585r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s585r2Instance*,U32,U32,U32,U32,U32);

void f6(s585r2Instance*,U32);

void f7(s585r2Instance*,U32,U32,U32);

void f8(s585r2Instance*,U32,U32,U32);

void s585r2____wasm_call_ctors(s585r2Instance*i);

void s585r2____wasm_apply_data_relocs(s585r2Instance*i);

U32 s585r2_func_1(s585r2Instance*i);

void s585r2_call_cb(s585r2Instance*i,U32 l0);

void s585r2Instantiate(s585r2Instance* instance, void* resolve(const char* module, const char* name));

void s585r2FreeInstance(s585r2Instance* instance);

#endif /* s585r2_H */

