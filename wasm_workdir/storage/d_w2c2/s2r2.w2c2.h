#ifndef s2r2_H
#define s2r2_H

#include "w2c2_base.h"

typedef struct s2r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s2r2Instance;

void f0(s2r2Instance*);

void f1(s2r2Instance*);

U32 f2(s2r2Instance*);

void f3(s2r2Instance*,U32);

U32 f4(s2r2Instance*,U32,U32,U32);

void f5(s2r2Instance*,U32,U32,U32,U32,U32);

void f6(s2r2Instance*,U32);

void f7(s2r2Instance*,U32,U32,U32);

void f8(s2r2Instance*,U32,U32,U32);

void s2r2____wasm_call_ctors(s2r2Instance*i);

void s2r2____wasm_apply_data_relocs(s2r2Instance*i);

U32 s2r2_func_1(s2r2Instance*i);

void s2r2_call_cb(s2r2Instance*i,U32 l0);

void s2r2Instantiate(s2r2Instance* instance, void* resolve(const char* module, const char* name));

void s2r2FreeInstance(s2r2Instance* instance);

#endif /* s2r2_H */

