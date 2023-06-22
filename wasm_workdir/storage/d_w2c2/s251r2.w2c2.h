#ifndef s251r2_H
#define s251r2_H

#include "w2c2_base.h"

typedef struct s251r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s251r2Instance;

void f0(s251r2Instance*);

void f1(s251r2Instance*);

U32 f2(s251r2Instance*);

void f3(s251r2Instance*,U32);

U32 f4(s251r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s251r2Instance*,U32,U32,U32,U32,U32);

void f6(s251r2Instance*,U32);

void f7(s251r2Instance*,U32,U32,U32);

void f8(s251r2Instance*,U32,U32,U32);

void s251r2____wasm_call_ctors(s251r2Instance*i);

void s251r2____wasm_apply_data_relocs(s251r2Instance*i);

U32 s251r2_func_1(s251r2Instance*i);

void s251r2_call_cb(s251r2Instance*i,U32 l0);

void s251r2Instantiate(s251r2Instance* instance, void* resolve(const char* module, const char* name));

void s251r2FreeInstance(s251r2Instance* instance);

#endif /* s251r2_H */

