#ifndef s411r2_H
#define s411r2_H

#include "w2c2_base.h"

typedef struct s411r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s411r2Instance;

void f0(s411r2Instance*);

void f1(s411r2Instance*);

U32 f2(s411r2Instance*);

void f3(s411r2Instance*,U32);

U32 f4(s411r2Instance*,U32,U32,U32,U32,U32);

void f5(s411r2Instance*,U32,U32,U32,U32,U32);

void f6(s411r2Instance*,U32);

void f7(s411r2Instance*,U32,U32,U32);

void f8(s411r2Instance*,U32,U32,U32);

void s411r2____wasm_call_ctors(s411r2Instance*i);

void s411r2____wasm_apply_data_relocs(s411r2Instance*i);

U32 s411r2_func_1(s411r2Instance*i);

void s411r2_call_cb(s411r2Instance*i,U32 l0);

void s411r2Instantiate(s411r2Instance* instance, void* resolve(const char* module, const char* name));

void s411r2FreeInstance(s411r2Instance* instance);

#endif /* s411r2_H */

