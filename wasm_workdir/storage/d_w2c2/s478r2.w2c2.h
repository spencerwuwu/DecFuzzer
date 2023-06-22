#ifndef s478r2_H
#define s478r2_H

#include "w2c2_base.h"

typedef struct s478r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s478r2Instance;

void f0(s478r2Instance*);

void f1(s478r2Instance*);

U32 f2(s478r2Instance*);

void f3(s478r2Instance*,U32);

U32 f4(s478r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s478r2Instance*,U32,U32,U32,U32,U32);

void f6(s478r2Instance*,U32);

void f7(s478r2Instance*,U32,U32,U32);

void f8(s478r2Instance*,U32,U32,U32);

void s478r2____wasm_call_ctors(s478r2Instance*i);

void s478r2____wasm_apply_data_relocs(s478r2Instance*i);

U32 s478r2_func_1(s478r2Instance*i);

void s478r2_call_cb(s478r2Instance*i,U32 l0);

void s478r2Instantiate(s478r2Instance* instance, void* resolve(const char* module, const char* name));

void s478r2FreeInstance(s478r2Instance* instance);

#endif /* s478r2_H */

