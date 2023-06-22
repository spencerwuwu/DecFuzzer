#ifndef s949r2_H
#define s949r2_H

#include "w2c2_base.h"

typedef struct s949r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s949r2Instance;

void f0(s949r2Instance*);

void f1(s949r2Instance*);

U32 f2(s949r2Instance*);

void f3(s949r2Instance*,U32);

U32 f4(s949r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s949r2Instance*,U32,U32,U32,U32,U32);

void f6(s949r2Instance*,U32);

void f7(s949r2Instance*,U32,U32,U32);

void f8(s949r2Instance*,U32,U32,U32);

void s949r2____wasm_call_ctors(s949r2Instance*i);

void s949r2____wasm_apply_data_relocs(s949r2Instance*i);

U32 s949r2_func_1(s949r2Instance*i);

void s949r2_call_cb(s949r2Instance*i,U32 l0);

void s949r2Instantiate(s949r2Instance* instance, void* resolve(const char* module, const char* name));

void s949r2FreeInstance(s949r2Instance* instance);

#endif /* s949r2_H */

