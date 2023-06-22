#ifndef s430r2_H
#define s430r2_H

#include "w2c2_base.h"

typedef struct s430r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s430r2Instance;

void f0(s430r2Instance*);

void f1(s430r2Instance*);

U32 f2(s430r2Instance*);

void f3(s430r2Instance*,U32);

U32 f4(s430r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s430r2Instance*,U32,U32,U32,U32,U32);

void f6(s430r2Instance*,U32);

void f7(s430r2Instance*,U32,U32,U32);

void f8(s430r2Instance*,U32,U32,U32);

void s430r2____wasm_call_ctors(s430r2Instance*i);

void s430r2____wasm_apply_data_relocs(s430r2Instance*i);

U32 s430r2_func_1(s430r2Instance*i);

void s430r2_call_cb(s430r2Instance*i,U32 l0);

void s430r2Instantiate(s430r2Instance* instance, void* resolve(const char* module, const char* name));

void s430r2FreeInstance(s430r2Instance* instance);

#endif /* s430r2_H */

