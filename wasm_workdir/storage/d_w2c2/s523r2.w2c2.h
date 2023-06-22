#ifndef s523r2_H
#define s523r2_H

#include "w2c2_base.h"

typedef struct s523r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s523r2Instance;

void f0(s523r2Instance*);

void f1(s523r2Instance*);

U32 f2(s523r2Instance*);

void f3(s523r2Instance*,U32);

U32 f4(s523r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s523r2Instance*,U32,U32,U32,U32,U32);

void f6(s523r2Instance*,U32);

void f7(s523r2Instance*,U32,U32,U32);

void f8(s523r2Instance*,U32,U32,U32);

void s523r2____wasm_call_ctors(s523r2Instance*i);

void s523r2____wasm_apply_data_relocs(s523r2Instance*i);

U32 s523r2_func_1(s523r2Instance*i);

void s523r2_call_cb(s523r2Instance*i,U32 l0);

void s523r2Instantiate(s523r2Instance* instance, void* resolve(const char* module, const char* name));

void s523r2FreeInstance(s523r2Instance* instance);

#endif /* s523r2_H */

