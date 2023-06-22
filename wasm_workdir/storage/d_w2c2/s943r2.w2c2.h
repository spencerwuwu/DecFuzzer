#ifndef s943r2_H
#define s943r2_H

#include "w2c2_base.h"

typedef struct s943r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s943r2Instance;

void f0(s943r2Instance*);

void f1(s943r2Instance*);

U32 f2(s943r2Instance*);

void f3(s943r2Instance*,U32);

U32 f4(s943r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s943r2Instance*,U32,U32,U32,U32,U32);

void f6(s943r2Instance*,U32);

void f7(s943r2Instance*,U32,U32,U32);

void f8(s943r2Instance*,U32,U32,U32);

void s943r2____wasm_call_ctors(s943r2Instance*i);

void s943r2____wasm_apply_data_relocs(s943r2Instance*i);

U32 s943r2_func_1(s943r2Instance*i);

void s943r2_call_cb(s943r2Instance*i,U32 l0);

void s943r2Instantiate(s943r2Instance* instance, void* resolve(const char* module, const char* name));

void s943r2FreeInstance(s943r2Instance* instance);

#endif /* s943r2_H */

