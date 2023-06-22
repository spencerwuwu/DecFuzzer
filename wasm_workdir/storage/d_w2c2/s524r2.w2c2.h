#ifndef s524r2_H
#define s524r2_H

#include "w2c2_base.h"

typedef struct s524r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s524r2Instance;

void f0(s524r2Instance*);

void f1(s524r2Instance*);

U32 f2(s524r2Instance*);

void f3(s524r2Instance*,U32);

U32 f4(s524r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s524r2Instance*,U32,U32,U32,U32,U32);

void f6(s524r2Instance*,U32);

void f7(s524r2Instance*,U32,U32,U32);

void f8(s524r2Instance*,U32,U32,U32);

void s524r2____wasm_call_ctors(s524r2Instance*i);

void s524r2____wasm_apply_data_relocs(s524r2Instance*i);

U32 s524r2_func_1(s524r2Instance*i);

void s524r2_call_cb(s524r2Instance*i,U32 l0);

void s524r2Instantiate(s524r2Instance* instance, void* resolve(const char* module, const char* name));

void s524r2FreeInstance(s524r2Instance* instance);

#endif /* s524r2_H */

