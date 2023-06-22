#ifndef s803r2_H
#define s803r2_H

#include "w2c2_base.h"

typedef struct s803r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s803r2Instance;

void f0(s803r2Instance*);

void f1(s803r2Instance*);

U32 f2(s803r2Instance*);

void f3(s803r2Instance*,U32);

U32 f4(s803r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s803r2Instance*,U32,U32,U32,U32,U32);

void f6(s803r2Instance*,U32);

void f7(s803r2Instance*,U32,U32,U32);

void f8(s803r2Instance*,U32,U32,U32);

void s803r2____wasm_call_ctors(s803r2Instance*i);

void s803r2____wasm_apply_data_relocs(s803r2Instance*i);

U32 s803r2_func_1(s803r2Instance*i);

void s803r2_call_cb(s803r2Instance*i,U32 l0);

void s803r2Instantiate(s803r2Instance* instance, void* resolve(const char* module, const char* name));

void s803r2FreeInstance(s803r2Instance* instance);

#endif /* s803r2_H */

