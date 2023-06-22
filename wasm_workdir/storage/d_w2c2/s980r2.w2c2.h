#ifndef s980r2_H
#define s980r2_H

#include "w2c2_base.h"

typedef struct s980r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s980r2Instance;

void f0(s980r2Instance*);

void f1(s980r2Instance*);

U32 f2(s980r2Instance*);

void f3(s980r2Instance*,U32);

U32 f4(s980r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s980r2Instance*,U32,U32,U32,U32,U32);

void f6(s980r2Instance*,U32);

void f7(s980r2Instance*,U32,U32,U32);

void f8(s980r2Instance*,U32,U32,U32);

void s980r2____wasm_call_ctors(s980r2Instance*i);

void s980r2____wasm_apply_data_relocs(s980r2Instance*i);

U32 s980r2_func_1(s980r2Instance*i);

void s980r2_call_cb(s980r2Instance*i,U32 l0);

void s980r2Instantiate(s980r2Instance* instance, void* resolve(const char* module, const char* name));

void s980r2FreeInstance(s980r2Instance* instance);

#endif /* s980r2_H */

