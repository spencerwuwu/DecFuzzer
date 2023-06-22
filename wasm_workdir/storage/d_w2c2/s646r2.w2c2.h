#ifndef s646r2_H
#define s646r2_H

#include "w2c2_base.h"

typedef struct s646r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s646r2Instance;

void f0(s646r2Instance*);

void f1(s646r2Instance*);

U32 f2(s646r2Instance*);

void f3(s646r2Instance*,U32);

U32 f4(s646r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s646r2Instance*,U32,U32,U32,U32,U32);

void f6(s646r2Instance*,U32);

void f7(s646r2Instance*,U32,U32,U32);

void f8(s646r2Instance*,U32,U32,U32);

void s646r2____wasm_call_ctors(s646r2Instance*i);

void s646r2____wasm_apply_data_relocs(s646r2Instance*i);

U32 s646r2_func_1(s646r2Instance*i);

void s646r2_call_cb(s646r2Instance*i,U32 l0);

void s646r2Instantiate(s646r2Instance* instance, void* resolve(const char* module, const char* name));

void s646r2FreeInstance(s646r2Instance* instance);

#endif /* s646r2_H */

