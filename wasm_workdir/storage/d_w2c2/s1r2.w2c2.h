#ifndef s1r2_H
#define s1r2_H

#include "w2c2_base.h"

typedef struct s1r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s1r2Instance;

void f0(s1r2Instance*);

void f1(s1r2Instance*);

U32 f2(s1r2Instance*);

void f3(s1r2Instance*,U32);

U32 f4(s1r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s1r2Instance*,U32,U32,U32,U32,U32);

void f6(s1r2Instance*,U32);

void f7(s1r2Instance*,U32,U32,U32);

void f8(s1r2Instance*,U32,U32,U32);

void s1r2____wasm_call_ctors(s1r2Instance*i);

void s1r2____wasm_apply_data_relocs(s1r2Instance*i);

U32 s1r2_func_1(s1r2Instance*i);

void s1r2_call_cb(s1r2Instance*i,U32 l0);

void s1r2Instantiate(s1r2Instance* instance, void* resolve(const char* module, const char* name));

void s1r2FreeInstance(s1r2Instance* instance);

#endif /* s1r2_H */

