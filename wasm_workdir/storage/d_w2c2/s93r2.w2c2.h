#ifndef s93r2_H
#define s93r2_H

#include "w2c2_base.h"

typedef struct s93r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s93r2Instance;

void f0(s93r2Instance*);

void f1(s93r2Instance*);

U32 f2(s93r2Instance*);

void f3(s93r2Instance*,U32);

U32 f4(s93r2Instance*,U32,U32,U32,U32);

void f5(s93r2Instance*,U32,U32,U32,U32,U32);

void f6(s93r2Instance*,U32);

void f7(s93r2Instance*,U32,U32,U32);

void f8(s93r2Instance*,U32,U32,U32);

void s93r2____wasm_call_ctors(s93r2Instance*i);

void s93r2____wasm_apply_data_relocs(s93r2Instance*i);

U32 s93r2_func_1(s93r2Instance*i);

void s93r2_call_cb(s93r2Instance*i,U32 l0);

void s93r2Instantiate(s93r2Instance* instance, void* resolve(const char* module, const char* name));

void s93r2FreeInstance(s93r2Instance* instance);

#endif /* s93r2_H */

