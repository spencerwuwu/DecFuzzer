#ifndef s398r2_H
#define s398r2_H

#include "w2c2_base.h"

typedef struct s398r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s398r2Instance;

void f0(s398r2Instance*);

void f1(s398r2Instance*);

U32 f2(s398r2Instance*);

void f3(s398r2Instance*,U32);

U32 f4(s398r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s398r2Instance*,U32,U32,U32,U32,U32);

void f6(s398r2Instance*,U32);

void f7(s398r2Instance*,U32,U32,U32);

void f8(s398r2Instance*,U32,U32,U32);

void s398r2____wasm_call_ctors(s398r2Instance*i);

void s398r2____wasm_apply_data_relocs(s398r2Instance*i);

U32 s398r2_func_1(s398r2Instance*i);

void s398r2_call_cb(s398r2Instance*i,U32 l0);

void s398r2Instantiate(s398r2Instance* instance, void* resolve(const char* module, const char* name));

void s398r2FreeInstance(s398r2Instance* instance);

#endif /* s398r2_H */

