#ifndef s934r2_H
#define s934r2_H

#include "w2c2_base.h"

typedef struct s934r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s934r2Instance;

void f0(s934r2Instance*);

void f1(s934r2Instance*);

U32 f2(s934r2Instance*);

void f3(s934r2Instance*,U32);

U32 f4(s934r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s934r2Instance*,U32,U32,U32,U32,U32);

void f6(s934r2Instance*,U32);

void f7(s934r2Instance*,U32,U32,U32);

void f8(s934r2Instance*,U32,U32,U32);

void s934r2____wasm_call_ctors(s934r2Instance*i);

void s934r2____wasm_apply_data_relocs(s934r2Instance*i);

U32 s934r2_func_1(s934r2Instance*i);

void s934r2_call_cb(s934r2Instance*i,U32 l0);

void s934r2Instantiate(s934r2Instance* instance, void* resolve(const char* module, const char* name));

void s934r2FreeInstance(s934r2Instance* instance);

#endif /* s934r2_H */

