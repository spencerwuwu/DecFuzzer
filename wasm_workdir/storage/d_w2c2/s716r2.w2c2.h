#ifndef s716r2_H
#define s716r2_H

#include "w2c2_base.h"

typedef struct s716r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s716r2Instance;

void f0(s716r2Instance*);

void f1(s716r2Instance*);

U32 f2(s716r2Instance*);

void f3(s716r2Instance*,U32);

U32 f4(s716r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s716r2Instance*,U32,U32,U32,U32,U32);

void f6(s716r2Instance*,U32);

void f7(s716r2Instance*,U32,U32,U32);

void f8(s716r2Instance*,U32,U32,U32);

void s716r2____wasm_call_ctors(s716r2Instance*i);

void s716r2____wasm_apply_data_relocs(s716r2Instance*i);

U32 s716r2_func_1(s716r2Instance*i);

void s716r2_call_cb(s716r2Instance*i,U32 l0);

void s716r2Instantiate(s716r2Instance* instance, void* resolve(const char* module, const char* name));

void s716r2FreeInstance(s716r2Instance* instance);

#endif /* s716r2_H */

