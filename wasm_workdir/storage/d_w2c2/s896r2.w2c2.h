#ifndef s896r2_H
#define s896r2_H

#include "w2c2_base.h"

typedef struct s896r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s896r2Instance;

void f0(s896r2Instance*);

void f1(s896r2Instance*);

U32 f2(s896r2Instance*);

void f3(s896r2Instance*,U32);

U32 f4(s896r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s896r2Instance*,U32,U32,U32,U32,U32);

void f6(s896r2Instance*,U32);

void f7(s896r2Instance*,U32,U32,U32);

void f8(s896r2Instance*,U32,U32,U32);

void s896r2____wasm_call_ctors(s896r2Instance*i);

void s896r2____wasm_apply_data_relocs(s896r2Instance*i);

U32 s896r2_func_1(s896r2Instance*i);

void s896r2_call_cb(s896r2Instance*i,U32 l0);

void s896r2Instantiate(s896r2Instance* instance, void* resolve(const char* module, const char* name));

void s896r2FreeInstance(s896r2Instance* instance);

#endif /* s896r2_H */

