#ifndef s365r2_H
#define s365r2_H

#include "w2c2_base.h"

typedef struct s365r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s365r2Instance;

void f0(s365r2Instance*);

void f1(s365r2Instance*);

U32 f2(s365r2Instance*);

void f3(s365r2Instance*,U32);

U32 f4(s365r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s365r2Instance*,U32,U32,U32,U32,U32);

void f6(s365r2Instance*,U32);

void f7(s365r2Instance*,U32,U32,U32);

void f8(s365r2Instance*,U32,U32,U32);

void s365r2____wasm_call_ctors(s365r2Instance*i);

void s365r2____wasm_apply_data_relocs(s365r2Instance*i);

U32 s365r2_func_1(s365r2Instance*i);

void s365r2_call_cb(s365r2Instance*i,U32 l0);

void s365r2Instantiate(s365r2Instance* instance, void* resolve(const char* module, const char* name));

void s365r2FreeInstance(s365r2Instance* instance);

#endif /* s365r2_H */

