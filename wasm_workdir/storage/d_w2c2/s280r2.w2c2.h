#ifndef s280r2_H
#define s280r2_H

#include "w2c2_base.h"

typedef struct s280r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s280r2Instance;

void f0(s280r2Instance*);

void f1(s280r2Instance*);

U32 f2(s280r2Instance*);

void f3(s280r2Instance*,U32);

U32 f4(s280r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s280r2Instance*,U32,U32,U32,U32,U32);

void f6(s280r2Instance*,U32);

void f7(s280r2Instance*,U32,U32,U32);

void f8(s280r2Instance*,U32,U32,U32);

void s280r2____wasm_call_ctors(s280r2Instance*i);

void s280r2____wasm_apply_data_relocs(s280r2Instance*i);

U32 s280r2_func_1(s280r2Instance*i);

void s280r2_call_cb(s280r2Instance*i,U32 l0);

void s280r2Instantiate(s280r2Instance* instance, void* resolve(const char* module, const char* name));

void s280r2FreeInstance(s280r2Instance* instance);

#endif /* s280r2_H */

