#ifndef s557r2_H
#define s557r2_H

#include "w2c2_base.h"

typedef struct s557r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s557r2Instance;

void f0(s557r2Instance*);

void f1(s557r2Instance*);

U32 f2(s557r2Instance*);

void f3(s557r2Instance*,U32);

U32 f4(s557r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s557r2Instance*,U32,U32,U32,U32,U32);

void f6(s557r2Instance*,U32);

void f7(s557r2Instance*,U32,U32,U32);

void f8(s557r2Instance*,U32,U32,U32);

void s557r2____wasm_call_ctors(s557r2Instance*i);

void s557r2____wasm_apply_data_relocs(s557r2Instance*i);

U32 s557r2_func_1(s557r2Instance*i);

void s557r2_call_cb(s557r2Instance*i,U32 l0);

void s557r2Instantiate(s557r2Instance* instance, void* resolve(const char* module, const char* name));

void s557r2FreeInstance(s557r2Instance* instance);

#endif /* s557r2_H */

