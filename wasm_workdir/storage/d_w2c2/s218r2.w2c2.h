#ifndef s218r2_H
#define s218r2_H

#include "w2c2_base.h"

typedef struct s218r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s218r2Instance;

void f0(s218r2Instance*);

void f1(s218r2Instance*);

U32 f2(s218r2Instance*);

void f3(s218r2Instance*,U32);

U32 f4(s218r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s218r2Instance*,U32,U32,U32,U32,U32);

void f6(s218r2Instance*,U32);

void f7(s218r2Instance*,U32,U32,U32);

void f8(s218r2Instance*,U32,U32,U32);

void s218r2____wasm_call_ctors(s218r2Instance*i);

void s218r2____wasm_apply_data_relocs(s218r2Instance*i);

U32 s218r2_func_1(s218r2Instance*i);

void s218r2_call_cb(s218r2Instance*i,U32 l0);

void s218r2Instantiate(s218r2Instance* instance, void* resolve(const char* module, const char* name));

void s218r2FreeInstance(s218r2Instance* instance);

#endif /* s218r2_H */

