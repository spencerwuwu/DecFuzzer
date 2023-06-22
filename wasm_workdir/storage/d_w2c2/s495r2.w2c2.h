#ifndef s495r2_H
#define s495r2_H

#include "w2c2_base.h"

typedef struct s495r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s495r2Instance;

void f0(s495r2Instance*);

void f1(s495r2Instance*);

U32 f2(s495r2Instance*);

void f3(s495r2Instance*,U32);

U32 f4(s495r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s495r2Instance*,U32,U32,U32,U32,U32);

void f6(s495r2Instance*,U32);

void f7(s495r2Instance*,U32,U32,U32);

void f8(s495r2Instance*,U32,U32,U32);

void s495r2____wasm_call_ctors(s495r2Instance*i);

void s495r2____wasm_apply_data_relocs(s495r2Instance*i);

U32 s495r2_func_1(s495r2Instance*i);

void s495r2_call_cb(s495r2Instance*i,U32 l0);

void s495r2Instantiate(s495r2Instance* instance, void* resolve(const char* module, const char* name));

void s495r2FreeInstance(s495r2Instance* instance);

#endif /* s495r2_H */

