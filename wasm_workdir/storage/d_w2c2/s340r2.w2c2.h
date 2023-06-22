#ifndef s340r2_H
#define s340r2_H

#include "w2c2_base.h"

typedef struct s340r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s340r2Instance;

void f0(s340r2Instance*);

void f1(s340r2Instance*);

U32 f2(s340r2Instance*);

void f3(s340r2Instance*,U32);

U32 f4(s340r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s340r2Instance*,U32,U32,U32,U32,U32);

void f6(s340r2Instance*,U32);

void f7(s340r2Instance*,U32,U32,U32);

void f8(s340r2Instance*,U32,U32,U32);

void s340r2____wasm_call_ctors(s340r2Instance*i);

void s340r2____wasm_apply_data_relocs(s340r2Instance*i);

U32 s340r2_func_1(s340r2Instance*i);

void s340r2_call_cb(s340r2Instance*i,U32 l0);

void s340r2Instantiate(s340r2Instance* instance, void* resolve(const char* module, const char* name));

void s340r2FreeInstance(s340r2Instance* instance);

#endif /* s340r2_H */

