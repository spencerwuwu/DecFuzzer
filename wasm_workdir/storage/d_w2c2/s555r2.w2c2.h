#ifndef s555r2_H
#define s555r2_H

#include "w2c2_base.h"

typedef struct s555r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s555r2Instance;

void f0(s555r2Instance*);

void f1(s555r2Instance*);

U32 f2(s555r2Instance*);

void f3(s555r2Instance*,U32);

U32 f4(s555r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s555r2Instance*,U32,U32,U32,U32,U32);

void f6(s555r2Instance*,U32);

void f7(s555r2Instance*,U32,U32,U32);

void f8(s555r2Instance*,U32,U32,U32);

void s555r2____wasm_call_ctors(s555r2Instance*i);

void s555r2____wasm_apply_data_relocs(s555r2Instance*i);

U32 s555r2_func_1(s555r2Instance*i);

void s555r2_call_cb(s555r2Instance*i,U32 l0);

void s555r2Instantiate(s555r2Instance* instance, void* resolve(const char* module, const char* name));

void s555r2FreeInstance(s555r2Instance* instance);

#endif /* s555r2_H */

