#ifndef s96r2_H
#define s96r2_H

#include "w2c2_base.h"

typedef struct s96r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s96r2Instance;

void f0(s96r2Instance*);

void f1(s96r2Instance*);

U32 f2(s96r2Instance*);

void f3(s96r2Instance*,U32);

U32 f4(s96r2Instance*,U32,U32,U32);

void f5(s96r2Instance*,U32,U32,U32,U32,U32);

void f6(s96r2Instance*,U32);

void f7(s96r2Instance*,U32,U32,U32);

void f8(s96r2Instance*,U32,U32,U32);

void s96r2____wasm_call_ctors(s96r2Instance*i);

void s96r2____wasm_apply_data_relocs(s96r2Instance*i);

U32 s96r2_func_1(s96r2Instance*i);

void s96r2_call_cb(s96r2Instance*i,U32 l0);

void s96r2Instantiate(s96r2Instance* instance, void* resolve(const char* module, const char* name));

void s96r2FreeInstance(s96r2Instance* instance);

#endif /* s96r2_H */

