#ifndef s404r2_H
#define s404r2_H

#include "w2c2_base.h"

typedef struct s404r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s404r2Instance;

void f0(s404r2Instance*);

void f1(s404r2Instance*);

U32 f2(s404r2Instance*);

void f3(s404r2Instance*,U32);

U32 f4(s404r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s404r2Instance*,U32,U32,U32,U32,U32);

void f6(s404r2Instance*,U32);

void f7(s404r2Instance*,U32,U32,U32);

void f8(s404r2Instance*,U32,U32,U32);

void s404r2____wasm_call_ctors(s404r2Instance*i);

void s404r2____wasm_apply_data_relocs(s404r2Instance*i);

U32 s404r2_func_1(s404r2Instance*i);

void s404r2_call_cb(s404r2Instance*i,U32 l0);

void s404r2Instantiate(s404r2Instance* instance, void* resolve(const char* module, const char* name));

void s404r2FreeInstance(s404r2Instance* instance);

#endif /* s404r2_H */

