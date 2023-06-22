#ifndef s43r2_H
#define s43r2_H

#include "w2c2_base.h"

typedef struct s43r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s43r2Instance;

void f0(s43r2Instance*);

void f1(s43r2Instance*);

U32 f2(s43r2Instance*);

void f3(s43r2Instance*,U32);

U32 f4(s43r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s43r2Instance*,U32,U32,U32,U32,U32);

void f6(s43r2Instance*,U32);

void f7(s43r2Instance*,U32,U32,U32);

void f8(s43r2Instance*,U32,U32,U32);

void s43r2____wasm_call_ctors(s43r2Instance*i);

void s43r2____wasm_apply_data_relocs(s43r2Instance*i);

U32 s43r2_func_1(s43r2Instance*i);

void s43r2_call_cb(s43r2Instance*i,U32 l0);

void s43r2Instantiate(s43r2Instance* instance, void* resolve(const char* module, const char* name));

void s43r2FreeInstance(s43r2Instance* instance);

#endif /* s43r2_H */

