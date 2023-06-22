#ifndef s660r2_H
#define s660r2_H

#include "w2c2_base.h"

typedef struct s660r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s660r2Instance;

void f0(s660r2Instance*);

void f1(s660r2Instance*);

U32 f2(s660r2Instance*);

void f3(s660r2Instance*,U32);

U32 f4(s660r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s660r2Instance*,U32,U32,U32,U32,U32);

void f6(s660r2Instance*,U32);

void f7(s660r2Instance*,U32,U32,U32);

void f8(s660r2Instance*,U32,U32,U32);

void s660r2____wasm_call_ctors(s660r2Instance*i);

void s660r2____wasm_apply_data_relocs(s660r2Instance*i);

U32 s660r2_func_1(s660r2Instance*i);

void s660r2_call_cb(s660r2Instance*i,U32 l0);

void s660r2Instantiate(s660r2Instance* instance, void* resolve(const char* module, const char* name));

void s660r2FreeInstance(s660r2Instance* instance);

#endif /* s660r2_H */

