#ifndef s721r2_H
#define s721r2_H

#include "w2c2_base.h"

typedef struct s721r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s721r2Instance;

void f0(s721r2Instance*);

void f1(s721r2Instance*);

U32 f2(s721r2Instance*);

void f3(s721r2Instance*,U32);

U32 f4(s721r2Instance*,U32,U32,U32);

void f5(s721r2Instance*,U32,U32,U32,U32,U32);

void f6(s721r2Instance*,U32);

void f7(s721r2Instance*,U32,U32,U32);

void f8(s721r2Instance*,U32,U32,U32);

void s721r2____wasm_call_ctors(s721r2Instance*i);

void s721r2____wasm_apply_data_relocs(s721r2Instance*i);

U32 s721r2_func_1(s721r2Instance*i);

void s721r2_call_cb(s721r2Instance*i,U32 l0);

void s721r2Instantiate(s721r2Instance* instance, void* resolve(const char* module, const char* name));

void s721r2FreeInstance(s721r2Instance* instance);

#endif /* s721r2_H */

