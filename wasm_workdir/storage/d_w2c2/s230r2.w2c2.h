#ifndef s230r2_H
#define s230r2_H

#include "w2c2_base.h"

typedef struct s230r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s230r2Instance;

void f0(s230r2Instance*);

void f1(s230r2Instance*);

U32 f2(s230r2Instance*);

void f3(s230r2Instance*,U32);

U32 f4(s230r2Instance*,U32,U32,U32,U32,U32);

void f5(s230r2Instance*,U32,U32,U32,U32,U32);

void f6(s230r2Instance*,U32);

void f7(s230r2Instance*,U32,U32,U32);

void f8(s230r2Instance*,U32,U32,U32);

void s230r2____wasm_call_ctors(s230r2Instance*i);

void s230r2____wasm_apply_data_relocs(s230r2Instance*i);

U32 s230r2_func_1(s230r2Instance*i);

void s230r2_call_cb(s230r2Instance*i,U32 l0);

void s230r2Instantiate(s230r2Instance* instance, void* resolve(const char* module, const char* name));

void s230r2FreeInstance(s230r2Instance* instance);

#endif /* s230r2_H */

