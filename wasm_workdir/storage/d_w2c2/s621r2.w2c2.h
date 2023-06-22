#ifndef s621r2_H
#define s621r2_H

#include "w2c2_base.h"

typedef struct s621r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s621r2Instance;

void f0(s621r2Instance*);

void f1(s621r2Instance*);

U32 f2(s621r2Instance*);

void f3(s621r2Instance*,U32);

U32 f4(s621r2Instance*,U32,U32,U32);

void f5(s621r2Instance*,U32,U32,U32,U32,U32);

void f6(s621r2Instance*,U32);

void f7(s621r2Instance*,U32,U32,U32);

void f8(s621r2Instance*,U32,U32,U32);

void s621r2____wasm_call_ctors(s621r2Instance*i);

void s621r2____wasm_apply_data_relocs(s621r2Instance*i);

U32 s621r2_func_1(s621r2Instance*i);

void s621r2_call_cb(s621r2Instance*i,U32 l0);

void s621r2Instantiate(s621r2Instance* instance, void* resolve(const char* module, const char* name));

void s621r2FreeInstance(s621r2Instance* instance);

#endif /* s621r2_H */

