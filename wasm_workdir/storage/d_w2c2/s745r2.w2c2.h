#ifndef s745r2_H
#define s745r2_H

#include "w2c2_base.h"

typedef struct s745r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s745r2Instance;

void f0(s745r2Instance*);

void f1(s745r2Instance*);

U32 f2(s745r2Instance*);

void f3(s745r2Instance*,U32);

U32 f4(s745r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s745r2Instance*,U32,U32,U32,U32,U32);

void f6(s745r2Instance*,U32);

void f7(s745r2Instance*,U32,U32,U32);

void f8(s745r2Instance*,U32,U32,U32);

void s745r2____wasm_call_ctors(s745r2Instance*i);

void s745r2____wasm_apply_data_relocs(s745r2Instance*i);

U32 s745r2_func_1(s745r2Instance*i);

void s745r2_call_cb(s745r2Instance*i,U32 l0);

void s745r2Instantiate(s745r2Instance* instance, void* resolve(const char* module, const char* name));

void s745r2FreeInstance(s745r2Instance* instance);

#endif /* s745r2_H */

