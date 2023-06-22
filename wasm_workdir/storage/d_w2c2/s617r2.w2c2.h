#ifndef s617r2_H
#define s617r2_H

#include "w2c2_base.h"

typedef struct s617r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s617r2Instance;

void f0(s617r2Instance*);

void f1(s617r2Instance*);

U32 f2(s617r2Instance*);

void f3(s617r2Instance*,U32);

U32 f4(s617r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s617r2Instance*,U32,U32,U32,U32,U32);

void f6(s617r2Instance*,U32);

void f7(s617r2Instance*,U32,U32,U32);

void f8(s617r2Instance*,U32,U32,U32);

void s617r2____wasm_call_ctors(s617r2Instance*i);

void s617r2____wasm_apply_data_relocs(s617r2Instance*i);

U32 s617r2_func_1(s617r2Instance*i);

void s617r2_call_cb(s617r2Instance*i,U32 l0);

void s617r2Instantiate(s617r2Instance* instance, void* resolve(const char* module, const char* name));

void s617r2FreeInstance(s617r2Instance* instance);

#endif /* s617r2_H */

