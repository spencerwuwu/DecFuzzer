#ifndef s223r2_H
#define s223r2_H

#include "w2c2_base.h"

typedef struct s223r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s223r2Instance;

void f0(s223r2Instance*);

void f1(s223r2Instance*);

U32 f2(s223r2Instance*);

void f3(s223r2Instance*,U32);

U32 f4(s223r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s223r2Instance*,U32,U32,U32,U32,U32);

void f6(s223r2Instance*,U32);

void f7(s223r2Instance*,U32,U32,U32);

void f8(s223r2Instance*,U32,U32,U32);

void s223r2____wasm_call_ctors(s223r2Instance*i);

void s223r2____wasm_apply_data_relocs(s223r2Instance*i);

U32 s223r2_func_1(s223r2Instance*i);

void s223r2_call_cb(s223r2Instance*i,U32 l0);

void s223r2Instantiate(s223r2Instance* instance, void* resolve(const char* module, const char* name));

void s223r2FreeInstance(s223r2Instance* instance);

#endif /* s223r2_H */

