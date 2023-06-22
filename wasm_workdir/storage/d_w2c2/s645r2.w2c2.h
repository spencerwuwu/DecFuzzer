#ifndef s645r2_H
#define s645r2_H

#include "w2c2_base.h"

typedef struct s645r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s645r2Instance;

void f0(s645r2Instance*);

void f1(s645r2Instance*);

U32 f2(s645r2Instance*);

void f3(s645r2Instance*,U32);

U32 f4(s645r2Instance*,U32,U32,U32,U32);

void f5(s645r2Instance*,U32,U32,U32,U32,U32);

void f6(s645r2Instance*,U32);

void f7(s645r2Instance*,U32,U32,U32);

void f8(s645r2Instance*,U32,U32,U32);

void s645r2____wasm_call_ctors(s645r2Instance*i);

void s645r2____wasm_apply_data_relocs(s645r2Instance*i);

U32 s645r2_func_1(s645r2Instance*i);

void s645r2_call_cb(s645r2Instance*i,U32 l0);

void s645r2Instantiate(s645r2Instance* instance, void* resolve(const char* module, const char* name));

void s645r2FreeInstance(s645r2Instance* instance);

#endif /* s645r2_H */

