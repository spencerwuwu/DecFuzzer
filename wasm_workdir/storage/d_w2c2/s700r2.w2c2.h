#ifndef s700r2_H
#define s700r2_H

#include "w2c2_base.h"

typedef struct s700r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s700r2Instance;

void f0(s700r2Instance*);

void f1(s700r2Instance*);

U32 f2(s700r2Instance*);

void f3(s700r2Instance*,U32);

U32 f4(s700r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s700r2Instance*,U32,U32,U32,U32,U32);

void f6(s700r2Instance*,U32);

void f7(s700r2Instance*,U32,U32,U32);

void f8(s700r2Instance*,U32,U32,U32);

void s700r2____wasm_call_ctors(s700r2Instance*i);

void s700r2____wasm_apply_data_relocs(s700r2Instance*i);

U32 s700r2_func_1(s700r2Instance*i);

void s700r2_call_cb(s700r2Instance*i,U32 l0);

void s700r2Instantiate(s700r2Instance* instance, void* resolve(const char* module, const char* name));

void s700r2FreeInstance(s700r2Instance* instance);

#endif /* s700r2_H */

