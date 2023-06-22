#ifndef s631r2_H
#define s631r2_H

#include "w2c2_base.h"

typedef struct s631r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s631r2Instance;

void f0(s631r2Instance*);

void f1(s631r2Instance*);

U32 f2(s631r2Instance*);

void f3(s631r2Instance*,U32);

U32 f4(s631r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s631r2Instance*,U32,U32,U32,U32,U32);

void f6(s631r2Instance*,U32);

void f7(s631r2Instance*,U32,U32,U32);

void f8(s631r2Instance*,U32,U32,U32);

void s631r2____wasm_call_ctors(s631r2Instance*i);

void s631r2____wasm_apply_data_relocs(s631r2Instance*i);

U32 s631r2_func_1(s631r2Instance*i);

void s631r2_call_cb(s631r2Instance*i,U32 l0);

void s631r2Instantiate(s631r2Instance* instance, void* resolve(const char* module, const char* name));

void s631r2FreeInstance(s631r2Instance* instance);

#endif /* s631r2_H */

