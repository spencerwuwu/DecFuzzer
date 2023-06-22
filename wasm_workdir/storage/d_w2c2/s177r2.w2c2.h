#ifndef s177r2_H
#define s177r2_H

#include "w2c2_base.h"

typedef struct s177r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s177r2Instance;

void f0(s177r2Instance*);

void f1(s177r2Instance*);

U32 f2(s177r2Instance*);

void f3(s177r2Instance*,U32);

U32 f4(s177r2Instance*,U32,U32,U32,U32);

void f5(s177r2Instance*,U32,U32,U32,U32,U32);

void f6(s177r2Instance*,U32);

void f7(s177r2Instance*,U32,U32,U32);

void f8(s177r2Instance*,U32,U32,U32);

void s177r2____wasm_call_ctors(s177r2Instance*i);

void s177r2____wasm_apply_data_relocs(s177r2Instance*i);

U32 s177r2_func_1(s177r2Instance*i);

void s177r2_call_cb(s177r2Instance*i,U32 l0);

void s177r2Instantiate(s177r2Instance* instance, void* resolve(const char* module, const char* name));

void s177r2FreeInstance(s177r2Instance* instance);

#endif /* s177r2_H */

