#ifndef s446r2_H
#define s446r2_H

#include "w2c2_base.h"

typedef struct s446r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s446r2Instance;

void f0(s446r2Instance*);

void f1(s446r2Instance*);

U32 f2(s446r2Instance*);

void f3(s446r2Instance*,U32);

U32 f4(s446r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s446r2Instance*,U32,U32,U32,U32,U32);

void f6(s446r2Instance*,U32);

void f7(s446r2Instance*,U32,U32,U32);

void f8(s446r2Instance*,U32,U32,U32);

void s446r2____wasm_call_ctors(s446r2Instance*i);

void s446r2____wasm_apply_data_relocs(s446r2Instance*i);

U32 s446r2_func_1(s446r2Instance*i);

void s446r2_call_cb(s446r2Instance*i,U32 l0);

void s446r2Instantiate(s446r2Instance* instance, void* resolve(const char* module, const char* name));

void s446r2FreeInstance(s446r2Instance* instance);

#endif /* s446r2_H */
