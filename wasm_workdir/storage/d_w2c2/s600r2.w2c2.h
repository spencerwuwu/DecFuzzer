#ifndef s600r2_H
#define s600r2_H

#include "w2c2_base.h"

typedef struct s600r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s600r2Instance;

void f0(s600r2Instance*);

void f1(s600r2Instance*);

U32 f2(s600r2Instance*);

void f3(s600r2Instance*,U32);

U32 f4(s600r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s600r2Instance*,U32,U32,U32,U32,U32);

void f6(s600r2Instance*,U32);

void f7(s600r2Instance*,U32,U32,U32);

void f8(s600r2Instance*,U32,U32,U32);

void s600r2____wasm_call_ctors(s600r2Instance*i);

void s600r2____wasm_apply_data_relocs(s600r2Instance*i);

U32 s600r2_func_1(s600r2Instance*i);

void s600r2_call_cb(s600r2Instance*i,U32 l0);

void s600r2Instantiate(s600r2Instance* instance, void* resolve(const char* module, const char* name));

void s600r2FreeInstance(s600r2Instance* instance);

#endif /* s600r2_H */

