#ifndef s71r2_H
#define s71r2_H

#include "w2c2_base.h"

typedef struct s71r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s71r2Instance;

void f0(s71r2Instance*);

void f1(s71r2Instance*);

U32 f2(s71r2Instance*);

void f3(s71r2Instance*,U32);

U32 f4(s71r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s71r2Instance*,U32,U32,U32,U32,U32);

void f6(s71r2Instance*,U32);

void f7(s71r2Instance*,U32,U32,U32);

void f8(s71r2Instance*,U32,U32,U32);

void s71r2____wasm_call_ctors(s71r2Instance*i);

void s71r2____wasm_apply_data_relocs(s71r2Instance*i);

U32 s71r2_func_1(s71r2Instance*i);

void s71r2_call_cb(s71r2Instance*i,U32 l0);

void s71r2Instantiate(s71r2Instance* instance, void* resolve(const char* module, const char* name));

void s71r2FreeInstance(s71r2Instance* instance);

#endif /* s71r2_H */

