#ifndef s94r2_H
#define s94r2_H

#include "w2c2_base.h"

typedef struct s94r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s94r2Instance;

void f0(s94r2Instance*);

void f1(s94r2Instance*);

U32 f2(s94r2Instance*);

void f3(s94r2Instance*,U32);

U32 f4(s94r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s94r2Instance*,U32,U32,U32,U32,U32);

void f6(s94r2Instance*,U32);

void f7(s94r2Instance*,U32,U32,U32);

void f8(s94r2Instance*,U32,U32,U32);

void s94r2____wasm_call_ctors(s94r2Instance*i);

void s94r2____wasm_apply_data_relocs(s94r2Instance*i);

U32 s94r2_func_1(s94r2Instance*i);

void s94r2_call_cb(s94r2Instance*i,U32 l0);

void s94r2Instantiate(s94r2Instance* instance, void* resolve(const char* module, const char* name));

void s94r2FreeInstance(s94r2Instance* instance);

#endif /* s94r2_H */

