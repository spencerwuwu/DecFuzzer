#ifndef s491r2_H
#define s491r2_H

#include "w2c2_base.h"

typedef struct s491r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s491r2Instance;

void f0(s491r2Instance*);

void f1(s491r2Instance*);

U32 f2(s491r2Instance*);

void f3(s491r2Instance*,U32);

U32 f4(s491r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s491r2Instance*,U32,U32,U32,U32,U32);

void f6(s491r2Instance*,U32);

void f7(s491r2Instance*,U32,U32,U32);

void f8(s491r2Instance*,U32,U32,U32);

void s491r2____wasm_call_ctors(s491r2Instance*i);

void s491r2____wasm_apply_data_relocs(s491r2Instance*i);

U32 s491r2_func_1(s491r2Instance*i);

void s491r2_call_cb(s491r2Instance*i,U32 l0);

void s491r2Instantiate(s491r2Instance* instance, void* resolve(const char* module, const char* name));

void s491r2FreeInstance(s491r2Instance* instance);

#endif /* s491r2_H */

