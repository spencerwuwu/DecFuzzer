#ifndef s672r2_H
#define s672r2_H

#include "w2c2_base.h"

typedef struct s672r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s672r2Instance;

void f0(s672r2Instance*);

void f1(s672r2Instance*);

U32 f2(s672r2Instance*);

void f3(s672r2Instance*,U32);

U32 f4(s672r2Instance*,U32,U32,U32,U32);

void f5(s672r2Instance*,U32,U32,U32,U32,U32);

void f6(s672r2Instance*,U32);

void f7(s672r2Instance*,U32,U32,U32);

void f8(s672r2Instance*,U32,U32,U32);

void s672r2____wasm_call_ctors(s672r2Instance*i);

void s672r2____wasm_apply_data_relocs(s672r2Instance*i);

U32 s672r2_func_1(s672r2Instance*i);

void s672r2_call_cb(s672r2Instance*i,U32 l0);

void s672r2Instantiate(s672r2Instance* instance, void* resolve(const char* module, const char* name));

void s672r2FreeInstance(s672r2Instance* instance);

#endif /* s672r2_H */

