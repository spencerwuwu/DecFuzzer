#ifndef s353r2_H
#define s353r2_H

#include "w2c2_base.h"

typedef struct s353r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s353r2Instance;

void f0(s353r2Instance*);

void f1(s353r2Instance*);

U32 f2(s353r2Instance*);

void f3(s353r2Instance*,U32);

U32 f4(s353r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s353r2Instance*,U32,U32,U32,U32,U32);

void f6(s353r2Instance*,U32);

void f7(s353r2Instance*,U32,U32,U32);

void f8(s353r2Instance*,U32,U32,U32);

void s353r2____wasm_call_ctors(s353r2Instance*i);

void s353r2____wasm_apply_data_relocs(s353r2Instance*i);

U32 s353r2_func_1(s353r2Instance*i);

void s353r2_call_cb(s353r2Instance*i,U32 l0);

void s353r2Instantiate(s353r2Instance* instance, void* resolve(const char* module, const char* name));

void s353r2FreeInstance(s353r2Instance* instance);

#endif /* s353r2_H */

