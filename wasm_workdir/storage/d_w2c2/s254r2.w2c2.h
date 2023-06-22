#ifndef s254r2_H
#define s254r2_H

#include "w2c2_base.h"

typedef struct s254r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s254r2Instance;

void f0(s254r2Instance*);

void f1(s254r2Instance*);

U32 f2(s254r2Instance*);

void f3(s254r2Instance*,U32);

U32 f4(s254r2Instance*,U32,U32,U32,U32,U32);

void f5(s254r2Instance*,U32,U32,U32,U32,U32);

void f6(s254r2Instance*,U32);

void f7(s254r2Instance*,U32,U32,U32);

void f8(s254r2Instance*,U32,U32,U32);

void s254r2____wasm_call_ctors(s254r2Instance*i);

void s254r2____wasm_apply_data_relocs(s254r2Instance*i);

U32 s254r2_func_1(s254r2Instance*i);

void s254r2_call_cb(s254r2Instance*i,U32 l0);

void s254r2Instantiate(s254r2Instance* instance, void* resolve(const char* module, const char* name));

void s254r2FreeInstance(s254r2Instance* instance);

#endif /* s254r2_H */

