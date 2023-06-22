#ifndef s433r2_H
#define s433r2_H

#include "w2c2_base.h"

typedef struct s433r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s433r2Instance;

void f0(s433r2Instance*);

void f1(s433r2Instance*);

U32 f2(s433r2Instance*);

void f3(s433r2Instance*,U32);

U32 f4(s433r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s433r2Instance*,U32,U32,U32,U32,U32);

void f6(s433r2Instance*,U32);

void f7(s433r2Instance*,U32,U32,U32);

void f8(s433r2Instance*,U32,U32,U32);

void s433r2____wasm_call_ctors(s433r2Instance*i);

void s433r2____wasm_apply_data_relocs(s433r2Instance*i);

U32 s433r2_func_1(s433r2Instance*i);

void s433r2_call_cb(s433r2Instance*i,U32 l0);

void s433r2Instantiate(s433r2Instance* instance, void* resolve(const char* module, const char* name));

void s433r2FreeInstance(s433r2Instance* instance);

#endif /* s433r2_H */

