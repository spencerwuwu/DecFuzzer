#ifndef s414r2_H
#define s414r2_H

#include "w2c2_base.h"

typedef struct s414r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s414r2Instance;

void f0(s414r2Instance*);

void f1(s414r2Instance*);

U32 f2(s414r2Instance*);

void f3(s414r2Instance*,U32);

U32 f4(s414r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s414r2Instance*,U32,U32,U32,U32,U32);

void f6(s414r2Instance*,U32);

void f7(s414r2Instance*,U32,U32,U32);

void f8(s414r2Instance*,U32,U32,U32);

void s414r2____wasm_call_ctors(s414r2Instance*i);

void s414r2____wasm_apply_data_relocs(s414r2Instance*i);

U32 s414r2_func_1(s414r2Instance*i);

void s414r2_call_cb(s414r2Instance*i,U32 l0);

void s414r2Instantiate(s414r2Instance* instance, void* resolve(const char* module, const char* name));

void s414r2FreeInstance(s414r2Instance* instance);

#endif /* s414r2_H */

