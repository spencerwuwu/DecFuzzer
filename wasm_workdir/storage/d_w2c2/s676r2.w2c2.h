#ifndef s676r2_H
#define s676r2_H

#include "w2c2_base.h"

typedef struct s676r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s676r2Instance;

void f0(s676r2Instance*);

void f1(s676r2Instance*);

U32 f2(s676r2Instance*);

void f3(s676r2Instance*,U32);

U32 f4(s676r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s676r2Instance*,U32,U32,U32,U32,U32);

void f6(s676r2Instance*,U32);

void f7(s676r2Instance*,U32,U32,U32);

void f8(s676r2Instance*,U32,U32,U32);

void s676r2____wasm_call_ctors(s676r2Instance*i);

void s676r2____wasm_apply_data_relocs(s676r2Instance*i);

U32 s676r2_func_1(s676r2Instance*i);

void s676r2_call_cb(s676r2Instance*i,U32 l0);

void s676r2Instantiate(s676r2Instance* instance, void* resolve(const char* module, const char* name));

void s676r2FreeInstance(s676r2Instance* instance);

#endif /* s676r2_H */

