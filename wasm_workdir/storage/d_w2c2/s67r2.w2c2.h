#ifndef s67r2_H
#define s67r2_H

#include "w2c2_base.h"

typedef struct s67r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s67r2Instance;

void f0(s67r2Instance*);

void f1(s67r2Instance*);

U32 f2(s67r2Instance*);

void f3(s67r2Instance*,U32);

U32 f4(s67r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s67r2Instance*,U32,U32,U32,U32,U32);

void f6(s67r2Instance*,U32);

void f7(s67r2Instance*,U32,U32,U32);

void f8(s67r2Instance*,U32,U32,U32);

void s67r2____wasm_call_ctors(s67r2Instance*i);

void s67r2____wasm_apply_data_relocs(s67r2Instance*i);

U32 s67r2_func_1(s67r2Instance*i);

void s67r2_call_cb(s67r2Instance*i,U32 l0);

void s67r2Instantiate(s67r2Instance* instance, void* resolve(const char* module, const char* name));

void s67r2FreeInstance(s67r2Instance* instance);

#endif /* s67r2_H */

