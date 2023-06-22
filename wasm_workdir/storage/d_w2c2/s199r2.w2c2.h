#ifndef s199r2_H
#define s199r2_H

#include "w2c2_base.h"

typedef struct s199r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s199r2Instance;

void f0(s199r2Instance*);

void f1(s199r2Instance*);

U32 f2(s199r2Instance*);

void f3(s199r2Instance*,U32);

U32 f4(s199r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s199r2Instance*,U32,U32,U32,U32,U32);

void f6(s199r2Instance*,U32);

void f7(s199r2Instance*,U32,U32,U32);

void f8(s199r2Instance*,U32,U32,U32);

void s199r2____wasm_call_ctors(s199r2Instance*i);

void s199r2____wasm_apply_data_relocs(s199r2Instance*i);

U32 s199r2_func_1(s199r2Instance*i);

void s199r2_call_cb(s199r2Instance*i,U32 l0);

void s199r2Instantiate(s199r2Instance* instance, void* resolve(const char* module, const char* name));

void s199r2FreeInstance(s199r2Instance* instance);

#endif /* s199r2_H */

