#ifndef s180r2_H
#define s180r2_H

#include "w2c2_base.h"

typedef struct s180r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s180r2Instance;

void f0(s180r2Instance*);

void f1(s180r2Instance*);

U32 f2(s180r2Instance*);

void f3(s180r2Instance*,U32);

U32 f4(s180r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s180r2Instance*,U32,U32,U32,U32,U32);

void f6(s180r2Instance*,U32);

void f7(s180r2Instance*,U32,U32,U32);

void f8(s180r2Instance*,U32,U32,U32);

void s180r2____wasm_call_ctors(s180r2Instance*i);

void s180r2____wasm_apply_data_relocs(s180r2Instance*i);

U32 s180r2_func_1(s180r2Instance*i);

void s180r2_call_cb(s180r2Instance*i,U32 l0);

void s180r2Instantiate(s180r2Instance* instance, void* resolve(const char* module, const char* name));

void s180r2FreeInstance(s180r2Instance* instance);

#endif /* s180r2_H */

