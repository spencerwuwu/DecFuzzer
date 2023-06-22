#ifndef s323r2_H
#define s323r2_H

#include "w2c2_base.h"

typedef struct s323r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s323r2Instance;

void f0(s323r2Instance*);

void f1(s323r2Instance*);

U32 f2(s323r2Instance*);

void f3(s323r2Instance*,U32);

U32 f4(s323r2Instance*,U32,U32,U32,U32,U32);

void f5(s323r2Instance*,U32,U32,U32,U32,U32);

void f6(s323r2Instance*,U32);

void f7(s323r2Instance*,U32,U32,U32);

void f8(s323r2Instance*,U32,U32,U32);

void s323r2____wasm_call_ctors(s323r2Instance*i);

void s323r2____wasm_apply_data_relocs(s323r2Instance*i);

U32 s323r2_func_1(s323r2Instance*i);

void s323r2_call_cb(s323r2Instance*i,U32 l0);

void s323r2Instantiate(s323r2Instance* instance, void* resolve(const char* module, const char* name));

void s323r2FreeInstance(s323r2Instance* instance);

#endif /* s323r2_H */

