#ifndef s438r2_H
#define s438r2_H

#include "w2c2_base.h"

typedef struct s438r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s438r2Instance;

void f0(s438r2Instance*);

void f1(s438r2Instance*);

U32 f2(s438r2Instance*);

void f3(s438r2Instance*,U32);

U32 f4(s438r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s438r2Instance*,U32,U32,U32,U32,U32);

void f6(s438r2Instance*,U32);

void f7(s438r2Instance*,U32,U32,U32);

void f8(s438r2Instance*,U32,U32,U32);

void s438r2____wasm_call_ctors(s438r2Instance*i);

void s438r2____wasm_apply_data_relocs(s438r2Instance*i);

U32 s438r2_func_1(s438r2Instance*i);

void s438r2_call_cb(s438r2Instance*i,U32 l0);

void s438r2Instantiate(s438r2Instance* instance, void* resolve(const char* module, const char* name));

void s438r2FreeInstance(s438r2Instance* instance);

#endif /* s438r2_H */

