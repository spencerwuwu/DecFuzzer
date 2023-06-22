#ifndef s354r2_H
#define s354r2_H

#include "w2c2_base.h"

typedef struct s354r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s354r2Instance;

void f0(s354r2Instance*);

void f1(s354r2Instance*);

U32 f2(s354r2Instance*);

void f3(s354r2Instance*,U32);

U32 f4(s354r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s354r2Instance*,U32,U32,U32,U32,U32);

void f6(s354r2Instance*,U32);

void f7(s354r2Instance*,U32,U32,U32);

void f8(s354r2Instance*,U32,U32,U32);

void s354r2____wasm_call_ctors(s354r2Instance*i);

void s354r2____wasm_apply_data_relocs(s354r2Instance*i);

U32 s354r2_func_1(s354r2Instance*i);

void s354r2_call_cb(s354r2Instance*i,U32 l0);

void s354r2Instantiate(s354r2Instance* instance, void* resolve(const char* module, const char* name));

void s354r2FreeInstance(s354r2Instance* instance);

#endif /* s354r2_H */

