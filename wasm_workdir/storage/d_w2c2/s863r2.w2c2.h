#ifndef s863r2_H
#define s863r2_H

#include "w2c2_base.h"

typedef struct s863r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s863r2Instance;

void f0(s863r2Instance*);

void f1(s863r2Instance*);

U32 f2(s863r2Instance*);

void f3(s863r2Instance*,U32);

U32 f4(s863r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s863r2Instance*,U32,U32,U32,U32,U32);

void f6(s863r2Instance*,U32);

void f7(s863r2Instance*,U32,U32,U32);

void f8(s863r2Instance*,U32,U32,U32);

void s863r2____wasm_call_ctors(s863r2Instance*i);

void s863r2____wasm_apply_data_relocs(s863r2Instance*i);

U32 s863r2_func_1(s863r2Instance*i);

void s863r2_call_cb(s863r2Instance*i,U32 l0);

void s863r2Instantiate(s863r2Instance* instance, void* resolve(const char* module, const char* name));

void s863r2FreeInstance(s863r2Instance* instance);

#endif /* s863r2_H */

