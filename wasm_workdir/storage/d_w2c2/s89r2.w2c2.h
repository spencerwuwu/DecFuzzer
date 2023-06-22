#ifndef s89r2_H
#define s89r2_H

#include "w2c2_base.h"

typedef struct s89r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s89r2Instance;

void f0(s89r2Instance*);

void f1(s89r2Instance*);

U32 f2(s89r2Instance*);

void f3(s89r2Instance*,U32);

U32 f4(s89r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s89r2Instance*,U32,U32,U32,U32,U32);

void f6(s89r2Instance*,U32);

void f7(s89r2Instance*,U32,U32,U32);

void f8(s89r2Instance*,U32,U32,U32);

void s89r2____wasm_call_ctors(s89r2Instance*i);

void s89r2____wasm_apply_data_relocs(s89r2Instance*i);

U32 s89r2_func_1(s89r2Instance*i);

void s89r2_call_cb(s89r2Instance*i,U32 l0);

void s89r2Instantiate(s89r2Instance* instance, void* resolve(const char* module, const char* name));

void s89r2FreeInstance(s89r2Instance* instance);

#endif /* s89r2_H */

