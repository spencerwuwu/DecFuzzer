#ifndef s470r2_H
#define s470r2_H

#include "w2c2_base.h"

typedef struct s470r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s470r2Instance;

void f0(s470r2Instance*);

void f1(s470r2Instance*);

U32 f2(s470r2Instance*);

void f3(s470r2Instance*,U32);

U32 f4(s470r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s470r2Instance*,U32,U32,U32,U32,U32);

void f6(s470r2Instance*,U32);

void f7(s470r2Instance*,U32,U32,U32);

void f8(s470r2Instance*,U32,U32,U32);

void s470r2____wasm_call_ctors(s470r2Instance*i);

void s470r2____wasm_apply_data_relocs(s470r2Instance*i);

U32 s470r2_func_1(s470r2Instance*i);

void s470r2_call_cb(s470r2Instance*i,U32 l0);

void s470r2Instantiate(s470r2Instance* instance, void* resolve(const char* module, const char* name));

void s470r2FreeInstance(s470r2Instance* instance);

#endif /* s470r2_H */

