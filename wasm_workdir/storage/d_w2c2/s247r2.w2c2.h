#ifndef s247r2_H
#define s247r2_H

#include "w2c2_base.h"

typedef struct s247r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s247r2Instance;

void f0(s247r2Instance*);

void f1(s247r2Instance*);

U32 f2(s247r2Instance*);

void f3(s247r2Instance*,U32);

void f4(s247r2Instance*,U32);

void s247r2____wasm_call_ctors(s247r2Instance*i);

void s247r2____wasm_apply_data_relocs(s247r2Instance*i);

U32 s247r2_func_1(s247r2Instance*i);

void s247r2_call_cb(s247r2Instance*i,U32 l0);

void s247r2Instantiate(s247r2Instance* instance, void* resolve(const char* module, const char* name));

void s247r2FreeInstance(s247r2Instance* instance);

#endif /* s247r2_H */

