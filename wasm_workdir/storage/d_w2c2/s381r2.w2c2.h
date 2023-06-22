#ifndef s381r2_H
#define s381r2_H

#include "w2c2_base.h"

typedef struct s381r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s381r2Instance;

void f0(s381r2Instance*);

void f1(s381r2Instance*);

U32 f2(s381r2Instance*);

void f3(s381r2Instance*,U32);

U32 f4(s381r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s381r2Instance*,U32,U32,U32,U32,U32);

void f6(s381r2Instance*,U32);

void f7(s381r2Instance*,U32,U32,U32);

void f8(s381r2Instance*,U32,U32,U32);

void s381r2____wasm_call_ctors(s381r2Instance*i);

void s381r2____wasm_apply_data_relocs(s381r2Instance*i);

U32 s381r2_func_1(s381r2Instance*i);

void s381r2_call_cb(s381r2Instance*i,U32 l0);

void s381r2Instantiate(s381r2Instance* instance, void* resolve(const char* module, const char* name));

void s381r2FreeInstance(s381r2Instance* instance);

#endif /* s381r2_H */

