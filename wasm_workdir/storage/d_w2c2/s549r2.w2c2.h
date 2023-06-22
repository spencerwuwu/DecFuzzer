#ifndef s549r2_H
#define s549r2_H

#include "w2c2_base.h"

typedef struct s549r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s549r2Instance;

void f0(s549r2Instance*);

void f1(s549r2Instance*);

U32 f2(s549r2Instance*);

void f3(s549r2Instance*,U32);

U32 f4(s549r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s549r2Instance*,U32,U32,U32,U32,U32);

void f6(s549r2Instance*,U32);

void f7(s549r2Instance*,U32,U32,U32);

void f8(s549r2Instance*,U32,U32,U32);

void s549r2____wasm_call_ctors(s549r2Instance*i);

void s549r2____wasm_apply_data_relocs(s549r2Instance*i);

U32 s549r2_func_1(s549r2Instance*i);

void s549r2_call_cb(s549r2Instance*i,U32 l0);

void s549r2Instantiate(s549r2Instance* instance, void* resolve(const char* module, const char* name));

void s549r2FreeInstance(s549r2Instance* instance);

#endif /* s549r2_H */

