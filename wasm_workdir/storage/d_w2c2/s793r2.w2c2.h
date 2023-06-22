#ifndef s793r2_H
#define s793r2_H

#include "w2c2_base.h"

typedef struct s793r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s793r2Instance;

void f0(s793r2Instance*);

void f1(s793r2Instance*);

U32 f2(s793r2Instance*);

void f3(s793r2Instance*,U32);

U32 f4(s793r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s793r2Instance*,U32,U32,U32,U32,U32);

void f6(s793r2Instance*,U32);

void f7(s793r2Instance*,U32,U32,U32);

void f8(s793r2Instance*,U32,U32,U32);

void s793r2____wasm_call_ctors(s793r2Instance*i);

void s793r2____wasm_apply_data_relocs(s793r2Instance*i);

U32 s793r2_func_1(s793r2Instance*i);

void s793r2_call_cb(s793r2Instance*i,U32 l0);

void s793r2Instantiate(s793r2Instance* instance, void* resolve(const char* module, const char* name));

void s793r2FreeInstance(s793r2Instance* instance);

#endif /* s793r2_H */

