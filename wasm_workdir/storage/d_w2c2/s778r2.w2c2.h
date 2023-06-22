#ifndef s778r2_H
#define s778r2_H

#include "w2c2_base.h"

typedef struct s778r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s778r2Instance;

void f0(s778r2Instance*);

void f1(s778r2Instance*);

U32 f2(s778r2Instance*);

void f3(s778r2Instance*,U32);

U32 f4(s778r2Instance*,U32,U32,U32);

void f5(s778r2Instance*,U32,U32,U32,U32,U32);

void f6(s778r2Instance*,U32);

void f7(s778r2Instance*,U32,U32,U32);

void f8(s778r2Instance*,U32,U32,U32);

void s778r2____wasm_call_ctors(s778r2Instance*i);

void s778r2____wasm_apply_data_relocs(s778r2Instance*i);

U32 s778r2_func_1(s778r2Instance*i);

void s778r2_call_cb(s778r2Instance*i,U32 l0);

void s778r2Instantiate(s778r2Instance* instance, void* resolve(const char* module, const char* name));

void s778r2FreeInstance(s778r2Instance* instance);

#endif /* s778r2_H */

