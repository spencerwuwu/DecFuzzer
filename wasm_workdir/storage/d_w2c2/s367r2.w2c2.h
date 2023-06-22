#ifndef s367r2_H
#define s367r2_H

#include "w2c2_base.h"

typedef struct s367r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s367r2Instance;

void f0(s367r2Instance*);

void f1(s367r2Instance*);

U32 f2(s367r2Instance*);

void f3(s367r2Instance*,U32);

U32 f4(s367r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s367r2Instance*,U32,U32,U32,U32,U32);

void f6(s367r2Instance*,U32);

void f7(s367r2Instance*,U32,U32,U32);

void f8(s367r2Instance*,U32,U32,U32);

void s367r2____wasm_call_ctors(s367r2Instance*i);

void s367r2____wasm_apply_data_relocs(s367r2Instance*i);

U32 s367r2_func_1(s367r2Instance*i);

void s367r2_call_cb(s367r2Instance*i,U32 l0);

void s367r2Instantiate(s367r2Instance* instance, void* resolve(const char* module, const char* name));

void s367r2FreeInstance(s367r2Instance* instance);

#endif /* s367r2_H */

