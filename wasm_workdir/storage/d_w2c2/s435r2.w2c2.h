#ifndef s435r2_H
#define s435r2_H

#include "w2c2_base.h"

typedef struct s435r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s435r2Instance;

void f0(s435r2Instance*);

void f1(s435r2Instance*);

U32 f2(s435r2Instance*);

void f3(s435r2Instance*,U32);

U32 f4(s435r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s435r2Instance*,U32,U32,U32,U32,U32);

void f6(s435r2Instance*,U32);

void f7(s435r2Instance*,U32,U32,U32);

void f8(s435r2Instance*,U32,U32,U32);

void s435r2____wasm_call_ctors(s435r2Instance*i);

void s435r2____wasm_apply_data_relocs(s435r2Instance*i);

U32 s435r2_func_1(s435r2Instance*i);

void s435r2_call_cb(s435r2Instance*i,U32 l0);

void s435r2Instantiate(s435r2Instance* instance, void* resolve(const char* module, const char* name));

void s435r2FreeInstance(s435r2Instance* instance);

#endif /* s435r2_H */

