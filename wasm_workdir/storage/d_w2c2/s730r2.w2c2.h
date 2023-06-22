#ifndef s730r2_H
#define s730r2_H

#include "w2c2_base.h"

typedef struct s730r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s730r2Instance;

void f0(s730r2Instance*);

void f1(s730r2Instance*);

U32 f2(s730r2Instance*);

void f3(s730r2Instance*,U32);

U32 f4(s730r2Instance*,U32,U32,U32,U32,U32);

void f5(s730r2Instance*,U32,U32,U32,U32,U32);

void f6(s730r2Instance*,U32);

void f7(s730r2Instance*,U32,U32,U32);

void f8(s730r2Instance*,U32,U32,U32);

void s730r2____wasm_call_ctors(s730r2Instance*i);

void s730r2____wasm_apply_data_relocs(s730r2Instance*i);

U32 s730r2_func_1(s730r2Instance*i);

void s730r2_call_cb(s730r2Instance*i,U32 l0);

void s730r2Instantiate(s730r2Instance* instance, void* resolve(const char* module, const char* name));

void s730r2FreeInstance(s730r2Instance* instance);

#endif /* s730r2_H */

