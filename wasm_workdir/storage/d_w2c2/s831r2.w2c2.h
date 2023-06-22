#ifndef s831r2_H
#define s831r2_H

#include "w2c2_base.h"

typedef struct s831r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s831r2Instance;

void f0(s831r2Instance*);

void f1(s831r2Instance*);

U32 f2(s831r2Instance*);

void f3(s831r2Instance*,U32);

U32 f4(s831r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s831r2Instance*,U32,U32,U32,U32,U32);

void f6(s831r2Instance*,U32);

void f7(s831r2Instance*,U32,U32,U32);

void f8(s831r2Instance*,U32,U32,U32);

void s831r2____wasm_call_ctors(s831r2Instance*i);

void s831r2____wasm_apply_data_relocs(s831r2Instance*i);

U32 s831r2_func_1(s831r2Instance*i);

void s831r2_call_cb(s831r2Instance*i,U32 l0);

void s831r2Instantiate(s831r2Instance* instance, void* resolve(const char* module, const char* name));

void s831r2FreeInstance(s831r2Instance* instance);

#endif /* s831r2_H */

