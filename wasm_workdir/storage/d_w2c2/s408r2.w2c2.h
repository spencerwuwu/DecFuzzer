#ifndef s408r2_H
#define s408r2_H

#include "w2c2_base.h"

typedef struct s408r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s408r2Instance;

void f0(s408r2Instance*);

void f1(s408r2Instance*);

U32 f2(s408r2Instance*);

void f3(s408r2Instance*,U32);

U32 f4(s408r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s408r2Instance*,U32,U32,U32,U32,U32);

void f6(s408r2Instance*,U32);

void f7(s408r2Instance*,U32,U32,U32);

void f8(s408r2Instance*,U32,U32,U32);

void s408r2____wasm_call_ctors(s408r2Instance*i);

void s408r2____wasm_apply_data_relocs(s408r2Instance*i);

U32 s408r2_func_1(s408r2Instance*i);

void s408r2_call_cb(s408r2Instance*i,U32 l0);

void s408r2Instantiate(s408r2Instance* instance, void* resolve(const char* module, const char* name));

void s408r2FreeInstance(s408r2Instance* instance);

#endif /* s408r2_H */

