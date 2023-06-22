#ifndef s335r2_H
#define s335r2_H

#include "w2c2_base.h"

typedef struct s335r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s335r2Instance;

void f0(s335r2Instance*);

void f1(s335r2Instance*);

U32 f2(s335r2Instance*);

void f3(s335r2Instance*,U32);

U32 f4(s335r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s335r2Instance*,U32,U32,U32,U32,U32);

void f6(s335r2Instance*,U32);

void f7(s335r2Instance*,U32,U32,U32);

void f8(s335r2Instance*,U32,U32,U32);

void s335r2____wasm_call_ctors(s335r2Instance*i);

void s335r2____wasm_apply_data_relocs(s335r2Instance*i);

U32 s335r2_func_1(s335r2Instance*i);

void s335r2_call_cb(s335r2Instance*i,U32 l0);

void s335r2Instantiate(s335r2Instance* instance, void* resolve(const char* module, const char* name));

void s335r2FreeInstance(s335r2Instance* instance);

#endif /* s335r2_H */

