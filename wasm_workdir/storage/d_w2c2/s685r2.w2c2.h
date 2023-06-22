#ifndef s685r2_H
#define s685r2_H

#include "w2c2_base.h"

typedef struct s685r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s685r2Instance;

void f0(s685r2Instance*);

void f1(s685r2Instance*);

U32 f2(s685r2Instance*);

void f3(s685r2Instance*,U32);

U32 f4(s685r2Instance*,U32,U32,U32,U32);

void f5(s685r2Instance*,U32,U32,U32,U32,U32);

void f6(s685r2Instance*,U32);

void f7(s685r2Instance*,U32,U32,U32);

void f8(s685r2Instance*,U32,U32,U32);

void s685r2____wasm_call_ctors(s685r2Instance*i);

void s685r2____wasm_apply_data_relocs(s685r2Instance*i);

U32 s685r2_func_1(s685r2Instance*i);

void s685r2_call_cb(s685r2Instance*i,U32 l0);

void s685r2Instantiate(s685r2Instance* instance, void* resolve(const char* module, const char* name));

void s685r2FreeInstance(s685r2Instance* instance);

#endif /* s685r2_H */

