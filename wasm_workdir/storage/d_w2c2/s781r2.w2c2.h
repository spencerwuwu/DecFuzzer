#ifndef s781r2_H
#define s781r2_H

#include "w2c2_base.h"

typedef struct s781r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s781r2Instance;

void f0(s781r2Instance*);

void f1(s781r2Instance*);

U32 f2(s781r2Instance*);

void f3(s781r2Instance*,U32);

U32 f4(s781r2Instance*,U32,U32,U32,U32,U32);

void f5(s781r2Instance*,U32,U32,U32,U32,U32);

void f6(s781r2Instance*,U32);

void f7(s781r2Instance*,U32,U32,U32);

void f8(s781r2Instance*,U32,U32,U32);

void s781r2____wasm_call_ctors(s781r2Instance*i);

void s781r2____wasm_apply_data_relocs(s781r2Instance*i);

U32 s781r2_func_1(s781r2Instance*i);

void s781r2_call_cb(s781r2Instance*i,U32 l0);

void s781r2Instantiate(s781r2Instance* instance, void* resolve(const char* module, const char* name));

void s781r2FreeInstance(s781r2Instance* instance);

#endif /* s781r2_H */

