#ifndef s176r2_H
#define s176r2_H

#include "w2c2_base.h"

typedef struct s176r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s176r2Instance;

void f0(s176r2Instance*);

void f1(s176r2Instance*);

U32 f2(s176r2Instance*);

void f3(s176r2Instance*,U32);

U32 f4(s176r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s176r2Instance*,U32,U32,U32,U32,U32);

void f6(s176r2Instance*,U32);

void f7(s176r2Instance*,U32,U32,U32);

void f8(s176r2Instance*,U32,U32,U32);

void s176r2____wasm_call_ctors(s176r2Instance*i);

void s176r2____wasm_apply_data_relocs(s176r2Instance*i);

U32 s176r2_func_1(s176r2Instance*i);

void s176r2_call_cb(s176r2Instance*i,U32 l0);

void s176r2Instantiate(s176r2Instance* instance, void* resolve(const char* module, const char* name));

void s176r2FreeInstance(s176r2Instance* instance);

#endif /* s176r2_H */

