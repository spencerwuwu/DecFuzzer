#ifndef s6r2_H
#define s6r2_H

#include "w2c2_base.h"

typedef struct s6r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s6r2Instance;

void f0(s6r2Instance*);

void f1(s6r2Instance*);

U32 f2(s6r2Instance*);

void f3(s6r2Instance*,U32);

U32 f4(s6r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s6r2Instance*,U32,U32,U32,U32,U32);

void f6(s6r2Instance*,U32);

void f7(s6r2Instance*,U32,U32,U32);

void f8(s6r2Instance*,U32,U32,U32);

void s6r2____wasm_call_ctors(s6r2Instance*i);

void s6r2____wasm_apply_data_relocs(s6r2Instance*i);

U32 s6r2_func_1(s6r2Instance*i);

void s6r2_call_cb(s6r2Instance*i,U32 l0);

void s6r2Instantiate(s6r2Instance* instance, void* resolve(const char* module, const char* name));

void s6r2FreeInstance(s6r2Instance* instance);

#endif /* s6r2_H */

