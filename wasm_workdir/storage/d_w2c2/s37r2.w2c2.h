#ifndef s37r2_H
#define s37r2_H

#include "w2c2_base.h"

typedef struct s37r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s37r2Instance;

void f0(s37r2Instance*);

void f1(s37r2Instance*);

U32 f2(s37r2Instance*);

void f3(s37r2Instance*,U32);

U32 f4(s37r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s37r2Instance*,U32,U32,U32,U32,U32);

void f6(s37r2Instance*,U32);

void f7(s37r2Instance*,U32,U32,U32);

void f8(s37r2Instance*,U32,U32,U32);

void s37r2____wasm_call_ctors(s37r2Instance*i);

void s37r2____wasm_apply_data_relocs(s37r2Instance*i);

U32 s37r2_func_1(s37r2Instance*i);

void s37r2_call_cb(s37r2Instance*i,U32 l0);

void s37r2Instantiate(s37r2Instance* instance, void* resolve(const char* module, const char* name));

void s37r2FreeInstance(s37r2Instance* instance);

#endif /* s37r2_H */

