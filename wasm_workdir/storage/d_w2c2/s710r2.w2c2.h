#ifndef s710r2_H
#define s710r2_H

#include "w2c2_base.h"

typedef struct s710r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s710r2Instance;

void f0(s710r2Instance*);

void f1(s710r2Instance*);

U32 f2(s710r2Instance*);

void f3(s710r2Instance*,U32);

U32 f4(s710r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s710r2Instance*,U32,U32,U32,U32,U32);

void f6(s710r2Instance*,U32);

void f7(s710r2Instance*,U32,U32,U32);

void f8(s710r2Instance*,U32,U32,U32);

void s710r2____wasm_call_ctors(s710r2Instance*i);

void s710r2____wasm_apply_data_relocs(s710r2Instance*i);

U32 s710r2_func_1(s710r2Instance*i);

void s710r2_call_cb(s710r2Instance*i,U32 l0);

void s710r2Instantiate(s710r2Instance* instance, void* resolve(const char* module, const char* name));

void s710r2FreeInstance(s710r2Instance* instance);

#endif /* s710r2_H */

