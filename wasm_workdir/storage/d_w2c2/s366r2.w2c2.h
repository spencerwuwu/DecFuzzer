#ifndef s366r2_H
#define s366r2_H

#include "w2c2_base.h"

typedef struct s366r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s366r2Instance;

void f0(s366r2Instance*);

void f1(s366r2Instance*);

U32 f2(s366r2Instance*);

void f3(s366r2Instance*,U32);

U32 f4(s366r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s366r2Instance*,U32,U32,U32,U32,U32);

void f6(s366r2Instance*,U32);

void f7(s366r2Instance*,U32,U32,U32);

void f8(s366r2Instance*,U32,U32,U32);

void s366r2____wasm_call_ctors(s366r2Instance*i);

void s366r2____wasm_apply_data_relocs(s366r2Instance*i);

U32 s366r2_func_1(s366r2Instance*i);

void s366r2_call_cb(s366r2Instance*i,U32 l0);

void s366r2Instantiate(s366r2Instance* instance, void* resolve(const char* module, const char* name));

void s366r2FreeInstance(s366r2Instance* instance);

#endif /* s366r2_H */

