#ifndef s913r2_H
#define s913r2_H

#include "w2c2_base.h"

typedef struct s913r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s913r2Instance;

void f0(s913r2Instance*);

void f1(s913r2Instance*);

U32 f2(s913r2Instance*);

void f3(s913r2Instance*,U32);

U32 f4(s913r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s913r2Instance*,U32,U32,U32,U32,U32);

void f6(s913r2Instance*,U32);

void f7(s913r2Instance*,U32,U32,U32);

void f8(s913r2Instance*,U32,U32,U32);

void s913r2____wasm_call_ctors(s913r2Instance*i);

void s913r2____wasm_apply_data_relocs(s913r2Instance*i);

U32 s913r2_func_1(s913r2Instance*i);

void s913r2_call_cb(s913r2Instance*i,U32 l0);

void s913r2Instantiate(s913r2Instance* instance, void* resolve(const char* module, const char* name));

void s913r2FreeInstance(s913r2Instance* instance);

#endif /* s913r2_H */

