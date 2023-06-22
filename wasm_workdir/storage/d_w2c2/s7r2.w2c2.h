#ifndef s7r2_H
#define s7r2_H

#include "w2c2_base.h"

typedef struct s7r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s7r2Instance;

void f0(s7r2Instance*);

void f1(s7r2Instance*);

U32 f2(s7r2Instance*);

void f3(s7r2Instance*,U32);

U32 f4(s7r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s7r2Instance*,U32,U32,U32,U32,U32);

void f6(s7r2Instance*,U32);

void f7(s7r2Instance*,U32,U32,U32);

void f8(s7r2Instance*,U32,U32,U32);

void s7r2____wasm_call_ctors(s7r2Instance*i);

void s7r2____wasm_apply_data_relocs(s7r2Instance*i);

U32 s7r2_func_1(s7r2Instance*i);

void s7r2_call_cb(s7r2Instance*i,U32 l0);

void s7r2Instantiate(s7r2Instance* instance, void* resolve(const char* module, const char* name));

void s7r2FreeInstance(s7r2Instance* instance);

#endif /* s7r2_H */

