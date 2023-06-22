#ifndef s868r2_H
#define s868r2_H

#include "w2c2_base.h"

typedef struct s868r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s868r2Instance;

void f0(s868r2Instance*);

void f1(s868r2Instance*);

U32 f2(s868r2Instance*);

void f3(s868r2Instance*,U32);

U32 f4(s868r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s868r2Instance*,U32,U32,U32,U32,U32);

void f6(s868r2Instance*,U32);

void f7(s868r2Instance*,U32,U32,U32);

void f8(s868r2Instance*,U32,U32,U32);

void s868r2____wasm_call_ctors(s868r2Instance*i);

void s868r2____wasm_apply_data_relocs(s868r2Instance*i);

U32 s868r2_func_1(s868r2Instance*i);

void s868r2_call_cb(s868r2Instance*i,U32 l0);

void s868r2Instantiate(s868r2Instance* instance, void* resolve(const char* module, const char* name));

void s868r2FreeInstance(s868r2Instance* instance);

#endif /* s868r2_H */

