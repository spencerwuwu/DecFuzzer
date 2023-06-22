#ifndef s81r2_H
#define s81r2_H

#include "w2c2_base.h"

typedef struct s81r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s81r2Instance;

void f0(s81r2Instance*);

void f1(s81r2Instance*);

U32 f2(s81r2Instance*);

void f3(s81r2Instance*,U32);

U32 f4(s81r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s81r2Instance*,U32,U32,U32,U32,U32);

void f6(s81r2Instance*,U32);

void f7(s81r2Instance*,U32,U32,U32);

void f8(s81r2Instance*,U32,U32,U32);

void s81r2____wasm_call_ctors(s81r2Instance*i);

void s81r2____wasm_apply_data_relocs(s81r2Instance*i);

U32 s81r2_func_1(s81r2Instance*i);

void s81r2_call_cb(s81r2Instance*i,U32 l0);

void s81r2Instantiate(s81r2Instance* instance, void* resolve(const char* module, const char* name));

void s81r2FreeInstance(s81r2Instance* instance);

#endif /* s81r2_H */

