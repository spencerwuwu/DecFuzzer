#ifndef s357r2_H
#define s357r2_H

#include "w2c2_base.h"

typedef struct s357r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s357r2Instance;

void f0(s357r2Instance*);

void f1(s357r2Instance*);

U32 f2(s357r2Instance*);

void f3(s357r2Instance*,U32);

U32 f4(s357r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s357r2Instance*,U32,U32,U32,U32,U32);

void f6(s357r2Instance*,U32);

void f7(s357r2Instance*,U32,U32,U32);

void f8(s357r2Instance*,U32,U32,U32);

void s357r2____wasm_call_ctors(s357r2Instance*i);

void s357r2____wasm_apply_data_relocs(s357r2Instance*i);

U32 s357r2_func_1(s357r2Instance*i);

void s357r2_call_cb(s357r2Instance*i,U32 l0);

void s357r2Instantiate(s357r2Instance* instance, void* resolve(const char* module, const char* name));

void s357r2FreeInstance(s357r2Instance* instance);

#endif /* s357r2_H */

