#ifndef s448r2_H
#define s448r2_H

#include "w2c2_base.h"

typedef struct s448r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s448r2Instance;

void f0(s448r2Instance*);

void f1(s448r2Instance*);

U32 f2(s448r2Instance*);

void f3(s448r2Instance*,U32);

U32 f4(s448r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s448r2Instance*,U32,U32,U32,U32,U32);

void f6(s448r2Instance*,U32);

void f7(s448r2Instance*,U32,U32,U32);

void f8(s448r2Instance*,U32,U32,U32);

void s448r2____wasm_call_ctors(s448r2Instance*i);

void s448r2____wasm_apply_data_relocs(s448r2Instance*i);

U32 s448r2_func_1(s448r2Instance*i);

void s448r2_call_cb(s448r2Instance*i,U32 l0);

void s448r2Instantiate(s448r2Instance* instance, void* resolve(const char* module, const char* name));

void s448r2FreeInstance(s448r2Instance* instance);

#endif /* s448r2_H */

