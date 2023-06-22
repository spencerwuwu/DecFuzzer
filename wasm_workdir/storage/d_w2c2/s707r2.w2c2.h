#ifndef s707r2_H
#define s707r2_H

#include "w2c2_base.h"

typedef struct s707r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s707r2Instance;

void f0(s707r2Instance*);

void f1(s707r2Instance*);

U32 f2(s707r2Instance*);

void f3(s707r2Instance*,U32);

U32 f4(s707r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s707r2Instance*,U32,U32,U32,U32,U32);

void f6(s707r2Instance*,U32);

void f7(s707r2Instance*,U32,U32,U32);

void f8(s707r2Instance*,U32,U32,U32);

void s707r2____wasm_call_ctors(s707r2Instance*i);

void s707r2____wasm_apply_data_relocs(s707r2Instance*i);

U32 s707r2_func_1(s707r2Instance*i);

void s707r2_call_cb(s707r2Instance*i,U32 l0);

void s707r2Instantiate(s707r2Instance* instance, void* resolve(const char* module, const char* name));

void s707r2FreeInstance(s707r2Instance* instance);

#endif /* s707r2_H */

