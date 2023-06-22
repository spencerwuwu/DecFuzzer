#ifndef s903r2_H
#define s903r2_H

#include "w2c2_base.h"

typedef struct s903r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s903r2Instance;

void f0(s903r2Instance*);

void f1(s903r2Instance*);

U32 f2(s903r2Instance*);

void f3(s903r2Instance*,U32);

U32 f4(s903r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s903r2Instance*,U32,U32,U32,U32,U32);

void f6(s903r2Instance*,U32);

void f7(s903r2Instance*,U32,U32,U32);

void f8(s903r2Instance*,U32,U32,U32);

void s903r2____wasm_call_ctors(s903r2Instance*i);

void s903r2____wasm_apply_data_relocs(s903r2Instance*i);

U32 s903r2_func_1(s903r2Instance*i);

void s903r2_call_cb(s903r2Instance*i,U32 l0);

void s903r2Instantiate(s903r2Instance* instance, void* resolve(const char* module, const char* name));

void s903r2FreeInstance(s903r2Instance* instance);

#endif /* s903r2_H */

