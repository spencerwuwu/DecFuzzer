#ifndef s415r2_H
#define s415r2_H

#include "w2c2_base.h"

typedef struct s415r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s415r2Instance;

void f0(s415r2Instance*);

void f1(s415r2Instance*);

U32 f2(s415r2Instance*);

void f3(s415r2Instance*,U32);

U32 f4(s415r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s415r2Instance*,U32,U32,U32,U32,U32);

void f6(s415r2Instance*,U32);

void f7(s415r2Instance*,U32,U32,U32);

void f8(s415r2Instance*,U32,U32,U32);

void s415r2____wasm_call_ctors(s415r2Instance*i);

void s415r2____wasm_apply_data_relocs(s415r2Instance*i);

U32 s415r2_func_1(s415r2Instance*i);

void s415r2_call_cb(s415r2Instance*i,U32 l0);

void s415r2Instantiate(s415r2Instance* instance, void* resolve(const char* module, const char* name));

void s415r2FreeInstance(s415r2Instance* instance);

#endif /* s415r2_H */

