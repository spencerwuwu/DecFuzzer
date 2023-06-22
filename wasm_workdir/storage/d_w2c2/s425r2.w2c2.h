#ifndef s425r2_H
#define s425r2_H

#include "w2c2_base.h"

typedef struct s425r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s425r2Instance;

void f0(s425r2Instance*);

void f1(s425r2Instance*);

U32 f2(s425r2Instance*);

void f3(s425r2Instance*,U32);

U32 f4(s425r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s425r2Instance*,U32,U32,U32,U32,U32);

void f6(s425r2Instance*,U32);

void f7(s425r2Instance*,U32,U32,U32);

void f8(s425r2Instance*,U32,U32,U32);

void s425r2____wasm_call_ctors(s425r2Instance*i);

void s425r2____wasm_apply_data_relocs(s425r2Instance*i);

U32 s425r2_func_1(s425r2Instance*i);

void s425r2_call_cb(s425r2Instance*i,U32 l0);

void s425r2Instantiate(s425r2Instance* instance, void* resolve(const char* module, const char* name));

void s425r2FreeInstance(s425r2Instance* instance);

#endif /* s425r2_H */

