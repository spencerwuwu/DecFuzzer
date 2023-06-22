#ifndef s636r2_H
#define s636r2_H

#include "w2c2_base.h"

typedef struct s636r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s636r2Instance;

void f0(s636r2Instance*);

void f1(s636r2Instance*);

U32 f2(s636r2Instance*);

void f3(s636r2Instance*,U32);

U32 f4(s636r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s636r2Instance*,U32,U32,U32,U32,U32);

void f6(s636r2Instance*,U32);

void f7(s636r2Instance*,U32,U32,U32);

void f8(s636r2Instance*,U32,U32,U32);

void s636r2____wasm_call_ctors(s636r2Instance*i);

void s636r2____wasm_apply_data_relocs(s636r2Instance*i);

U32 s636r2_func_1(s636r2Instance*i);

void s636r2_call_cb(s636r2Instance*i,U32 l0);

void s636r2Instantiate(s636r2Instance* instance, void* resolve(const char* module, const char* name));

void s636r2FreeInstance(s636r2Instance* instance);

#endif /* s636r2_H */

