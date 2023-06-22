#ifndef s534r2_H
#define s534r2_H

#include "w2c2_base.h"

typedef struct s534r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s534r2Instance;

void f0(s534r2Instance*);

void f1(s534r2Instance*);

U32 f2(s534r2Instance*);

void f3(s534r2Instance*,U32);

U32 f4(s534r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s534r2Instance*,U32,U32,U32,U32,U32);

void f6(s534r2Instance*,U32);

void f7(s534r2Instance*,U32,U32,U32);

void f8(s534r2Instance*,U32,U32,U32);

void s534r2____wasm_call_ctors(s534r2Instance*i);

void s534r2____wasm_apply_data_relocs(s534r2Instance*i);

U32 s534r2_func_1(s534r2Instance*i);

void s534r2_call_cb(s534r2Instance*i,U32 l0);

void s534r2Instantiate(s534r2Instance* instance, void* resolve(const char* module, const char* name));

void s534r2FreeInstance(s534r2Instance* instance);

#endif /* s534r2_H */

