#ifndef s399r2_H
#define s399r2_H

#include "w2c2_base.h"

typedef struct s399r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s399r2Instance;

void f0(s399r2Instance*);

void f1(s399r2Instance*);

U32 f2(s399r2Instance*);

void f3(s399r2Instance*,U32);

U32 f4(s399r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s399r2Instance*,U32,U32,U32,U32,U32);

void f6(s399r2Instance*,U32);

void f7(s399r2Instance*,U32,U32,U32);

void f8(s399r2Instance*,U32,U32,U32);

void s399r2____wasm_call_ctors(s399r2Instance*i);

void s399r2____wasm_apply_data_relocs(s399r2Instance*i);

U32 s399r2_func_1(s399r2Instance*i);

void s399r2_call_cb(s399r2Instance*i,U32 l0);

void s399r2Instantiate(s399r2Instance* instance, void* resolve(const char* module, const char* name));

void s399r2FreeInstance(s399r2Instance* instance);

#endif /* s399r2_H */

