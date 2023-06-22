#ifndef s369r2_H
#define s369r2_H

#include "w2c2_base.h"

typedef struct s369r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s369r2Instance;

void f0(s369r2Instance*);

void f1(s369r2Instance*);

U32 f2(s369r2Instance*);

void f3(s369r2Instance*,U32);

U32 f4(s369r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s369r2Instance*,U32,U32,U32,U32,U32);

void f6(s369r2Instance*,U32);

void f7(s369r2Instance*,U32,U32,U32);

void f8(s369r2Instance*,U32,U32,U32);

void s369r2____wasm_call_ctors(s369r2Instance*i);

void s369r2____wasm_apply_data_relocs(s369r2Instance*i);

U32 s369r2_func_1(s369r2Instance*i);

void s369r2_call_cb(s369r2Instance*i,U32 l0);

void s369r2Instantiate(s369r2Instance* instance, void* resolve(const char* module, const char* name));

void s369r2FreeInstance(s369r2Instance* instance);

#endif /* s369r2_H */

