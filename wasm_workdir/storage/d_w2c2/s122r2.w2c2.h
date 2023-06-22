#ifndef s122r2_H
#define s122r2_H

#include "w2c2_base.h"

typedef struct s122r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s122r2Instance;

void f0(s122r2Instance*);

void f1(s122r2Instance*);

U32 f2(s122r2Instance*);

void f3(s122r2Instance*,U32);

U32 f4(s122r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s122r2Instance*,U32,U32,U32,U32,U32);

void f6(s122r2Instance*,U32);

void f7(s122r2Instance*,U32,U32,U32);

void f8(s122r2Instance*,U32,U32,U32);

void s122r2____wasm_call_ctors(s122r2Instance*i);

void s122r2____wasm_apply_data_relocs(s122r2Instance*i);

U32 s122r2_func_1(s122r2Instance*i);

void s122r2_call_cb(s122r2Instance*i,U32 l0);

void s122r2Instantiate(s122r2Instance* instance, void* resolve(const char* module, const char* name));

void s122r2FreeInstance(s122r2Instance* instance);

#endif /* s122r2_H */

