#ifndef s464r2_H
#define s464r2_H

#include "w2c2_base.h"

typedef struct s464r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s464r2Instance;

void f0(s464r2Instance*);

void f1(s464r2Instance*);

U32 f2(s464r2Instance*);

void f3(s464r2Instance*,U32);

U32 f4(s464r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s464r2Instance*,U32,U32,U32,U32,U32);

void f6(s464r2Instance*,U32);

void f7(s464r2Instance*,U32,U32,U32);

void f8(s464r2Instance*,U32,U32,U32);

void s464r2____wasm_call_ctors(s464r2Instance*i);

void s464r2____wasm_apply_data_relocs(s464r2Instance*i);

U32 s464r2_func_1(s464r2Instance*i);

void s464r2_call_cb(s464r2Instance*i,U32 l0);

void s464r2Instantiate(s464r2Instance* instance, void* resolve(const char* module, const char* name));

void s464r2FreeInstance(s464r2Instance* instance);

#endif /* s464r2_H */

