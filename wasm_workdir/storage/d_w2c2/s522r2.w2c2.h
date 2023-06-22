#ifndef s522r2_H
#define s522r2_H

#include "w2c2_base.h"

typedef struct s522r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s522r2Instance;

void f0(s522r2Instance*);

void f1(s522r2Instance*);

U32 f2(s522r2Instance*);

void f3(s522r2Instance*,U32);

U32 f4(s522r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s522r2Instance*,U32,U32,U32,U32,U32);

void f6(s522r2Instance*,U32);

void f7(s522r2Instance*,U32,U32,U32);

void f8(s522r2Instance*,U32,U32,U32);

void s522r2____wasm_call_ctors(s522r2Instance*i);

void s522r2____wasm_apply_data_relocs(s522r2Instance*i);

U32 s522r2_func_1(s522r2Instance*i);

void s522r2_call_cb(s522r2Instance*i,U32 l0);

void s522r2Instantiate(s522r2Instance* instance, void* resolve(const char* module, const char* name));

void s522r2FreeInstance(s522r2Instance* instance);

#endif /* s522r2_H */

