#ifndef s992r2_H
#define s992r2_H

#include "w2c2_base.h"

typedef struct s992r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s992r2Instance;

void f0(s992r2Instance*);

void f1(s992r2Instance*);

U32 f2(s992r2Instance*);

void f3(s992r2Instance*,U32);

U32 f4(s992r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s992r2Instance*,U32,U32,U32,U32,U32);

void f6(s992r2Instance*,U32);

void f7(s992r2Instance*,U32,U32,U32);

void f8(s992r2Instance*,U32,U32,U32);

void s992r2____wasm_call_ctors(s992r2Instance*i);

void s992r2____wasm_apply_data_relocs(s992r2Instance*i);

U32 s992r2_func_1(s992r2Instance*i);

void s992r2_call_cb(s992r2Instance*i,U32 l0);

void s992r2Instantiate(s992r2Instance* instance, void* resolve(const char* module, const char* name));

void s992r2FreeInstance(s992r2Instance* instance);

#endif /* s992r2_H */

