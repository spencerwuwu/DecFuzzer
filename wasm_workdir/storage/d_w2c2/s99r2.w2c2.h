#ifndef s99r2_H
#define s99r2_H

#include "w2c2_base.h"

typedef struct s99r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s99r2Instance;

void f0(s99r2Instance*);

void f1(s99r2Instance*);

U32 f2(s99r2Instance*);

void f3(s99r2Instance*,U32);

U32 f4(s99r2Instance*,U32,U32,U32,U32);

void f5(s99r2Instance*,U32,U32,U32,U32,U32);

void f6(s99r2Instance*,U32);

void f7(s99r2Instance*,U32,U32,U32);

void f8(s99r2Instance*,U32,U32,U32);

void s99r2____wasm_call_ctors(s99r2Instance*i);

void s99r2____wasm_apply_data_relocs(s99r2Instance*i);

U32 s99r2_func_1(s99r2Instance*i);

void s99r2_call_cb(s99r2Instance*i,U32 l0);

void s99r2Instantiate(s99r2Instance* instance, void* resolve(const char* module, const char* name));

void s99r2FreeInstance(s99r2Instance* instance);

#endif /* s99r2_H */

