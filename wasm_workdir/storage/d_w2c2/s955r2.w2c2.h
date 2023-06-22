#ifndef s955r2_H
#define s955r2_H

#include "w2c2_base.h"

typedef struct s955r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s955r2Instance;

void f0(s955r2Instance*);

void f1(s955r2Instance*);

U32 f2(s955r2Instance*);

void f3(s955r2Instance*,U32);

U32 f4(s955r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s955r2Instance*,U32,U32,U32,U32,U32);

void f6(s955r2Instance*,U32);

void f7(s955r2Instance*,U32,U32,U32);

void f8(s955r2Instance*,U32,U32,U32);

void s955r2____wasm_call_ctors(s955r2Instance*i);

void s955r2____wasm_apply_data_relocs(s955r2Instance*i);

U32 s955r2_func_1(s955r2Instance*i);

void s955r2_call_cb(s955r2Instance*i,U32 l0);

void s955r2Instantiate(s955r2Instance* instance, void* resolve(const char* module, const char* name));

void s955r2FreeInstance(s955r2Instance* instance);

#endif /* s955r2_H */

