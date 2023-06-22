#ifndef s995r2_H
#define s995r2_H

#include "w2c2_base.h"

typedef struct s995r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s995r2Instance;

void f0(s995r2Instance*);

void f1(s995r2Instance*);

U32 f2(s995r2Instance*);

void f3(s995r2Instance*,U32);

U32 f4(s995r2Instance*,U32,U32,U32,U32);

void f5(s995r2Instance*,U32,U32,U32,U32,U32);

void f6(s995r2Instance*,U32);

void f7(s995r2Instance*,U32,U32,U32);

void f8(s995r2Instance*,U32,U32,U32);

void s995r2____wasm_call_ctors(s995r2Instance*i);

void s995r2____wasm_apply_data_relocs(s995r2Instance*i);

U32 s995r2_func_1(s995r2Instance*i);

void s995r2_call_cb(s995r2Instance*i,U32 l0);

void s995r2Instantiate(s995r2Instance* instance, void* resolve(const char* module, const char* name));

void s995r2FreeInstance(s995r2Instance* instance);

#endif /* s995r2_H */

