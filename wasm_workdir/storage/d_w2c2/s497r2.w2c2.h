#ifndef s497r2_H
#define s497r2_H

#include "w2c2_base.h"

typedef struct s497r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s497r2Instance;

void f0(s497r2Instance*);

void f1(s497r2Instance*);

U32 f2(s497r2Instance*);

void f3(s497r2Instance*,U32);

U32 f4(s497r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s497r2Instance*,U32,U32,U32,U32,U32);

void f6(s497r2Instance*,U32);

void f7(s497r2Instance*,U32,U32,U32);

void f8(s497r2Instance*,U32,U32,U32);

void s497r2____wasm_call_ctors(s497r2Instance*i);

void s497r2____wasm_apply_data_relocs(s497r2Instance*i);

U32 s497r2_func_1(s497r2Instance*i);

void s497r2_call_cb(s497r2Instance*i,U32 l0);

void s497r2Instantiate(s497r2Instance* instance, void* resolve(const char* module, const char* name));

void s497r2FreeInstance(s497r2Instance* instance);

#endif /* s497r2_H */

