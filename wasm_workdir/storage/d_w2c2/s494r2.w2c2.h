#ifndef s494r2_H
#define s494r2_H

#include "w2c2_base.h"

typedef struct s494r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s494r2Instance;

void f0(s494r2Instance*);

void f1(s494r2Instance*);

U32 f2(s494r2Instance*);

void f3(s494r2Instance*,U32);

U32 f4(s494r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s494r2Instance*,U32,U32,U32,U32,U32);

void f6(s494r2Instance*,U32);

void f7(s494r2Instance*,U32,U32,U32);

void f8(s494r2Instance*,U32,U32,U32);

void s494r2____wasm_call_ctors(s494r2Instance*i);

void s494r2____wasm_apply_data_relocs(s494r2Instance*i);

U32 s494r2_func_1(s494r2Instance*i);

void s494r2_call_cb(s494r2Instance*i,U32 l0);

void s494r2Instantiate(s494r2Instance* instance, void* resolve(const char* module, const char* name));

void s494r2FreeInstance(s494r2Instance* instance);

#endif /* s494r2_H */

