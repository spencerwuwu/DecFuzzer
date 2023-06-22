#ifndef s883r2_H
#define s883r2_H

#include "w2c2_base.h"

typedef struct s883r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s883r2Instance;

void f0(s883r2Instance*);

void f1(s883r2Instance*);

U32 f2(s883r2Instance*);

void f3(s883r2Instance*,U32);

U32 f4(s883r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s883r2Instance*,U32,U32,U32,U32,U32);

void f6(s883r2Instance*,U32);

void f7(s883r2Instance*,U32,U32,U32);

void f8(s883r2Instance*,U32,U32,U32);

void s883r2____wasm_call_ctors(s883r2Instance*i);

void s883r2____wasm_apply_data_relocs(s883r2Instance*i);

U32 s883r2_func_1(s883r2Instance*i);

void s883r2_call_cb(s883r2Instance*i,U32 l0);

void s883r2Instantiate(s883r2Instance* instance, void* resolve(const char* module, const char* name));

void s883r2FreeInstance(s883r2Instance* instance);

#endif /* s883r2_H */

