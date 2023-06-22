#ifndef s861r2_H
#define s861r2_H

#include "w2c2_base.h"

typedef struct s861r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s861r2Instance;

void f0(s861r2Instance*);

void f1(s861r2Instance*);

U32 f2(s861r2Instance*);

void f3(s861r2Instance*,U32);

U32 f4(s861r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s861r2Instance*,U32,U32,U32,U32,U32);

void f6(s861r2Instance*,U32);

void f7(s861r2Instance*,U32,U32,U32);

void f8(s861r2Instance*,U32,U32,U32);

void s861r2____wasm_call_ctors(s861r2Instance*i);

void s861r2____wasm_apply_data_relocs(s861r2Instance*i);

U32 s861r2_func_1(s861r2Instance*i);

void s861r2_call_cb(s861r2Instance*i,U32 l0);

void s861r2Instantiate(s861r2Instance* instance, void* resolve(const char* module, const char* name));

void s861r2FreeInstance(s861r2Instance* instance);

#endif /* s861r2_H */

