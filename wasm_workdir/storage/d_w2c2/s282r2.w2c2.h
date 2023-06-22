#ifndef s282r2_H
#define s282r2_H

#include "w2c2_base.h"

typedef struct s282r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s282r2Instance;

void f0(s282r2Instance*);

void f1(s282r2Instance*);

U32 f2(s282r2Instance*);

void f3(s282r2Instance*,U32);

U32 f4(s282r2Instance*,U32,U32,U32);

void f5(s282r2Instance*,U32,U32,U32,U32,U32);

void f6(s282r2Instance*,U32);

void f7(s282r2Instance*,U32,U32,U32);

void f8(s282r2Instance*,U32,U32,U32);

void s282r2____wasm_call_ctors(s282r2Instance*i);

void s282r2____wasm_apply_data_relocs(s282r2Instance*i);

U32 s282r2_func_1(s282r2Instance*i);

void s282r2_call_cb(s282r2Instance*i,U32 l0);

void s282r2Instantiate(s282r2Instance* instance, void* resolve(const char* module, const char* name));

void s282r2FreeInstance(s282r2Instance* instance);

#endif /* s282r2_H */

