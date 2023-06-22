#ifndef s930r2_H
#define s930r2_H

#include "w2c2_base.h"

typedef struct s930r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s930r2Instance;

void f0(s930r2Instance*);

void f1(s930r2Instance*);

U32 f2(s930r2Instance*);

void f3(s930r2Instance*,U32);

U32 f4(s930r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s930r2Instance*,U32,U32,U32,U32,U32);

void f6(s930r2Instance*,U32);

void f7(s930r2Instance*,U32,U32,U32);

void f8(s930r2Instance*,U32,U32,U32);

void s930r2____wasm_call_ctors(s930r2Instance*i);

void s930r2____wasm_apply_data_relocs(s930r2Instance*i);

U32 s930r2_func_1(s930r2Instance*i);

void s930r2_call_cb(s930r2Instance*i,U32 l0);

void s930r2Instantiate(s930r2Instance* instance, void* resolve(const char* module, const char* name));

void s930r2FreeInstance(s930r2Instance* instance);

#endif /* s930r2_H */

