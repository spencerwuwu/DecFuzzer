#ifndef s779r2_H
#define s779r2_H

#include "w2c2_base.h"

typedef struct s779r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s779r2Instance;

void f0(s779r2Instance*);

void f1(s779r2Instance*);

U32 f2(s779r2Instance*);

void f3(s779r2Instance*,U32);

U32 f4(s779r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s779r2Instance*,U32,U32,U32,U32,U32);

void f6(s779r2Instance*,U32);

void f7(s779r2Instance*,U32,U32,U32);

void f8(s779r2Instance*,U32,U32,U32);

void s779r2____wasm_call_ctors(s779r2Instance*i);

void s779r2____wasm_apply_data_relocs(s779r2Instance*i);

U32 s779r2_func_1(s779r2Instance*i);

void s779r2_call_cb(s779r2Instance*i,U32 l0);

void s779r2Instantiate(s779r2Instance* instance, void* resolve(const char* module, const char* name));

void s779r2FreeInstance(s779r2Instance* instance);

#endif /* s779r2_H */

