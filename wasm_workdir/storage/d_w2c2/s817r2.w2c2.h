#ifndef s817r2_H
#define s817r2_H

#include "w2c2_base.h"

typedef struct s817r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s817r2Instance;

void f0(s817r2Instance*);

void f1(s817r2Instance*);

U32 f2(s817r2Instance*);

void f3(s817r2Instance*,U32);

U32 f4(s817r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s817r2Instance*,U32,U32,U32,U32,U32);

void f6(s817r2Instance*,U32);

void f7(s817r2Instance*,U32,U32,U32);

void f8(s817r2Instance*,U32,U32,U32);

void s817r2____wasm_call_ctors(s817r2Instance*i);

void s817r2____wasm_apply_data_relocs(s817r2Instance*i);

U32 s817r2_func_1(s817r2Instance*i);

void s817r2_call_cb(s817r2Instance*i,U32 l0);

void s817r2Instantiate(s817r2Instance* instance, void* resolve(const char* module, const char* name));

void s817r2FreeInstance(s817r2Instance* instance);

#endif /* s817r2_H */

