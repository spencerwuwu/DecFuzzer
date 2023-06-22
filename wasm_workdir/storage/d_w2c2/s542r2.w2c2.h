#ifndef s542r2_H
#define s542r2_H

#include "w2c2_base.h"

typedef struct s542r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s542r2Instance;

void f0(s542r2Instance*);

void f1(s542r2Instance*);

U32 f2(s542r2Instance*);

void f3(s542r2Instance*,U32);

U32 f4(s542r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s542r2Instance*,U32,U32,U32,U32,U32);

void f6(s542r2Instance*,U32);

void f7(s542r2Instance*,U32,U32,U32);

void f8(s542r2Instance*,U32,U32,U32);

void s542r2____wasm_call_ctors(s542r2Instance*i);

void s542r2____wasm_apply_data_relocs(s542r2Instance*i);

U32 s542r2_func_1(s542r2Instance*i);

void s542r2_call_cb(s542r2Instance*i,U32 l0);

void s542r2Instantiate(s542r2Instance* instance, void* resolve(const char* module, const char* name));

void s542r2FreeInstance(s542r2Instance* instance);

#endif /* s542r2_H */

