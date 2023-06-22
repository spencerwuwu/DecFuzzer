#ifndef s747r2_H
#define s747r2_H

#include "w2c2_base.h"

typedef struct s747r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s747r2Instance;

void f0(s747r2Instance*);

void f1(s747r2Instance*);

U32 f2(s747r2Instance*);

void f3(s747r2Instance*,U32);

U32 f4(s747r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s747r2Instance*,U32,U32,U32,U32,U32);

void f6(s747r2Instance*,U32);

void f7(s747r2Instance*,U32,U32,U32);

void f8(s747r2Instance*,U32,U32,U32);

void s747r2____wasm_call_ctors(s747r2Instance*i);

void s747r2____wasm_apply_data_relocs(s747r2Instance*i);

U32 s747r2_func_1(s747r2Instance*i);

void s747r2_call_cb(s747r2Instance*i,U32 l0);

void s747r2Instantiate(s747r2Instance* instance, void* resolve(const char* module, const char* name));

void s747r2FreeInstance(s747r2Instance* instance);

#endif /* s747r2_H */

