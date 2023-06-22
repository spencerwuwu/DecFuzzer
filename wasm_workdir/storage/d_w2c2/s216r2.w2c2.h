#ifndef s216r2_H
#define s216r2_H

#include "w2c2_base.h"

typedef struct s216r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s216r2Instance;

void f0(s216r2Instance*);

void f1(s216r2Instance*);

U32 f2(s216r2Instance*);

void f3(s216r2Instance*,U32);

U32 f4(s216r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s216r2Instance*,U32,U32,U32,U32,U32);

void f6(s216r2Instance*,U32);

void f7(s216r2Instance*,U32,U32,U32);

void f8(s216r2Instance*,U32,U32,U32);

void s216r2____wasm_call_ctors(s216r2Instance*i);

void s216r2____wasm_apply_data_relocs(s216r2Instance*i);

U32 s216r2_func_1(s216r2Instance*i);

void s216r2_call_cb(s216r2Instance*i,U32 l0);

void s216r2Instantiate(s216r2Instance* instance, void* resolve(const char* module, const char* name));

void s216r2FreeInstance(s216r2Instance* instance);

#endif /* s216r2_H */

