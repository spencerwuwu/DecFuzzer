#ifndef s412r2_H
#define s412r2_H

#include "w2c2_base.h"

typedef struct s412r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s412r2Instance;

void f0(s412r2Instance*);

void f1(s412r2Instance*);

U32 f2(s412r2Instance*);

void f3(s412r2Instance*,U32);

U32 f4(s412r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s412r2Instance*,U32,U32,U32,U32,U32);

void f6(s412r2Instance*,U32);

void f7(s412r2Instance*,U32,U32,U32);

void f8(s412r2Instance*,U32,U32,U32);

void s412r2____wasm_call_ctors(s412r2Instance*i);

void s412r2____wasm_apply_data_relocs(s412r2Instance*i);

U32 s412r2_func_1(s412r2Instance*i);

void s412r2_call_cb(s412r2Instance*i,U32 l0);

void s412r2Instantiate(s412r2Instance* instance, void* resolve(const char* module, const char* name));

void s412r2FreeInstance(s412r2Instance* instance);

#endif /* s412r2_H */

