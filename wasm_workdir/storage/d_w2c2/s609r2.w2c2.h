#ifndef s609r2_H
#define s609r2_H

#include "w2c2_base.h"

typedef struct s609r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s609r2Instance;

void f0(s609r2Instance*);

void f1(s609r2Instance*);

U32 f2(s609r2Instance*);

void f3(s609r2Instance*,U32);

U32 f4(s609r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s609r2Instance*,U32,U32,U32,U32,U32);

void f6(s609r2Instance*,U32);

void f7(s609r2Instance*,U32,U32,U32);

void f8(s609r2Instance*,U32,U32,U32);

void s609r2____wasm_call_ctors(s609r2Instance*i);

void s609r2____wasm_apply_data_relocs(s609r2Instance*i);

U32 s609r2_func_1(s609r2Instance*i);

void s609r2_call_cb(s609r2Instance*i,U32 l0);

void s609r2Instantiate(s609r2Instance* instance, void* resolve(const char* module, const char* name));

void s609r2FreeInstance(s609r2Instance* instance);

#endif /* s609r2_H */

