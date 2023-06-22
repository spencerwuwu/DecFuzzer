#ifndef s449r2_H
#define s449r2_H

#include "w2c2_base.h"

typedef struct s449r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s449r2Instance;

void f0(s449r2Instance*);

void f1(s449r2Instance*);

U32 f2(s449r2Instance*);

void f3(s449r2Instance*,U32);

U32 f4(s449r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s449r2Instance*,U32,U32,U32,U32,U32);

void f6(s449r2Instance*,U32);

void f7(s449r2Instance*,U32,U32,U32);

void f8(s449r2Instance*,U32,U32,U32);

void s449r2____wasm_call_ctors(s449r2Instance*i);

void s449r2____wasm_apply_data_relocs(s449r2Instance*i);

U32 s449r2_func_1(s449r2Instance*i);

void s449r2_call_cb(s449r2Instance*i,U32 l0);

void s449r2Instantiate(s449r2Instance* instance, void* resolve(const char* module, const char* name));

void s449r2FreeInstance(s449r2Instance* instance);

#endif /* s449r2_H */

