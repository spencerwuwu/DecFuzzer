#ifndef s179r2_H
#define s179r2_H

#include "w2c2_base.h"

typedef struct s179r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s179r2Instance;

void f0(s179r2Instance*);

void f1(s179r2Instance*);

U32 f2(s179r2Instance*);

void f3(s179r2Instance*,U32);

U32 f4(s179r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s179r2Instance*,U32,U32,U32,U32,U32);

void f6(s179r2Instance*,U32);

void f7(s179r2Instance*,U32,U32,U32);

void f8(s179r2Instance*,U32,U32,U32);

void s179r2____wasm_call_ctors(s179r2Instance*i);

void s179r2____wasm_apply_data_relocs(s179r2Instance*i);

U32 s179r2_func_1(s179r2Instance*i);

void s179r2_call_cb(s179r2Instance*i,U32 l0);

void s179r2Instantiate(s179r2Instance* instance, void* resolve(const char* module, const char* name));

void s179r2FreeInstance(s179r2Instance* instance);

#endif /* s179r2_H */

