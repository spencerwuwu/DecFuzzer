#ifndef s632r2_H
#define s632r2_H

#include "w2c2_base.h"

typedef struct s632r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s632r2Instance;

void f0(s632r2Instance*);

void f1(s632r2Instance*);

U32 f2(s632r2Instance*);

void f3(s632r2Instance*,U32);

U32 f4(s632r2Instance*,U32,U32,U32);

void f5(s632r2Instance*,U32,U32,U32,U32,U32);

void f6(s632r2Instance*,U32);

void f7(s632r2Instance*,U32,U32,U32);

void f8(s632r2Instance*,U32,U32,U32);

void s632r2____wasm_call_ctors(s632r2Instance*i);

void s632r2____wasm_apply_data_relocs(s632r2Instance*i);

U32 s632r2_func_1(s632r2Instance*i);

void s632r2_call_cb(s632r2Instance*i,U32 l0);

void s632r2Instantiate(s632r2Instance* instance, void* resolve(const char* module, const char* name));

void s632r2FreeInstance(s632r2Instance* instance);

#endif /* s632r2_H */

