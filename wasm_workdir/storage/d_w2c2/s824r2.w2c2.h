#ifndef s824r2_H
#define s824r2_H

#include "w2c2_base.h"

typedef struct s824r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s824r2Instance;

void f0(s824r2Instance*);

void f1(s824r2Instance*);

U32 f2(s824r2Instance*);

void f3(s824r2Instance*,U32);

void f4(s824r2Instance*,U32);

void s824r2____wasm_call_ctors(s824r2Instance*i);

void s824r2____wasm_apply_data_relocs(s824r2Instance*i);

U32 s824r2_func_1(s824r2Instance*i);

void s824r2_call_cb(s824r2Instance*i,U32 l0);

void s824r2Instantiate(s824r2Instance* instance, void* resolve(const char* module, const char* name));

void s824r2FreeInstance(s824r2Instance* instance);

#endif /* s824r2_H */

