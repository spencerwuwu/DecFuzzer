#ifndef s677r2_H
#define s677r2_H

#include "w2c2_base.h"

typedef struct s677r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s677r2Instance;

void f0(s677r2Instance*);

void f1(s677r2Instance*);

U32 f2(s677r2Instance*);

void f3(s677r2Instance*,U32);

U32 f4(s677r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s677r2Instance*,U32,U32,U32,U32,U32);

void f6(s677r2Instance*,U32);

void f7(s677r2Instance*,U32,U32,U32);

void f8(s677r2Instance*,U32,U32,U32);

void s677r2____wasm_call_ctors(s677r2Instance*i);

void s677r2____wasm_apply_data_relocs(s677r2Instance*i);

U32 s677r2_func_1(s677r2Instance*i);

void s677r2_call_cb(s677r2Instance*i,U32 l0);

void s677r2Instantiate(s677r2Instance* instance, void* resolve(const char* module, const char* name));

void s677r2FreeInstance(s677r2Instance* instance);

#endif /* s677r2_H */

