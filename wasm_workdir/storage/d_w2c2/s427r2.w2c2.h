#ifndef s427r2_H
#define s427r2_H

#include "w2c2_base.h"

typedef struct s427r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s427r2Instance;

void f0(s427r2Instance*);

void f1(s427r2Instance*);

U32 f2(s427r2Instance*);

void f3(s427r2Instance*,U32);

U32 f4(s427r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s427r2Instance*,U32,U32,U32,U32,U32);

void f6(s427r2Instance*,U32);

void f7(s427r2Instance*,U32,U32,U32);

void f8(s427r2Instance*,U32,U32,U32);

void s427r2____wasm_call_ctors(s427r2Instance*i);

void s427r2____wasm_apply_data_relocs(s427r2Instance*i);

U32 s427r2_func_1(s427r2Instance*i);

void s427r2_call_cb(s427r2Instance*i,U32 l0);

void s427r2Instantiate(s427r2Instance* instance, void* resolve(const char* module, const char* name));

void s427r2FreeInstance(s427r2Instance* instance);

#endif /* s427r2_H */

