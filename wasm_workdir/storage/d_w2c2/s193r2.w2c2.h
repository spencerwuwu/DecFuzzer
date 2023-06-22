#ifndef s193r2_H
#define s193r2_H

#include "w2c2_base.h"

typedef struct s193r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s193r2Instance;

void f0(s193r2Instance*);

void f1(s193r2Instance*);

U32 f2(s193r2Instance*);

void f3(s193r2Instance*,U32);

U32 f4(s193r2Instance*,U32,U32,U32,U32,U32);

void f5(s193r2Instance*,U32,U32,U32,U32,U32);

void f6(s193r2Instance*,U32);

void f7(s193r2Instance*,U32,U32,U32);

void f8(s193r2Instance*,U32,U32,U32);

void s193r2____wasm_call_ctors(s193r2Instance*i);

void s193r2____wasm_apply_data_relocs(s193r2Instance*i);

U32 s193r2_func_1(s193r2Instance*i);

void s193r2_call_cb(s193r2Instance*i,U32 l0);

void s193r2Instantiate(s193r2Instance* instance, void* resolve(const char* module, const char* name));

void s193r2FreeInstance(s193r2Instance* instance);

#endif /* s193r2_H */

