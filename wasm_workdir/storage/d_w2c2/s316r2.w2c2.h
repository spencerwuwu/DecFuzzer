#ifndef s316r2_H
#define s316r2_H

#include "w2c2_base.h"

typedef struct s316r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s316r2Instance;

void f0(s316r2Instance*);

void f1(s316r2Instance*);

U32 f2(s316r2Instance*);

void f3(s316r2Instance*,U32);

U32 f4(s316r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s316r2Instance*,U32,U32,U32,U32,U32);

void f6(s316r2Instance*,U32);

void f7(s316r2Instance*,U32,U32,U32);

void f8(s316r2Instance*,U32,U32,U32);

void s316r2____wasm_call_ctors(s316r2Instance*i);

void s316r2____wasm_apply_data_relocs(s316r2Instance*i);

U32 s316r2_func_1(s316r2Instance*i);

void s316r2_call_cb(s316r2Instance*i,U32 l0);

void s316r2Instantiate(s316r2Instance* instance, void* resolve(const char* module, const char* name));

void s316r2FreeInstance(s316r2Instance* instance);

#endif /* s316r2_H */

