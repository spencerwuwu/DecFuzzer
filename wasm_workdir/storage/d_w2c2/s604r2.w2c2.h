#ifndef s604r2_H
#define s604r2_H

#include "w2c2_base.h"

typedef struct s604r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s604r2Instance;

void f0(s604r2Instance*);

void f1(s604r2Instance*);

U32 f2(s604r2Instance*);

void f3(s604r2Instance*,U32);

U32 f4(s604r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s604r2Instance*,U32,U32,U32,U32,U32);

void f6(s604r2Instance*,U32);

void f7(s604r2Instance*,U32,U32,U32);

void f8(s604r2Instance*,U32,U32,U32);

void s604r2____wasm_call_ctors(s604r2Instance*i);

void s604r2____wasm_apply_data_relocs(s604r2Instance*i);

U32 s604r2_func_1(s604r2Instance*i);

void s604r2_call_cb(s604r2Instance*i,U32 l0);

void s604r2Instantiate(s604r2Instance* instance, void* resolve(const char* module, const char* name));

void s604r2FreeInstance(s604r2Instance* instance);

#endif /* s604r2_H */

