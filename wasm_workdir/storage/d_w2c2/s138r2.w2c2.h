#ifndef s138r2_H
#define s138r2_H

#include "w2c2_base.h"

typedef struct s138r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s138r2Instance;

void f0(s138r2Instance*);

void f1(s138r2Instance*);

U32 f2(s138r2Instance*);

void f3(s138r2Instance*,U32);

U32 f4(s138r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s138r2Instance*,U32,U32,U32,U32,U32);

void f6(s138r2Instance*,U32);

void f7(s138r2Instance*,U32,U32,U32);

void f8(s138r2Instance*,U32,U32,U32);

void s138r2____wasm_call_ctors(s138r2Instance*i);

void s138r2____wasm_apply_data_relocs(s138r2Instance*i);

U32 s138r2_func_1(s138r2Instance*i);

void s138r2_call_cb(s138r2Instance*i,U32 l0);

void s138r2Instantiate(s138r2Instance* instance, void* resolve(const char* module, const char* name));

void s138r2FreeInstance(s138r2Instance* instance);

#endif /* s138r2_H */

