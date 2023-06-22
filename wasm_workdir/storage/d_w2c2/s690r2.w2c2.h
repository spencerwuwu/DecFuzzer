#ifndef s690r2_H
#define s690r2_H

#include "w2c2_base.h"

typedef struct s690r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s690r2Instance;

void f0(s690r2Instance*);

void f1(s690r2Instance*);

U32 f2(s690r2Instance*);

void f3(s690r2Instance*,U32);

U32 f4(s690r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s690r2Instance*,U32,U32,U32,U32,U32);

void f6(s690r2Instance*,U32);

void f7(s690r2Instance*,U32,U32,U32);

void f8(s690r2Instance*,U32,U32,U32);

void s690r2____wasm_call_ctors(s690r2Instance*i);

void s690r2____wasm_apply_data_relocs(s690r2Instance*i);

U32 s690r2_func_1(s690r2Instance*i);

void s690r2_call_cb(s690r2Instance*i,U32 l0);

void s690r2Instantiate(s690r2Instance* instance, void* resolve(const char* module, const char* name));

void s690r2FreeInstance(s690r2Instance* instance);

#endif /* s690r2_H */

