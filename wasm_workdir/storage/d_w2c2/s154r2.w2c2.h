#ifndef s154r2_H
#define s154r2_H

#include "w2c2_base.h"

typedef struct s154r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s154r2Instance;

void f0(s154r2Instance*);

void f1(s154r2Instance*);

U32 f2(s154r2Instance*);

void f3(s154r2Instance*,U32);

U32 f4(s154r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s154r2Instance*,U32,U32,U32,U32,U32);

void f6(s154r2Instance*,U32);

void f7(s154r2Instance*,U32,U32,U32);

void f8(s154r2Instance*,U32,U32,U32);

void s154r2____wasm_call_ctors(s154r2Instance*i);

void s154r2____wasm_apply_data_relocs(s154r2Instance*i);

U32 s154r2_func_1(s154r2Instance*i);

void s154r2_call_cb(s154r2Instance*i,U32 l0);

void s154r2Instantiate(s154r2Instance* instance, void* resolve(const char* module, const char* name));

void s154r2FreeInstance(s154r2Instance* instance);

#endif /* s154r2_H */

