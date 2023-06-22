#ifndef s269r2_H
#define s269r2_H

#include "w2c2_base.h"

typedef struct s269r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s269r2Instance;

void f0(s269r2Instance*);

void f1(s269r2Instance*);

U32 f2(s269r2Instance*);

void f3(s269r2Instance*,U32);

U32 f4(s269r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s269r2Instance*,U32,U32,U32,U32,U32);

void f6(s269r2Instance*,U32);

void f7(s269r2Instance*,U32,U32,U32);

void f8(s269r2Instance*,U32,U32,U32);

void s269r2____wasm_call_ctors(s269r2Instance*i);

void s269r2____wasm_apply_data_relocs(s269r2Instance*i);

U32 s269r2_func_1(s269r2Instance*i);

void s269r2_call_cb(s269r2Instance*i,U32 l0);

void s269r2Instantiate(s269r2Instance* instance, void* resolve(const char* module, const char* name));

void s269r2FreeInstance(s269r2Instance* instance);

#endif /* s269r2_H */

