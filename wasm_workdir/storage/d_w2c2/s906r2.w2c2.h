#ifndef s906r2_H
#define s906r2_H

#include "w2c2_base.h"

typedef struct s906r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s906r2Instance;

void f0(s906r2Instance*);

void f1(s906r2Instance*);

U32 f2(s906r2Instance*);

void f3(s906r2Instance*,U32);

U32 f4(s906r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s906r2Instance*,U32,U32,U32,U32,U32);

void f6(s906r2Instance*,U32);

void f7(s906r2Instance*,U32,U32,U32);

void f8(s906r2Instance*,U32,U32,U32);

void s906r2____wasm_call_ctors(s906r2Instance*i);

void s906r2____wasm_apply_data_relocs(s906r2Instance*i);

U32 s906r2_func_1(s906r2Instance*i);

void s906r2_call_cb(s906r2Instance*i,U32 l0);

void s906r2Instantiate(s906r2Instance* instance, void* resolve(const char* module, const char* name));

void s906r2FreeInstance(s906r2Instance* instance);

#endif /* s906r2_H */

