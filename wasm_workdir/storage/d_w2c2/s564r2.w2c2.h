#ifndef s564r2_H
#define s564r2_H

#include "w2c2_base.h"

typedef struct s564r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s564r2Instance;

void f0(s564r2Instance*);

void f1(s564r2Instance*);

U32 f2(s564r2Instance*);

void f3(s564r2Instance*,U32);

U32 f4(s564r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s564r2Instance*,U32,U32,U32,U32,U32);

void f6(s564r2Instance*,U32);

void f7(s564r2Instance*,U32,U32,U32);

void f8(s564r2Instance*,U32,U32,U32);

void s564r2____wasm_call_ctors(s564r2Instance*i);

void s564r2____wasm_apply_data_relocs(s564r2Instance*i);

U32 s564r2_func_1(s564r2Instance*i);

void s564r2_call_cb(s564r2Instance*i,U32 l0);

void s564r2Instantiate(s564r2Instance* instance, void* resolve(const char* module, const char* name));

void s564r2FreeInstance(s564r2Instance* instance);

#endif /* s564r2_H */

