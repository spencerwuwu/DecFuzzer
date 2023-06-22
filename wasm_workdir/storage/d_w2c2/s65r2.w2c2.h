#ifndef s65r2_H
#define s65r2_H

#include "w2c2_base.h"

typedef struct s65r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s65r2Instance;

void f0(s65r2Instance*);

void f1(s65r2Instance*);

U32 f2(s65r2Instance*);

void f3(s65r2Instance*,U32);

U32 f4(s65r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s65r2Instance*,U32,U32,U32,U32,U32);

void f6(s65r2Instance*,U32);

void f7(s65r2Instance*,U32,U32,U32);

void f8(s65r2Instance*,U32,U32,U32);

void s65r2____wasm_call_ctors(s65r2Instance*i);

void s65r2____wasm_apply_data_relocs(s65r2Instance*i);

U32 s65r2_func_1(s65r2Instance*i);

void s65r2_call_cb(s65r2Instance*i,U32 l0);

void s65r2Instantiate(s65r2Instance* instance, void* resolve(const char* module, const char* name));

void s65r2FreeInstance(s65r2Instance* instance);

#endif /* s65r2_H */

