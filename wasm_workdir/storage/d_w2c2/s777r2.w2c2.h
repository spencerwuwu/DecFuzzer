#ifndef s777r2_H
#define s777r2_H

#include "w2c2_base.h"

typedef struct s777r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s777r2Instance;

void f0(s777r2Instance*);

void f1(s777r2Instance*);

U32 f2(s777r2Instance*);

void f3(s777r2Instance*,U32);

U32 f4(s777r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s777r2Instance*,U32,U32,U32,U32,U32);

void f6(s777r2Instance*,U32);

void f7(s777r2Instance*,U32,U32,U32);

void f8(s777r2Instance*,U32,U32,U32);

void s777r2____wasm_call_ctors(s777r2Instance*i);

void s777r2____wasm_apply_data_relocs(s777r2Instance*i);

U32 s777r2_func_1(s777r2Instance*i);

void s777r2_call_cb(s777r2Instance*i,U32 l0);

void s777r2Instantiate(s777r2Instance* instance, void* resolve(const char* module, const char* name));

void s777r2FreeInstance(s777r2Instance* instance);

#endif /* s777r2_H */

