#ifndef s0r2_H
#define s0r2_H

#include "w2c2_base.h"

typedef struct s0r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s0r2Instance;

void f0(s0r2Instance*);

void f1(s0r2Instance*);

U32 f2(s0r2Instance*);

void f3(s0r2Instance*,U32);

U32 f4(s0r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s0r2Instance*,U32,U32,U32,U32,U32);

void f6(s0r2Instance*,U32);

void f7(s0r2Instance*,U32,U32,U32);

void f8(s0r2Instance*,U32,U32,U32);

void s0r2____wasm_call_ctors(s0r2Instance*i);

void s0r2____wasm_apply_data_relocs(s0r2Instance*i);

U32 s0r2_func_1(s0r2Instance*i);

void s0r2_call_cb(s0r2Instance*i,U32 l0);

void s0r2Instantiate(s0r2Instance* instance, void* resolve(const char* module, const char* name));

void s0r2FreeInstance(s0r2Instance* instance);

#endif /* s0r2_H */

