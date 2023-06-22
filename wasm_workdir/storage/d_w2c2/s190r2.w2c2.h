#ifndef s190r2_H
#define s190r2_H

#include "w2c2_base.h"

typedef struct s190r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s190r2Instance;

void f0(s190r2Instance*);

void f1(s190r2Instance*);

U32 f2(s190r2Instance*);

void f3(s190r2Instance*,U32);

U32 f4(s190r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s190r2Instance*,U32,U32,U32,U32,U32);

void f6(s190r2Instance*,U32);

void f7(s190r2Instance*,U32,U32,U32);

void f8(s190r2Instance*,U32,U32,U32);

void s190r2____wasm_call_ctors(s190r2Instance*i);

void s190r2____wasm_apply_data_relocs(s190r2Instance*i);

U32 s190r2_func_1(s190r2Instance*i);

void s190r2_call_cb(s190r2Instance*i,U32 l0);

void s190r2Instantiate(s190r2Instance* instance, void* resolve(const char* module, const char* name));

void s190r2FreeInstance(s190r2Instance* instance);

#endif /* s190r2_H */

