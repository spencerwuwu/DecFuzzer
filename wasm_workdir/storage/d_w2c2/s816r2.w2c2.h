#ifndef s816r2_H
#define s816r2_H

#include "w2c2_base.h"

typedef struct s816r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s816r2Instance;

void f0(s816r2Instance*);

void f1(s816r2Instance*);

U32 f2(s816r2Instance*);

void f3(s816r2Instance*,U32);

U32 f4(s816r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s816r2Instance*,U32,U32,U32,U32,U32);

void f6(s816r2Instance*,U32);

void f7(s816r2Instance*,U32,U32,U32);

void f8(s816r2Instance*,U32,U32,U32);

void s816r2____wasm_call_ctors(s816r2Instance*i);

void s816r2____wasm_apply_data_relocs(s816r2Instance*i);

U32 s816r2_func_1(s816r2Instance*i);

void s816r2_call_cb(s816r2Instance*i,U32 l0);

void s816r2Instantiate(s816r2Instance* instance, void* resolve(const char* module, const char* name));

void s816r2FreeInstance(s816r2Instance* instance);

#endif /* s816r2_H */

