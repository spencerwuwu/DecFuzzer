#ifndef s929r2_H
#define s929r2_H

#include "w2c2_base.h"

typedef struct s929r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s929r2Instance;

void f0(s929r2Instance*);

void f1(s929r2Instance*);

U32 f2(s929r2Instance*);

void f3(s929r2Instance*,U32);

U32 f4(s929r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s929r2Instance*,U32,U32,U32,U32,U32);

void f6(s929r2Instance*,U32);

void f7(s929r2Instance*,U32,U32,U32);

void f8(s929r2Instance*,U32,U32,U32);

void s929r2____wasm_call_ctors(s929r2Instance*i);

void s929r2____wasm_apply_data_relocs(s929r2Instance*i);

U32 s929r2_func_1(s929r2Instance*i);

void s929r2_call_cb(s929r2Instance*i,U32 l0);

void s929r2Instantiate(s929r2Instance* instance, void* resolve(const char* module, const char* name));

void s929r2FreeInstance(s929r2Instance* instance);

#endif /* s929r2_H */

