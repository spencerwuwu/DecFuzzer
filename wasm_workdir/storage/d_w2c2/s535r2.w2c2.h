#ifndef s535r2_H
#define s535r2_H

#include "w2c2_base.h"

typedef struct s535r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s535r2Instance;

void f0(s535r2Instance*);

void f1(s535r2Instance*);

U32 f2(s535r2Instance*);

void f3(s535r2Instance*,U32);

U32 f4(s535r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s535r2Instance*,U32,U32,U32,U32,U32);

void f6(s535r2Instance*,U32);

void f7(s535r2Instance*,U32,U32,U32);

void f8(s535r2Instance*,U32,U32,U32);

void s535r2____wasm_call_ctors(s535r2Instance*i);

void s535r2____wasm_apply_data_relocs(s535r2Instance*i);

U32 s535r2_func_1(s535r2Instance*i);

void s535r2_call_cb(s535r2Instance*i,U32 l0);

void s535r2Instantiate(s535r2Instance* instance, void* resolve(const char* module, const char* name));

void s535r2FreeInstance(s535r2Instance* instance);

#endif /* s535r2_H */

