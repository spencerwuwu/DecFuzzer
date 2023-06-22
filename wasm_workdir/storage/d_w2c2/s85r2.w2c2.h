#ifndef s85r2_H
#define s85r2_H

#include "w2c2_base.h"

typedef struct s85r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s85r2Instance;

void f0(s85r2Instance*);

void f1(s85r2Instance*);

U32 f2(s85r2Instance*);

void f3(s85r2Instance*,U32);

U32 f4(s85r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s85r2Instance*,U32,U32,U32,U32,U32);

void f6(s85r2Instance*,U32);

void f7(s85r2Instance*,U32,U32,U32);

void f8(s85r2Instance*,U32,U32,U32);

void s85r2____wasm_call_ctors(s85r2Instance*i);

void s85r2____wasm_apply_data_relocs(s85r2Instance*i);

U32 s85r2_func_1(s85r2Instance*i);

void s85r2_call_cb(s85r2Instance*i,U32 l0);

void s85r2Instantiate(s85r2Instance* instance, void* resolve(const char* module, const char* name));

void s85r2FreeInstance(s85r2Instance* instance);

#endif /* s85r2_H */

