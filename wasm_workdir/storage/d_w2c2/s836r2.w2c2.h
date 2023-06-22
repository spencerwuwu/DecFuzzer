#ifndef s836r2_H
#define s836r2_H

#include "w2c2_base.h"

typedef struct s836r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s836r2Instance;

void f0(s836r2Instance*);

void f1(s836r2Instance*);

U32 f2(s836r2Instance*);

void f3(s836r2Instance*,U32);

U32 f4(s836r2Instance*,U32,U32,U32);

void f5(s836r2Instance*,U32,U32,U32,U32,U32);

void f6(s836r2Instance*,U32);

void f7(s836r2Instance*,U32,U32,U32);

void f8(s836r2Instance*,U32,U32,U32);

void s836r2____wasm_call_ctors(s836r2Instance*i);

void s836r2____wasm_apply_data_relocs(s836r2Instance*i);

U32 s836r2_func_1(s836r2Instance*i);

void s836r2_call_cb(s836r2Instance*i,U32 l0);

void s836r2Instantiate(s836r2Instance* instance, void* resolve(const char* module, const char* name));

void s836r2FreeInstance(s836r2Instance* instance);

#endif /* s836r2_H */

