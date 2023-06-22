#ifndef s58r2_H
#define s58r2_H

#include "w2c2_base.h"

typedef struct s58r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s58r2Instance;

void f0(s58r2Instance*);

void f1(s58r2Instance*);

U32 f2(s58r2Instance*);

void f3(s58r2Instance*,U32);

U32 f4(s58r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s58r2Instance*,U32,U32,U32,U32,U32);

void f6(s58r2Instance*,U32);

void f7(s58r2Instance*,U32,U32,U32);

void f8(s58r2Instance*,U32,U32,U32);

void s58r2____wasm_call_ctors(s58r2Instance*i);

void s58r2____wasm_apply_data_relocs(s58r2Instance*i);

U32 s58r2_func_1(s58r2Instance*i);

void s58r2_call_cb(s58r2Instance*i,U32 l0);

void s58r2Instantiate(s58r2Instance* instance, void* resolve(const char* module, const char* name));

void s58r2FreeInstance(s58r2Instance* instance);

#endif /* s58r2_H */

