#ifndef s458r2_H
#define s458r2_H

#include "w2c2_base.h"

typedef struct s458r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s458r2Instance;

void f0(s458r2Instance*);

void f1(s458r2Instance*);

U32 f2(s458r2Instance*);

void f3(s458r2Instance*,U32);

U32 f4(s458r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s458r2Instance*,U32,U32,U32,U32,U32);

void f6(s458r2Instance*,U32);

void f7(s458r2Instance*,U32,U32,U32);

void f8(s458r2Instance*,U32,U32,U32);

void s458r2____wasm_call_ctors(s458r2Instance*i);

void s458r2____wasm_apply_data_relocs(s458r2Instance*i);

U32 s458r2_func_1(s458r2Instance*i);

void s458r2_call_cb(s458r2Instance*i,U32 l0);

void s458r2Instantiate(s458r2Instance* instance, void* resolve(const char* module, const char* name));

void s458r2FreeInstance(s458r2Instance* instance);

#endif /* s458r2_H */

