#ifndef s147r2_H
#define s147r2_H

#include "w2c2_base.h"

typedef struct s147r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s147r2Instance;

void f0(s147r2Instance*);

void f1(s147r2Instance*);

U32 f2(s147r2Instance*);

void f3(s147r2Instance*,U32);

U32 f4(s147r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s147r2Instance*,U32,U32,U32,U32,U32);

void f6(s147r2Instance*,U32);

void f7(s147r2Instance*,U32,U32,U32);

void f8(s147r2Instance*,U32,U32,U32);

void s147r2____wasm_call_ctors(s147r2Instance*i);

void s147r2____wasm_apply_data_relocs(s147r2Instance*i);

U32 s147r2_func_1(s147r2Instance*i);

void s147r2_call_cb(s147r2Instance*i,U32 l0);

void s147r2Instantiate(s147r2Instance* instance, void* resolve(const char* module, const char* name));

void s147r2FreeInstance(s147r2Instance* instance);

#endif /* s147r2_H */

