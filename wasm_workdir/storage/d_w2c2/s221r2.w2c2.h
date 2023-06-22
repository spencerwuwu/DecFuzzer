#ifndef s221r2_H
#define s221r2_H

#include "w2c2_base.h"

typedef struct s221r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s221r2Instance;

void f0(s221r2Instance*);

void f1(s221r2Instance*);

U32 f2(s221r2Instance*);

void f3(s221r2Instance*,U32);

U32 f4(s221r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s221r2Instance*,U32,U32,U32,U32,U32);

void f6(s221r2Instance*,U32);

void f7(s221r2Instance*,U32,U32,U32);

void f8(s221r2Instance*,U32,U32,U32);

void s221r2____wasm_call_ctors(s221r2Instance*i);

void s221r2____wasm_apply_data_relocs(s221r2Instance*i);

U32 s221r2_func_1(s221r2Instance*i);

void s221r2_call_cb(s221r2Instance*i,U32 l0);

void s221r2Instantiate(s221r2Instance* instance, void* resolve(const char* module, const char* name));

void s221r2FreeInstance(s221r2Instance* instance);

#endif /* s221r2_H */

